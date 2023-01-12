// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonBase.h"
#include "Components/ArrowComponent.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/SkeletalMeshComponent.h"




// Sets default values
ACannonBase::ACannonBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root); 

}

// Called when the game starts or when spawned
void ACannonBase::BeginPlay()
{
	Super::BeginPlay();
	MeshComponent = Cast<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("SkeletalMesh")));

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

		AActor* HitActor = HitResult.GetActor(); 
		UHealthComponent* HealthComponent = Cast<UHealthComponent>(HitActor->GetComponentByClass(UHealthComponent::StaticClass()));

		if(HitActor != nullptr && HealthComponent != nullptr)
		{
			// Do Damage and particle
			HealthComponent->DamageTaken(Damage);
			UE_LOG(LogTemp, Warning, TEXT("Hit Character"));
		}
	}

	UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, MeshComponent, TEXT("BattleRifle_Barrel_JNTSocket"));

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
	FCollisionQueryParams Params;
	
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	return GetWorld()->LineTraceSingleByChannel(HitResult, Location, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

AController* ACannonBase::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if(OwnerPawn == nullptr)
	{
		return nullptr;
	}
	return OwnerPawn->GetController();
}



