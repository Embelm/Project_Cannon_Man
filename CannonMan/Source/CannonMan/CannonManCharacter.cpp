// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonManCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "CannonBase.h"
#include "Math/UnrealMathUtility.h"
#include "DashComponent.h"
#include "HealthComponent.h"

// Sets default values
ACannonManCharacter::ACannonManCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));

	SpringArmComponent->SetupAttachment(GetMesh());

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	CameraComponent->SetupAttachment(SpringArmComponent);

	DashComponent = CreateDefaultSubobject<UDashComponent>(TEXT("Dash"));
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));

}

// Called when the game starts or when spawned
void ACannonManCharacter::BeginPlay()
{
	Super::BeginPlay();
	//CharacterMovementComponent = Cast<UCharacterMovementComponent>(GetDefaultSubobjectByName("CharMoveComp")); an example to get a component from Blueprints
	Weapon = GetWorld()->SpawnActor<ACannonBase>(WeaponClass);
	Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("hand_r"));
	Weapon->SetOwner(this);
	
}

// Called every frame
void ACannonManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACannonManCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Axis
		// Mouse & Keyboard
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ACannonManCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACannonManCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &APawn::AddControllerYawInput);

		// Controller
	PlayerInputComponent->BindAxis(TEXT("LookUpRate"), this, &ACannonManCharacter::LookUpRate);
	PlayerInputComponent->BindAxis(TEXT("LookRightRate"), this, &ACannonManCharacter::LookRightRate);

	// Action
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::JumpAction);
	PlayerInputComponent->BindAction(TEXT("Dash"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::Dash);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::Fire);
	PlayerInputComponent->BindAction(TEXT("Crouch"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::CrouchToggle);
}

void ACannonManCharacter::MoveForward(float ScaleValue)
{
	AddMovementInput(GetActorForwardVector(), ScaleValue);
}

void ACannonManCharacter::MoveRight(float ScaleValue)
{
	AddMovementInput(GetActorRightVector(), ScaleValue);
}

void ACannonManCharacter::LookUpRate(float ScaleValue)
{
	AddControllerPitchInput(ScaleValue * GetWorld()->GetDeltaSeconds() *  RotationRate);
}

void ACannonManCharacter::LookRightRate(float ScaleValue)
{
	AddControllerYawInput(ScaleValue * GetWorld()->GetDeltaSeconds() *  RotationRate);

}

void ACannonManCharacter::JumpAction()
{
	Jump();
}

void ACannonManCharacter::Fire()
{
	Weapon->PullTrigger();
}

void ACannonManCharacter::CrouchToggle()
{
	//FVector CameraLocationA = SpringArmComponent->GetRelativeLocation(); 
	
	if(!bIsCrouched)
	{
		Crouch();

	}
	else
	{
		UnCrouch();
	}
}

void ACannonManCharacter::Dash()
{
	if(!bIsCrouched)
	{
		DashComponent->DashAction();
	}
}