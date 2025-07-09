// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyGameModeBase.h"
#include "BattleGameMode.generated.h"

/**
 * 
 */
class ABoardManager;
class AMyPlayableSummon;

UCLASS()
class PORTFOLIO2_API ABattleGameMode : public AMyGameModeBase
{
	GENERATED_BODY()
	
public:
	ABattleGameMode();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon")
	TSubclassOf<AMyPlayableSummon> MyPlayableSummonBPClass;

protected:
	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<class UUserWidget> BattleUIClass;

	UPROPERTY(EditAnywhere, Category = "Board") // 블루프린트에서 지정 가능
	TSubclassOf<ABoardManager> BoardManagerClass; // 생성할 매니저 클래스

	FVector SpawnLocation;
	FRotator SpawnRotation;

private:
	UPROPERTY()
	UUserWidget* BattleUI;

	bool bGameInputMode = true;
};
