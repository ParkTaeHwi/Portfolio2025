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

    _mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");       // ������Ʈ ����
    _collider = CreateDefaultSubobject<UCapsuleComponent>("Collider");  // ������Ʈ ����

    _mesh->SetupAttachment(_collider);

    RootComponent = _collider;
}

void AMyItem::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	_collider->OnComponentBeginOverlap.AddDynamic(this, &AMyItem::OnOverlap);	// �浹�̺�Ʈ ���ε�
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
    UPrimitiveComponent* OverlappedComponent,  // �浹�� �ݶ��̴�
    AActor* OtherActor,                        // �浹�� �ٸ� ����
    UPrimitiveComponent* OtherComp,            // �浹�� �ٸ� ������ �ݶ��̴�
    int32 OtherBodyIndex,                      // �浹�� ��(body)�� �ε��� (������ �浹 �� ���)
    bool bFromSweep,                           // ����(sweep)���� ������ �浹���� ����
    const FHitResult& SweepResult)             // �浹�� ���� �� ����
{
    auto character = Cast<AMyCharacter>(OtherActor);  // �浹�� ���Ͱ� AMyCharacter���� Ȯ��
    auto player = Cast<AMyPlayerController>(character->GetController());  // ĳ������ ��Ʈ�ѷ��� AMyPlayerController���� Ȯ��

    if (character != nullptr && player != nullptr)  // ĳ���Ϳ� ��Ʈ�ѷ��� ��ȿ�ϸ�
    {
        character->AddHp(30.0f);  // ĳ������ HP�� 30 ����

        SetActorHiddenInGame(true);  // �������� ȭ�鿡�� ����
        SetActorEnableCollision(false);  // �������� �浹�� ��Ȱ��ȭ (�ٽ� �浹���� �ʵ���)
    }
}