// Fill out your copyright notice in the Description page of Project Settings.


#include "StoreGameMode.h"

#include "Blueprint/UserWidget.h"
#include "MyCardPackManager.h"
#include "Camera/CameraActor.h"
#include <Kismet/GameplayStatics.h>

AStoreGameMode::AStoreGameMode()
{
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/BP/BP_MyPlayer"));
	//if (PlayerPawnBPClass.Succeeded())
	//{
	//	DefaultPawnClass = PlayerPawnBPClass.Class;
	//}
	//if (DefaultPawnClass)
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is set: %s"), *DefaultPawnClass->GetName());
	//}
	//else
	//{
	//	UE_LOG(LogTemp, Warning, TEXT("DefaultPawnClass is NULL!"));
	//}
	//DefaultPawnClass = nullptr;
}

void AStoreGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (StoreUIClass)
	{
		StoreUI = CreateWidget<UUserWidget>(GetWorld(), StoreUIClass);
		if (StoreUI)
		{
			StoreUI->AddToViewport();
		}
	}

	if (MyCardPackManagerClass)
	{
		FActorSpawnParameters SpawnParams;
		GetWorld()->SpawnActor<AMyCardPackManager>(MyCardPackManagerClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams); // 타일 매니저 스폰
	}

	//APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	//if (PC)
	//{
	//	TArray<AActor*> FoundCameras;
	//	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), FoundCameras);
	//
	//	for (AActor* Cam : FoundCameras)
	//	{
	//		if (Cam->GetName().Contains(TEXT("CameraActor"))) // 이름으로 구분
	//		{
	//			PC->SetViewTargetWithBlend(Cam, 0.f); // 즉시 전환
	//			break;
	//		}
	//	}
	//}
	// 카메라 액터 찾기
	TArray<AActor*> Cameras;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraActor::StaticClass(), Cameras);

	// 카메라가 정상적으로 찾아졌는지 확인하는 로그
	if (Cameras.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No CameraActors found in the level."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Found %d CameraActors in the level."), Cameras.Num());
	}

	// "CameraActor"를 포함하는 이름을 가진 카메라 찾기
	for (AActor* Cam : Cameras)
	{
		if (Cam)
		{
			UE_LOG(LogTemp, Warning, TEXT("Checking camera: %s"), *Cam->GetName());

			if (Cam->GetName().Contains(TEXT("CameraActor"))) // 이름에 "CameraActor"가 포함되면
			{
				// 카메라를 바로 플레이어의 뷰로 설정
				APlayerController* PC = GetWorld()->GetFirstPlayerController();
				if (PC)
				{
					UE_LOG(LogTemp, Warning, TEXT("Setting view target to CameraActor: %s"), *Cam->GetName());
					PC->SetViewTarget(Cam); // 즉시 해당 카메라로 전환
				}
				else
				{
					UE_LOG(LogTemp, Warning, TEXT("PlayerController is NULL!"));
				}
				break;
			}
		}
	}
}
