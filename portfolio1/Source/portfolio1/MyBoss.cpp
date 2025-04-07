// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBoss.h"
#include "NavigationSystem.h"
#include "Kismet/KismetMathLibrary.h"

AMyBoss::AMyBoss()
{
	PrimaryActorTick.bCanEverTick = true;
}

void AMyBoss::BeginPlay()
{
	Super::BeginPlay();

	SetNewRandomTarget();
}

void AMyBoss::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector currentLocation = GetActorLocation();
	FVector direction = (_targetLocation - currentLocation).GetSafeNormal();

	// 라인 트레이스로 바닥 감지
	FHitResult HitResult;
	FVector TraceStart = currentLocation + FVector(0, 0, 50.0f);     // 약간 위에서 시작
	FVector TraceEnd = TraceStart - FVector(0, 0, 1000.0f);          // 아래로 쏘기

	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	float floatHeight = 1000.0f; // 바닥에서 이만큼 띄우기
	float targetZ = currentLocation.Z;

	if (GetWorld()->LineTraceSingleByChannel(HitResult, TraceStart, TraceEnd, ECC_Visibility, Params))
	{
		targetZ = HitResult.ImpactPoint.Z + floatHeight;
	}

	// 이동 적용 (XZ 보간)
	FVector newLocation = currentLocation + direction * _moveSpeed * DeltaTime;
	newLocation.Z = FMath::FInterpTo(currentLocation.Z, targetZ, DeltaTime, 5.0f); // 부드러운 Z 높이 보정

	SetActorLocation(newLocation);

	// 목표 도달 여부 체크 (XY 거리만 비교)
	if (FVector::DistXY(currentLocation, _targetLocation) < _acceptanceRadius)
	{
		SetNewRandomTarget();
	}
}

void AMyBoss::SetNewRandomTarget()
{
	// Scene2 중심 기준으로 설정
	FVector center = FVector(2800.f, -800.f, 20.f); // 필요시 정확한 Scene2 중심 좌표로 수정
	float radius = 800.f;

	UNavigationSystemV1* navSys = UNavigationSystemV1::GetCurrent(GetWorld());
	FNavLocation randomPoint;
	if (navSys && navSys->GetRandomPointInNavigableRadius(center, radius, randomPoint))
	{
		_targetLocation = randomPoint.Location;
	}
}
