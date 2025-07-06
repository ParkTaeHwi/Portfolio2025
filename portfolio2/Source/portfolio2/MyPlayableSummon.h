// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPlayableSummon.generated.h"

UCLASS()
class PORTFOLIO2_API AMyPlayableSummon : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AMyPlayableSummon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


public:
	void PalyableSummon1();
	void PalyableSummon2();
	void PalyableSummon3();

	int PS = 1;

	// 소환수의 이름 (원본에 없었으므로 추가)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon Properties")
	FString SummonName; // 'Name'은 엔진 내부에서 자주 사용되므로 충돌 방지를 위해 'SummonName'으로 변경했습니다.

	// 소환수를 초기화하는 함수
	void InitializeSummon(const FString& InName, int32 InPS);

	void SummonBlue(FVector SpawnLocation);
	void SummonYellow(FVector SpawnLocation);
	void SummonWhite(FVector SpawnLocation);

	void GetControl1();
	void GetControl2();
	void GetControl3();
};
