// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO1_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMyGameModeBase();	// 객체가 생성될 때 실행될 생성자 선언
	
	void AddEnemy();  
	void OnEnemyDie();

	UFUNCTION()
	void MovePlayerToNextStage();

	UPROPERTY()
	bool _bStageMoved = false;

private:
	int32 _enemyCount = 0;
	int32 _enemyKillCount = 0;
	const int32 _requiredKills = 1;

	FTimerHandle MoveTimerHandle;
};
