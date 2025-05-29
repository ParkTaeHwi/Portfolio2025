// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyJewelWidget.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API UMyJewelWidget : public UUserWidget
{
	GENERATED_BODY()
	

public:
	int32 Jewel = 0;	// gameinstance에 넘겨서 다른 레벨의 beginplay에서 읽기?

	UFUNCTION(BlueprintCallable)
	void addJewel();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateJewelText(int32 NewJewel);
};
