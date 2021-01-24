// Copyright by Philipe Go.


#include "CharacterController.h"
#include "Blueprint/UserWidget.h"
#include "TimerManager.h"

ACharacterController::ACharacterController() 
{
    
}

void ACharacterController::GameHasEnded(class AActor* EndGameFocus, bool bIsWinner) 
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);

    UUserWidget* LoseScreen = CreateWidget(this, LoseUI);
    if (LoseScreen) 
    {
        LoseScreen->AddToViewport();
    }

    GetWorldTimerManager().SetTimer(Timer, this, &APlayerController::RestartLevel, RestartCounter);
}
