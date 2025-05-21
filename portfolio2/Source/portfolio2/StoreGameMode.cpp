// Fill out your copyright notice in the Description page of Project Settings.


#include "StoreGameMode.h"

#include "Blueprint/UserWidget.h"
#include "MyCardPackManager.h"
#include "Camera/CameraActor.h"
#include <Kismet/GameplayStatics.h>

AStoreGameMode::AStoreGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP/BP_MyPlayer"));
	if (PlayerPawnBPClass.Succeeded())
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	if (DefaultPawnClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is set: %s"), *DefaultPawnClass->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is NULL!"));
	}
}

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

	if (MyCardPackManagerClass)
	{
		FActorSpawnParameters SpawnParams;
		GetWorld()->SpawnActor<AMyCardPackManager>(MyCardPackManagerClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams); // 타일 매니저 스폰
	}
}
