// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPlayerController.h"
#include "DrawDebugHelpers.h"
#include "TankyPawn.h"
#include "Engine/Engine.h"


ATankPlayerController::ATankPlayerController()
{
	
}


void ATankPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	InputComponent->BindAxis("MoveForward", this, &ATankPlayerController::MoveForward);
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	TankyPawn = Cast<ATankyPawn>(GetPawn());
}

void ATankPlayerController::MoveForward(float AxisValue)
{

	TankyPawn->MoveForward(AxisValue);
}



