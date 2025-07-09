// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyBattleFieldWidget.h"
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
	void PlayableSummon1();
	void PlayableSummon2();
	void PlayableSummon3();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon Properties")
	int PS = 1;

	// 소환수의 이름 (원본에 없었으므로 추가)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon Properties")
	FString SummonName; // 'Name'은 엔진 내부에서 자주 사용되므로 충돌 방지를 위해 'SummonName'으로 변경했습니다.

	// 소환수를 초기화하는 함수
	void InitializeSummon(const FString& InName, int32 InPS);

	void SummonBlue(FVector SpawnLocation);
	void SummonYellow(FVector SpawnLocation);
	void SummonWhite(FVector SpawnLocation);

	UFUNCTION(BlueprintCallable)
	void GetControl1();
	UFUNCTION(BlueprintCallable)
	void GetControl2();
	UFUNCTION(BlueprintCallable)
	void GetControl3();

	// 소환된 폰의 포인터를 저장할 전역/멤버 변수 (추가)
    // 이 변수들은 AMyPlayableSummon::SummonBlue 등에서 스폰된 폰의 포인터를 저장하여
    // 나중에 GetControl 함수에서 접근할 수 있도록 합니다.
    // AMyPlayableSummon 클래스의 멤버 변수로 선언하는 것이 더 좋습니다.
	UPROPERTY(BlueprintReadWrite)
	APawn* SpawnedPawn1 = nullptr; // PS=1 에 의해 소환된 폰
	UPROPERTY(BlueprintReadWrite)
	APawn* SpawnedPawn2 = nullptr; // PS=2 에 의해 소환된 폰
	UPROPERTY(BlueprintReadWrite)
	APawn* SpawnedPawn3 = nullptr; // PS=3 에 의해 소환된 폰

	UPROPERTY(EditDefaultsOnly, Category = "Summon Properties")
	TSubclassOf<APawn> BluePlayableBPClass;

	UPROPERTY(EditDefaultsOnly, Category = "Summon Properties")
	TSubclassOf<APawn> YellowPlayableBPClass;

	UPROPERTY(EditDefaultsOnly, Category = "Summon Properties")
	TSubclassOf<APawn> WhitePlayableBPClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UMyBattleFieldWidget> MyBattleFieldWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon Spawns")
	TSubclassOf<APawn> BP_Playable_White_Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon Spawns")
	TSubclassOf<APawn> BP_Playable_Yellow_Class;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon Spawns")
	TSubclassOf<APawn> BP_Playable_Blue_Class;
};
