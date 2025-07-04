// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayableSummon.h"

// Sets default values
AMyPlayableSummon::AMyPlayableSummon()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyPlayableSummon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayableSummon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayableSummon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

