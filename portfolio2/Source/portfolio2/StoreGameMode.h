// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "StoreGameMode.generated.h"

/**
 * 
 */
class AMyCardPackManager;

UCLASS()
class PORTFOLIO2_API AStoreGameMode : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	AStoreGameMode();
	
	virtual void BeginPlay() override;

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> StoreUIClass;

	UPROPERTY(EditAnywhere, Category = "CardPack") // 블루프린트에서 지정 가능
	TSubclassOf<AMyCardPackManager> MyCardPackManagerClass; // 생성할 매니저 클래스

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> JewelUIClass;

private:
	UPROPERTY()
	UUserWidget* StoreUI;

	bool bGameInputMode = true;
};
