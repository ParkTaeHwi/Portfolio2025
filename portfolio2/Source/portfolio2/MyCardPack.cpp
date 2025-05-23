// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCardPack.h"

#include "MyCharacter.h"
#include "MyPlayer.h"
#include "MyPlayerController.h"
#include "MyGameInstance.h"
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
	auto character = Cast<AMyPlayer>(OtherActor);  // 충돌한 액터가 AMyCharacter인지 확인
	if (character == nullptr)
		return;

	auto player = Cast<AMyPlayerController>(character->GetController());  // 캐릭터의 컨트롤러가 AMyPlayerController인지 확인

	if (character != nullptr && player != nullptr)  // 캐릭터와 컨트롤러가 유효하면
	{
		//character->AddItem(this);

		SetActorHiddenInGame(true);  // 아이템을 화면에서 숨김
		SetActorEnableCollision(false);  // 아이템의 충돌을 비활성화 (다시 충돌하지 않도록)
	}

	if (character != nullptr && player != nullptr)
	{
		SetActorHiddenInGame(true);
		SetActorEnableCollision(false);

		// GameInstance에서 이 카드팩의 데이터 비우기
		UMyGameInstance* MyGameInstance = Cast<UMyGameInstance>(GetGameInstance());
		if (MyGameInstance && CardPackIndex >= 0 && CardPackIndex < MyGameInstance->CardPackDataList.Num())
		{
			MyGameInstance->CardPackDataList[CardPackIndex].Cards.Empty();  // 카드 정보 제거!
		}
	}
}

void AMyCardPack::SetCardPackIndex(int32 CPIndex)
{
    CardPackIndex = CPIndex;
}

void AMyCardPack::SetCards(const TArray<FString>& InCards)
{
	CardList = InCards;
}