// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "XMagicProjectile.generated.h"

UCLASS()
class XACTIONROGUELIKE_API AXMagicProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AXMagicProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere)
	class USphereComponent* SphereComp;

	UPROPERTY(VisibleAnywhere)
	class UProjectileMovementComponent* ProjectileComp;

	UPROPERTY(VisibleAnywhere)
	class UParticleSystemComponent* EffectComp;
};
