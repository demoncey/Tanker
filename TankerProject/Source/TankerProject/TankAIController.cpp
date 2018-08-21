// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"




ATank * ATankAIController::GetControlledTank() const {

	return Cast<ATank>(GetPawn());
	//return dynamic_cast<ATank*>(GetPawn());
}

ATank * ATankAIController::GetPlayerTank() const {
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) {
		return nullptr;
	}
	return dynamic_cast<ATank*>(PlayerPawn);
}

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = this->GetPlayerTank();
	if (!PlayerTank) {
		UE_LOG(LogTemp, Warning, TEXT("TankAIController can't find  a Player Tank !!!"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("XXXX TankAIController found Player Tank %s !!!"), *PlayerTank->GetName());
	}

}
