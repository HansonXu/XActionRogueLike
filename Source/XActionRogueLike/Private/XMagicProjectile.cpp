// Fill out your copyright notice in the Description page of Project Settings.


#include "XMagicProjectile.h"
#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Particles/ParticleSystemComponent.h"


// Sets default values
AXMagicProjectile::AXMagicProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComp = CreateDefaultSubobject<USphereComponent>(FName("SphereComp"));
	// SphereComp->SetCollisionObjectType(ECC_WorldDynamic);
	// SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	// SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetCollisionProfileName(FName("Projectile"));
	RootComponent = SphereComp;

	EffectComp = CreateDefaultSubobject<UParticleSystemComponent>(FName("EffectComp"));
	EffectComp->SetupAttachment(SphereComp);

	ProjectileComp = CreateDefaultSubobject<UProjectileMovementComponent>(FName("ProjectileComp"));
	ProjectileComp->InitialSpeed = 1000.0f;
	ProjectileComp->bRotationFollowsVelocity = true;
	ProjectileComp->bInitialVelocityInLocalSpace = true;
}

// Called when the game starts or when spawned
void AXMagicProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AXMagicProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

