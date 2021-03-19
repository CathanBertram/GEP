// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Sound/SoundCue.h"

#include "GrenadeProjectile.generated.h"

UCLASS()
class GEPPROJECT_API AGrenadeProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGrenadeProjectile();
	UPROPERTY(EditAnywhere)
	class UProjectileMovementComponent* projectileMovement;
	
	UPROPERTY(EditAnywhere)
    class UStaticMeshComponent* projectileMesh;

	UPROPERTY(EditAnywhere)
	USoundCue* explosionSound;

	UPROPERTY(EditAnywhere)
	UParticleSystem* explosionParticles;

	void Init(float Damage, float DamageRadius);
protected:
	UFUNCTION()
    void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	UPROPERTY(EditAnywhere)
	float damage;
	UPROPERTY(EditAnywhere)
	float damageRadius;
};
