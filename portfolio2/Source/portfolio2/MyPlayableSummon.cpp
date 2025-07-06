// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayableSummon.h"
#include "MyGameInstance.h" // UMyGameInstance 사용을 위해 포함
#include <Kismet/GameplayStatics.h> // UGameplayStatics 사용을 위해 포함

// Sets default values
AMyPlayableSummon::AMyPlayableSummon()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// PS의 기본값은 헤더에서 1로 설정되었고, 여기선 건드리지 않습니다.
	// SummonName의 기본값 설정 (명시적으로 초기화)
	SummonName = TEXT("Default");
}

// Called when the game starts or when spawned
void AMyPlayableSummon::BeginPlay()
{
	Super::BeginPlay();

	// **중요 수정:**
	// 이 BeginPlay 로직은 AMyPlayableSummon 액터가 스폰될 때
	// UMyGameInstance의 모든 SelectedPartyTextureNames를 순회하며
	// 이 액터의 PS와 SummonName을 마지막 값으로 덮어쓰는 문제가 있었습니다.
	// 일반적으로 각 AMyPlayableSummon 인스턴스는 특정 하나의 소환수를 대표해야 합니다.
	// 따라서 이 로직은 주석 처리하거나, 액터를 스폰하는 시점에 InitializeSummon을
	// 호출하여 명시적으로 초기화하는 방식으로 변경하는 것이 좋습니다.
	// 원본 함수를 최대한 유지하기 위해 주석 처리된 상태로 둡니다.

	//UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	//if (GI)
	//{
	//	// 이 액터의 PS와 SummonName이 게임 인스턴스에 있는 마지막 선택된 소환수로 설정됩니다.
	//	// 만약 각 AMyPlayableSummon이 파티의 특정 위치(1번, 2번 등)를 나타낸다면,
	//	// 이 방식은 적절하지 않습니다.
	//	for (const FString& TextureName : GI->SelectedPartyTextureNames)
	//	{
	//		// UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::BeginPlay::Carried Texture: %s"), *TextureName);
	//		// PS++; // 이 PS 증가는 하나의 액터에 대해 PS 값을 계속 증가시켜서 논리 오류를 유발할 수 있습니다.
	//		// SummonName = TextureName; // 마지막 값으로 덮어쓰기
	//	}
	//}
	// 이 액터의 PS와 SummonName은 Spawn 시 InitializeSummon으로 명시적으로 설정되는 것이 좋습니다.
	// 또는 이 액터가 GameInstance에서 자신의 PS에 해당하는 SummonName을 가져와야 합니다.

	// 예시: PS 값에 따라 GameInstance에서 해당하는 SummonName을 가져오는 로직 (선택 사항)
	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI && GI->SelectedPartyTextureNames.IsValidIndex(PS - 1)) // PS는 1부터 시작하므로 인덱스는 PS-1
	{
		SummonName = GI->SelectedPartyTextureNames[PS - 1];
		UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::BeginPlay: Initialized SummonName '%s' for PS %d from GameInstance."), *SummonName, PS);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::BeginPlay: Could not find summon data for PS %d in GameInstance, using default '%s'."), PS, *SummonName);
	}
}

// Called every frame
void AMyPlayableSummon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyPlayableSummon::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMyPlayableSummon::PalyableSummon1()
{
	// 'Name'을 'SummonName'으로 변경하여 선언된 변수를 사용
	if (PS == 1 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::Summon,%s"), *SummonName);
	}
	else if (PS == 1 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::Summon,%s"), *SummonName);
	}
	else if (PS == 1 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::Summon,%s"), *SummonName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::PalyableSummon2()
{
	// 'Name'을 'SummonName'으로 변경하여 선언된 변수를 사용
	if (PS == 2 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::Summon,%s"), *SummonName);
	}
	else if (PS == 2 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::Summon,%s"), *SummonName);
	}
	else if (PS == 2 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::Summon,%s"), *SummonName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::PalyableSummon3()
{
	// 'Name'을 'SummonName'으로 변경하여 선언된 변수를 사용
	if (PS == 3 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::Summon,%s"), *SummonName);
	}
	else if (PS == 3 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::Summon,%s"), *SummonName);
	}
	else if (PS == 3 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::Summon,%s"), *SummonName);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::InitializeSummon(const FString& InName, int32 InPS)
{
	// 'Name' 대신 선언된 멤버 변수 'SummonName' 사용
	SummonName = InName;
	PS = InPS;
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::InitializeSummon: Initialized with Name: %s, PS: %d"), *SummonName, PS);
}