// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterBase.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/SpringArmComponent.h"

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
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &ACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &ACharacterBase::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &ACharacterBase::LookUp);
	PlayerInputComponent->BindAxis(TEXT("LookRight"), this, &ACharacterBase::LookRight);
	
	//Bind the jump function straight from the class ACharacter and execute in this instance
	PlayerInputComponent->BindAction(TEXT("Jump"), EInputEvent::IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("CameraLeft"), EInputEvent::IE_Pressed, this, &ACharacterBase::SetCameraLeft);
	PlayerInputComponent->BindAction(TEXT("CameraRight"), EInputEvent::IE_Pressed, this, &ACharacterBase::SetCameraRight);
	PlayerInputComponent->BindAction(TEXT("AIM"), EInputEvent::IE_Pressed, this, &ACharacterBase::SetCameraClose);
	PlayerInputComponent->BindAction(TEXT("AIM"), EInputEvent::IE_Released, this, &ACharacterBase::SetCameraFar);
}

void ACharacterBase::MoveForward(float AxisValue) 
{
	AddMovementInput(GetActorForwardVector() * AxisValue);
}

void ACharacterBase::MoveRight(float AxisValue) 
{
	AddMovementInput(GetActorRightVector() * AxisValue);
}

void ACharacterBase::LookUp(float AxisValue) 
{
	AddControllerPitchInput(AxisValue * RateOfTurn * GetWorld()->GetDeltaSeconds());
}

void ACharacterBase::LookRight(float AxisValue) 
{
	AddControllerYawInput(AxisValue * RateOfTurn * GetWorld()->GetDeltaSeconds());
}

void ACharacterBase::SetCameraLeft() 
{
	if (!SpringArm) return;
	FVector CurrentLocation = SpringArm->GetRelativeLocation(); 
	SpringArm->SetRelativeLocation(FVector(CurrentLocation.X, -CAMERA_Y_LOCATION, CurrentLocation.Z), true);
}

void ACharacterBase::SetCameraRight() 
{
	if (!SpringArm) return;
	FVector CurrentLocation = SpringArm->GetRelativeLocation(); 
	SpringArm->SetRelativeLocation(FVector(CurrentLocation.X, CAMERA_Y_LOCATION, CurrentLocation.Z), true);
	
}

void ACharacterBase::SetCameraClose() 
{
	if (!SpringArm) return;
	SpringArm->TargetArmLength = CAMERA_DISTANCE/1.5;
	SpringArm->bUsePawnControlRotation = true;
}

void ACharacterBase::SetCameraFar() 
{
	if (!SpringArm) return;
	SpringArm->TargetArmLength = CAMERA_DISTANCE*1.5;
	SpringArm->bUsePawnControlRotation = false;
}


