// Copyright by Philipe Go.

#include "CharacterController.h"
#include "Blueprint/UserWidget.h"
#include "TimerManager.h"

void ACharacterController::GameHasEnded(class AActor *EndGameFocus, bool bIsWinner)
{
    Super::GameHasEnded(EndGameFocus, bIsWinner);

    if (bIsWinner)
    {
        UUserWidget* WonScreen = CreateWidget(this, WonUI);
        if (WonScreen)
        {
            WonScreen->AddToViewport();
        }
    }
    else
    {
        UUserWidget *LoseScreen = CreateWidget(this, LoseUI);
        if (LoseScreen)
        {
            LoseScreen->AddToViewport();
        }
    }

    GetWorldTimerManager().SetTimer(Timer, this, &APlayerController::RestartLevel, RestartCounter);
}
