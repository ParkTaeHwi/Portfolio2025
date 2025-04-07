// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBossAnim.h"
#include "MyBoss.h"
#include "GameFramework/CharacterMovementComponent.h"

//UMyBossAnim::UMyBossAnim()
//{
//	_isMoving = false;
//	_isAttacking = false;
//}
//
//void UMyBossAnim::NativeInitializeAnimation()
//{
//	Super::NativeInitializeAnimation();
//	
//	_owner = Cast<AMyBoss>(TryGetPawnOwner());
//}
//
//void UMyBossAnim::NativeUpdateAnimation(float DeltaSeconds)
//{
//	Super::NativeUpdateAnimation(DeltaSeconds);
//
//	if (!_owner)
//	{
//		_owner = Cast<AMyBoss>(TryGetPawnOwner());
//	}
//
//	if (_owner)
//	{
//		FVector velocity = _owner->GetVelocity();
//		velocity.Z = 0.f;
//
//		_isMoving = !velocity.IsNearlyZero();
//		// _isAttacking은 공격 시작 시 따로 상태 설정 필요
//	}
//}
