// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleGameMode.h"

#include "Blueprint/UserWidget.h"
#include "BoardManager.h"
#include "Camera/CameraActor.h"
#include <Kismet/GameplayStatics.h>
#include "MyGameInstance.h"
#include "MyPlayableSummon.h"

ABattleGameMode::ABattleGameMode()
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

void ABattleGameMode::BeginPlay()
{
	Super::BeginPlay();

	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC)
		return;

	PC->SetInputMode(FInputModeUIOnly());
	PC->bShowMouseCursor = true;

	if (BattleUIClass)
	{
		BattleUI = CreateWidget<UUserWidget>(GetWorld(), BattleUIClass);
		if (BattleUI)
		{
			BattleUI->AddToViewport();
		}
	}

	if (BoardManagerClass)
	{
		FActorSpawnParameters SpawnParams;
		GetWorld()->SpawnActor<ABoardManager>(BoardManagerClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams); // 타일 매니저 스폰
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

		UE_LOG(LogTemp, Warning, TEXT("ABattleGameMode::BeginPlay::Card %s: %d"), *Type, Count);
	}

	//UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	//if (GI)
	//{
	//	for (const FString& Name : GI->SelectedPartyTextureNames)
	//	{
	//		UE_LOG(LogTemp, Warning, TEXT("ABattleGameMode::BeginPlay::Carried Texture: %s"), *Name);
	//	}
	//}
	//
	//AMyPlayableSummon* Summon1 = GetWorld()->SpawnActor<AMyPlayableSummon>();
	//if (Summon1)
	//{
	//	Summon1->PS = 1;
	//	Summon1->PalyableSummon1();
	//}
	//AMyPlayableSummon* Summon2 = GetWorld()->SpawnActor<AMyPlayableSummon>();
	//if (Summon2)
	//{
	//	Summon2->PS = 2;
	//	Summon2->PalyableSummon2();
	//}
	//AMyPlayableSummon* Summon3 = GetWorld()->SpawnActor<AMyPlayableSummon>();
	//if (Summon3)
	//{
	//	Summon3->PS = 3;
	//	Summon3->PalyableSummon3();
	//}

	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (!GI) return;

	const TArray<FString>& TextureNames = GI->SelectedPartyTextureNames;

	for (int32 i = 0; i < TextureNames.Num(); ++i)
	{
		AMyPlayableSummon* Summon = GetWorld()->SpawnActor<AMyPlayableSummon>();
		if (Summon)
		{
			Summon->InitializeSummon(TextureNames[i], i + 1);  

			switch (i)
			{
			case 0: Summon->PalyableSummon1(); break;
			case 1: Summon->PalyableSummon2(); break;
			case 2: Summon->PalyableSummon3(); break;
			default: break;
			}
		}
	}
}
