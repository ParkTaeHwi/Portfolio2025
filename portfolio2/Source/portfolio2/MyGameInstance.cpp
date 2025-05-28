// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"

#include <Kismet/GameplayStatics.h>

void UMyGameInstance::Init()
{
    Super::Init();

    Lobby =             FName(TEXT("Lobby"));
    BattleField_1 =     FName(TEXT("BattleField_1"));
    BattleField_2 =     FName(TEXT("BattleField_2"));
    Store =             FName(TEXT("Store"));

    SelectedBattleIndex = 0;
}

void UMyGameInstance::GoToMap(FName MapName)
{
    UGameplayStatics::OpenLevel(this, MapName);
}

void UMyGameInstance::JewelCharge()
{
    Jewel += 5000;

    UE_LOG(LogTemp, Log, TEXT("UMyGameInstance::JewelCharge || Jewel charged. Current Jewel: %d"), Jewel);
}

bool UMyGameInstance::JewelSpend()
{
    if (Jewel < 500)
    {
        UE_LOG(LogTemp, Warning, TEXT("UMyGameInstance::JewelSpend || Not enough jewel to open card!"));
        return false; // 실패
    }

    Jewel -= 500;

    UE_LOG(LogTemp, Log, TEXT("UMyGameInstance::JewelSpend || Card opened. Jewel left: %d"), Jewel);
    return true; // 성공
}