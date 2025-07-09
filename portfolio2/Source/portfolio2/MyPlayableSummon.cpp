// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayableSummon.h"
#include "MyGameInstance.h"
#include <Kismet/GameplayStatics.h>
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PlayerController.h" // APlayerController를 위해 포함
#include "MyBattleFieldWidget.h"

// Sets default values
AMyPlayableSummon::AMyPlayableSummon()
{
	PrimaryActorTick.bCanEverTick = true;
	SummonName = TEXT("Default");

	// --- 생성자에서 블루프린트 클래스 레퍼런스 로드 ---
	// 더 이상 static이 필요 없습니다. 멤버 변수에 직접 할당합니다.
	ConstructorHelpers::FClassFinder<APawn> BlueBPClassFinder(TEXT("/Game/BP/Playable/BP_Playable_Blue.BP_Playable_Blue_C"));
	if (BlueBPClassFinder.Succeeded())
	{
		BluePlayableBPClass = BlueBPClassFinder.Class;
		UE_LOG(LogTemp, Log, TEXT("BP_Playable_Blue_C loaded successfully."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load BP_Playable_Blue_C blueprint class!"));
	}

	ConstructorHelpers::FClassFinder<APawn> YellowBPClassFinder(TEXT("/Game/BP/Playable/BP_Playable_Yellow.BP_Playable_Yellow_C"));
	if (YellowBPClassFinder.Succeeded())
	{
		YellowPlayableBPClass = YellowBPClassFinder.Class;
		UE_LOG(LogTemp, Log, TEXT("BP_Playable_Yellow_C loaded successfully."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load BP_Playable_Yellow_C blueprint class!"));
	}

	ConstructorHelpers::FClassFinder<APawn> WhiteBPClassFinder(TEXT("/Game/BP/Playable/BP_Playable_White.BP_Playable_White_C"));
	if (WhiteBPClassFinder.Succeeded())
	{
		WhitePlayableBPClass = WhiteBPClassFinder.Class;
		UE_LOG(LogTemp, Log, TEXT("BP_Playable_White_C loaded successfully."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load BP_Playable_White_C blueprint class!"));
	}
}

// Called when the game starts or when spawned
void AMyPlayableSummon::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::BeginPlay() called. This actor is: %s"), *GetName());

	if (BP_Playable_White_Class) // Outer if
	{
		SpawnedPawn1 = GetWorld()->SpawnActor<APawn>(BP_Playable_White_Class, FVector(0, 0, 100), FRotator::ZeroRotator);
		if (SpawnedPawn1) // Inner if
		{
			UE_LOG(LogTemp, Warning, TEXT("SpawnedPawn1 (White) successfully: %s"), *SpawnedPawn1->GetName());
		}
		else // Inner else (SpawnedPawn1 실패)
		{ // <--- 여기에 여는 중괄호 { 추가
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn SpawnedPawn1 (White)."));
		} // <--- 여기에 닫는 중괄호 } 추가
	}
	else // Outer else (BP_Playable_White_Class가 NULL인 경우)
	{
		UE_LOG(LogTemp, Error, TEXT("BP_Playable_White_Class is NOT set in Blueprint for %s."), *GetName());
	}

	// 이하 SpawnedPawn2, SpawnedPawn3 에 대해서도 동일하게 적용
	if (BP_Playable_Yellow_Class) {
		SpawnedPawn2 = GetWorld()->SpawnActor<APawn>(BP_Playable_Yellow_Class, FVector(0, 200, 100), FRotator::ZeroRotator);
		if (SpawnedPawn2)
		{
			UE_LOG(LogTemp, Warning, TEXT("SpawnedPawn2 (Yellow) successfully: %s"), *SpawnedPawn2->GetName());
		}
		else // Inner else (SpawnedPawn2 실패)
		{ // <--- 여기에 여는 중괄호 { 추가
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn SpawnedPawn1 (Yellow)."));
		} // <--- 여기에 닫는 중괄호 } 추가
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("BP_Playable_Yellow_Class is NOT set in Blueprint for %s."), *GetName());
	}

	if (BP_Playable_Blue_Class) {
		SpawnedPawn3 = GetWorld()->SpawnActor<APawn>(BP_Playable_Blue_Class, FVector(0, 300, 100), FRotator::ZeroRotator);
		if (SpawnedPawn3)
		{
			UE_LOG(LogTemp, Warning, TEXT("SpawnedPawn3 (Blue) successfully: %s"), *SpawnedPawn3->GetName());
		}
		else
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn SpawnedPawn3 (Blue)."));
	}
	else {
		UE_LOG(LogTemp, Error, TEXT("BP_Playable_Blue_Class is NOT set in Blueprint for %s."), *GetName());
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

void AMyPlayableSummon::PlayableSummon1()
{
	FVector CurrentSpawnLocation = GetActorLocation() + FVector(0.0f, 0.0f, 100.0f);

	if (PS == 1 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PlayableSummon::Summon,%s"), *SummonName);
		SummonBlue(CurrentSpawnLocation);
	}
	else if (PS == 1 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PlayableSummon::Summon,%s"), *SummonName);
		SummonYellow(CurrentSpawnLocation);
	}
	else if (PS == 1 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PlayableSummon::Summon,%s"), *SummonName);
		SummonWhite(CurrentSpawnLocation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PlayableSummon::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::PlayableSummon2()
{
	FVector CurrentSpawnLocation = GetActorLocation() + FVector(0.0f, 200.0f, 100.0f);

	if (PS == 2 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PlayableSummon2::Summon,%s"), *SummonName);
		SummonBlue(CurrentSpawnLocation);
	}
	else if (PS == 2 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PlayableSummon2::Summon,%s"), *SummonName);
		SummonYellow(CurrentSpawnLocation);
	}
	else if (PS == 2 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PlayableSummon2::Summon,%s"), *SummonName);
		SummonWhite(CurrentSpawnLocation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PlayableSummon2::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::PlayableSummon3()
{
	FVector CurrentSpawnLocation = FVector(0.0f, 300.0f, 100.0f);

	if (PS == 3 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PlayableSummon3::Summon,%s"), *SummonName);
		SummonBlue(CurrentSpawnLocation);
	}
	else if (PS == 3 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PlayableSummon3::Summon,%s"), *SummonName);
		SummonYellow(CurrentSpawnLocation);
	}
	else if (PS == 3 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PlayableSummon3::Summon,%s"), *SummonName);
		SummonWhite(CurrentSpawnLocation);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PlayableSummon3::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::InitializeSummon(const FString& InName, int32 InPS)
{
	SummonName = InName;
	PS = InPS;
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::InitializeSummon: Initialized with Name: %s, PS: %d"), *SummonName, PS);
}

void AMyPlayableSummon::SummonBlue(FVector SpawnLocation)
{
	if (BluePlayableBPClass)
	{
		FRotator SpawnRotation = GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(BluePlayableBPClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("BP_Playable_Blue spawned at %s"), *SpawnLocation.ToString());
			// 스폰된 폰을 해당 전역/멤버 변수에 저장 (중요!)
			if (PS == 1) SpawnedPawn1 = SpawnedPawn;
			else if (PS == 2) SpawnedPawn2 = SpawnedPawn;
			else if (PS == 3) SpawnedPawn3 = SpawnedPawn;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn BP_Playable_Blue!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("BluePlayableBPClass is not loaded! Cannot spawn BP_Playable_Blue."));
	}
}

void AMyPlayableSummon::SummonYellow(FVector SpawnLocation)
{
	if (YellowPlayableBPClass)
	{
		FRotator SpawnRotation = GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(YellowPlayableBPClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("BP_Playable_Yellow spawned at %s"), *SpawnLocation.ToString());
			// 스폰된 폰을 해당 전역/멤버 변수에 저장 (중요!)
			if (PS == 1) SpawnedPawn1 = SpawnedPawn;
			else if (PS == 2) SpawnedPawn2 = SpawnedPawn;
			else if (PS == 3) SpawnedPawn3 = SpawnedPawn;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn BP_Playable_Yellow!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("YellowPlayableBPClass is not loaded! Cannot spawn BP_Playable_Yellow."));
	}
}

void AMyPlayableSummon::SummonWhite(FVector SpawnLocation)
{
	if (WhitePlayableBPClass)
	{
		FRotator SpawnRotation = GetActorRotation();
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* SpawnedPawn = GetWorld()->SpawnActor<APawn>(WhitePlayableBPClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("BP_Playable_White spawned at %s"), *SpawnLocation.ToString());
			// 스폰된 폰을 해당 전역/멤버 변수에 저장 (중요!)
			if (PS == 1) SpawnedPawn1 = SpawnedPawn;
			else if (PS == 2) SpawnedPawn2 = SpawnedPawn;
			else if (PS == 3) SpawnedPawn3 = SpawnedPawn;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Failed to spawn BP_Playable_White!"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("WhitePlayableBPClass is not loaded! Cannot spawn BP_Playable_White."));
	}
}

// --- 플레이어 컨트롤을 폰으로 옮기는 함수 구현 ---
void AMyPlayableSummon::GetControl1()
{
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::GetControl1: Attempting to possess Pawn 1."));
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0); // 첫 번째 플레이어 컨트롤러 가져오기

	if (PlayerController)
	{
		if (SpawnedPawn1)
		{
			PlayerController->Possess(SpawnedPawn1); // SpawnedPawn1으로 컨트롤 옮기기
			UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::GetControl1: Successfully possessed Pawn 1 (%s)."), *SpawnedPawn1->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AMyPlayableSummon::GetControl1: Pawn 1 (SpawnedPawn1) is NULL. Cannot possess."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyPlayableSummon::GetControl1: PlayerController is NULL."));
	}
}

void AMyPlayableSummon::GetControl2()
{
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::GetControl2: Attempting to possess Pawn 2."));
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0); // 첫 번째 플레이어 컨트롤러 가져오기

	if (PlayerController)
	{
		if (SpawnedPawn2)
		{
			PlayerController->Possess(SpawnedPawn2); // SpawnedPawn2으로 컨트롤 옮기기
			UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::GetControl2: Successfully possessed Pawn 2 (%s)."), *SpawnedPawn2->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AMyPlayableSummon::GetControl2: Pawn 2 (SpawnedPawn2) is NULL. Cannot possess."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyPlayableSummon::GetControl2: PlayerController is NULL."));
	}
}

void AMyPlayableSummon::GetControl3()
{
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::GetControl3: Attempting to possess Pawn 3."));
	APlayerController* PlayerController = UGameplayStatics::GetPlayerController(GetWorld(), 0); // 첫 번째 플레이어 컨트롤러 가져오기

	if (PlayerController)
	{
		if (SpawnedPawn3)
		{
			PlayerController->Possess(SpawnedPawn3); // SpawnedPawn3으로 컨트롤 옮기기
			UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::GetControl3: Successfully possessed Pawn 3 (%s)."), *SpawnedPawn3->GetName());
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("AMyPlayableSummon::GetControl3: Pawn 3 (SpawnedPawn3) is NULL. Cannot possess."));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("AMyPlayableSummon::GetControl3: PlayerController is NULL."));
	}
}