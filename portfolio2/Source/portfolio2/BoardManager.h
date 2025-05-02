// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardManager.generated.h"

class ABoardTile; // 전방 선언

UCLASS()
class PORTFOLIO2_API ABoardManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoardManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Board Settings")
	TSubclassOf<ABoardTile> TileClass; // 생성할 타일 BP를 지정

	UPROPERTY(EditAnywhere, Category = "Board Settings")
	int32 RowCount = 5; // 기본 5행

	UPROPERTY(EditAnywhere, Category = "Board Settings")
	int32 ColumnCount = 5; // 기본 5열

	UPROPERTY(EditAnywhere, Category = "Board Settings")
	float TileSpacing = 110.0f; // 타일 간격
};
