// Copyright by Philipe Go.

#include "GunShooter.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGunShooter::AGunShooter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootMesh = CreateDefaultSubobject<USceneComponent>(TEXT("Root Mesh"));
	SetRootComponent(RootMesh);

	//TODO REMOVE MESH UPROPERTY
	// GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Mesh"));
	// GunMesh->SetupAttachment(RootMesh);
}

// Called when the game starts or when spawned
void AGunShooter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AGunShooter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AGunShooter::ShootProjectile()
{
	if (MuzzleFlash && PlayerSkeletal)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, PlayerSkeletal, TEXT("Muzzle"));

		FVector StartPoint = PlayerSkeletal->GetSocketLocation(TEXT("Muzzle"));
		FRotator Rotation = PlayerSkeletal->GetSocketRotation(TEXT("Muzzle"));
		FVector EndPoint = StartPoint + Rotation.Vector() * BULLET_RANGE;

		FHitResult OutHit;
		if (GetWorld()->LineTraceSingleByChannel(OutHit, StartPoint,EndPoint,ECollisionChannel::ECC_GameTraceChannel1))
		{
			DrawDebugPoint(GetWorld(), OutHit.Location, 20, FColor::Yellow, true);
		}

#if WITH_EDITOR
		DrawDebugCamera(GetWorld(), StartPoint, Rotation, 90, 1.f, FColor::Red, true, 1.f);
		DrawDebugLine(GetWorld(), StartPoint, EndPoint, FColor::Green, true, 10.f, 0, 1.f);
#endif
	}
}
