// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyLobbyCharacter.generated.h"

UCLASS()
class PORTFOLIO2_API AMyLobbyCharacter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyLobbyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Cube")
	int32 CurrentCharacterIndex = 1;	// �ʱⰪ

	UFUNCTION(BlueprintCallable)
	void LogCharacterIndex();

	UFUNCTION(BlueprintCallable)
	int SetCharacterIndex();
};
