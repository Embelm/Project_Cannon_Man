// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonManCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "CannonBase.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
ACannonManCharacter::ACannonManCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));

	SpringArmComponent->SetupAttachment(RootComponent);

	CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));

	CameraComponent->SetupAttachment(SpringArmComponent);

}

// Called when the game starts or when spawned
void ACannonManCharacter::BeginPlay()
{
	Super::BeginPlay();
	//CharacterMovementComponent = Cast<UCharacterMovementComponent>(GetDefaultSubobjectByName("CharMoveComp")); an example to get a component from Blueprints
	Weapon = GetWorld()->SpawnActor<ACannonBase>(WeaponClass);
	Weapon->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("hand_r"));
	Weapon->SetOwner(this);

	DashCounter = MaxDashCounter;
	
}

// Called every frame
void ACannonManCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsDashing)
	{
		DashUpdate(DeltaTime);
	}
	if(DashCounter < MaxDashCounter)
	{
		DashRefresh(DeltaTime);
	}
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
	PlayerInputComponent->BindAction(TEXT("Dash"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::DashAction);
	PlayerInputComponent->BindAction(TEXT("Fire"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::Fire);
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

void ACannonManCharacter::DashRefresh(float DeltaTime)
{
	DashRefreshTimer += DeltaTime;
	if(DashRefreshTimer >= DashCounterRefreshSpeed)
	{
		DashCounter++;
		DashRefreshTimer = 0;
	}
}

void ACannonManCharacter::DashAction()
{

	// Calculate the direction of the dash through the velocity
	// Set the Zaxis to 0 so that we aren't dashing up or down. 
	// If the player's velocity is 0 use the Forward direction
	// Calculate the length of the dash. 
	// MOVE the player's position to the calculated position determined by how fast it will dash
	// This is so that the camera can still be in play and not teleport which will disorient the player. 

	// Maybe we can lerp the position instead of using the launchcharacter function. 
	if(!IsDashing && DashCounter > 0)
	{
		FVector Velocity = GetVelocity().GetSafeNormal() * DashLength;
		Velocity.Z = 0;
	
		if (Velocity == FVector::ZeroVector)
		{
			Velocity = GetActorForwardVector() * DashLength;
		}

		DashPosition = (Velocity + GetActorLocation());
		DebugDashSphere(DashPosition);
		OriginalPosition = GetActorLocation();
		IsDashing = true;
		DashCounter--;
		UE_LOG(LogTemp, Warning, TEXT("DashCounter= %i"), DashCounter);
	}

}

void ACannonManCharacter::DashUpdate(float DeltaTime)
{
	DashAlpha += DeltaTime * DashSpeed;
	FVector Test = FMath::Lerp(OriginalPosition, DashPosition, DashAlpha);
	SetActorLocation(Test);
	if (DashAlpha >= 1)
	{
		DashAlpha = 0;
		IsDashing = false;
	}
}

void ACannonManCharacter::DebugDashSphere(FVector NewPosition)
{
	FCollisionShape Sphere = FCollisionShape::MakeSphere(50.0f);
	FHitResult Hit;
	DrawDebugSphere(GetWorld(), NewPosition, 50.0f, 12.0f, FColor::Red, false, 5.0f);
}
