// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInvenWidget.h"

#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UMyInvenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(this));
	if (!MyGI) return;

	const TMap<FString, int32>& Map = MyGI->GetCardCountMap();

	TArray<FString> AllTypes = { "B", "Y", "W" };
	for (const FString& Type : AllTypes)
	{
		int32 Count = 0;
		if (const int32* Found = Map.Find(Type))
		{
			Count = *Found;
		}

		UE_LOG(LogTemp, Warning, TEXT("UMyInvenWidget::NativeConstruct::Card %s: %d"), *Type, Count);

		// 여기에 텍스트 위젯 갱신 등
	}
}