// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MyStatComponent.generated.h"

USTRUCT()
struct FMyStatData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 hp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 atk;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PORTFOLIO1_API UMyStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMyStatComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	float GetSpeed() { return _speed; }

private:
	UPROPERTY(VisibleAnywhere, Category = "Stat", meta = (AllowPrivateAccess = "true"))
	float _speed = 10.0f;
};
