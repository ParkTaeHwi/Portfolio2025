// Fill out your copyright notice in the Description page of Project Settings.


#include "MyAIController.h"

#include "NavigationSystem.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

AMyAIController::AMyAIController()
{
}

void AMyAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	UBlackboardComponent* temp = Blackboard;
	if (UseBlackboard(_blackBoard, temp))
	{
		if (RunBehaviorTree(_behaviorTree))
		{

		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("BT Faild"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("BB Faild"));
	}
}

void AMyAIController::OnUnPossess()
{
	Super::OnUnPossess();
}

void AMyAIController::RandMove()
{
	auto curPawn = GetPawn();

	if (curPawn->IsValidLowLevel() == false)
		return;

	auto navMesh = UNavigationSystemV1::GetNavigationSystem(GetWorld());

	if (navMesh->IsValidLowLevel() == false)
		return;

	FNavLocation randLocation;
	FVector pawnLocation = curPawn->GetActorLocation();

	if (navMesh->GetRandomPointInNavigableRadius(pawnLocation, 300.0f, randLocation))
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(this, randLocation.Location);
	}
}
