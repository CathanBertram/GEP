// Fill out your copyright notice in the Description page of Project Settings.


#include "GrenadeProjectile.h"


#include "Components/SphereComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AGrenadeProjectile::AGrenadeProjectile()
{
	projectileMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
	projectileMesh->OnComponentHit.AddDynamic(this, &AGrenadeProjectile::OnHit);

	projectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	projectileMovement->InitialSpeed = 3000.0f;
	projectileMovement->MaxSpeed = 3000.0f;
	projectileMovement->bRotationFollowsVelocity = true;
	projectileMovement->UpdatedComponent = projectileMesh;

}

void AGrenadeProjectile::Init(float Damage, float DamageRadius)
{
	projectileMesh->OnComponentHit.AddDynamic(this, &AGrenadeProjectile::OnHit);
	damage = Damage;
	damageRadius = DamageRadius;
}

void AGrenadeProjectile::OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                               FVector NormalImpulse, const FHitResult& Hit)
{
	UGameplayStatics::ApplyRadialDamage(GetWorld(), damage, GetActorLocation(), damageRadius,TSubclassOf<UDamageType>(UDamageType::StaticClass()),
		TArray<AActor*>(), GetOwner(), GetInstigator()->GetController(), true);

	// UGameplayStatics::ApplyRadialDamageWithFalloff(GetWorld(), damage, 1.0f, GetActorLocation(), damageRadius / 5,
	// 	damageRadius,2.0f, TSubclassOf<UDamageType>(UDamageType::StaticClass()),TArray<AActor*>(),GetOwner(),
	// 	GetInstigator()->GetController());
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), explosionSound, GetActorLocation());
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), explosionParticles, GetActorLocation());
	Destroy();
}

