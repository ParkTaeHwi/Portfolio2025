// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCardPackData.generated.h"

USTRUCT(BlueprintType)
struct FCardPackData
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FString> Cards;

	UPROPERTY()
	bool bOpened = false;

	FCardPackData() {}
	FCardPackData(const TArray<FString>& InCards) : Cards(InCards), bOpened(false) {}
};
