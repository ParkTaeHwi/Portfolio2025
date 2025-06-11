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
				LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Blue_Party.Blue_Party"));
				if (PartyImage0 && LoadedTexture)
				{
					PartyImage0->SetBrushFromTexture(LoadedTexture);
				}
			}
			else if (Type == "Y")
			{
				LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Yellow_Party.Yellow_Party"));
				if (PartyImage1 && LoadedTexture)
				{
					PartyImage1->SetBrushFromTexture(LoadedTexture);
				}
			}
			else if (Type == "W")
			{
				LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/White_Party.White_Party"));
				if (PartyImage2 && LoadedTexture)
				{
					PartyImage2->SetBrushFromTexture(LoadedTexture);
				}
			}
		}
	}
}

bool UMyPartyWidget::bBWorNot(UImage* TargetImage)
{
	if (TargetImage && TargetImage->GetBrush().GetResourceObject())
	{
		// 텍스처의 이름을 가져와서 "BW"가 포함되어 있는지 확인
		FString ImageName = TargetImage->GetBrush().GetResourceObject()->GetName();

		// 이미지 이름에 "BW" 문자열이 포함되어 있는지 판별
		bool bContainsBW = ImageName.Contains(TEXT("BW"));

		// %s는 FString을 출력하기 위한 형식 지정자
		UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::bBWorNot::%s, 'BW': %s, X = %d, Y = %d"), *ImageName, bContainsBW ? TEXT("True") : TEXT("False"),X,Y);

		return bContainsBW;
	}
	else
	{
		// TargetImage가 유효하지 않거나 이미지가 설정되어 있지 않을 경우 로그 출력
		UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::bBWorNot::TargetImage is invalid or has no resource object."));
	}

	// TargetImage가 유효하지 않거나 이미지가 설정되어 있지 않으면 false를 반환
	return false;
}

int32 UMyPartyWidget::XReturn() const
{
	return X;
}

void UMyPartyWidget::XSetTo1()
{
	X = 1;
}

void UMyPartyWidget::XSetTo2()
{
	X = 2;
}

void UMyPartyWidget::XSetTo3()
{
	X = 3;
}

int32 UMyPartyWidget::YReturn() const
{
	return Y;
}

void UMyPartyWidget::YSetTo1()
{
	Y = 1;
}

void UMyPartyWidget::YSetTo2()
{
	Y = 2;
}

void UMyPartyWidget::YSetTo3()
{
	Y = 3;
}

void UMyPartyWidget::TtoB()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Blue_Pick.Blue_Pick"));

	if (LoadedTexture && TopLane)
	{
		TopLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::TtoB::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::TtoY()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Yellow_Pick.Yellow_Pick"));

	if (LoadedTexture && TopLane)
	{
		TopLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::TtoW::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::TtoW()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/White_Pick.White_Pick"));

	if (LoadedTexture && TopLane)
	{
		TopLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::TtoW::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::MtoB()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Blue_Pick.Blue_Pick"));

	if (LoadedTexture && MidLane)
	{
		MidLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::MtoB::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::MtoY()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Yellow_Pick.Yellow_Pick"));

	if (LoadedTexture && MidLane)
	{
		MidLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::MtoW::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::MtoW()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/White_Pick.White_Pick"));

	if (LoadedTexture && MidLane)
	{
		MidLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::MtoW::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::BtoB()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Blue_Pick.Blue_Pick"));

	if (LoadedTexture && BottomLane)
	{
		BottomLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::BtoB::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::BtoY()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/Yellow_Pick.Yellow_Pick"));

	if (LoadedTexture && BottomLane)
	{
		BottomLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::BtoW::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::BtoW()
{
	UTexture2D* LoadedTexture = LoadObject<UTexture2D>(nullptr, TEXT("/Game/Image/PartyImage/White_Pick.White_Pick"));

	if (LoadedTexture && BottomLane)
	{
		BottomLane->SetBrushFromTexture(LoadedTexture);
	}
	UE_LOG(LogTemp, Warning, TEXT("UMyPartyWidget::BtoW::X = %d, Y = %d"), X, Y);
}

void UMyPartyWidget::LogAllLaneTextureNames()
{
	auto GetTextureName = [](UImage* Image) -> FString
		{
			if (!Image) return TEXT("Invalid Image");

			UObject* ResourceObj = Image->GetBrush().GetResourceObject();
			if (!ResourceObj) return TEXT("No Texture");

			UTexture2D* Texture = Cast<UTexture2D>(ResourceObj);
			if (!Texture) return TEXT("Not a Texture");

			return Texture->GetName();
		};

	FString TopName = GetTextureName(TopLane);
	FString MidName = GetTextureName(MidLane);
	FString BotName = GetTextureName(BottomLane);

	UE_LOG(LogTemp, Warning, TEXT("TopLane: %s / MidLane: %s / BottomLane: %s"), *TopName, *MidName, *BotName);

	// GameInstance에 전달
	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI)
	{
		GI->SelectedPartyTextureNames = { TopName, MidName, BotName };
	}
}