// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLobbyWidget.h"

#include "MyGameInstance.h"
#include "MyLobbyStage.h"
#include "MyLobbyCharacter.h"
#include "EngineUtils.h"
#include <Kismet/GameplayStatics.h>

void UMyLobbyWidget::SomeFunctionBeforeLevelChange()
{
    // 월드에서 MyLobbyStage 액터 찾기 (레벨에 하나 있다고 가정)
    AMyLobbyStage* LobbyStage = nullptr;

    for (TActorIterator<AMyLobbyStage> It(GetWorld()); It; ++It)
    {
        LobbyStage = *It;
        break;  // 첫 번째 발견한 AMyLobbyStage만 사용
    }

    if (LobbyStage)
    {
        UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
        if (MyGI)
        {
            MyGI->SavedCubeIndex = LobbyStage->CurrentCubeIndex;
            UE_LOG(LogTemp, Warning, TEXT("SavedCubeIndex = %d"), LobbyStage->CurrentCubeIndex);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AMyLobbyStage not found in world!"));
    }
}

void UMyLobbyWidget::SomeFunctionBeforeCharacterChange()
{
    AMyLobbyCharacter* LobbyCharacter = nullptr;

    for (TActorIterator<AMyLobbyCharacter> It(GetWorld()); It; ++It)
    {
        LobbyCharacter = *It;
        break;
    }

    if (LobbyCharacter)
    {
        UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
        if (MyGI)
        {
            MyGI->SavedCharacterIndex = LobbyCharacter->CurrentCharacterIndex;
            UE_LOG(LogTemp, Warning, TEXT("SavedCharacterIndex = %d"), LobbyCharacter->CurrentCharacterIndex);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AMyLobbyCharacter not found in world!"));
    }
}
