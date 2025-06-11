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

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UImage* PartyImage0;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UImage* PartyImage1;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UImage* PartyImage2;

	UFUNCTION(BlueprintCallable)
	bool bBWorNot(UImage* TargetImage);

public:
	UPROPERTY(BlueprintReadWrite, Category = "MyCategory")
	int32 X;

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	int32 XReturn() const;

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void XSetTo1();

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void XSetTo2();

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void XSetTo3();

public:
	UPROPERTY(BlueprintReadWrite, Category = "MyCategory")
	int32 Y;

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	int32 YReturn() const;

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void YSetTo1();

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void YSetTo2();

	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	void YSetTo3();
};
