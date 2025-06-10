// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Image.h"
#include "MyPartyWidget.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO2_API UMyPartyWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;

	void ChangeImage();

	UPROPERTY(meta = (BindWidget))
	UImage* PartyImage0;

	UPROPERTY(meta = (BindWidget))
	UImage* PartyImage1;

	UPROPERTY(meta = (BindWidget))
	UImage* PartyImage2;
};
