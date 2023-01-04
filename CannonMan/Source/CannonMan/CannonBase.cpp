// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonBase.h"
#include "Components/ArrowComponent.h"

// Sets default values
ACannonBase::ACannonBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root); 
	MeshComponent = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("SkeletalMesh")));
	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
}

// Called when the game starts or when spawned
void ACannonBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACannonBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACannonBase::PullTrigger()
{
	FHitResult HitResult;
	FVector ShotDirection;;

	bool bSuccess = GunTrace(HitResult, ShotDirection);
	if(bSuccess)
	{
		DrawDebugPoint(GetWorld(), HitResult.Location, 20, FColor::Red, false, 3.0f);

		// Do Damage and particle
	}
}

bool ACannonBase::GunTrace(FHitResult& HitResult, FVector& ShotDirection)
{
	AController* OwnerController = GetOwnerController();
	if(OwnerController == nullptr)
	{
		return false;
	}

	FVector Location;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Location, Rotation);
	ShotDirection = -Rotation.Vector();
	FVector End = Location + Rotation.Vector() * MaxRange;
	//DrawDebugCamera(GetWorld(), Location, Rotation, 90, 2, FColor::Red, true);
	return GetWorld()->LineTraceSingleByChannel(HitResult, Location, End, ECollisionChannel::ECC_GameTraceChannel1);
}

AController* ACannonBase::GetOwnerController()
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(OwnerPawn == nullptr)
	{
		return nullptr;
	}
	return OwnerPawn->GetController();
}



