// Copyright by Philipe Go.

#include "GunShooter.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
AGunShooter::AGunShooter()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootMesh = CreateDefaultSubobject<USceneComponent>(TEXT("Root Mesh"));
	SetRootComponent(RootMesh);
	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gun Mesh"));
	GunMesh->SetupAttachment(RootMesh);
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
#if WITH_EDITOR
	UE_LOG(LogTemp, Warning, TEXT("PEW PEW"));
#endif
}
