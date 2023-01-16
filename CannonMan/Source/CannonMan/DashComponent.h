// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DashComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CANNONMAN_API UDashComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDashComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float DashLength = 500.0f;
	
	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float DashSpeed = 10.0f;

	void DebugDashSphere(FVector NewPosition);

	UPROPERTY(VisibleAnywhere)
	int32 DashCounter;

	UPROPERTY(EditAnywhere, Category = "Locomotion")
	int32 MaxDashCounter = 2;

	UFUNCTION(BlueprintCallable)
	int32 GetDashAmount() const; 

	UFUNCTION(BlueprintCallable)
	float GetDashCooldownPercent() const;

	UFUNCTION(BlueprintCallable)
	void DashAction();

	UFUNCTION(BlueprintCallable)
	void DashRefresh(float DeltaTime);

	void DashUpdate(float DeltaTime);
	
	UPROPERTY(EditAnywhere, Category = "Locomotion")
	float DashCounterRefreshSpeed = 1;

	UPROPERTY(VisibleAnywhere)
	bool IsDashing = false;

	UPROPERTY(EditAnywhere)
	bool DebugDash = false;

	float DashAlpha = 0;
	float DashRefreshTimer = 0;

	FVector DashPosition;
	FVector OriginalPosition;
	
	class AActor* Owner;
};

