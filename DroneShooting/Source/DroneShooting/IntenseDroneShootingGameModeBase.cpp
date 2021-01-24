// Copyright by Philipe Go.

#include "IntenseDroneShootingGameModeBase.h"
#include "EngineUtils.h"
#include "GameFramework/Controller.h"
#include "Characters/EnemyAIController.h"

void AIntenseDroneShootingGameModeBase::PawnDie(APawn *DeadPawn)
{
    Super::PawnDie(DeadPawn);

    APlayerController *Player = Cast<APlayerController>(DeadPawn->GetController());
    //GAME OVER
    if (Player)
    {
        EndGame(false);
    }
    else
    {
        for (AEnemyAIController *Controller : TActorRange<AEnemyAIController>(GetWorld()))
        {
            if (!Controller->IsDead()) return;
        }
        EndGame(true);
    }
}

/**
 * @brief Calls end game screen whether the player won or lose
 * @param bIsPlayerWinner 
 */

void AIntenseDroneShootingGameModeBase::EndGame(bool bIsPlayerWinner)
{
    for (AController *Controller : TActorRange<AController>(GetWorld()))
    {
        Controller->GameHasEnded(Controller->GetPawn(), !(Controller->IsPlayerController() ^ bIsPlayerWinner));
    }
}
