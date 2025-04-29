// Fill out your copyright notice in the Description page of Project Settings.


#include "StoreGameMode.h"

#include "Blueprint/UserWidget.h"

void AStoreGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (StoreUIClass)
	{
		StoreUI = CreateWidget<UUserWidget>(GetWorld(), StoreUIClass);
		if (StoreUI)
		{
			StoreUI->AddToViewport();
		}
	}
}
