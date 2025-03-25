// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"	// 무조건 맨 마지막 헤더여야 함

UCLASS()
class PORTFOLIO1_API AMyCharacter : public ACharacter
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

	// Called to "BIND" functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void AttackEnd(class UAnimMontage* Montage, bool bInterrupted);

	void Attack_Hit();
	void DeadEvent();

	float My_Vertical() { return _vertical; }
	float My_Horizontal() { return _horizontal; }

	UFUNCTION()
	void TestDelegate1();
	UFUNCTION()
	int32 TestDelegate2(int32 a, int32 b);
	UFUNCTION()
	void TestDelegate3();

	void AddHp(float amount);

	virtual float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);

	bool IsDead();

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stat", meta = (AllowPrivateAccess = "true"))
	class UMyStatComponent* _statComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	bool _isAttack;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* _hpBarWidget;

	UPROPERTY()
	class UMyAnimInstance* _animInstance;

	int32 _curAttackSection = 1;	// 콤보 공격 시스템 1 -> 2 -> 3

	float _vertical = 0.0f;
	float _horizontal = 0.0f;
};
