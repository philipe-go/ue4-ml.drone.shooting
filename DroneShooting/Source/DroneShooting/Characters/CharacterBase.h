// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

class AGunShooter;

UCLASS()
class DRONESHOOTING_API ACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacterBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent *PlayerInputComponent) override;

private:
#pragma region //INPUT HANDLER
	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void LookUp(float AxisValue);

	void LookRight(float AxisValue);

	void Run();

	void Walk();

	void Shoot();
#pragma endregion

#pragma region //MOVEMENT HANDLER
	class AController *PlayerController;

	UPROPERTY(EditAnywhere)
	float RateOfTurn = 15.f;

	UPROPERTY(EditAnywhere)
	float SpeedMultiplier = 1.5f;

	const float MAX_WALK_SPEED = 500.f;
#pragma endregion

#pragma region //CAMERA HANDLER
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera System", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent *SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera System", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent *Camera;

	const float CAMERA_Y_LOCATION = 60.f;
	const float CAMERA_DISTANCE = 300.f;
	UPROPERTY(EditAnywhere, Category = "Camera System", meta = (AllowPrivateAccess = "true"))
	float CameraChangeRate = 2.f;

	bool bIsAiming = false;

	void SetCameraLeft();
	void SetCameraRight();
	void SetCameraClose();
	void SetCameraFar();
#pragma endregion

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGunShooter> GunClass;

	AGunShooter* MainGun;
};
