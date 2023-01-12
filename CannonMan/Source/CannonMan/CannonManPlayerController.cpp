// Fill out your copyright notice in the Description page of Project Settings.


#include "CannonManPlayerController.h"
#include "Blueprint/UserWidget.h"


void ACannonManPlayerController::BeginPlay() 
{
    Super::BeginPlay();

    if(HUDScreenClass)
    {
        HUD = CreateWidget(this, HUDScreenClass);
        if(HUD != nullptr)
        {
            HUD->AddToViewport();
        }
    }
}
