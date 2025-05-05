// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardManager.h"

#include "BoardTile.h"
#include "Engine/World.h"

// Sets default values
ABoardManager::ABoardManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABoardManager::BeginPlay()
{
	Super::BeginPlay();

	if (!TileClass) return;

	UWorld* World = GetWorld();
	if (!World) return;

	int32 TileIndex = 0; // ¿Œµ¶Ω∫ Ω√¿€

	for (int32 Row = 0; Row < RowCount; ++Row)
	{
		for (int32 Col = 0; Col < ColumnCount; ++Col)
		{
			FVector SpawnLocation = GetActorLocation();
			SpawnLocation.X += Col * TileSpacing;
			SpawnLocation.Y += Row * TileSpacing;

			FActorSpawnParameters Params;
			ABoardTile* Tile = World->SpawnActor<ABoardTile>(TileClass, SpawnLocation, FRotator::ZeroRotator, Params);
			if (Tile)
			{
				Tile->SetTileIndex(TileIndex); // ¿Œµ¶Ω∫ ∫Œø©
			}

			++TileIndex;
		}
	}

}

// Called every frame
void ABoardManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

