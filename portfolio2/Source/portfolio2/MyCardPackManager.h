// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCardPackManager.generated.h"

class AMyCardPack;

UCLASS()
class PORTFOLIO2_API AMyCardPackManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCardPackManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	TSubclassOf<AMyCardPack> CardPackClass; // 생성할 타일 BP를 지정

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	int32 RowCount = 1; // 행

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	int32 ColumnCount = 20; // 열

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	float TileSpacing = 110.0f; // 간격

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	FVector DefaultCardPackLocation = FVector(-416.871593f, 0.61713f, 159.859186f);

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	FRotator DefaultCardPackRotation = FRotator(-10.f, 0.f, 0.f);

	UPROPERTY(EditAnywhere, Category = "CardPack Settings")
	FVector DefaultCardPackScale = FVector(0.1f, 1.6f, 3.0f);
};
