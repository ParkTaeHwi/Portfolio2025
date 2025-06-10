// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "PartyGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API APartyGameMode : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> PartyUIClass;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> JewelUIClass;

private:
	UPROPERTY()
	UUserWidget* PartyUI;
};
