// Fill out your copyright notice in the Description page of Project Settings.


#include "BT_Service_FindTarget.h"
#include "MyAIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"

#include "DrawDebugHelpers.h"
#include "Engine/OverlapResult.h"

#include "MyPlayer.h"

void UBT_Service_FindTarget::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	auto currentPawn = OwnerComp.GetAIOwner()->GetPawn();
	if (currentPawn->IsValidLowLevel() == false)
		return;

	FVector pos = currentPawn->GetActorLocation();
	float sphereRadius = 300;

	TArray<FOverlapResult> overlapResults;
	FCollisionQueryParams qParams(NAME_None, false, currentPawn);

	bool result = GetWorld()->OverlapMultiByChannel(
		overlapResults,
		pos,
		FQuat::Identity,
		ECollisionChannel::ECC_GameTraceChannel2,
		FCollisionShape::MakeSphere(sphereRadius),
		qParams
	);
	
	//if (!result)
	//{
	//	OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Player")), nullptr);
	//	DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Green, false, 0.3f);
	//
	//	return;
	//}
	//else
	//{
	//	for (auto& overlapResult : overlapResults)
	//	{
	//		auto player = Cast<AMyPlayer>(overlapResult.GetActor());
	//
	//		if (player->IsValidLowLevel())
	//		{
	//			OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Player")), player);
	//			DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Red, false, 0.3f);
	//
	//			FRotator rot = (player->GetActorLocation() - currentPawn->GetActorLocation()).GetSafeNormal().Rotation();
	//			currentPawn->SetActorRotation(FMath::RInterpTo(currentPawn->GetActorRotation(), rot, DeltaSeconds, 0.5f));
	//
	//			return;
	//		}
	//	}
	//}

	if (result)
	{
		bool bPlayerDetected = false;

		for (auto& overlapResult : overlapResults)
		{
			AMyPlayer* player = Cast<AMyPlayer>(overlapResult.GetActor());
			if (player && player->IsValidLowLevel())
			{
				// 플레이어가 감지됨
				bPlayerDetected = true;
				OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Player")), player);
				DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Red, false, 0.3f);

				FRotator rot = (player->GetActorLocation() - currentPawn->GetActorLocation()).GetSafeNormal().Rotation();
				currentPawn->SetActorRotation(FMath::RInterpTo(currentPawn->GetActorRotation(), rot, DeltaSeconds, 0.5f));

				break; // 첫 번째 플레이어만 탐지하면 종료
			}
		}

		if (!bPlayerDetected)
		{
			// 플레이어가 감지되지 않았을 경우
			OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Player")), nullptr);
			DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Green, false, 0.3f);
		}
	}
	else
	{
		// 범위 밖에 있을 때 플레이어 감지 안됨
		OwnerComp.GetBlackboardComponent()->SetValueAsObject(FName(TEXT("Player")), nullptr);
		DrawDebugSphere(GetWorld(), pos, sphereRadius, 30, FColor::Green, false, 0.3f);
	}
}
