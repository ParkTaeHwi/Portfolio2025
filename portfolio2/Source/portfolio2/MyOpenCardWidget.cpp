// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOpenCardWidget.h"

void UMyOpenCardWidget::InitCardInfo(const TArray<FString>& Cards)
{
	// TODO: 전달받은 카드 정보로 UI 갱신
	for (const FString& Card : Cards)
	{
		UE_LOG(LogTemp, Warning, TEXT("Card: %s"), *Card);
	}

	// 카드 정보를 UI에 표시하는 로직은 블루프린트에서 해도 됨
}

void UMyOpenCardWidget::CloseWidget()
{
	// 위젯 제거
	RemoveFromParent();

	// 외부 델리게이트 호출 (예: 입력 모드 복원)
	OnWidgetClosed.ExecuteIfBound();
}