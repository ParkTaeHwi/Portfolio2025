// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MyAnimInstance.generated.h"

/**
 * 
 */

DECLARE_DELEGATE(AnimDelegateTest);	//void(void)
DECLARE_MULTICAST_DELEGATE(AttackHitEvent);
DECLARE_MULTICAST_DELEGATE(DeadEvent);

UCLASS()
class PORTFOLIO2_API UMyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UMyAnimInstance();

	virtual void NativeUpdateAnimation(float DelatSeconds);	// 애니메이션 지속적 갱신

	UFUNCTION()
	void PlayAnimMontage();

	UFUNCTION()
	void AnimNotify_Attack_Hit();

	UFUNCTION()
	void AnimNotify_Attack_Dead();

	AnimDelegateTest _attackStart;
	//AnimDelegateTest2 _attackStart2;
	//FAnimDelegateTest3 _attackStart3;
	AttackHitEvent	_hitEvent;
	DeadEvent _deadEvent;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pawn", meta = (AllowPrivateAccess = "true"))
	void JumpToSection(int32 sectionIndex);

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pawn", meta = (AllowPrivateAccess = "true"))
	float _speed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Pawn", meta = (AllowPrivateAccess = "true"))
	bool _isFalling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AniMontage", meta = (AllowPrivateAccess = "true"))
	float _vertical;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AniMontage", meta = (AllowPrivateAccess = "true"))
	float _horizontal;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AniMontage", meta = (AllowPrivateAccess = "true"))
	class UAnimMontage* _animMontage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AniMontage", meta = (AllowPrivateAccess = "true"))
	bool _isDead;
};
