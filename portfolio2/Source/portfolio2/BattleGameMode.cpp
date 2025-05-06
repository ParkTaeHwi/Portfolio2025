// Fill out your copyright notice in the Description page of Project Settings.


#include "BattleGameMode.h"

#include "Blueprint/UserWidget.h"
#include "BoardManager.h"
#include "Camera/CameraActor.h"
#include <Kismet/GameplayStatics.h>

ABattleGameMode::ABattleGameMode()
{
	DefaultPawnClass = nullptr;
}

void ABattleGameMode::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("BattleGameMode BeginPlay!"));

	DefaultPawnClass = nullptr;

	if (BattleUIClass)
	{
		BattleUI = CreateWidget<UUserWidget>(GetWorld(), BattleUIClass);
		if (BattleUI)
		{
			BattleUI->AddToViewport();
		}
	}

	if (BoardManagerClass)
	{
		FActorSpawnParameters SpawnParams;
		GetWorld()->SpawnActor<ABoardManager>(BoardManagerClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams); // 타일 매니저 스폰
	}

	APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	if (PC)
	{
		TArray<AActor*> FoundCameras;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundCameras);

		for (AActor* Cam : FoundCameras)
		{
			if (Cam->GetName().Contains(TEXT("CameraActor"))) // 이름으로 구분
			{
				PC->SetViewTargetWithBlend(Cam, 0.f); // 즉시 전환
				break;
			}
		}
	}
}
