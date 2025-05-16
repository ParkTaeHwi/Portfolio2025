// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "MyCharacter.h"
#include "MyStatComponent.h"
#include "MyAnimInstance.h"
#include "MyPlayerController.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

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
	//static ConstructorHelpers::FClassFinder<UMyInvenUI> invenClass(TEXT("/Game/BluePrint/BP_MyInven.BP_MyInven_C"));
	//if (invenClass.Succeeded())
	//{
	//	_invenWidget = CreateWidget<UUserWidget>(GetWorld(), invenClass.Class);
	//}
	//
	//_invenComponent = CreateDefaultSubobject<UMyInvenComponent>(TEXT("InvenComponent"));
}

void AMyPlayer::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	//auto invenUI = Cast<UMyInvenUI>(_invenWidget);
	//if (invenUI)
	//{
	//	invenUI->_invenComponent = _invenComponent;
	//	_invenComponent->itemAddEvent.AddUObject(invenUI, &UMyInvenUI::SetItem_Index);
	//	invenUI->Drop->OnClicked.AddDynamic(this, &AMyPlayer::Drop);
	//}
}

void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();

	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_GameTraceChannel2, ECR_Block);

	_animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());

	if (_animInstance == nullptr)
	{
		UE_LOG(LogTemp, Error, TEXT("AnimInstance is NULL"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AnimInstance successfully set"));
	}
}

void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (enhancedInputComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("EnhancedInputComponent is valid"));

		if (_changeUIAction) { UE_LOG(LogTemp, Warning, TEXT("_changeUIAction is valid: %s"), *_changeUIAction->GetName()); }
		else { UE_LOG(LogTemp, Warning, TEXT("_changeUIAction is NULL!")); }


		enhancedInputComponent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyPlayer::Move);
		enhancedInputComponent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyPlayer::Look);
		enhancedInputComponent->BindAction(_jumpAction, ETriggerEvent::Started, this, &AMyPlayer::JumpA);
		enhancedInputComponent->BindAction(_attackAction, ETriggerEvent::Started, this, &AMyPlayer::Attack);
		enhancedInputComponent->BindAction(_changeUIAction, ETriggerEvent::Started, this, &AMyPlayer::ChangeUI);
		//enhancedInputCompnent->BindAction(_invenAction, ETriggerEvent::Started, this, &AMyPlayer::InvenOpen);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("EnhancedInputComponent cast failed!"));
	}
}

void AMyPlayer::Move(const FInputActionValue& value)
{
	if (_isUIOpen) return;
	FVector2D moveVector = value.Get<FVector2D>();
	if (Controller == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Controller is NULL!"));
	}

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

			Cast<AMyPlayerController>(Controller)->bShowMouseCursor = false;
		}
	}
}

void AMyPlayer::Look(const FInputActionValue& value)
{
	//if (_isAttack) return;
	if (_isUIOpen) return;
	FVector2D lookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(lookAxisVector.X);
		AddControllerPitchInput(-lookAxisVector.Y);
	}
}

void AMyPlayer::JumpA(const FInputActionValue& value)
{
	UE_LOG(LogTemp, Warning, TEXT("Jump called"));
	if (_isUIOpen) return;
	//if (_isAttack) return;

	bool isPress = value.Get<bool>();

	if (isPress)
	{
		ACharacter::Jump();
	}
}

void AMyPlayer::Attack(const FInputActionValue& value)
{
	if (_isUIOpen) return;
	//if (_isAttack) return;
	UE_LOG(LogTemp, Warning, TEXT("Attack called/MyPlayer.cpp"));

	bool isPress = value.Get<bool>();
	if (!isPress) return;

	_isAttack = true;

	if (!_animInstance->IsAnyMontagePlaying())
	{
		_animInstance->PlayAnimMontage();
	}

	_animInstance->JumpToSection(1);
}

void AMyPlayer::ChangeUI(const FInputActionValue& value)	// press 'y'
{
	bool isPress = value.Get<bool>();

	AMyPlayerController* MyController = Cast<AMyPlayerController>(Controller);
	if (!MyController) return;

	if (isPress)
	{
		if (_changeUI == false)
		{
			AMyPlayer::_isUIOpen = true;
			AMyPlayer::_changeUI = true;
			MyController->bShowMouseCursor = true;
			UE_LOG(LogTemp, Warning, TEXT("if"));
		}
		else if (_changeUI == true)
		{
			AMyPlayer::_isUIOpen = false;
			AMyPlayer::_changeUI = false;
			MyController->bShowMouseCursor = false;
			UE_LOG(LogTemp, Warning, TEXT("else if"));
		}
	}
}

void AMyPlayer::OnAttackMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	_isAttack = false;
}