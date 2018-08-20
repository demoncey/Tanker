// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"




ATank * ATankAIController::GetControlledTank()const {

	return Cast<ATank>(GetPawn());
	//return dynamic_cast<ATank*>(GetPawn());
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = this->GetControlledTank();
	if (!ControlledTank) {
		UE_LOG(LogTemp, Warning, TEXT("TankAIController not possesing a tank !!!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("TankAIController possesing %s !!!"), *ControlledTank->GetName());
	}

}
