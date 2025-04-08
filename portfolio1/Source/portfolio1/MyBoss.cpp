// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBoss.h"
#include "MyPlayer.h"
#include "MyEnemy.h"
#include "Components/CapsuleComponent.h"
#include "MyCharacter.h"
#include "MyStatComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "MyAIController.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Engine/DamageEvents.h"
#include "Engine/OverlapResult.h"

AMyBoss::AMyBoss()
{
	PrimaryActorTick.bCanEverTick = true;

	// 탐지용 캡슐 컴포넌트 생성
	_detectCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DetectCapsule"));
	_detectCapsule->SetupAttachment(RootComponent);
	_detectCapsule->SetCapsuleHalfHeight(300.0f);
	_detectCapsule->SetCapsuleRadius(300.0f);
	_detectCapsule->SetCollisionProfileName(TEXT("Trigger"));
	_detectCapsule->OnComponentBeginOverlap.AddDynamic(this, &AMyBoss::OnPlayerDetected);
}

void AMyBoss::BeginPlay()
{
	Super::BeginPlay();

	SetNewRandomTarget();

	// 공격 루프 시작
	GetWorldTimerManager().SetTimer(_attackTimerHandle, this, &AMyBoss::TryAttackPlayer, _attackInterval, true);

	GetWorldTimerManager().SetTimer(
		SpawnTimerHandle,
		this,
		&AMyBoss::SpawnEnemy,
		SpawnInterval,
		true // 반복 호출
	);
}

void AMyBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 현재 위치와 목표 방향 계산
	FVector currentLocation = GetActorLocation();
	FVector direction = (_targetLocation - currentLocation);
	direction.Z = 0.0f; // 수평 방향으로만 이동
	direction.Normalize();

	// 이동
	FVector newLocation = currentLocation + direction * _moveSpeed * DeltaTime;

	// 라인트레이스로 지면 높이 계산
	FVector TraceStart = newLocation + FVector(0, 0, 500.0f);
	FVector TraceEnd = newLocation - FVector(0, 0, 1000.0f);
	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	if (GetWorld()->LineTraceSingleByChannel(hitResult, TraceStart, TraceEnd, ECC_Visibility, params))
	{
		// 지면 위 10.f에 유지
		newLocation.Z = hitResult.Location.Z + 10.0f;
	}
	else
	{
		// 실패 시 기존 높이 유지
		newLocation.Z = currentLocation.Z;
	}

	// 이동 적용
	SetActorLocation(newLocation);

	// 목표 지점 도달 시 새로운 위치 설정
	float horizontalDist = FVector::Dist2D(currentLocation, _targetLocation); // XY 평면 거리
	if (horizontalDist < _acceptanceRadius)
	{
		SetNewRandomTarget();
	}

	DetectPlayer();
}

void AMyBoss::DetectPlayer()
{
	if (IsDead())
		return;

	FVector pos = GetActorLocation();
	float sphereRadius = 300.0f;

	TArray<FOverlapResult> overlapResults;
	FCollisionQueryParams qParams(NAME_None, false, this);

	bool result = GetWorld()->OverlapMultiByChannel(
		overlapResults,
		pos,
		FQuat::Identity,
		ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(sphereRadius),
		qParams
	);

	if (result)
	{
		for (auto& overlapResult : overlapResults)
		{
			AMyPlayer* player = Cast<AMyPlayer>(overlapResult.GetActor());
			if (player && player->IsValidLowLevel())
			{
				_targetPlayer = player; //  대상 설정
				DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Red, false, 0.3f);

				FRotator rot = (player->GetActorLocation() - GetActorLocation()).Rotation();
				SetActorRotation(FMath::RInterpTo(GetActorRotation(), rot, GetWorld()->DeltaTimeSeconds, 2.0f));
				return;
			}
		}
	}

	// 플레이어 못 찾았을 경우
	_targetPlayer = nullptr;
	DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Green, false, 0.3f);
}

