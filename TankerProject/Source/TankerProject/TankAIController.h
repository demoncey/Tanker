// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Tank.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "TankAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANKERPROJECT_API ATankAIController : public AAIController
{
	GENERATED_BODY()
private:
	ATank * GetControlledTank() const;
	ATank * GetPlayerTank() const;

	virtual void BeginPlay() override;
	
	
	
};
