// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GEPProject/Interfaces/Shootable.h"
#include "GameFramework/Actor.h"
#include "GEPProject/Interfaces/InitableEnemy.h"
#include "Sound/SoundCue.h"
#include "Enemy_Base.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);

UCLASS()
class GEPPROJECT_API AEnemy_Base : public AActor, public IShootable, public IInitableEnemy
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class UStaticMeshComponent* boxMesh;
public:	
	// Sets default values for this actor's properties
	AEnemy_Base();
	
	UFUNCTION(BlueprintCallable,BlueprintNativeEvent)
    void GetShot();
	virtual void GetShot_Implementation() override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Init();
	virtual void Init_Implementation() override;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    class AEnemy_Base* GetEnemyBase();
	virtual AEnemy_Base* GetEnemyBase_Implementation() override;

	UFUNCTION(BlueprintCallable, Category = "MyFunctions")
	void EndOfLifetime();

	FOnDeath OnDeath;
protected:
	UPROPERTY(EditAnywhere)
	USoundCue* explosionSound;

	UPROPERTY(EditAnywhere)
	UParticleSystem* explosionParticles;

	UPROPERTY(EditAnywhere)
	float currencyToDrop;
	
	void Death();
};

