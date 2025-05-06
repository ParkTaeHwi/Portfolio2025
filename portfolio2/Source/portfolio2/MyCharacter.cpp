// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "Engine/DamageEvents.h"
#include "MyStatComponent.h"

//#include "MyStatComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

	_statComponent = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
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

void AMyCharacter::AttackEnd(UAnimMontage* Montage, bool bInterrupted)
{
	_isAttack = false;
}

void AMyCharacter::Attack_Hit()
{
	// ÀÌ ÇÔ¼ö¸¦ È£ÃâÇÑ °´Ã¼ÀÇ ÀÌ¸§
	// auto name = GetName();
	// UE_LOG(LogTemp, Error, TEXT("Attacker : %s"),*name);

	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	//float attackRange = 1000.0f;	// Ä¸½¶ ±æÀÌ
	float attackRadius = 100.0f;	    // Ä¸½¶ ±½±â
	float heightOffset = 50.0f;		// Ä¸½¶ ³ôÀÌ
	// Ä¸½¶
	// 1. È¸Àü - ÄõÅÍ´Ï¾ðÀ» ¾Õ¹æÇâÀ¸·Î
	// 2. Ä¸½¶ÀÇ radius, halfheight
	// 3. Ãæµ¹Ã³¸®¿Í DebugDraw
	FVector forward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector(0, 0, 1), forward);


	FVector center = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, heightOffset);
	FVector start = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, heightOffset);	// Ãæµ¹Ã¼ÀÇ ½ÃÀÛÁß½É
	FVector end = GetActorLocation() + forward * _attackRange * 0.5f + FVector(0, 0, heightOffset);	    // Ãæµ¹Ã¼ÀÇ ³¡Áß½É

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		OUT hitResult,
		start,
		end,
		quat,	// ÄõÅÍ´Ï¾ð
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

	//Ãæµ¹Ã¼±×¸®±â
	DrawDebugCapsule(GetWorld(), center, _attackRange * 0.5f, attackRadius, quat, drawColor, false, 1.0f);
}

void AMyCharacter::DeadEvent()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
	if (Controller)
	{
		Controller->UnPossess();
	}

	UE_LOG(LogTemp, Warning, TEXT("Destroy() called!"));
	this->Destroy();
}

bool AMyCharacter::IsDead()
{
	return _statComponent->IsDead();
}

