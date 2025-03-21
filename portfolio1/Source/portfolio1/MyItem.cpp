// Fill out your copyright notice in the Description page of Project Settings.


#include "MyItem.h"

#include "Components/CapsuleComponent.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"

// Sets default values
AMyItem::AMyItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = false;

    _mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");       // 컴포넌트 생성
    _collider = CreateDefaultSubobject<UCapsuleComponent>("Collider");  // 컴포넌트 생성

    _mesh->SetupAttachment(_collider);

    RootComponent = _collider;
}

void AMyItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_collider->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnOverlap);	// 충돌이벤트 바인딩
}

// Called when the game starts or when spawned
void AMyItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyItem::OnOverlap(
    UPrimitiveComponent* OverlappedComponent,  // 충돌한 콜라이더
    AActor* OtherActor,                        // 충돌한 다른 액터
    UPrimitiveComponent* OtherComp,            // 충돌한 다른 액터의 콜라이더
    int32 OtherBodyIndex,                      // 충돌한 본(body)의 인덱스 (물리적 충돌 시 사용)
    bool bFromSweep,                           // 스윕(sweep)으로 감지된 충돌인지 여부
    const FHitResult& SweepResult)             // 충돌에 대한 상세 정보
{
    auto character = Cast<AMyCharacter>(OtherActor);  // 충돌한 액터가 AMyCharacter인지 확인
    auto player = Cast<AMyPlayerController>(character->GetController());  // 캐릭터의 컨트롤러가 AMyPlayerController인지 확인

    if (character != nullptr && player != nullptr)  // 캐릭터와 컨트롤러가 유효하면
    {
        character->AddHp(30.0f);  // 캐릭터의 HP를 30 증가

        SetActorHiddenInGame(true);  // 아이템을 화면에서 숨김
        SetActorEnableCollision(false);  // 아이템의 충돌을 비활성화 (다시 충돌하지 않도록)
    }
}