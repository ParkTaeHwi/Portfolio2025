// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCardPack.h"

#include "Components/StaticMeshComponent.h"

// Sets default values
AMyCardPack::AMyCardPack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // 메시 컴포넌트 생성
    Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    RootComponent = Mesh;

    // 기본 큐브 메시 설정
    static ConstructorHelpers::FObjectFinder<UStaticMesh> CubeMesh(TEXT("/Engine/BasicShapes/Cube.Cube"));
    if (CubeMesh.Succeeded())
    {
        Mesh->SetStaticMesh(CubeMesh.Object);
    }
}

void AMyCardPack::SetCardPackIndex(int32 CPIndex)
{
    CardPackIndex = CPIndex;
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

