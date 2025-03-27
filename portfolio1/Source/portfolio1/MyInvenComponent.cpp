// Fill out your copyright notice in the Description page of Project Settings.


#include "MyInvenComponent.h"

// Sets default values for this component's properties
UMyInvenComponent::UMyInvenComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	_items.SetNum(9);
}


// Called when the game starts
void UMyInvenComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMyInvenComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMyInvenComponent::AddItem(int32 itemID, MyItemType type)
{
	FMyItemInfo info;
	info.itemId = itemID;
	info.type = type;

	if (_items.Num() >= 9)
		return;

	_items.Add(info);
}

FMyItemInfo UMyInvenComponent::DropItem()
{
	return FMyItemInfo();
}

FMyItemInfo UMyInvenComponent::DropItem(int32 index)
{
	return FMyItemInfo();
}

