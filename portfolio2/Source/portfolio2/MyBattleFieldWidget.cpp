// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBattleFieldWidget.h"
#include "MyPlayableSummon.h" // AMyPlayableSummon의 GetControl 함수를 호출하기 위해 필요
#include "GameFramework/PlayerController.h" // GetOwningPlayer() 사용을 위해 필요
#include <Kismet/GameplayStatics.h>

void UMyBattleFieldWidget::RequestControlOfPawn(int32 PawnIndex)
{
    UE_LOG(LogTemp, Warning, TEXT("UMyBattleFieldWidget::RequestControlOfPawn called. Widget Pointer: %p"), this);

    APlayerController* PlayerController = GetOwningPlayer();

    if (PlayerController)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerController is valid."));

        // AMyPlayableSummon (소환 관리자) 액터를 찾습니다.
        // 이 코드는 더 이상 CurrentControlledSummon 검사 안에 있지 않습니다.
        AMyPlayableSummon* SummonManager = Cast<AMyPlayableSummon>(UGameplayStatics::GetActorOfClass(GetWorld(), AMyPlayableSummon::StaticClass()));

        if (SummonManager)
        {
            UE_LOG(LogTemp, Warning, TEXT("SummonManager found! (Name: %s, Pointer: %p)"), *SummonManager->GetName(), SummonManager);

            // 이제 SummonManager의 GetControl 함수를 호출합니다.
            switch (PawnIndex)
            {
            case 1: SummonManager->GetControl1(); break;
            case 2: SummonManager->GetControl2(); break;
            case 3: SummonManager->GetControl3(); break;
            default: UE_LOG(LogTemp, Warning, TEXT("UMyBattleFieldWidget::RequestControlOfPawn: Invalid Pawn Index: %d"), PawnIndex); break;
            }
            UE_LOG(LogTemp, Warning, TEXT("UMyBattleFieldWidget::RequestControlOfPawn: Requested control via SummonManager."));
        }
        else
        {
            // 이 로그가 계속 나온다면, AMyPlayableSummon (소환 관리자) 액터가 월드에 스폰되지 않았거나 찾을 수 없는 것입니다.
            UE_LOG(LogTemp, Error, TEXT("UMyBattleFieldWidget::RequestControlOfPawn: AMyPlayableSummon (SummonManager) not found in world. Cannot request control."));
        }

        // CurrentControlledSummon 관련 로그는 디버깅을 위해 남겨두거나 제거해도 됩니다.
        // 현재 플레이어가 소유한 폰(Pawn)을 가져옵니다.
        APawn* CurrentPawn = PlayerController->GetPawn();
        if (CurrentPawn)
        {
            UE_LOG(LogTemp, Warning, TEXT("Currently possessed pawn is: %s"), *CurrentPawn->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("PlayerController has no pawn or pawn is NULL."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("UMyBattleFieldWidget::RequestControlOfPawn: PlayerController is NULL."));
    }
}

// 옵션: 현재 조작 중인 폰의 이름을 반환하는 함수 예시
FString UMyBattleFieldWidget::GetCurrentControlledPawnName()
{
    APlayerController* PlayerController = GetOwningPlayer();
    if (PlayerController)
    {
        APawn* CurrentPawn = PlayerController->GetPawn();
        if (CurrentPawn)
        {
            return CurrentPawn->GetName();
        }
    }
    return TEXT("No Controlled Pawn");
}