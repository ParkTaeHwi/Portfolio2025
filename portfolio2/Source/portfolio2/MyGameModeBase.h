// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MyGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API AMyGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	// 공통 UI를 띄우는 함수
	virtual void BeginPlay() override;

protected:
	// UI 클래스를 지정할 수 있도록
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "UI")
	TSubclassOf<UUserWidget> DefaultUIClass;

private:
	UPROPERTY()
	UUserWidget* CurrentUI; // 현재 띄워진 UI를 저장
};
