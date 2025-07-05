// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayableSummon.h"

#include "MyGameInstance.h"
#include <Kismet/GameplayStatics.h>

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

	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI)
	{
		for (const FString& Name : GI->SelectedPartyTextureNames)
		{
			//UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::BeginPlay::Carried Texture: %s, %d"), *Name, PS);
			PS++;
		}
	}
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

void AMyPlayableSummon::PalyableSummon1()
{
	if (PS == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1"));
	}
}

void AMyPlayableSummon::PalyableSummon2()
{
	if (PS == 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2"));
	}
}

void AMyPlayableSummon::PalyableSummon3()
{
	if (PS == 3)
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3"));
	}
}

