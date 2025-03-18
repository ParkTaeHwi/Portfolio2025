// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "EnhancedInputComponent.h"	    // Enhanced Input System에서 제공하는 입력 컴포넌트를 사용하기 위한 헤더
#include "EnhancedInputSubsystems.h"	// 입력 시스템을 관리하는 클래스들이 포함된 헤더
#include "InputActionValue.h"           // Enhanced Input System에서 입력 값을 처리하기 위한 구조체

// Sets default values
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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
}

void AMyCharacter::Look(const FInputActionValue& value)
{
}

void AMyCharacter::JumpA(const FInputActionValue& value)
{
}

void AMyCharacter::Attack(const FInputActionValue& value)
{
}

