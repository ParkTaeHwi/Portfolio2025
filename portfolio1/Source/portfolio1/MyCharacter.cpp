// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "MyAnimInstance.h"
#include "MyEnemy.h"

#include "Engine/DamageEvents.h"

#include "MyStatComponent.h"
#include "Components/WidgetComponent.h"
#include "MyPlayerController.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

	_statComponent = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	_animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (_animInstance == nullptr)
		UE_LOG(LogTemp, Error, TEXT("AnimInstance did not Set"));

	_animInstance->_attackStart.BindUObject(this, &AMyCharacter::TestDelegate1);
	_animInstance->_attackStart2.BindUObject(this, &AMyCharacter::TestDelegate2);
	_animInstance->_attackStart3.AddDynamic(this, &AMyCharacter::TestDelegate3);
	_animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::AttackEnd);
	_animInstance->_hitEvent.AddUObject(this, &AMyCharacter::Attack_Hit);
	_animInstance->_deadEvent.AddUObject(this, &AMyCharacter::DeadEvent);
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMyCharacter::TestDelegate1()
{
	//UE_LOG(LogTemp, Log, TEXT("Attack Start Delegate Test1"));
}

int32 AMyCharacter::TestDelegate2(int32 a, int32 b)
{
	//(LogTemp, Log, TEXT("Attack Start Delegate Test, %d %d"), a, b);

	return -1;
}

void AMyCharacter::TestDelegate3()
{
	//UE_LOG(LogTemp, Log, TEXT("Attack Start Delegate Test3"));
}

void AMyCharacter::AttackEnd(UAnimMontage* Montage, bool bInterrupted)
{
	_isAttack = false;
}

void AMyCharacter::Attack_Hit()
{
	// 이 함수를 호출한 객체의 이름
	// auto name = GetName();
	// UE_LOG(LogTemp, Error, TEXT("Attacker : %s"),*name);

	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	//float attackRange = 1000.0f;	// 캡슐 길이
	float attackRadius = 100.0f;	    // 캡슐 굵기
	float heightOffset = 50.0f;		// 캡슐 높이
	// 캡슐
	// 1. 회전 - 쿼터니언을 앞방향으로
	// 2. 캡슐의 radius, halfheight
	// 3. 충돌처리와 DebugDraw
	FVector forward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector(0, 0, 1), forward);

	
	FVector center = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, heightOffset);
	FVector start = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, heightOffset);	// 충돌체의 시작중심
	FVector end = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, heightOffset);	    // 충돌체의 끝중심

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		OUT hitResult,
		start,
		end,
		quat,	// 쿼터니언
		ECC_GameTraceChannel2,
		FCollisionShape::MakeCapsule(attackRadius, _attackRange * 0.5f),
		params
	);

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		drawColor = FColor::Red;
		AMyCharacter* victim = Cast<AMyCharacter>(hitResult.GetActor());
		if (victim)
		{
			FDamageEvent damageEvent = FDamageEvent();
			victim->TakeDamage(_statComponent->GetAtk(), damageEvent, GetController(), this);
		}
	}

	//충돌체그리기
	DrawDebugCapsule(GetWorld(), center, _attackRange * 0.5f, attackRadius, quat, drawColor, false, 1.0f);
	UE_LOG(LogTemp, Warning, TEXT("Attack_Hit called"));
}

void AMyCharacter::DeadEvent()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	//Controller->UnPossess();
	if (Controller)
	{
		Controller->UnPossess();
	}

	UE_LOG(LogTemp, Warning, TEXT("Destroy() called!"));
	this->Destroy();
}

void AMyCharacter::AddHp(float amount)
{
	_statComponent->AddCurHp(amount);
}

float AMyCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	//if (bIsDead) return 0.0f;
	
	_statComponent->AddCurHp(-Damage);

	auto attackerController = Cast<AMyPlayerController>(EventInstigator);
	if (attackerController)
	{
		if (IsDead())
		{
			//bIsDead = true;
			
			UE_LOG(LogTemp, Error, TEXT("MyCharacter.cpp,TakeDamage->Dead by Player"));

			//  Enemy일 경우 Die() 호출
			AMyEnemy* enemy = Cast<AMyEnemy>(this);
			if (enemy)
			{
				enemy->Die(); // 
			}
			else
			{
				DeadEvent();
			}
		}
	}

	return Damage;
}

bool AMyCharacter::IsDead()
{
	return _statComponent->IsDead();
}



