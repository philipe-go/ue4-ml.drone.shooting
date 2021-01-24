// Copyright by Philipe Go.


#include "IntenseDroneShootingGameModeBase.h"


void AIntenseDroneShootingGameModeBase::PawnDie(APawn* DeadPawn) 
{
    Super::PawnDie(DeadPawn);

    APlayerController* Player = Cast<APlayerController>(DeadPawn->GetController()); 
    //GAME OVER
    if (Player)
    {
        Player->GameHasEnded(DeadPawn, false);
    }
    //ENEMY KILLED
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Enemy Killed"));
    }
}
