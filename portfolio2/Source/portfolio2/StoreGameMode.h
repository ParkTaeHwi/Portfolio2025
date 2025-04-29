// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "StoreGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API AStoreGameMode : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> StoreUIClass;

private:
	UPROPERTY()
	UUserWidget* StoreUI;
};
