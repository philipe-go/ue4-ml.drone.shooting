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

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;

	UFUNCTION(BlueprintPure)
	bool IsDead() const;

	UFUNCTION(BlueprintPure)
	bool IsAiming() const;

private:
#pragma region //INPUT HANDLER
	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void LookUp(float AxisValue);

	void LookRight(float AxisValue);

	void Run();

	void Walk();

	void Shoot();

	void Jump() override;
#pragma endregion

#pragma region //MOVEMENT HANDLER
	class AController *PlayerController;

	UPROPERTY(EditAnywhere)
	float RateOfTurn = 15.f;

	UPROPERTY(EditAnywhere)
	float SpeedMultiplier = 1.5f;

	UPROPERTY(EditAnywhere)
	class UAnimMontage* ShootAnimMontage;

	const float MAX_WALK_SPEED = 500.f;
	const float JUMP_BOOSTER_FORCE = 700.f;

	bool bIsRunning = false;
#pragma endregion

#pragma region //CAMERA HANDLER
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera System", meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent *SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera System", meta = (AllowPrivateAccess = "true"))
	class UCameraComponent *Camera;

	const float CAMERA_Y_LOCATION = 100.f;
	const float CAMERA_DISTANCE = 300.f;
	UPROPERTY(EditAnywhere, Category = "Camera System", meta = (AllowPrivateAccess = "true"))
	float CameraChangeRate = 2.5f;

	bool bIsAiming = false;

	void SetCameraLeft();
	void SetCameraRight();
	void SetCameraClose();
	void SetCameraFar();
#pragma endregion

	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AGunShooter> GunClass;

	AGunShooter* MainGun;

	UPROPERTY(EditAnywhere)
	class UParticleSystem* JumpParticle;

	UPROPERTY(EditDefaultsOnly)
	float MaxHealth = 100.f;
	UPROPERTY(VisibleAnywhere)
	float CurrentHealth;  
};
