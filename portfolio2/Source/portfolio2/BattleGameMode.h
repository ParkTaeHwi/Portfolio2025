// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "BattleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API ABattleGameMode : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> BattleUIClass;

private:
	UPROPERTY()
	UUserWidget* BattleUI;
};
