// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "MyPlayerController.h"
#include "MyAnimInstance.h"
#include "MyStatComponent.h"
#include "MyItem.h"

#include "Blueprint/UserWidget.h"
#include "MyInvenUI.h"
#include "Components/Button.h"
#include "MyInvenComponent.h"

AMyPlayer::AMyPlayer()
{
	PrimaryActorTick.bCanEverTick = true;
	
	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 500.0f;
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));

	// Inventory
	static ConstructorHelpers::FClassFinder<UMyInvenUI> invenClass(TEXT("/Game/BluePrint/BP_MyInven.BP_MyInven_C"));
	if (invenClass.Succeeded())
	{
		_invenWidget = CreateWidget<UUserWidget>(GetWorld(), invenClass.Class);
	}

	_invenComponent = CreateDefaultSubobject<UMyInvenComponent>(TEXT("InvenComponent"));
}

void AMyPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	auto invenUI = Cast<UMyInvenUI>(_invenWidget);
	if (invenUI)
	{
		invenUI->_invenComponent = _invenComponent;
		_invenComponent->itemAddEvent.AddUObject(invenUI, &UMyInvenUI::SetItem_Index);
		invenUI->Drop->OnClicked.AddDynamic(this, &AMyPlayer::Drop);
	}
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block);
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputCompnent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (enhancedInputCompnent)
	{
		enhancedInputCompnent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyPlayer::Move);
		enhancedInputCompnent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyPlayer::Look);
		enhancedInputCompnent->BindAction(_jumpAction, ETriggerEvent::Triggered, this, &AMyPlayer::JumpA);
		enhancedInputCompnent->BindAction(_attackAction, ETriggerEvent::Triggered, this, &AMyPlayer::Attack);
		enhancedInputCompnent->BindAction(_invenAction, ETriggerEvent::Started, this, &AMyPlayer::InvenOpen);
	}
}

void AMyPlayer::Move(const FInputActionValue& value)
{
	FVector2D moveVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		if (moveVector.Length() > 0.01f)
		{
			FVector forWard = GetActorForwardVector();
			FVector right = GetActorRightVector();

			_vertical = moveVector.Y * 100.0f;
			_horizontal = moveVector.X * 100.0f;

			AddMovementInput(forWard, moveVector.Y * _statComponent->GetSpeed());
			AddMovementInput(right, moveVector.X * _statComponent->GetSpeed());
		}
	}
}

void AMyPlayer::Look(const FInputActionValue& value)
{
	if (_isAttack) return;

	FVector2D lookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(lookAxisVector.X);
		AddControllerPitchInput(-lookAxisVector.Y);
	}
}

void AMyPlayer::JumpA(const FInputActionValue& value)
{
	if (_isAttack) return;

	bool isPress = value.Get<bool>();

	if (isPress)
	{
		ACharacter::Jump();
	}
}

void AMyPlayer::Attack(const FInputActionValue& value)
{
	if (_isAttack) return;

	bool isPress = value.Get<bool>();

	if (isPress)
	{
		_isAttack = true;
		_curAttackSection = (_curAttackSection + 1) % 3 + 1;

		if (!_animInstance->IsAnyMontagePlaying())
		{
			_animInstance->PlayAnimMontage();
		}
		_animInstance->JumpToSection(_curAttackSection);
	}
}

void AMyPlayer::InvenOpen(const FInputActionValue& value)
{
	bool isPress = value.Get<bool>();

	if (isPress)
	{
		auto controller = Cast<AMyPlayerController>(GetController());
		if (_isInvenOpen)
		{
			if (controller)
				controller->HideUI();
			_invenWidget->RemoveFromViewport();
		}
		else
		{
			if (controller)
				controller->ShowUI();
			_invenWidget->AddToViewport();
		}

		_isInvenOpen = !_isInvenOpen;
	}
}

void AMyPlayer::AddItem(AMyItem* item)
{
	// TODO
	if (item && _invenComponent)
	{
		_invenComponent->AddItem(item);
	}
}

void AMyPlayer::Drop()
{
	UE_LOG(LogTemp, Error, TEXT("Drop"));

	int32 curDropIndex = -1;
	auto invenUI = Cast<UMyInvenUI>(_invenWidget);
	if (invenUI)
		curDropIndex = invenUI->_curIndex;

	if (!_invenComponent || _invenComponent->GetItemInfo_Index(curDropIndex).itemId == -1) //  빈 슬롯이면 무시
	{
		UE_LOG(LogTemp, Error, TEXT("Drop failed: empty slot!")); // 
		return;
	}

	auto item = _invenComponent->DropItem(curDropIndex);
	if (item == nullptr)
		return;

	//  포션이면 회복 처리
	const FMyItemInfo& info = item->GetInfo();
	if (info.type == MyItemType::POTION)
	{
		auto stat = GetComponentByClass<UMyStatComponent>();
		if (stat)
		{
			int32 beforeHp = stat->GetCurHp();              //  회복 전
			int32 added = 30;
			int32 afterHp = stat->AddCurHp(added);          //  회복 실행
			UE_LOG(LogTemp, Warning, TEXT("Used Potion! HP: %d → %d (+%d)"), beforeHp, afterHp, added); //  로그 출력
			item->Destroy();
			invenUI->SetItem_Index(curDropIndex, FMyItemInfo());
		}
	}
	else
	{
		invenUI->SetItem_Index(curDropIndex, FMyItemInfo());

		FVector playerLocation = GetActorLocation();
		float dropRadius = 200.0f;
		FVector randomOffset = FMath::VRand() * FMath::FRandRange(100.0f, dropRadius);
		FVector dropLocation = playerLocation + randomOffset;
		dropLocation.Z = 40.0f;

		item->SetActorLocation(dropLocation);
		item->SetActorHiddenInGame(false);
		item->SetActorEnableCollision(true);
	}
}

void AMyPlayer::AddExp(int32 amount)
{
	_exp += amount;

	// 레벨업 조건 체크
	if (_exp >= 60)
	{
		_level = 3;
	}
	else if (_exp >= 20)
	{
		_level = 2;
	}
	else
	{
		_level = 1;
	}

	UE_LOG(LogTemp, Warning, TEXT("exp +%d, curExp: %d, level: %d"), amount, _exp, _level);
}