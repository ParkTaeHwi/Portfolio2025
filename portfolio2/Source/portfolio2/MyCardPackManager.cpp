// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCardPackManager.h"

// Sets default values
AMyCardPackManager::AMyCardPackManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyCardPackManager::BeginPlay()
{
	Super::BeginPlay();
	
	if (!CardPackClass) return;

	UWorld* World = GetWorld();
	if (!World) return;

	int32 CardPackIndex = 0; // 카드팩 인덱스 시작

	// 카드팩 배치 (하나의 열에 카드팩들을 세로로 배치)
	for (int32 i = 0; i < CardPackCount; ++i)
	{
		// 카드팩의 위치 계산 (Y축에만 간격을 주고 X는 동일)
		FVector SpawnLocation = GetActorLocation();
		SpawnLocation.Y += i * CardPackSpacing;

		FActorSpawnParameters Params;
		AMyCardPack* NewCardPack = World->SpawnActor<AMyCardPack>(CardPackClass, SpawnLocation, FRotator::ZeroRotator, Params);
		if (NewCardPack)
		{
			// 카드팩 인덱스 설정
			NewCardPack->SetCardPackIndex(CardPackIndex);

			// 스케일 및 회전 설정 (이 부분은 필요에 맞게 수정 가능)
			NewCardPack->SetActorScale3D(FVector(0.1f, 1.6f, 3.0f));
			NewCardPack->SetActorRotation(FRotator(0.f, -10.f, 0.f));
		}

		++CardPackIndex; // 카드팩 인덱스 증가
	}
}

// Called every frame
void AMyCardPackManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

