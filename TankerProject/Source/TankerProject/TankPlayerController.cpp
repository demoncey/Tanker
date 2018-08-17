// Fill out your copyright notice in the Description page of Project Settings.

#include "TankPlayerController.h"




ATank * ATankPlayerController::GetControlledTank()const {

	return Cast<ATank>(GetPawn());
	//return dynamic_cast<ATank*>(GetPawn());
}

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	auto ControlledTank = this->GetControlledTank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController not possesing a tank !!!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("PlayerController possesing %s !!!"),*ControlledTank->GetName());
	}

}
