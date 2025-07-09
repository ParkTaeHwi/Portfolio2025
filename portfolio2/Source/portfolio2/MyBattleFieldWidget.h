// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyBattleFieldWidget.generated.h"

class APlayerController; // APlayerController 전방 선언
class AMyPlayableSummon; // AMyPlayableSummon도 계속 사용 가능하게 전방 선언

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API UMyBattleFieldWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// 이 위젯을 "소유"하는 플레이어 컨트롤러의 참조 (일반적으로 GetOwningPlayer()를 사용)
	// UPROPERTY(BlueprintReadWrite, Category = "Summon Data")
	// AMyPlayableSummon* OwningSummonPawn; // 이건 더 이상 위젯의 주인이 아닙니다.

	// 위젯에서 직접 플레이어 컨트롤러를 가져오는 함수를 사용하거나,
	// 위젯이 생성될 때 PlayerController를 전달받을 수 있습니다.

	UFUNCTION(BlueprintCallable, Category = "Summon Control")
	void RequestControlOfPawn(int32 PawnIndex);

	// GetControlX 함수들은 다시 AMyPlayableSummon으로 돌려두셨으니 여기는 그대로 두셔도 됩니다.

	// 옵션: UI를 업데이트할 함수 (예: 현재 조작 중인 소환수 정보 표시)
	UFUNCTION(BlueprintCallable, Category = "Summon Info")
	FString GetCurrentControlledPawnName();
};
