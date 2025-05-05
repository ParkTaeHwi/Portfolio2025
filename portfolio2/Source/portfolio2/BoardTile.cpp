// Fill out your copyright notice in the Description page of Project Settings.


#include "BoardTile.h"

#include "Components/StaticMeshComponent.h"


// Sets default values
ABoardTile::ABoardTile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Mesh 생성 및 루트로 설정
	TileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TileMesh"));
	RootComponent = TileMesh;

	// 기본 상태
	Row = 0;
	Column = 0;
	bIsBlocked = false;
}

// Called when the game starts or when spawned
void ABoardTile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoardTile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABoardTile::SetTileIndex(int32 InIndex)
{
	TileIndex = InIndex;
}

