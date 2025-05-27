// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCardPack.h"

#include "MyCharacter.h"
#include "MyPlayer.h"
#include "MyPlayerController.h"
#include "MyGameInstance.h"
#include "MyOpenCardWidget.h"
#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AMyCardPack::AMyCardPack()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// Mesh 생성 및 루트로 설정
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	//RootComponent = CubeMesh;

	_collider = CreateDefaultSubobject<UCapsuleComponent>("Collider");
	CubeMesh->SetupAttachment(_collider);
	RootComponent = _collider;

	// 기본 상태
	Row = 0;
	Column = 0;
	bIsBlocked = false;
}

void AMyCardPack::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_collider->OnComponentBeginOverlap.AddDynamic(this, &AMyCardPack::OnOverlap);	// 카드팩 플레이어 충돌
}

// Called when the game starts or when spawned
void AMyCardPack::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCardPack::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyCardPack::OnOverlap(
	UPrimitiveComponent* OverlappedComponent,  // 충돌한 콜라이더
	AActor* OtherActor,                        // 충돌한 다른 액터
	UPrimitiveComponent* OtherComp,            // 충돌한 다른 액터의 콜라이더
	int32 OtherBodyIndex,                      // 충돌한 본(body)의 인덱스 (물리적 충돌 시 사용)
	bool bFromSweep,                           // 스윕(sweep)으로 감지된 충돌인지 여부
	const FHitResult& SweepResult)             // 충돌에 대한 상세 정보
{
	auto character = Cast<AMyPlayer>(OtherActor);
	if (!character)
		return;

	auto player = Cast<AMyPlayerController>(character->GetController());
	if (!player)
		return;

	BeforeCardOpen();
}

void AMyCardPack::SetCardPackIndex(int32 CPIndex)
{
    CardPackIndex = CPIndex;
}

void AMyCardPack::SetCards(const TArray<FString>& InCards)
{
	CardList = InCards;
}

void AMyCardPack::NotifyActorBeginCursorOver()
{
	Super::NotifyActorBeginCursorOver();

	//UE_LOG(LogTemp, Warning, TEXT("Mouse Hovered Over CardPack"));

	// 예: 메쉬의 색을 변경한다거나
	if (CubeMesh)
	{
		CubeMesh->SetRenderCustomDepth(true);  // 아웃라인 효과 등
	}
}

void AMyCardPack::NotifyActorEndCursorOver()
{
	Super::NotifyActorEndCursorOver();

	//UE_LOG(LogTemp, Warning, TEXT("Mouse Left CardPack"));

	if (CubeMesh)
	{
		CubeMesh->SetRenderCustomDepth(false);
	}
}

void AMyCardPack::NotifyActorOnClicked(FKey ButtonPressed)
{
	Super::NotifyActorOnClicked(ButtonPressed);

	UE_LOG(LogTemp, Warning, TEXT("CardPack Clicked!"));

	// 원하는 기능 수행 (오버랩과 비슷한 로직 사용 가능)
	BeforeCardOpen();
}

void AMyCardPack::BeforeCardOpen()
{
	UClass* WidgetClass = LoadClass<UMyOpenCardWidget>(nullptr, TEXT("/Game/UI/StoreUI/BeforeCardOpen.BeforeCardOpen_C"));
	if (WidgetClass)
	{
		UMyOpenCardWidget* Widget = CreateWidget<UMyOpenCardWidget>(GetWorld(), WidgetClass);
		if (Widget)
		{
			Widget->OwnerCardPack = this; // 나 자신(AMyCardPack)을 위젯에 알려줌

			Widget->AddToViewport(999);
		}
	}
}

void AMyCardPack::HandleCardOpen()
{
	if (bCardOpened)
		return;

	bCardOpened = true;

	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	// 카드팩 데이터 비우기
	UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());
	if (MyGameInstance && CardPackIndex >= 0 && CardPackIndex < MyGameInstance->CardPackDataList.Num())
	{
		MyGameInstance->CardPackDataList[CardPackIndex].Cards.Empty();
	}

	// 1. 런타임 경로 기반으로 UClass 로드
	UClass* WidgetClass = LoadClass<UUserWidget>(nullptr, TEXT("/Game/UI/StoreUI/OpenCardMenu.OpenCardMenu_C"));
	if (!WidgetClass)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load OpenCardMenu class!"));
		return;
	}

	// 2. 위젯 생성
	APlayerController* PC = GetWorld()->GetFirstPlayerController();
	if (!PC)
		return;

	UUserWidget* Widget = CreateWidget<UUserWidget>(PC, WidgetClass);
	if (!Widget)
		return;

	// 3. 캐스팅해서 함수 사용 (InitCardInfo, OnWidgetClosed)
	if (UMyOpenCardWidget* OpenCardMenu = Cast<UMyOpenCardWidget>(Widget))
	{
		OpenCardMenu->InitCardInfo(CardList);

		OpenCardMenu->OnWidgetClosed.BindLambda([PC]()
			{
				PC->SetInputMode(FInputModeGameOnly());
				UE_LOG(LogTemp, Warning, TEXT("AMyCardPack::HandleCardOpen::CardList closed"));
			});
	}

	// 4. 입력 모드 전환
	PC->SetInputMode(FInputModeUIOnly());
	PC->bShowMouseCursor = true;

	// 5. 위젯 화면에 추가
	Widget->AddToViewport(999);
}

