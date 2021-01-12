// Copyright by Philipe Go.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GunShooter.generated.h"

UCLASS()
class DRONESHOOTING_API AGunShooter : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGunShooter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	class USceneComponent* RootMesh;

	UPROPERTY(EditAnywhere)
	class USkeletalMeshComponent* GunMesh;
};
