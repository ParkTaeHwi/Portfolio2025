// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLobbyCharacter.h"

#include "MyGameInstance.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AMyLobbyCharacter::AMyLobbyCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyLobbyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyLobbyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyLobbyCharacter::LogCharacterIndex()
{
	UE_LOG(LogTemp, Warning, TEXT("AMyLobbyCharacter::LogCharacterIndex::CurrentCharacterIndex = %d"), CurrentCharacterIndex);
}

int AMyLobbyCharacter::SetCharacterIndex()
{
	UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (MyGI)
	{
		CurrentCharacterIndex = MyGI->SavedCharacterIndex;
	}
	UE_LOG(LogTemp, Warning, TEXT("AMyLobbyCharacter::SetCharacterIndex::CurrentCharacterIndex = %d"), CurrentCharacterIndex);
	return CurrentCharacterIndex;
}

