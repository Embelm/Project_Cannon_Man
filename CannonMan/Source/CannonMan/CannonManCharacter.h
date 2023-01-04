// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CannonManCharacter.generated.h"

class ACannonBase;
UCLASS()
class CANNONMAN_API ACannonManCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACannonManCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float RotationRate = 100;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float DashLength = 500.0f;
	
	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float DashSpeed = 10.0f;

	void DebugDashSphere(FVector NewPosition);

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	int32 DashCounter;

private:

	UFUNCTION(BlueprintCallable)
	void MoveForward(float ScaleValue);

	UFUNCTION(BlueprintCallable)
	void MoveRight(float ScaleValue);

	UFUNCTION(BlueprintCallable)
	void LookUpRate(float ScaleValue);

	UFUNCTION(BlueprintCallable)
	void LookRightRate(float ScaleValue);

	UFUNCTION(BlueprintCallable)
	void JumpAction();

	UFUNCTION(BlueprintCallable)
	void DashAction();

	UFUNCTION(BlueprintCallable)
	void Fire();

	UFUNCTION(BlueprintCallable)
	void DashRefresh(float DeltaTime);

	void DashUpdate(float DeltaTime);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACannonBase> WeaponClass;

	UPROPERTY(EditAnywhere)
	bool IsDashing = false;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	int32 MaxDashCounter = 2;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float DashCounterRefreshSpeed = 1;

	float DashAlpha = 0;
	float DashRefreshTimer = 0;

	FVector DashPosition;
	FVector OriginalPosition;

	ACannonBase* Weapon;

};
