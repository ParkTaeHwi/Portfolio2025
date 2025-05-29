// Fill out your copyright notice in the Description page of Project Settings.


#include "MyOpenCardWidget.h"

#include "MyCardPack.h"
#include "MyGameInstance.h"
#include "MyJewelWidget.h"
#include <Components/Image.h>

void UMyOpenCardWidget::InitCardInfo(const TArray<FString>& Cards)
{
	// TODO: 전달받은 카드 정보로 UI 갱신
	for (const FString& Card : Cards)
	{
		UE_LOG(LogTemp, Warning, TEXT("Card: %s"), *Card);
	}

	// 카드 정보를 UI에 표시하는 로직은 블루프린트에서 해도 됨

	TArray<UImage*> ImageWidgets = { Image1, Image2, Image3, Image4, Image5 };
	
	for (int32 i = 0; i < Cards.Num() && i < ImageWidgets.Num(); ++i)
	{
		FString Prefix = Cards[i].Left(1);
		FString Path;
	
		if (Prefix == "W")
			Path = TEXT("/Game/Image/White.White");
		else if (Prefix == "B")
			Path = TEXT("/Game/Image/Blue.Blue");
		else if (Prefix == "Y")
			Path = TEXT("/Game/Image/Yellow.Yellow");
	
		// 텍스처 로드
		UTexture2D* Texture = Cast<UTexture2D>(StaticLoadObject(UTexture2D::StaticClass(), nullptr, *Path));
	
		if (Texture && ImageWidgets[i])
		{
			ImageWidgets[i]->SetBrushFromTexture(Texture);
		}
	}
}

void UMyOpenCardWidget::CloseWidget()
{
	// 위젯 제거
	RemoveFromParent();

	// 외부 델리게이트 호출 (예: 입력 모드 복원)
	OnWidgetClosed.ExecuteIfBound();

	UE_LOG(LogTemp, Warning, TEXT("UMyOpenCardWidget::CloseWidget::CardList closed"));
}

void UMyOpenCardWidget::CardOpen()
{
	if (OwnerCardPack)
	{
		spendJewel();
		OwnerCardPack->HandleCardOpen();
	}
}

bool UMyOpenCardWidget::IsJewelEnough() const
{
	if (const UMyGameInstance* MyGI = Cast<UMyGameInstance>(GetGameInstance()))
	{
		return MyGI->IsJewelEnough();  // GameInstance에 있는 함수
	}

	return false;  // GameInstance가 없거나 캐스팅 실패 시 false
}

void UMyOpenCardWidget::spendJewel()
{
	if (UGameInstance* GI = GetGameInstance())
	{
		if (UMyGameInstance* MyGI = Cast<UMyGameInstance>(GI))
		{
			if (MyGI->SpendJewel())
			{
				UpdateJewelText(MyGI->Jewel);
				UE_LOG(LogTemp, Warning, TEXT("UMyOpenCardWidget::spendJewel::CurrentJewel = %d"), MyGI->Jewel);
			}
		}
	}
}