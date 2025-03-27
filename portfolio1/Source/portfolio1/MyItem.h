// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyItem.generated.h"

UENUM(BluePrintType)
enum class MyItemType
{
	NONE,
	POTION
};

USTRUCT()
struct FMyItemInfo
{
	GENERATED_BODY()

	UPROPERTY()
	int32 itemId = -1;
	UPROPERTY()
	MyItemType type= MyItemType::NONE;
};

UCLASS()
class PORTFOLIO1_API AMyItem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMyItem();

protected:
	virtual void PostInitializeComponents() override;	// 액터(AMyItem)의 컴포넌트가 초기화된 직후 실행되는 함수
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

	const FMyItemInfo& GetInfo() { return _info; }

private:
	UPROPERTY(EditAnywhere, Category = "Mesh")
	class UStaticMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, Category = "Collider")
	class UCapsuleComponent* _collider;

	UPROPERTY(VisibleAnywhere, Category = "ItemInfo")
	FMyItemInfo _info;
};
