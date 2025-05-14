// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCardPack.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
AMyCardPack::AMyCardPack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Mesh 생성 및 루트로 설정
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh;

	// 기본 상태
	Row = 0;
	Column = 0;
	bIsBlocked = false;
}

// Called when the game starts or when spawned
void AMyCardPack::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCardPack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyCardPack::SetCardPackIndex(int32 CPIndex)
{
    CardPackIndex = CPIndex;
}