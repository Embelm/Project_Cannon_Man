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

private:

	UFUNCTION(BlueprintCallable)
	void ReloadAction();
	
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
	void Dash();

	UFUNCTION(BlueprintCallable)
	void Fire();

	UFUNCTION(BlueprintCallable)
	void CrouchToggle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	bool bIsDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArmComponent;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere)
	class UDashComponent* DashComponent;

	UPROPERTY(EditAnywhere)
	class UHealthComponent* HealthComponent;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ACannonBase> WeaponClass;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly,  meta = (AllowPrivateAccess = "true"))
	ACannonBase* Weapon;

};
