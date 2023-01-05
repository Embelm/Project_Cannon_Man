// Fill out your copyright notice in the Description page of Project Settings.


#include "DashComponent.h"

// Sets default values for this component's properties
UDashComponent::UDashComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDashComponent::BeginPlay()
{
	Super::BeginPlay();

	DashCounter = MaxDashCounter;
	Owner = GetOwner();
}


// Called every frame
void UDashComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(DebugDash)
	{
		DashAction();
		DebugDash = false;
	}
	if (IsDashing)
	{
		DashUpdate(DeltaTime);
	}
	if(DashCounter < MaxDashCounter)
	{
		DashRefresh(DeltaTime);
	}
	
}


//TODO: Rename and optimize this function
void UDashComponent::DashAction()	// Getting the location to dash to
{
	if(Owner != nullptr && !IsDashing && DashCounter > 0)
	{
		FVector Velocity = Owner->GetVelocity().GetSafeNormal() * DashLength;
		Velocity.Z = 0;
		if (Velocity == FVector::ZeroVector)
		{
			Velocity = Owner->GetActorForwardVector() * DashLength;
		}
		DashPosition = (Velocity + Owner->GetActorLocation());
		DebugDashSphere(DashPosition);
		OriginalPosition = Owner->GetActorLocation();
		IsDashing = true;
		DashCounter--;
		UE_LOG(LogTemp, Warning, TEXT("DashCounter= %i"), DashCounter);
	}
	
}

void UDashComponent::DashUpdate(float DeltaTime)
{
	if(Owner != nullptr)
	{
		DashAlpha += DeltaTime * DashSpeed;
		FVector Test = FMath::Lerp(OriginalPosition, DashPosition, DashAlpha);
		Owner->SetActorLocation(Test);
		if (DashAlpha >= 1)
		{
			DashAlpha = 0;
			IsDashing = false;
		}
	}

}

void UDashComponent::DebugDashSphere(FVector NewPosition)
{
	FCollisionShape Sphere = FCollisionShape::MakeSphere(50.0f);
	FHitResult Hit;
	DrawDebugSphere(GetWorld(), NewPosition, 50.0f, 12.0f, FColor::Red, false, 5.0f);
}

void UDashComponent::DashRefresh(float DeltaTime)
{
	DashRefreshTimer += DeltaTime;
	if(DashRefreshTimer >= DashCounterRefreshSpeed)
	{
		DashCounter++;
		DashRefreshTimer = 0;
	}
}

