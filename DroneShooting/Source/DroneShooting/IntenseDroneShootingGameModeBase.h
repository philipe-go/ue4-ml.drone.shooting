// Copyright by Philipe Go.

#pragma once

#include "CoreMinimal.h"
#include "DroneShootingGameModeBase.h"
#include "IntenseDroneShootingGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DRONESHOOTING_API AIntenseDroneShootingGameModeBase : public ADroneShootingGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnDie(APawn *DeadPawn) override;

private:
	void EndGame(bool bIsPlayerWinner);
};
