// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAnimInstance.h"

#include "MyCharacter.h"
#include "GameFramework/PawnMovementComponent.h"
#include "Animation/AnimMontage.h"

UMyAnimInstance::UMyAnimInstance()
{
}

void UMyAnimInstance::NativeUpdateAnimation(float DelatSeconds)
{
	auto pawn = TryGetPawnOwner();						              // 애니메이션 블루프린트가 적용된 소유자(Pawn, 즉 캐릭터)를 가져오는 함수
	AMyCharacter* character = Cast<AMyCharacter>(pawn);	              // pawn이 AMyCharacter 타입인지 확인하고 캐스팅
	if (character != nullptr)
	{
		_speed = character->GetVelocity().Size();
		_isFalling = character->GetMovementComponent()->IsFalling();
		_vertical = character->My_Vertical();
		_horizontal = character->My_Horizontal();
		_isDead = character->IsDead();
	}
}

void UMyAnimInstance::PlayAnimMontage()
{
	UE_LOG(LogTemp, Warning, TEXT("[2] UMyAnimInstance::PlayAnimMontage called"));

	if (_animMontage == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AnimMontage is NULL"));
		return;
	}

	if (!Montage_IsPlaying(_animMontage))
	{
		if (_attackStart.IsBound())
		{
			UE_LOG(LogTemp, Warning, TEXT("Delegate is bound."));
			_attackStart.Execute();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Delegate is NOT bound."));
		}
		Montage_Play(_animMontage);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Montage is already playing"));
	}
}

void UMyAnimInstance::AnimNotify_Attack_Hit()
{
	UE_LOG(LogTemp, Warning, TEXT(">> AnimNotify_Attack_Hit called"));
	if (_hitEvent.IsBound())
		_hitEvent.Broadcast();
	UE_LOG(LogTemp, Warning, TEXT("[3] UMyAnimInstance::AnimNotify_Attack_Hit called"));
	if (_hitEvent.IsBound())
	{
		UE_LOG(LogTemp, Warning, TEXT("[4] _hitEvent.Broadcast about to fire"));
		_hitEvent.Broadcast();
	}
}

void UMyAnimInstance::AnimNotify_Attack_Dead()
{
	if (_deadEvent.IsBound())
		_deadEvent.Broadcast();
}

void UMyAnimInstance::JumpToSection(int32 sectionIndex)
{
	FName sectionName = FName(*FString::Printf(TEXT("Section%d"), sectionIndex));
	Montage_JumpToSection(sectionName);
}
