// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLobbyStage.h"

#include "MyGameInstance.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AMyLobbyStage::AMyLobbyStage()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyLobbyStage::BeginPlay()
{
	Super::BeginPlay();
	
	SetCubeIndex();
	UE_LOG(LogTemp, Warning, TEXT("AMyLobbyStage::BeginPlay::CurrentCubeIndex = %d"), CurrentCubeIndex);
}

// Called every frame
void AMyLobbyStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyLobbyStage::LogCubeIndex()
{
	UE_LOG(LogTemp, Warning, TEXT("AMyLobbyStage::LogCubeIndex::CurrentCubeIndex = %d"), CurrentCubeIndex);
}

int AMyLobbyStage::SetCubeIndex()
{
	UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (MyGI)
	{
		CurrentCubeIndex = MyGI->SavedCubeIndex;
	}
	UE_LOG(LogTemp, Warning, TEXT("AMyLobbyStage::SetCubeIndex::CurrentCubeIndex = %d"), CurrentCubeIndex);
	return CurrentCubeIndex;
}
