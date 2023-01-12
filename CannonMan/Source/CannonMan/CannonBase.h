// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CannonBase.generated.h"

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

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void PullTrigger();

private:
	UPROPERTY(VisibleAnywhere)
	USceneComponent* Root;
	
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* MeshComponent;

	UPROPERTY(EditAnywhere)
	float MaxRange = 1000.0f;

	UFUNCTION(BlueprintCallable)
	bool GunTrace(FHitResult& HitResult, FVector& ShotDirection);

	UPROPERTY(EditAnywhere)
	float Damage = 10;

	AController* GetOwnerController() const;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* MuzzleFlash;


};
