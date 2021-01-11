// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CharacterBase.generated.h"

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
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void MoveForward(float AxisValue);
	
	void MoveRight(float AxisValue);
	
	void LookUp(float AxisValue);
	
	void LookRight(float AxisValue);

	UPROPERTY(EditAnywhere)
	float RateOfTurn = 15.f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera System", meta=(AllowPrivateAccess="true"))
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Camera System", meta=(AllowPrivateAccess="true"))
	class UCameraComponent* Camera;

	const float CAMERA_Y_LOCATION = 50.f;
	const float CAMERA_DISTANCE = 150.f;
	bool bIsAiming = false;
	void SetCameraLeft();
	void SetCameraRight();
	void SetCameraClose();
	void SetCameraFar();

};
