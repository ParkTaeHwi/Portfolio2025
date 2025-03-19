// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "MyStatComponent.h"
#include "MyAnimInstance.h"

#include "EnhancedInputComponent.h"	            // Enhanced Input System���� �����ϴ� �Է� ������Ʈ�� ����ϱ� ���� ���
#include "EnhancedInputSubsystems.h"	        // �Է� �ý����� �����ϴ� Ŭ�������� ���Ե� ���
#include "InputActionValue.h"                   // Enhanced Input System���� �Է� ���� ó���ϱ� ���� ����ü

#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

	// ������Ʈ ����
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	// ������Ʈ �������� ����
	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 500.0f;							// ī�޶� �Ÿ�
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));  // ī�޶� ����

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

void AMyCharacter::Move(const FInputActionValue& value)
{
	FVector2D moveVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		if (moveVector.Length() > 0.01f)
		{
			FVector forWard = GetActorForwardVector();
			FVector right = GetActorRightVector();

			_vertical = moveVector.Y * 100.0f;
			_horizontal = moveVector.X * 100.0f;

			AddMovementInput(forWard, moveVector.Y * _statComponent->GetSpeed());
			AddMovementInput(right, moveVector.X * _statComponent->GetSpeed());
		}
	}
}

void AMyCharacter::Look(const FInputActionValue& value)
{
	if (_isAttack) return;

	FVector2D lookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(lookAxisVector.X);
		AddControllerPitchInput(-lookAxisVector.Y);
	}
}

void AMyCharacter::JumpA(const FInputActionValue& value)
{
	if (_isAttack) return;

	bool isPress = value.Get<bool>();

	if (isPress)
	{
		ACharacter::Jump();
	}
}

void AMyCharacter::Attack(const FInputActionValue& value)
{
	if (_isAttack) return;

	bool isPress = value.Get<bool>();

	if (isPress)
	{
		_isAttack = true;

		_curAttackSection = (_curAttackSection + 1) % 3 + 1;
		_animInstance->PlayAnimMontage();
		_animInstance->JumpToSection(_curAttackSection);
	}
}

