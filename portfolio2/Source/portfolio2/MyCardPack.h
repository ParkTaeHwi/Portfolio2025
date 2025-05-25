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
	virtual void PostInitializeComponents() override;	// 액터(AMyItem)의 컴포넌트가 초기화된 직후 실행되는 함수
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* CubeMesh;

	UPROPERTY(EditAnywhere, Category = "Collider")
	class UCapsuleComponent* _collider;

	// Grid coordinate
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Row;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 Column;

	// Tile state (for gameplay logic)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBlocked;

	void SetCardPackIndex(int32 CPIndex); // 인덱스 설정 함수


	UPROPERTY()
	TArray<FString> CardList;

	UFUNCTION()
	void SetCards(const TArray<FString>& InCards);

	virtual void NotifyActorBeginCursorOver() override;  // 마우스 호버 시작
	virtual void NotifyActorEndCursorOver() override;    // 마우스 호버 종료
	virtual void NotifyActorOnClicked(FKey ButtonPressed) override;	// 클릭

private:
	int32 CardPackIndex;
};
