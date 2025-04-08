// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyEnemy.h"
#include "MyBoss.generated.h"

class UCapsuleComponent;

/**
 *
 */
UCLASS()
class PORTFOLIO1_API AMyBoss : public AMyEnemy
{
	GENERATED_BODY()

public:
	AMyBoss();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

	void DetectPlayer();

	bool IsDead();

	UFUNCTION()
	void SpawnEnemy();
	UFUNCTION()
	void OnSpawnedEnemyDestroyed(AActor* DestroyedActor);

protected:
	// 이동 관련
	FVector _targetLocation;
	float _moveSpeed = 200.f;
	float _acceptanceRadius = 100.f;

	// 공격 관련
	void Attack_Hit(); // MyCharacter에서 가져온 캡슐 충돌 기반 공격
	bool _isAttacking = false;
	float _attackRange = 200.0f; // 공격 거리
	float _attackRadius = 50.0f; // 캡슐 굵기
	float _attackHeightOffset = 50.0f;

	// 탐지 범위
	UPROPERTY(VisibleAnywhere, Category = "Boss|Detect")
	UCapsuleComponent* _detectCapsule;

	// 공격 타이머
	FTimerHandle _attackTimerHandle;
	float _attackInterval = 2.0f; // 공격 간격

	// 함수
	void SetNewRandomTarget();
	void TryAttackPlayer();

	UFUNCTION()
	void OnPlayerDetected(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	// 플레이어 추적용
	UPROPERTY()
	class AMyCharacter* _targetPlayer;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	TSubclassOf<AMyEnemy> EnemyToSpawn; // 블루프린트로 설정

	UPROPERTY(EditAnywhere, Category = "Spawn")
	float SpawnInterval = 5.0f; // 초마다

	FTimerHandle SpawnTimerHandle;

	UPROPERTY(EditAnywhere, Category = "Spawn")
	int32 MaxSpawnCount = 10;

	int32 CurrentSpawnCount = 0;
};
