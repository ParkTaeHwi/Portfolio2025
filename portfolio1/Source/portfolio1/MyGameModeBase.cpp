// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyCharacter.h"
#include "Kismet/GameplayStatics.h"

AMyGameModeBase::AMyGameModeBase()
{
	static ConstructorHelpers::FClassFinder<AMyCharacter> pawn	// static -> 생성자가 여러번 호출되어도 한 번만 실행하게 해주는 역할
	(TEXT("/Game/BluePrint/BP_MyCharacter.BP_MyCharacter_C"));	// BluePrint Class Type을 가져올 때 _C를 붙혀야함

	if (pawn.Succeeded())	// 블루프린트 클래스를 찾았다면
	{
		DefaultPawnClass = pawn.Class;	// 찾은 블루프린트 클래스를 디폴트로 설정
	}
}

void AMyGameModeBase::AddEnemy()
{
	_enemyCount++;
	UE_LOG(LogTemp, Warning, TEXT("Enemy Spawned! Count: %d"), _enemyCount);
}

void AMyGameModeBase::OnEnemyDie()
{
	_enemyCount--;

	UE_LOG(LogTemp, Warning, TEXT("Enemy died! Remaining: %d"), _enemyCount);

	if (_enemyCount <= 0)
	{
		ACharacter* player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
		if (player)
		{
			FVector nextPos = FVector(-727.601198f, -4706.633046f, 168.431547f);
			player->SetActorLocation(nextPos);
			UE_LOG(LogTemp, Warning, TEXT("Player moved to next stage!"));
		}
	}
}
