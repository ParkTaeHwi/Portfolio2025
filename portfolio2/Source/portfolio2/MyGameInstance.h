// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyCardPackData.h"
#include "MyJewelWidget.h"
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

    UPROPERTY()
    TArray<FCardPackData> CardPackDataList;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jewel")
    int32 Jewel = 0;    // 게임 시작시 기본 쥬얼 '0'

    UFUNCTION(BlueprintCallable)
    void AddJewel();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jewel")
    int32 AddJ = 5000;  // 증가량 수정 가능

    UFUNCTION(BlueprintCallable)
    bool SpendJewel();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jewel")
    int32 SpendJ = 500; // 감소량 수정 가능
};
