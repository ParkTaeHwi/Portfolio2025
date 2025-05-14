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

	int32 CardPackIndex = 0; // ¿Œµ¶Ω∫ Ω√¿€

	for (int32 Row = 0; Row < RowCount; ++Row)
	{
		for (int32 Col = 0; Col < ColumnCount; ++Col)
		{
			FVector SpawnLocation = GetActorLocation();
			SpawnLocation.X += Col * TileSpacing;
			SpawnLocation.Y += Row * TileSpacing;

			FActorSpawnParameters Params;
			AMyCardPack* CardPack = World->SpawnActor<AMyCardPack>(CardPackClass, SpawnLocation, FRotator::ZeroRotator, Params);
			if (CardPack)
			{
				CardPack->SetCardPackIndex(CardPackIndex); // ¿Œµ¶Ω∫ ∫Œø©
			}

			++CardPackIndex;
		}
	}
}

// Called every frame
void AMyCardPackManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

