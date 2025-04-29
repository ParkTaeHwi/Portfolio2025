// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleGameMode.h"

#include "Blueprint/UserWidget.h"

void ABattleGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (BattleUIClass)
	{
		BattleUI = CreateWidget<UUserWidget>(GetWorld(), BattleUIClass);
		if (BattleUI)
		{
			BattleUI->AddToViewport();
		}
	}
}
