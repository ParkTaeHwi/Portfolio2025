// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"

void AMyPlayerController::BeginPlay()
{
	//Super::BeginPlay();
	//
	//UEnhancedInputLocalPlayerSubsystem* subSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());
	//
	//if (subSystem)
	//{
	//	subSystem->AddMappingContext(_inputMappingContext, 0);
	//}
	
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("MyPlayerController.cpp"));

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		if (_inputMappingContext)
		{
			Subsystem->AddMappingContext(_inputMappingContext, 0);
			UE_LOG(LogTemp, Warning, TEXT("Mapping context added"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Input mapping context is NULL!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Enhanced Input Subsystem not found!"));
	}

	APawn* MyPawn = GetPawn();
	if (MyPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("PC Possesses: %s"), *MyPawn->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PC does NOT possess any pawn!"));
	}

	FInputModeGameOnly InputMode;
	SetInputMode(InputMode);
}

void AMyPlayerController::ShowUI()
{
	bShowMouseCursor = true;
}

void AMyPlayerController::HideUI()
{
	bShowMouseCursor = false;
}