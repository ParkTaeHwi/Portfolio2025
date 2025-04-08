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
    _enemyKillCount++;

    UE_LOG(LogTemp, Warning, TEXT("Enemy died! Remaining: %d, Killed: %d"), _enemyCount, _enemyKillCount);

    if (!_bStageMoved && _enemyKillCount >= _requiredKills)
    {
        //  타이머로 1초 후 이동 처리
        GetWorld()->GetTimerManager().SetTimer(
            MoveTimerHandle, // FTimerHandle 멤버 변수
            this,
            &AMyGameModeBase::MovePlayerToNextStage, // 실행할 함수
            3.0f, // 1초 후 실행
            false // 반복 X
        );

        _bStageMoved = true;
    }
}

void AMyGameModeBase::MovePlayerToNextStage()
{
    ACharacter* player = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    if (player)
    {
        FVector nextPos = FVector(2803.533433f, -882.348315f, 19.013312f);
        player->SetActorLocation(nextPos);

        UE_LOG(LogTemp, Warning, TEXT("Player moved to next stage!"));
    }
}
