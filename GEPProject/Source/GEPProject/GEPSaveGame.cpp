// Fill out your copyright notice in the Description page of Project Settings.

#include "GEPSaveGame.h"
#include "GenericPlatform/GenericPlatformMath.h"

UGEPSaveGame::UGEPSaveGame()
{
	transform = FTransform::Identity;
	currency = 0;
	
}

UGEPSaveGame* UGEPSaveGame::GetGEPSave_Implementation()
{
	return this;
}


