// Copyright by Philipe Go.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CharacterController.generated.h"

class UUserWidget;
/**
 * 
 */
UCLASS()
class DRONESHOOTING_API ACharacterController : public APlayerController
{
	GENERATED_BODY()

public:
	virtual void GameHasEnded(class AActor *EndGameFocus = nullptr, bool bIsWinner = false) override;
protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> LoseUI;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> WonUI;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> HUD;
	
	UPROPERTY()
	UUserWidget* Crosshair;

	UPROPERTY(EditAnywhere, meta=(AllowPrivateAcces="true"))
	float RestartCounter = 5.f;

	UPROPERTY()
	FTimerHandle Timer;
};
