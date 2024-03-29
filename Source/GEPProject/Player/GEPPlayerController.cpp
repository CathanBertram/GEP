// Fill out your copyright notice in the Description page of Project Settings.


#include "GEPPlayerController.h"
#include "GEPProject/Interfaces/InitableChar.h"
#include "GEPProject/Interfaces/Inputable.h"
#include "GameFramework/GameModeBase.h"
#include "GEPProject/EventSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GEPProject/GEPSaveGame.h"

AGEPPlayerController::AGEPPlayerController() : Super()
{
	ControllerTurnRate = 45.f;
	ControllerLookUpRate = 45.f;
	MouseTurnRate = 1.f;
	MouseLookUpRate = 1.f;
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
	InputComponent->BindAction("Key1", IE_Pressed, this, &AGEPPlayerController::Key1Pressed);
	InputComponent->BindAction("Key2", IE_Pressed, this, &AGEPPlayerController::Key2Pressed);
	InputComponent->BindAction("Key3", IE_Pressed, this, &AGEPPlayerController::Key3Pressed);
	InputComponent->BindAction("Key4", IE_Pressed, this, &AGEPPlayerController::Key4Pressed);
	InputComponent->BindAction("Key5", IE_Pressed, this, &AGEPPlayerController::Key5Pressed);
	InputComponent->BindAction("Key6", IE_Pressed, this, &AGEPPlayerController::Key6Pressed);
	InputComponent->BindAction("Key7", IE_Pressed, this, &AGEPPlayerController::Key7Pressed);
	InputComponent->BindAction("Key8", IE_Pressed, this, &AGEPPlayerController::Key8Pressed);
	InputComponent->BindAction("QuickSave", IE_Pressed, this, &AGEPPlayerController::QuickSavePressed);
	InputComponent->BindAction("QuickLoad", IE_Pressed, this, &AGEPPlayerController::QuickLoadPressed);
	InputComponent->BindAction("NextWeapon", IE_Pressed, this, &AGEPPlayerController::NextWeaponPressed);
	InputComponent->BindAction("PrevWeapon", IE_Pressed, this, &AGEPPlayerController::PrevWeaponPressed);
	InputComponent->BindAction("Crouch", IE_Pressed, this, &AGEPPlayerController::CrouchPressed);
	InputComponent->BindAction("Crouch", IE_Released, this, &AGEPPlayerController::CrouchReleased);
	InputComponent->BindAction("Pause", IE_Pressed, this, &AGEPPlayerController::OnPause);
	
	InputComponent->BindAxis("MoveForward", this, &AGEPPlayerController::MoveForward);
	InputComponent->BindAxis("MoveRight", this, &AGEPPlayerController::MoveRight);
	InputComponent->BindAxis("LookUpRate", this, &AGEPPlayerController::LookUpAtRate);
	InputComponent->BindAxis("TurnRate", this, &AGEPPlayerController::TurnAtRate);
	InputComponent->BindAxis("LookUp", this, &AGEPPlayerController::LookUp);
	InputComponent->BindAxis("Turn", this, &AGEPPlayerController::Turn);

}
void AGEPPlayerController::QuickSavePressed()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnStartSave();
}

void AGEPPlayerController::QuickLoadPressed()
{
	GetGameInstance()->GetSubsystem<UEventSystem>()->OnStartLoad();
}


#pragma region input

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

void AGEPPlayerController::Key1Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key1Pressed(pawn);
	}
}

void AGEPPlayerController::Key2Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key2Pressed(pawn);
	}
}

void AGEPPlayerController::Key3Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key3Pressed(pawn);
	}
}

void AGEPPlayerController::Key4Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key4Pressed(pawn);
	}
}

void AGEPPlayerController::Key5Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key5Pressed(pawn);
	}
}

void AGEPPlayerController::Key6Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key6Pressed(pawn);
	}
}


void AGEPPlayerController::Key7Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key7Pressed(pawn);
	}
}


void AGEPPlayerController::Key8Pressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Key8Pressed(pawn);
	}
}

void AGEPPlayerController::NextWeaponPressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_NextWeaponPressed(pawn);
	}
}

void AGEPPlayerController::PrevWeaponPressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_PrevWeaponPressed(pawn);
	}
}

void AGEPPlayerController::CrouchPressed()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_CrouchPressed(pawn);
	}
}

void AGEPPlayerController::CrouchReleased()
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_CrouchReleased(pawn);
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
		IInputable::Execute_LookUpAtRate(pawn, value * ControllerLookUpRate);
	}
}

void AGEPPlayerController::TurnAtRate(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_TurnAtRate(pawn, value * ControllerTurnRate);
	}
}

void AGEPPlayerController::LookUp(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_LookUp(pawn, value * MouseTurnRate);
	}
}

void AGEPPlayerController::Turn(float value)
{
	APawn* pawn = GetPawn();
	if (UKismetSystemLibrary::DoesImplementInterface(pawn, UInputable::StaticClass()))
	{
		IInputable::Execute_Turn(pawn, value * MouseTurnRate);
	}
}
#pragma endregion 
