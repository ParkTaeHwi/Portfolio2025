// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPlayableSummon.h"
#include "MyGameInstance.h" // UMyGameInstance 사용을 위해 포함
#include <Kismet/GameplayStatics.h> // UGameplayStatics 사용을 위해 포함
#include "Engine/World.h" // GetWorld()와 SpawnActor를 위해 포함
#include "UObject/ConstructorHelpers.h" // ConstructorHelpers::FClassFinder를 위해 포함

// 블루프린트 클래스 레퍼런스를 저장할 변수들
TSubclassOf<APawn> BluePlayableBPClass;
TSubclassOf<APawn> YellowPlayableBPClass;
TSubclassOf<APawn> WhitePlayableBPClass;


// Sets default values
AMyPlayableSummon::AMyPlayableSummon()
{
	PrimaryActorTick.bCanEverTick = true;
	SummonName = TEXT("Default");

	// --- 생성자에서 블루프린트 클래스 레퍼런스 로드 ---
	static ConstructorHelpers::FClassFinder<APawn> BlueBPClassFinder(TEXT("/Game/BP/Playable/BP_Playable_Blue.BP_Playable_Blue_C"));
	if (BlueBPClassFinder.Succeeded())
	{
		BluePlayableBPClass = BlueBPClassFinder.Class;
		UE_LOG(LogTemp, Log, TEXT("BP_Playable_Blue_C loaded successfully."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load BP_Playable_Blue_C blueprint class!"));
	}

	static ConstructorHelpers::FClassFinder<APawn> YellowBPClassFinder(TEXT("/Game/BP/Playable/BP_Playable_Yellow.BP_Playable_Yellow_C"));
	if (YellowBPClassFinder.Succeeded())
	{
		YellowPlayableBPClass = YellowBPClassFinder.Class;
		UE_LOG(LogTemp, Log, TEXT("BP_Playable_Yellow_C loaded successfully."));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load BP_Playable_Yellow_C blueprint class!"));
	}

	static ConstructorHelpers::FClassFinder<APawn> WhiteBPClassFinder(TEXT("/Game/BP/Playable/BP_Playable_White.BP_Playable_White_C"));
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

	UMyGameInstance* GI = Cast<UMyGameInstance>(UGameplayStatics::GetGameInstance(GetWorld()));
	if (GI && GI->SelectedPartyTextureNames.IsValidIndex(PS - 1))
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
	// 소환될 위치를 직접 지정합니다. (예시: 이 액터의 위치에서 z축으로 100 유닛 위)
	// 필요에 따라 마우스 커서 위치, 특정 컴포넌트 위치 등 다양한 방식으로 계산할 수 있습니다.
	FVector CurrentSpawnLocation = GetActorLocation() + FVector(0.0f, 0.0f, 100.0f);

	if (PS == 1 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::Summon,%s"), *SummonName);
		SummonBlue(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else if (PS == 1 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::Summon,%s"), *SummonName);
		SummonYellow(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else if (PS == 1 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::Summon,%s"), *SummonName);
		SummonWhite(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=1//AMyPlayableSummon::PalyableSummon1::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::PalyableSummon2()
{
	// 소환될 위치를 직접 지정합니다. (예시: 이 액터의 위치에서 y축으로 200 유닛 떨어진 곳)
	FVector CurrentSpawnLocation = GetActorLocation() + FVector(0.0f, 200.0f, 100.0f);

	if (PS == 2 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::Summon,%s"), *SummonName);
		SummonBlue(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else if (PS == 2 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::Summon,%s"), *SummonName);
		SummonYellow(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else if (PS == 2 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::Summon,%s"), *SummonName);
		SummonWhite(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=2//AMyPlayableSummon::PalyableSummon2::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::PalyableSummon3()
{
	// 소환될 위치를 직접 지정합니다. (예시: 월드 원점)
	FVector CurrentSpawnLocation = FVector(0.0f, 300.0f, 100.0f);

	if (PS == 3 && SummonName == TEXT("Blue_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::Summon,%s"), *SummonName);
		SummonBlue(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else if (PS == 3 && SummonName == TEXT("Yellow_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::Summon,%s"), *SummonName);
		SummonYellow(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else if (PS == 3 && SummonName == TEXT("White_Pick"))
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::Summon,%s"), *SummonName);
		SummonWhite(CurrentSpawnLocation); // 계산된 위치 전달
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("PS=3//AMyPlayableSummon::PalyableSummon3::SummonFail, Current SummonName:%s"), *SummonName);
	}
}

void AMyPlayableSummon::InitializeSummon(const FString& InName, int32 InPS)
{
	SummonName = InName;
	PS = InPS;
	UE_LOG(LogTemp, Warning, TEXT("AMyPlayableSummon::InitializeSummon: Initialized with Name: %s, PS: %d"), *SummonName, PS);
}

// --- 블루프린트 소환 함수 구현 (SpawnLocation 매개변수 사용) ---
void AMyPlayableSummon::SummonBlue(FVector SpawnLocation)
{
	if (BluePlayableBPClass)
	{
		FRotator SpawnRotation = GetActorRotation(); // 현재 액터의 회전 사용
		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* SpawnedBluePawn = GetWorld()->SpawnActor<APawn>(BluePlayableBPClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedBluePawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("BP_Playable_Blue spawned at %s"), *SpawnLocation.ToString());
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

		APawn* SpawnedYellowPawn = GetWorld()->SpawnActor<APawn>(YellowPlayableBPClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedYellowPawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("BP_Playable_Yellow spawned at %s"), *SpawnLocation.ToString());
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

		APawn* SpawnedWhitePawn = GetWorld()->SpawnActor<APawn>(WhitePlayableBPClass, SpawnLocation, SpawnRotation, SpawnParams);
		if (SpawnedWhitePawn)
		{
			UE_LOG(LogTemp, Warning, TEXT("BP_Playable_White spawned at %s"), *SpawnLocation.ToString());
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