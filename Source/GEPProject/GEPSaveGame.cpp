// Fill out your copyright notice in the Description page of Project Settings.

#include "GEPSaveGame.h"
#include "GenericPlatform/GenericPlatformMath.h"

UGEPSaveGame::UGEPSaveGame()
{
	location = FVector::ZeroVector;
	rotator = FRotator::ZeroRotator;
	currency = 0;
	curHealth = 100;
	maxHealth = 100;
	curEnergy = 300;
	maxEnergy = 300;
	canBeDamaged = true;
	constantEnergyRegen = false;
	isNew = true;
	numEnemiesKilled = 0;
	won = false;
}

UGEPSaveGame* UGEPSaveGame::GetGEPSave_Implementation()
{
	return this;
}


