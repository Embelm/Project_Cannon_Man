// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonManCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

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
	PlayerInputComponent->BindAction(TEXT("Dash"), EInputEvent::IE_Pressed, this, &ACannonManCharacter::DashAction);


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

void ACannonManCharacter::DashAction()
{
	FVector Velocity  = GetVelocity();
	Velocity.Z = 0;
	LaunchCharacter(Velocity.GetSafeNormal() * DashAmount, true, true);
	UE_LOG(LogTemp, Warning, TEXT("Dash"));
}

