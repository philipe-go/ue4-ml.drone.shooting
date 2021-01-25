// Copyright by Philipe Go.

#include "GunShooter.h"
#include "Camera/CameraShake.h"
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

//TODO removed line trace and setup aim UI
#if WITH_EDITOR
		FVector StartPoint = PlayerSkeletal->GetSocketLocation(TEXT("Muzzle"));
		FVector Direction = PlayerSkeletal->GetSocketRotation(TEXT("Muzzle")).Vector();
		FVector EndPoint = StartPoint + Direction * BULLET_RANGE;
		DrawDebugLine(GetWorld(), StartPoint, 
						EndPoint, FColor::Red, false, -1.f, 0, 1.f);
#endif
}

void AGunShooter::ShootProjectile()
{
	if (MuzzleFlash && PlayerSkeletal)
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, PlayerSkeletal, TEXT("Muzzle"));
		UGameplayStatics::SpawnSoundAttached(MuzzleSound, PlayerSkeletal, TEXT("Muzzle"));
		
		FVector StartPoint = PlayerSkeletal->GetSocketLocation(TEXT("Muzzle"));
		FVector Direction = PlayerSkeletal->GetSocketRotation(TEXT("Muzzle")).Vector();
		FVector EndPoint = StartPoint + Direction * BULLET_RANGE;
		FCollisionQueryParams Params;

		Params.AddIgnoredActor(this);
		Params.AddIgnoredActor(GetOwner());
		FHitResult OutHit;
		
		if (GetWorld()->LineTraceSingleByChannel(OutHit, StartPoint,EndPoint,ECollisionChannel::ECC_GameTraceChannel1, Params))
		{
			if (HitParticle) UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), HitParticle,OutHit.Location, Direction.Rotation());

			UGameplayStatics::PlaySoundAtLocation(GetWorld(), HitSound,OutHit.Location);

			FPointDamageEvent DamageEvent(DamageRate, OutHit, Direction, nullptr);
			if (OutHit.GetActor()) 
			{
				APawn* Pawn = Cast<APawn>(GetOwner());
				if (!Pawn) return;
				
				OutHit.GetActor()->TakeDamage(DamageRate, DamageEvent, Pawn->GetController(), this);
			}
		}
	}
}
