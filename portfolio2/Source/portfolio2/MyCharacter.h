// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class PORTFOLIO2_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void AttackEnd(class UAnimMontage* Montage, bool bInterrupted);

	void Attack_Hit();
	void DeadEvent();

	float My_Vertical() { return _vertical; }
	float My_Horizontal() { return _horizontal; }
	float AttackRange() { return _attackRange; }

	bool IsDead();
	bool IsAttacking() { return _isAttack; }

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat", meta = (AllowPrivateAccess = "true"))
	class UMyStatComponent* _statComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	bool _isAttack;

	//UPROPERTY()
	//class UMyAnimInstance* _animInstance;

	int32 _curAttackSection = 1;

	float _vertical = 0.0f;
	float _horizontal = 0.0f;
	UPROPERTY(EditAnywhere)
	float _attackRange = 1000.0f;
};
