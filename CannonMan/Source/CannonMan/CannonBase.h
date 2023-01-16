// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CannonBase.generated.h"


UENUM()
enum class GunType
{
	HitScan,
	Projectile
};

UCLASS()
class CANNONMAN_API ACannonBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACannonBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000.0f;

	UPROPERTY(EditAnywhere)
	float Damage = 10;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int Ammo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int MaxAmmo;

	UPROPERTY(EditAnywhere, Category = "Effects")
	class UParticleSystem* MuzzleParticle;

	UPROPERTY(EditAnywhere, Category = "Effects")
	class UParticleSystem* HitParticle;

	UPROPERTY(EditAnywhere, Category = "Effects")
	class USoundBase* HitSoundEffect;

	UPROPERTY(EditAnywhere, Category = "Effects")
	class USoundBase* FireSoundEffect;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PullTrigger();

	UFUNCTION(BlueprintCallable)
	void ReloadGun();
	
private:

	void HitScanSuccess(FHitResult HitResult);

	void PlayHitSFX(FHitResult HitResult);

	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;

	UFUNCTION(BlueprintCallable)
	bool GunTrace(FHitResult& HitResult, FVector& ShotDirection);

	AController* GetOwnerController() const;

	UPROPERTY(EditAnywhere)
	GunType MyGunType;
};

