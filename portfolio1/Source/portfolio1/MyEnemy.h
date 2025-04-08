// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyCharacter.h"
#include "MyEnemy.generated.h"

/**
 * 
 */
UCLASS()
class PORTFOLIO1_API AMyEnemy : public AMyCharacter
{
	GENERATED_BODY()
	
public:
	AMyEnemy();

	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to "BIND" functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void Attack_AI();
	void Die();

	UPROPERTY(EditDefaultsOnly, Category = "AI")
	UBehaviorTree* BehaviorTreeAsset;

private:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
	class UWidgetComponent* _hpBarWidget;

	UPROPERTY(EditAnywhere, Category = "Reward")
	int32 _expToGive = 10;

	//UPROPERTY(EditDefaultsOnly, Category = "AI")
	//UBehaviorTree* BehaviorTreeAsset;
};