bool AMyBoss::IsDead()
{
	if (_statComponent == nullptr)
		return false;

	return _statComponent->IsDead();
}

void AMyBoss::SpawnEnemy()
{
	if (CurrentSpawnCount >= MaxSpawnCount)
	{
		UE_LOG(LogTemp, Warning, TEXT("Max ENemy"));
		return;
	}

	if (EnemyToSpawn == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("Boss::SpawnEnemy - EnemyToSpawn이 설정되지 않았습니다!"));
		return;
	}

	FVector forwardVector = GetActorForwardVector();
	FVector spawnLocation = GetActorLocation() + forwardVector * 1500.0f; //  보스 앞쪽 500유닛 지점
	FRotator spawnRotation = GetActorRotation();

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;

	AMyEnemy* newEnemy = GetWorld()->SpawnActor<AMyEnemy>(EnemyToSpawn, spawnLocation, spawnRotation, spawnParams);

	if (newEnemy)
	{
		++CurrentSpawnCount;
		UE_LOG(LogTemp, Warning, TEXT("boss called enemy: %d"), CurrentSpawnCount);

		// 죽었을 때 카운트 감소
		newEnemy->OnDestroyed.AddDynamic(this, &AMyBoss::OnSpawnedEnemyDestroyed);

		// AIController를 가져와서 BehaviorTree 시작
		AAIController* ai = Cast<AAIController>(newEnemy->GetController());
		if (ai)
		{
			ai->RunBehaviorTree(newEnemy->BehaviorTreeAsset); // BehaviorTreeAsset은 BP_MyEnemy에 UPROPERTY로 연결된 변수여야 함!
		}
	}
}

void AMyBoss::OnSpawnedEnemyDestroyed(AActor* DestroyedActor)
{
	--CurrentSpawnCount;
	CurrentSpawnCount = FMath::Clamp(CurrentSpawnCount, 0, MaxSpawnCount);

	UE_LOG(LogTemp, Warning, TEXT("remain enemy: %d"), CurrentSpawnCount);
}

void AMyBoss::SetNewRandomTarget()
{
	FVector origin = GetActorLocation();
	float radius = 500.0f;
	FVector randomOffset = FVector(FMath::RandRange(-radius, radius), FMath::RandRange(-radius, radius), 0);
	_targetLocation = origin + randomOffset;
}

void AMyBoss::TryAttackPlayer()
{
	if (_targetPlayer == nullptr || _isAttacking)
		return;

	Attack_Hit(); // 바로 공격 시도
	_isAttacking = true;

	// 공격 후 딜레이 타이머로 다시 가능하게
	FTimerHandle delayHandle;
	GetWorldTimerManager().SetTimer(delayHandle, [this]()
		{
			_isAttacking = false;
		}, 1.0f, false);
}

void AMyBoss::Attack_Hit()
{
	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	FVector forward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector(0, 0, 1), forward);

	FVector start = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, _attackHeightOffset);
	FVector end = start; // 시작과 끝이 같은 위치로 정지한 캡슐
	FVector center = start;

	bool bResult = GetWorld()->SweepSingleByChannel(
		OUT hitResult,
		start,
		end,
		quat,
		ECC_GameTraceChannel2,
		FCollisionShape::MakeCapsule(_attackRadius, _attackRange * 0.5f),
		params
	);

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		drawColor = FColor::Red;
		AMyCharacter* victim = Cast<AMyCharacter>(hitResult.GetActor());
		if (victim)
		{
			FDamageEvent damageEvent;
			victim->TakeDamage(_statComponent->GetAtk(), damageEvent, GetController(), this);
		}
	}

	DrawDebugCapsule(GetWorld(), center, _attackRange * 0.5f, _attackRadius, quat, drawColor, false, 1.0f);
}

void AMyBoss::OnPlayerDetected(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	AMyCharacter* player = Cast<AMyCharacter>(OtherActor);
	if (player)
	{
		_targetPlayer = player;
	}
}
