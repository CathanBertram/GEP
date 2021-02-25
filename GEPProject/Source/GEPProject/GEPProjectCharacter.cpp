// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEPProjectCharacter.h"
#include "GEPProjectProjectile.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Components/ChildActorComponent.h"
#include "Interfaces/Fireable.h"
#include "Interfaces/Interactable.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AGEPProjectCharacter

AGEPProjectCharacter::AGEPProjectCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	childActorGun = CreateDefaultSubobject<UChildActorComponent>(TEXT("GunSlot"));
	childActorGun->SetupAttachment(FirstPersonCameraComponent);
	childActorGun->CreateChildActor();
}

void AGEPProjectCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();
}

APawn* AGEPProjectCharacter::GetAsPawn_Implementation()
{
	return this;
}

//////////////////////////////////////////////////////////////////////////
// Input

void AGEPProjectCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AGEPProjectCharacter::OnFire);

	PlayerInputComponent->BindAxis("MoveForward", this, &AGEPProjectCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AGEPProjectCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AGEPProjectCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AGEPProjectCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AGEPProjectCharacter::OnFire);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &AGEPProjectCharacter::OnInteract);
}

void AGEPProjectCharacter::OnFire()
{
	AActor* child = childActorGun->GetChildActor(); //Gets child actor
	IFireable* weaponCast = Cast<IFireable>(child); //cast to Interface through Actor
	if (weaponCast)
	{
		weaponCast->Execute_Fire(child);
	}
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
			IInteractable* shootableCast = Cast<IInteractable>(hit.GetActor()); //cast to Interface through Actor
			if (shootableCast)
			{
				shootableCast->Execute_OnInteract(hit.GetActor());
			}
			//hit.Actor->K2_DestroyActor();
		}
	}
}

void AGEPProjectCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AGEPProjectCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AGEPProjectCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AGEPProjectCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
