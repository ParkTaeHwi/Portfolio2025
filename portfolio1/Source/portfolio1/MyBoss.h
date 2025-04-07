// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyEnemy.h"
#include "MyBoss.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO1_API AMyBoss : public AMyEnemy
{
	GENERATED_BODY()
	
public:
	AMyBoss();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	FVector _targetLocation;
	float _moveSpeed = 200.f; // 부유 속도
	float _acceptanceRadius = 100.f; // 도착했다고 판단할 거리

	void SetNewRandomTarget();
};
