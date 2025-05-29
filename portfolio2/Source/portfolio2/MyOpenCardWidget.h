// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyOpenCardWidget.generated.h"

DECLARE_DELEGATE(FOnWidgetClosed)
class UImage;

/**
 * 카드팩 열기용 UI 위젯
 */
UCLASS()
class PORTFOLIO2_API UMyOpenCardWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// 카드 목록 받아서 UI 갱신하는 함수
	UFUNCTION(BlueprintCallable)
	void InitCardInfo(const TArray<FString>& Cards);

	// 외부에서 연결할 델리게이트
	FOnWidgetClosed OnWidgetClosed;

	// 확인 버튼 클릭 시 이걸 블루프린트에서 바인딩하거나 직접 호출
	UFUNCTION(BlueprintCallable)
	void CloseWidget();

	UPROPERTY()
	AMyCardPack* OwnerCardPack;

	UFUNCTION(BlueprintCallable)
	void CardOpen();

	UFUNCTION(BlueprintPure, Category = "Jewel")
	bool IsJewelEnough() const;

	UFUNCTION(BlueprintCallable)
	void spendJewel();

	UFUNCTION(BlueprintImplementableEvent)
	void UpdateJewelText(int32 NewJewel);

	UPROPERTY(meta = (BindWidget))
	UImage* Image1;

	UPROPERTY(meta = (BindWidget))
	UImage* Image2;

	UPROPERTY(meta = (BindWidget))
	UImage* Image3;

	UPROPERTY(meta = (BindWidget))
	UImage* Image4;

	UPROPERTY(meta = (BindWidget))
	UImage* Image5;
};
