// Fill out your copyright notice in the Description page of Project Settings.


#include "GEPPlayerController.h"
#include "GEPProject/Interfaces/InitableChar.h"
#include "GEPProject/Interfaces/Inputable.h"
#include "GameFramework/GameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

AGEPPlayerController::AGEPPlayerController() : Super()
{
	
}

void AGEPPlayerController::Init_Implementation()
{
	
	if (GetPawn() != nullptr)
	{
		GetPawn()->Destroy();
	}

	UWorld* const world =  GetWorld();
	if (world != nullptr && pawnToSpawn)
	{
		AActor* tempStart = UGameplayStatics::GetGameMode(world)->FindPlayerStart(this);
		FVector spawnLocation = ((tempStart != nullptr) ? tempStart->GetActorLocation() : FVector::ZeroVector);
		FRotator spawnRotation = ((tempStart != nullptr) ? tempStart->GetActorRotation() : FRotator::ZeroRotator);

		FActorSpawnParameters actorSpawnParams;
		actorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

		APawn* tempPawn = world->SpawnActor<APawn>(pawnToSpawn, spawnLocation, spawnRotation, actorSpawnParams);
		
		if (UKismetSystemLibrary::DoesImplementInterface(tempPawn, UInitableChar::StaticClass()))
		{
			AGEPProjectCharacter* tempChar = IInitableChar::Execute_GetAsChar(tempPawn);
			
			//Bind Events
			
			IInitableChar::Execute_Init(tempPawn);
		}
		Possess(tempPawn);
	}
}

AGEPPlayerController* AGEPPlayerController::GetAsPC_Implementation()
{
	return this;
}

void AGEPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Jump", IE_Pressed, this, &AGEPPlayerController::JumpPressed);
	InputComponent->BindAction("Jump", IE_Released, this, &AGEPPlayerController::JumpReleased);
	InputComponent->BindAction("Fire", IE_Pressed, this, &AGEPPlayerController::FirePressed);
	InputComponent->BindAction("Fire", IE_Released, this, &AGEPPlayerController::FireReleased);
	InputComponent->BindAction("Interact", IE_Pressed, this, &AGEPPlayerController::InteractPressed);
	InputComponent->BindAction("Interact", IE_Released, this, &AGEPPlayerController::InteractReleased);

	
	InputComponent->BindAxis("MoveForward", this, &AGEPPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AGEPPlayerController::MoveRight);
	InputComponent->BindAxis("LookUpRate", this, &AGEPPlayerController::LookUpAtRate);
	InputComponent->BindAxis("TurnRate", this, &AGEPPlayerController::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &AGEPPlayerController::LookUp);
	InputComponent->BindAxis("Turn", this, &AGEPPlayerController::Turn);

}

void AGEPPlayerController::JumpPressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_JumpPressed(pawn);
	}
}

void AGEPPlayerController::JumpReleased()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_JumpReleased(pawn);
	}
}

void AGEPPlayerController::FirePressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_FirePressed(pawn);
	}
}

void AGEPPlayerController::FireReleased()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_FireReleased(pawn);
	}
}

void AGEPPlayerController::InteractPressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_InteractPressed(pawn);
	}
}

void AGEPPlayerController::InteractReleased()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_InteractReleased(pawn);
	}
}

void AGEPPlayerController::MoveForward(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_MoveForward(pawn, value);
	}
}

void AGEPPlayerController::MoveRight(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_MoveRight(pawn, value);
	}
}

void AGEPPlayerController::LookUpAtRate(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_LookUpAtRate(pawn, value);
	}
}

void AGEPPlayerController::TurnAtRate(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_TurnAtRate(pawn, value);
	}
}

void AGEPPlayerController::LookUp(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_LookUp(pawn, value);
	}
}

void AGEPPlayerController::Turn(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Turn(pawn, value);
	}
}

