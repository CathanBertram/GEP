// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "EWeaponTypes.generated.h"

/**
 * 
 */
UENUM()
enum EWeaponTypes
{
	Pistol,
	Revolver,
	Shotgun,
	SMG,
	Rifle,
	AutoRifle,
	RayGun,
	GrenadeLauncher
};