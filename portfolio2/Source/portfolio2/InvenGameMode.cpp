// Fill out your copyright notice in the Description page of Project Settings.


#include "InvenGameMode.h"

#include "Blueprint/UserWidget.h"

void AInvenGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (InvenUIClass)
	{
		InvenUI = CreateWidget<UUserWidget>(GetWorld(), InvenUIClass);
		if (InvenUI)
		{
			InvenUI->AddToViewport();
		}
	}
}
