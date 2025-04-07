// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEnemy.h"

#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyHpBar.h"
#include "MyPlayerController.h"
#include "MyStatComponent.h"
#include "MyGameModeBase.h"
#include "Components/CapsuleComponent.h"

#include "Animation/AnimInstance.h"
#include "MyAnimInstance.h"

AMyEnemy::AMyEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	_hpBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HpBar"));
	_hpBarWidget->SetupAttachment(GetMesh());
	_hpBarWidget->SetWidgetSpace(EWidgetSpace::World);

	static ConstructorHelpers::FClassFinder<UMyHpBar>hpBarClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/BP_MyHpBar.BP_MyHpBar'_C"));
	if (hpBarClass.Succeeded())
	{
		_hpBarWidget->SetWidgetClass(hpBarClass.Class);
	}
}

void AMyEnemy::BeginPlay()
{
	Super::BeginPlay();

	auto hpBar = Cast<UMyHpBar>(_hpBarWidget->GetWidget());
	if (hpBar)
	{
		_statComponent->_hpChanged.AddUObject(hpBar, &UMyHpBar::SetHpBarValue);
	}

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block);

	AMyGameModeBase* gm = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());
	if (gm)
	{
		gm->AddEnemy();
	}
}

void AMyEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	auto playerCameraManager = GetWorld()->GetFirstPlayerController()->PlayerCameraManager;
	if (playerCameraManager)
	{
		FVector hpBarLocation = _hpBarWidget->GetComponentLocation();
		FVector cameraLocation = playerCameraManager->GetCameraLocation();
		FRotator rot = UKismetMathLibrary::FindLookAtRotation(hpBarLocation, cameraLocation);
		_hpBarWidget->SetWorldRotation(rot);
	}
}

void AMyEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void AMyEnemy::Attack_AI()
{
	if (_isAttack) return;

	_isAttack = true;

	_curAttackSection = (_curAttackSection) % 3 + 1;
	_animInstance->PlayAnimMontage();

	_animInstance->JumpToSection(_curAttackSection);
}

void AMyEnemy::Die()
{
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);

	if (Controller)
	{
		Controller->UnPossess();
	}

	UE_LOG(LogTemp, Warning, TEXT("Enemy::Die() - Destroy() called!"));

	AMyGameModeBase* gm = Cast<AMyGameModeBase>(GetWorld()->GetAuthGameMode());
	if (gm)
	{
		UE_LOG(LogTemp, Warning, TEXT("Enemy::Die() - Calling OnEnemyDie()"));
		gm->OnEnemyDie(); // 카운트 감소 및 이동 체크
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Enemy::Die() - Failed to get GameMode!"));
	}

	Destroy();
}