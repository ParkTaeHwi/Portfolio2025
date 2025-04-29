// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"

#include "Blueprint/UserWidget.h"

void AMyGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	if (DefaultUIClass)
	{
		CurrentUI = CreateWidget<UUserWidget>(GetWorld(), DefaultUIClass);
		if (CurrentUI)
		{
			CurrentUI->AddToViewport();
		}
	}
}
