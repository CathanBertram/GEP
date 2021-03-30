// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneAIParameters.h"

#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UDroneAIParameters::UDroneAIParameters()
{
	linearDamping = 2.0f;
	angularDamping = 10.0f;
	compMaxForce = 5000.0f;
	compMaxVel = 1000.0f;
	compMaxDist = 50.0f;
	compRotationAlpha = 0.1f;
	compUseShortestPath = true;
	compMaxDistFromTarget = 500.0f;
	compMinDistFromTarget = 400.0f;
	addedElevation = 300.0f;
}

void UDroneAIParameters::Setup()
{
	owner = Cast<ACharacter>(GetOwner());
	UCapsuleComponent* capsuleComponent = owner->GetCapsuleComponent();
	capsuleComponent->SetSimulatePhysics(true);
	capsuleComponent->SetEnableGravity(false);
	owner->GetCharacterMovement()->GravityScale = 0.0f;
	capsuleComponent->SetLinearDamping(linearDamping);
	capsuleComponent->SetAngularDamping(angularDamping);
}

