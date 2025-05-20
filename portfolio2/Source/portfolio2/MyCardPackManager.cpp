// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCardPackManager.h"

#include "MyCardPack.h"
#include "Engine/World.h"

// Sets default values
AMyCardPackManager::AMyCardPackManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCardPackManager::BeginPlay()
{
	Super::BeginPlay();

	if (!CardPackClass) return;

	UWorld* World = GetWorld();
	if (!World) return;

	// 카드 비율 설정
	float RateBlue = 0.5f;
	float RateYellow = 0.35f;
	float RateWhite = 0.15f;

	int32 TotalCardPacks = 20;
	int32 CardsPerPack = 5;
	int32 TotalCards = TotalCardPacks * CardsPerPack;

	int32 NumBlue = FMath::RoundToInt(TotalCards * RateBlue);
	int32 NumYellow = FMath::RoundToInt(TotalCards * RateYellow);
	int32 NumWhite = TotalCards - NumBlue - NumYellow; // 남은 건 전부 화이트

	// 카드 목록 구성
	TArray<FString> BlueCards, YellowCards, WhiteCards;
	for (int32 i = 1; i <= NumBlue; ++i)
	{
		BlueCards.Add(FString::Printf(TEXT("B_%d"), i));
	}
	for (int32 i = 1; i <= NumYellow; ++i)
	{
		YellowCards.Add(FString::Printf(TEXT("Y_%d"), i));
	}
	for (int32 i = 1; i <= NumWhite; ++i)
	{
		WhiteCards.Add(FString::Printf(TEXT("W_%d"), i));
	}

	// 카드 합치기 + 셔플
	TArray<FString> RandomCardTable;
	RandomCardTable.Append(BlueCards);
	RandomCardTable.Append(YellowCards);
	RandomCardTable.Append(WhiteCards);

	for (int32 i = 0; i < RandomCardTable.Num(); ++i)
	{
		int32 SwapIndex = FMath::RandRange(0, RandomCardTable.Num() - 1);
		RandomCardTable.Swap(i, SwapIndex);
	}

	// 카드팩 생성
	int32 CardIndex = 0;
	for (int32 i = 0; i < TotalCardPacks; ++i)
	{
		FVector SpawnLocation = DefaultCardPackLocation;
		SpawnLocation.X += (i % ColumnCount) * TileSpacing;
		SpawnLocation.Y += (i / ColumnCount) * TileSpacing;

		FTransform SpawnTransform(DefaultCardPackRotation, SpawnLocation, DefaultCardPackScale);

		FActorSpawnParameters Params;
		AMyCardPack* CardPack = World->SpawnActor<AMyCardPack>(CardPackClass, SpawnTransform, Params);

		if (CardPack)
		{
			TArray<FString> PackCards;
			for (int32 j = 0; j < CardsPerPack; ++j)
			{
				if (CardIndex < RandomCardTable.Num())
				{
					PackCards.Add(RandomCardTable[CardIndex]);
					++CardIndex;
				}
			}
			CardPack->SetCardPackIndex(i);
			CardPack->SetCards(PackCards);

			FString CardsString = FString::Join(PackCards, TEXT(", "));
			UE_LOG(LogTemp, Warning, TEXT("%s has {%s}"), *CardPack->GetName(), *CardsString);
		}
	}
}

// Called every frame
void AMyCardPackManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


