// Fill out your copyright notice in the Description page of Project Settings.

#include "GEPSaveGame.h"
#include "GenericPlatform/GenericPlatformMath.h"

UGEPSaveGame::UGEPSaveGame()
{
	transform = FTransform::Identity;
	currency = 0;
	curHealth = 100;
	maxHealth = 100;
	curEnergy = 300;
	maxEnergy = 300;
	canBeDamaged = false;
	constantEnergyRegen = false;
	
}

UGEPSaveGame* UGEPSaveGame::GetGEPSave_Implementation()
{
	return this;
}


