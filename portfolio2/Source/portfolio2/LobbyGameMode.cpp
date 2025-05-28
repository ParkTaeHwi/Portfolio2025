// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

#include "Blueprint/UserWidget.h"

void ALobbyGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (LobbyUIClass)
	{
		LobbyUI = CreateWidget<UUserWidget>(GetWorld(), LobbyUIClass);
		if (LobbyUI)
		{
			LobbyUI->AddToViewport();
		}
	}

	if (JewelUIClass)
	{
		UUserWidget* JewelWidget = CreateWidget<UUserWidget>(GetWorld(), JewelUIClass);
		if (JewelWidget)
		{
			JewelWidget->AddToViewport();
		}
	}
}