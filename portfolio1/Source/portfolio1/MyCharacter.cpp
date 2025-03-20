// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

#include "Kismet/KismetMathLibrary.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "MyAnimInstance.h"

#include "Engine/DamageEvents.h"

#include "MyStatComponent.h"
#include "Components/WidgetComponent.h"

#include "MyHpBar.h"

// Sets default values
AMyCharacter::AMyCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));

	_springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	_camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	_springArm->SetupAttachment(GetCapsuleComponent());
	_camera->SetupAttachment(_springArm);

	_springArm->TargetArmLength = 500.0f;
	_springArm->SetRelativeRotation(FRotator(-35.0f, 0.0f, 0.0f));

	_statComponent = CreateDefaultSubobject<UMyStatComponent>(TEXT("Stat"));

	_hpBarWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("HpBar"));
	_hpBarWidget->SetupAttachment(GetMesh());
	//_hpBarWidget->SetWidgetSpace(EWidgetSpace::Screen);
	_hpBarWidget->SetWidgetSpace(EWidgetSpace::World);

	static ConstructorHelpers::FClassFinder<UMyHpBar>hpBarClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/BluePrint/BP_MyHpBar.BP_MyHpBar'_C"));
	if (hpBarClass.Succeeded())
	{
		_hpBarWidget->SetWidgetClass(hpBarClass.Class);
	}
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();

	_animInstance = Cast<UMyAnimInstance>(GetMesh()->GetAnimInstance());
	if (_animInstance == nullptr)
		UE_LOG(LogTemp, Error, TEXT("AnimInstance did not Set"));

	_animInstance->_attackStart.BindUObject(this, &AMyCharacter::TestDelegate1);
	_animInstance->_attackStart2.BindUObject(this, &AMyCharacter::TestDelegate2);
	_animInstance->_attackStart3.AddDynamic(this, &AMyCharacter::TestDelegate3);
	_animInstance->OnMontageEnded.AddDynamic(this, &AMyCharacter::AttackEnd);
	_animInstance->_hitEvent.AddUObject(this, &AMyCharacter::Attack_Hit);

	auto hpBar = Cast<UMyHpBar>(_hpBarWidget->GetWidget());
	if (hpBar)
	{
		_statComponent->_hpChanged.AddUObject(hpBar, &UMyHpBar::SetHpBarValue);
	}
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
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

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* enhancedInputCompnent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (enhancedInputCompnent)
	{
		enhancedInputCompnent->BindAction(_moveAction, ETriggerEvent::Triggered, this, &AMyCharacter::Move);
		enhancedInputCompnent->BindAction(_lookAction, ETriggerEvent::Triggered, this, &AMyCharacter::Look);
		enhancedInputCompnent->BindAction(_jumpAction, ETriggerEvent::Triggered, this, &AMyCharacter::JumpA);
		enhancedInputCompnent->BindAction(_attackAction, ETriggerEvent::Triggered, this, &AMyCharacter::Attack);
	}
}

void AMyCharacter::Move(const FInputActionValue& value)
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

void AMyCharacter::Look(const FInputActionValue& value)
{
	if (_isAttack) return;

	FVector2D lookAxisVector = value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		AddControllerYawInput(lookAxisVector.X);
		AddControllerPitchInput(-lookAxisVector.Y);
	}
}

void AMyCharacter::JumpA(const FInputActionValue& value)
{
	if (_isAttack) return;

	bool isPress = value.Get<bool>();

	if (isPress)
	{
		ACharacter::Jump();
	}
}

void AMyCharacter::Attack(const FInputActionValue& value)
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

void AMyCharacter::TestDelegate1()
{
	UE_LOG(LogTemp, Log, TEXT("Attack Start Delegate Test1"));
}

int32 AMyCharacter::TestDelegate2(int32 a, int32 b)
{
	UE_LOG(LogTemp, Log, TEXT("Attack Start Delegate Test, %d %d"), a, b);

	return -1;
}

void AMyCharacter::TestDelegate3()
{
	UE_LOG(LogTemp, Log, TEXT("Attack Start Delegate Test3"));
}

void AMyCharacter::AttackEnd(UAnimMontage* Montage, bool bInterrupted)
{
	_isAttack = false;
}

void AMyCharacter::Attack_Hit()
{
	// ÀÌ ÇÔ¼ö¸¦ È£ÃâÇÑ °´Ã¼ÀÇ ÀÌ¸§
	// auto name = GetName();
	// UE_LOG(LogTemp, Error, TEXT("Attacker : %s"),*name);

	FHitResult hitResult;
	FCollisionQueryParams params(NAME_None, false, this);

	float attackRange = 1000.0f;	// Ä¸½¶ ±æÀÌ
	float attackRadius = 25.0f;	    // Ä¸½¶ ±½±â
	float heightOffset = 50.0f;		// Ä¸½¶ ³ôÀÌ
	// Ä¸½¶
	// 1. È¸Àü - ÄõÅÍ´Ï¾ðÀ» ¾Õ¹æÇâÀ¸·Î
	// 2. Ä¸½¶ÀÇ radius, halfheight
	// 3. Ãæµ¹Ã³¸®¿Í DebugDraw
	FVector forward = GetActorForwardVector();
	FQuat quat = FQuat::FindBetweenVectors(FVector(0, 0, 1), forward);

	
	FVector center = GetActorLocation() + forward * attackRange * 0.5f + FVector(0, 0, heightOffset);
	FVector start = GetActorLocation() + forward * attackRange * 0.5f + FVector(0, 0, heightOffset);	// Ãæµ¹Ã¼ÀÇ ½ÃÀÛÁß½É
	FVector end = GetActorLocation() + forward * attackRange * 0.5f + FVector(0, 0, heightOffset);	    // Ãæµ¹Ã¼ÀÇ ³¡Áß½É

	bool bResult = GetWorld()->SweepSingleByChannel
	(
		OUT hitResult,
		start,
		end,
		quat,	// ÄõÅÍ´Ï¾ð
		ECC_GameTraceChannel2,
		FCollisionShape::MakeCapsule(attackRadius, attackRange * 0.5f),
		params
	);

	FColor drawColor = FColor::Green;

	if (bResult && hitResult.GetActor()->IsValidLowLevel())
	{
		drawColor = FColor::Red;
		AMyCharacter* victim = Cast<AMyCharacter>(hitResult.GetActor());
		if (victim)
		{
			FDamageEvent damageEvent = FDamageEvent();
			victim->TakeDamage(_statComponent->GetAtk(), damageEvent, GetController(), this);
		}
	}

	//Ãæµ¹Ã¼±×¸®±â
	DrawDebugCapsule(GetWorld(), center, attackRange * 0.5f, attackRadius, quat, drawColor, false, 1.0f);
}

void AMyCharacter::AddHp(float amount)
{
	_statComponent->AddCurHp(amount);
}

float AMyCharacter::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	_statComponent->AddCurHp(-Damage);

	return Damage;
}



