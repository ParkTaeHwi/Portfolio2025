// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPartyWidget.h"

#include "MyGameInstance.h"
#include "Kismet/GameplayStatics.h"

void UMyPartyWidget::NativeConstruct()
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

		UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::NativeConstruct::Card %s: %d"), *Type, Count);

		// 여기에 텍스트 위젯 갱신 등
	}
	ChangeImage();
}

void UMyPartyWidget::ChangeImage()
{
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

		if (Count > 0)
		{
			UTexture2D* LoadedTexture = nullptr;

			if (Type == "B")
			{
				LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/InvenImage/Blue_Inven.Blue_Inven"));
				if (InvenImage0 && LoadedTexture)
				{
					InvenImage0->SetBrushFromTexture(LoadedTexture);
				}
			}
			else if (Type == "Y")
			{
				LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/InvenImage/Yellow_Inven.Yellow_Inven"));
				if (InvenImage1 && LoadedTexture)
				{
					InvenImage1->SetBrushFromTexture(LoadedTexture);
				}
			}
			else if (Type == "W")
			{
				LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/InvenImage/White_Inven.White_Inven"));
				if (InvenImage2 && LoadedTexture)
				{
					InvenImage2->SetBrushFromTexture(LoadedTexture);
				}
			}
		}
	}
}