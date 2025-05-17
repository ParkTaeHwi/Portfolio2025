// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "MySpectatorPawn.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API AMySpectatorPawn : public ASpectatorPawn
{
	GENERATED_BODY()

	virtual void BeginPlay() override;
public:

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	FVector DefaultCameraLocation = FVector(-800.0f, 20.0f, 650.0f);

	UPROPERTY(EditAnywhere, Category = "Camera Settings")
	FRotator DefaultCameraRotation = FRotator(-35.f, 0.f, 0.f);
};
