// Fill out your copyright notice in the Description page of Project Settings.


#include "PartyGameMode.h"

#include "Blueprint/UserWidget.h"
#include "MyGameInstance.h"
#include <Kismet/GameplayStatics.h>

void APartyGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (PartyUIClass)
	{
		PartyUI = CreateWidget<UUserWidget>(GetWorld(), PartyUIClass);
		if (PartyUI)
		{
			PartyUI->AddToViewport();
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

	UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (!MyGI) return;

	const TMap<FString, int32>& Map = MyGI->GetCardCountMap();

	TArray<FString> AllTypes = { "B", "Y", "W" };
	for (const FString& Type : AllTypes)
	{
		int32 Count = 0;
		if (const int32* Found = Map.Find(Type))
		{
			Count = *Found;
		}

		UE_LOG(LogTemp, Warning, TEXT("APartyGameMode::BeginPlay::Card %s: %d"), *Type, Count);
	}

	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI)
	{
		for (const FString& Name : GI->SelectedPartyTextureNames)
		{
			UE_LOG(LogTemp, Warning, TEXT("ABattleGameMode::BeginPlay::Carried Texture: %s"), *Name);
		}
	}
}