// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "DroneShootingGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DRONESHOOTING_API ADroneShootingGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	public:
	virtual void PawnDie(APawn* DeadPawn);
	
};
