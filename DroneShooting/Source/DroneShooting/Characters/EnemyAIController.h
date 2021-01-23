// Copyright by Philipe Go.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

UCLASS()
class DRONESHOOTING_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaSeconds) override;

private:
	UPROPERTY()
	APawn* PlayerPawn;

	UPROPERTY(EditAnywhere)
	float DISTANCE_TO_FOLLOW = 1000.f;

	UPROPERTY(EditAnywhere)
	float MIN_DISTANCE_TO_PLAYER = 500.f;

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehaviourTree;

	UPROPERTY(EditAnywhere)
	class UBlackboardComponent* AIBlackboard;
};
