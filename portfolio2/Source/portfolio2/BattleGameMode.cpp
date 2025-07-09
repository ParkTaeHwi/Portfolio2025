// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleGameMode.h"

#include "Blueprint/UserWidget.h"
#include "BoardManager.h"
#include "Camera/CameraActor.h"
#include <Kismet/GameplayStatics.h>
#include "MyGameInstance.h"
#include "MyPlayableSummon.h"

ABattleGameMode::ABattleGameMode()
{
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP/BP_MyPlayer"));
	if (PlayerPawnBPClass.Succeeded())
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	if (DefaultPawnClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is set: %s"), *DefaultPawnClass->GetName());
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is NULL!"));
	}
}

void ABattleGameMode::BeginPlay()
{
    Super::BeginPlay();

    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (!PC)
        return;

    PC->SetInputMode(FInputModeUIOnly());
    PC->bShowMouseCursor = true;

    // 1. Battle UI 스폰 (기존 코드 유지)
    if (BattleUIClass) // GameMode.h에 UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UUserWidget> BattleUIClass; 가 선언되어 있어야 합니다.
    {
        BattleUI = CreateWidget<UUserWidget>(GetWorld(), BattleUIClass);
        if (BattleUI)
        {
            BattleUI->AddToViewport();
        }
    }

    // 2. BoardManager 스폰 (기존 코드 유지)
    if (BoardManagerClass) // GameMode.h에 UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ABoardManager> BoardManagerClass; 가 선언되어 있어야 합니다.
    {
        FActorSpawnParameters SpawnParams;
        GetWorld()->SpawnActor<ABoardManager>(BoardManagerClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
    }

    // GameInstance에서 카드 정보 로드 (기존 코드 유지)
    UMyGameInstance* MyGI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(this));
    if (!MyGI) return;

    const TMap<FString, int32>& Map = MyGI->GetCardCountMap();

    TArray<FString> AllTypes = { "B", "Y", "W" };
    for (const FString& Type : AllTypes)
    {
        int32 Count = 0;
        if (const int32* Found = Map.Find(Type))
        {
            Count = *Found;
        }

        UE_LOG(LogTemp, Warning, TEXT("ABattleGameMode::BeginPlay::Card %s: %d"), *Type, Count);
    }

    // 3. AMyPlayableSummon (소환 관리자) 단 하나만 스폰
    // ABattleGameMode.h 에 이 변수를 추가해야 합니다:
    // UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Summon")
    // TSubclassOf<AMyPlayableSummon> MyPlayableSummonBPClass;
    // 그리고 에디터에서 여러분의 BP_MyPlayableSummon_C 를 할당해야 합니다.

    AMyPlayableSummon* SummonManager = Cast<AMyPlayableSummon>(UGameplayStatics::GetActorOfClass(GetWorld(), AMyPlayableSummon::StaticClass()));
    if (!SummonManager) // 맵에 아직 SummonManager가 없다면 (매우 중요!)
    {
        if (MyPlayableSummonBPClass) // 블루프린트 클래스가 할당되었는지 확인
        {
            // 이 곳에서 AMyPlayableSummon 인스턴스를 단 하나만 스폰합니다.
            SummonManager = GetWorld()->SpawnActor<AMyPlayableSummon>(MyPlayableSummonBPClass, FVector::ZeroVector, FRotator::ZeroRotator);
            if (SummonManager)
            {
                UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon (SummonManager) spawned successfully: %s"), *SummonManager->GetName());
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("Failed to spawn AMyPlayableSummon (SummonManager). Check MyPlayableSummonBPClass."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("MyPlayableSummonBPClass is not set in GameMode Blueprint."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon (SummonManager) already exists: %s"), *SummonManager->GetName());
    }

    // 이제 AMyPlayableSummon의 BeginPlay() 함수에서 모든 파티원 폰을 스폰하도록 합니다.
    // 기존의 이 for 루프는 AMyPlayableSummon::BeginPlay() 내부로 옮겨집니다.
    // (MyPlayableSummon의 BeginPlay는 MyPlayableSummonBPClass에 해당되는 블루프린트를 의미합니다.)
    // AMyPlayableSummon이 초기화되고 폰들을 스폰하는 로직이 이제 AMyPlayableSummon의 책임이 됩니다.
}
