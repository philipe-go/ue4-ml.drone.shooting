// Fill out your copyright notice in the Description page of Project Settings.

#include "CharacterBase.h"
#include "Animation/AnimMontage.h"
#include "Camera/CameraComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "DroneShooting/Gun/GunShooter.h"
#include "GameFramework/Actor.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACharacterBase::ACharacterBase()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();

	SetCameraRight();
	SetCameraFar();
	Walk();

	MainGun = GetWorld()->SpawnActor<AGunShooter>(GunClass);
	if (MainGun)
	{
		MainGun->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepRelativeTransform, TEXT("gun"));
		MainGun->SetOwner(this);
		MainGun->PlayerSkeletal = GetMesh();
	}
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent *PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACharacterBase::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACharacterBase::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &ACharacterBase::LookRight);

	//Bind the jump function straight from the class ACharacter and execute in this instance
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacterBase::Jump);
	PlayerInputComponent->BindAction(TEXT("Run"), EInputEvent::IE_Pressed, this, &ACharacterBase::Run);
	PlayerInputComponent->BindAction(TEXT("Run"), EInputEvent::IE_Released, this, &ACharacterBase::Walk);
	PlayerInputComponent->BindAction(TEXT("CameraLeft"), EInputEvent::IE_Pressed, this, &ACharacterBase::SetCameraLeft);
	PlayerInputComponent->BindAction(TEXT("CameraRight"), EInputEvent::IE_Pressed, this, &ACharacterBase::SetCameraRight);
	PlayerInputComponent->BindAction(TEXT("AIM"), EInputEvent::IE_Pressed, this, &ACharacterBase::SetCameraClose);
	PlayerInputComponent->BindAction(TEXT("AIM"), EInputEvent::IE_Released, this, &ACharacterBase::SetCameraFar);
	PlayerInputComponent->BindAction(TEXT("Shoot"), EInputEvent::IE_Pressed, this, &ACharacterBase::Shoot);
}

/**
 * @brief Vertical Move Input
 * @param AxisValue 
 */
void ACharacterBase::MoveForward(float AxisValue)
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

/**
 * @brief Horizontal Move Input
 * @param AxisValue 
 */
void ACharacterBase::MoveRight(float AxisValue)
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

/**
 * @brief Look Axis input - Y axis
 * @param AxisValue 
 */
void ACharacterBase::LookUp(float AxisValue)
{
	if (bIsAiming)
		AddControllerPitchInput(AxisValue * RateOfTurn * GetWorld()->GetDeltaSeconds());
}

/**
 * @brief Look Axis input - X axis
 * @param AxisValue 
 */
void ACharacterBase::LookRight(float AxisValue)
{
	AddControllerYawInput(FMath::Clamp(45.f, -45.f, AxisValue) * RateOfTurn * GetWorld()->GetDeltaSeconds());
}

/**
 * @brief Alter the speed of the player to running speed
 */
void ACharacterBase::Run()
{
	GetCharacterMovement()->MaxWalkSpeed = MAX_WALK_SPEED * SpeedMultiplier;
	bIsRunning = true;
}

/**
 * @brief Alter the speed of the player to walk speed
 */
void ACharacterBase::Walk()
{
	GetCharacterMovement()->MaxWalkSpeed = MAX_WALK_SPEED;
	bIsRunning = false;
}

/**
 * @brief Call parent Jump method and add impulse
 */
void ACharacterBase::Jump()
{
	Super::Jump();
	if (JumpParticle)
	{
		UGameplayStatics::SpawnEmitterAttached(JumpParticle, GetMesh(), TEXT("Foot_R"));
		UGameplayStatics::SpawnEmitterAttached(JumpParticle, GetMesh(), TEXT("Foot_L"));
	}

	LaunchCharacter(GetActorUpVector() * JUMP_BOOSTER_FORCE, false, false);
}

/**
 * @brief Handles the Shoot Input and calls the Gun instance method
 */
void ACharacterBase::Shoot()
{
	if (MainGun && !bIsRunning)
	{
		MainGun->ShootProjectile();
		PlayAnimMontage(ShootAnimMontage, 1.f, NAME_None);
	}
}

/**
 * @brief Sets the camera to left shoulder
 */
void ACharacterBase::SetCameraLeft()
{
	if (!SpringArm || bIsRunning)
		return;
	// FVector CurrentLocation = SpringArm->GetRelativeLocation();
	FVector CurrentLocation = SpringArm->TargetOffset;
	SpringArm->SetRelativeLocation(FVector(CurrentLocation.X, -CAMERA_Y_LOCATION * 0.5f, CurrentLocation.Z), true);
}

/**
 * @brief Sets the camera to right shoulder
 */
void ACharacterBase::SetCameraRight()
{
	if (!SpringArm || bIsRunning)
		return;
	// FVector CurrentLocation = SpringArm->GetRelativeLocation();
	FVector CurrentLocation = SpringArm->TargetOffset;
	SpringArm->SetRelativeLocation(FVector(CurrentLocation.X, CAMERA_Y_LOCATION, CurrentLocation.Z), true);
}

/**
 * @brief Sets the camera to close position (when aiming)
 */
void ACharacterBase::SetCameraClose()
{
	if (!SpringArm || bIsRunning)
		return;
	SpringArm->TargetArmLength = CAMERA_DISTANCE / CameraChangeRate;
	SpringArm->bUsePawnControlRotation = true;
	bIsAiming = true;
}

/**
 * @brief Sets the camera to far position (when not aiming)
 */
void ACharacterBase::SetCameraFar()
{
	if (!SpringArm)
		return;
	SpringArm->TargetArmLength = CAMERA_DISTANCE;
	SpringArm->bUsePawnControlRotation = false;
	bIsAiming = false;
}
