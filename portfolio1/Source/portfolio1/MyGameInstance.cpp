#include "MyGameInstance.h"

#include "MyStatComponent.h"
#include "Engine/DataTable.h"

UMyGameInstance::UMyGameInstance()
{
    static ConstructorHelpers::FObjectFinder<UDataTable> dataTable(TEXT("/Script/Engine.DataTable'/Game/Data/MyStatTable.MyStatTable'"));

    if (dataTable.Succeeded())
    {
        _statTable = dataTable.Object;
        UE_LOG(LogTemp, Log, TEXT("Stat Table loaded successfully!"));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load Stat Table! Check the asset path."));
    }
}

void UMyGameInstance::Init()
{
    Super::Init();
}

FMyStatData UMyGameInstance::GetStat_Level(int32 level)
{
    if (!_statTable)
    {
        UE_LOG(LogTemp, Error, TEXT("StatTable is NULL!"));
        return FMyStatData();  // 기본값 반환
    }

    FString rowName = "Level_" + FString::FromInt(level);
    auto row = _statTable->FindRow<FMyStatData>(*rowName, TEXT(""));

    if (!row)
    {
        UE_LOG(LogTemp, Error, TEXT("No stat data found for level: %d"), level);
        return FMyStatData();  // 기본값 반환
    }

    return *row;
}
