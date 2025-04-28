// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
    virtual void Init() override;

    void GoToMap(FName MapName);

    FName Lobby;
    FName BattleField_1;
    FName BattleField_2;
    FName Store;

    int32 SelectedBattleIndex;
};
