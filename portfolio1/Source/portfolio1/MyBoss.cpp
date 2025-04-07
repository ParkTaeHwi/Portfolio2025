// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBoss.h"
#include "Components/CapsuleComponent.h"
#include "MyCharacter.h"
#include "MyStatComponent.h"
#include "DrawDebugHelpers.h"
#include "TimerManager.h"
#include "Engine/DamageEvents.h"

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
}

void AMyBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// 부유 이동
	FVector currentLocation = GetActorLocation();
	FVector direction = (_targetLocation - currentLocation).GetSafeNormal();
	FVector newLocation = currentLocation + direction * _moveSpeed * DeltaTime;

	// 라인트레이스로 지면 높이 찾기
	FVector TraceStart = newLocation + FVector(0, 0, 500.0f);
	FVector TraceEnd = newLocation - FVector(0, 0, 1000.0f);
	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	if (GetWorld()->LineTraceSingleByChannel(hitResult, TraceStart, TraceEnd, ECC_Visibility, params))
	{
		// 라인트레이스 성공 시 지면보다 약간 위로 띄움
		newLocation.Z = hitResult.Location.Z + 10.0f; // 
	}
	else
	{
		// 실패 시 현재 높이 유지
		newLocation.Z = currentLocation.Z; // 
	}

	SetActorLocation(newLocation);

	// 목표 지점 도달 시 재설정
	if (FVector::Dist(currentLocation, _targetLocation) < _acceptanceRadius)
	{
		SetNewRandomTarget();
	}
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
