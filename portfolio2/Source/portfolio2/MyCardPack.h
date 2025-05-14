// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyCardPack.generated.h"

UCLASS()
class PORTFOLIO2_API AMyCardPack : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCardPack();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CubeMesh;

	// Grid coordinate
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Row;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Column;

	// Tile state (for gameplay logic)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBlocked;

	void SetCardPackIndex(int32 CPIndex); // 인덱스 설정 함수

private:
	int32 CardPackIndex;
};
