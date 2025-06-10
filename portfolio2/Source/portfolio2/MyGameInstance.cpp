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
    Party =             FName(TEXT("Party"));

    SelectedBattleIndex = 0;
}

void UMyGameInstance::GoToMap(FName MapName)
{
    UGameplayStatics::OpenLevel(this, MapName);
}

void UMyGameInstance::AddJewel()
{
    Jewel += AddJ;
    UE_LOG(LogTemp, Warning, TEXT("UMyGameInstance::AddJewel::CurrentJewel = %d"),Jewel);
}

bool UMyGameInstance::SpendJewel()
{
    if (Jewel >= SpendJ)
    {
        Jewel -= SpendJ;
        return true;
    }
    UE_LOG(LogTemp, Warning, TEXT("UMyGameInstance::SpendJewel::return false"));
    return false;
}

void UMyGameInstance::AddCards(const TArray<FString>& NewCards)
{
    for (const FString& Card : NewCards)
    {
        FString Prefix = Card.Left(1);
        TotalCardCountMap.FindOrAdd(Prefix)++;
    }
}
