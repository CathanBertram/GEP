// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"

#include "Components/Widget.h"
#include "GameFramework/HUD.h"
#include "GEPProjectHUD.generated.h"

UCLASS()
class AGEPProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGEPProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

