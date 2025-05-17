// Fill out your copyright notice in the Description page of Project Settings.


#include "MySpectatorPawn.h"

void AMySpectatorPawn::BeginPlay()
{
    Super::BeginPlay();

    FString FullMapName = GetWorld()->GetMapName(); //원본 이름
    FString ShortMapName = FPackageName::GetShortName(FullMapName); //선언 + 초기화

    //UE_LOG(LogTemp, Warning, TEXT("Full Map Name: %s"), *FullMapName);
    //UE_LOG(LogTemp, Warning, TEXT("Short Map Name: %s"), *ShortMapName);

    if (ShortMapName.Contains(TEXT("Store")))
    {
        UE_LOG(LogTemp, Warning, TEXT("Map matched: Store!"));
        SetActorLocation(DefaultCameraLocation);
        SetActorRotation(DefaultCameraRotation);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Map not matched!"));
    }
}
