// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLobbyStage.h"

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
	
}

// Called every frame
void AMyLobbyStage::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

