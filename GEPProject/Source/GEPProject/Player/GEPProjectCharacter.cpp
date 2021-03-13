// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectCharacter.h"
#include "GEPProject/Weapons/GEPProjectProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/ChildActorComponent.h"
#include "GEPProject/Interfaces/Fireable.h"
#include "GEPProject/Interfaces/Interactable.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AGEPProjectCharacter

AGEPProjectCharacter::AGEPProjectCharacter() : Super()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	ControllerTurnRate = 45.f;
	ControllerLookUpRate = 45.f;
	MouseTurnRate = 1.f;
	MouseLookUpRate = 1.f;

	interactRange = 300.f;
	maxHealth = 100.f;
	currentHealth = maxHealth;
	
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	childActorGun = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	childActorGun->SetupAttachment(FirstPersonCameraComponent);
	childActorGun->CreateChildActor();
}


APawn* AGEPProjectCharacter::GetAsPawn_Implementation()
{
	return this;
}

void AGEPProjectCharacter::Init_Implementation()
{
	Super::BeginPlay();
}

AGEPProjectCharacter* AGEPProjectCharacter::GetAsChar_Implementation()
{
	return this;
}

void AGEPProjectCharacter::JumpPressed_Implementation()
{
	Jump();
}

void AGEPProjectCharacter::JumpReleased_Implementation()
{
	StopJumping();
}

void AGEPProjectCharacter::FirePressed_Implementation()
{
	AActor* child = childActorGun->GetChildActor();
	if (child->GetClass()->ImplementsInterface(UFireable::StaticClass()))
	{
		IFireable::Execute_Fire(child);
	}
}

void AGEPProjectCharacter::FireReleased_Implementation()
{
}

void AGEPProjectCharacter::InteractPressed_Implementation()
{
	OnInteract();
}

void AGEPProjectCharacter::InteractReleased_Implementation()
{
}

void AGEPProjectCharacter::MoveForward_Implementation(float value)
{
	if (value != 0.0f)
		AddMovementInput(GetActorForwardVector(), value);
}

void AGEPProjectCharacter::MoveRight_Implementation(float value)
{
	if (value != 0.0f)
		AddMovementInput(GetActorRightVector(), value);
}

void AGEPProjectCharacter::LookUpAtRate_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerPitchInput(value * ControllerLookUpRate * GetWorld()->GetDeltaSeconds());
}

void AGEPProjectCharacter::TurnAtRate_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerYawInput(value * ControllerTurnRate * GetWorld()->GetDeltaSeconds());
}

void AGEPProjectCharacter::LookUp_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerPitchInput(value * MouseLookUpRate);
}

void AGEPProjectCharacter::Turn_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerYawInput(value * MouseTurnRate);
}


void AGEPProjectCharacter::OnInteract()
{
	UWorld* const world = GetWorld();
	if (world != nullptr)
	{
		FHitResult hit(ForceInit);
		FVector start = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetCameraLocation(); 
		FVector forward = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager->GetActorForwardVector();
		FVector end = (forward * interactRange) + start;
		
		FCollisionQueryParams collsionParams;

		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collsionParams))
		{
			IInteractable* interactableCast = Cast<IInteractable>(hit.GetActor()); //cast to Interface through Actor
			if (interactableCast)
			{
				interactableCast->Execute_OnInteract(hit.GetActor());
			}
			//hit.Actor->K2_DestroyActor();
		}
	}
}

