// Copyright by Philipe Go.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class DRONESHOOTING_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

	protected:

	virtual void BeginPlay() override;
	
};
