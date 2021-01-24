// Copyright by Philipe Go.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterController.generated.h"

/**
 * 
 */
UCLASS()
class DRONESHOOTING_API ACharacterController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void GameHasEnded(class AActor *EndGameFocus = nullptr, bool bIsWinner = false) override;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> LoseUI;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> WonUI;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAcces="true"))
	float RestartCounter = 5.f;

	UPROPERTY()
	FTimerHandle Timer;
};
