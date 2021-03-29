// Fill out your copyright notice in the Description page of Project Settings.


#include "UpgradeStand.h"

#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

AUpgradeStand::AUpgradeStand()
{
	machineMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MachineMesh"));
	machineMesh->SetRenderCustomDepth(true);
	machineMesh->CustomDepthStencilValue = 2;
}

void AUpgradeStand::OnInteract_Implementation(AGEPProjectCharacter* character)
{
	UWorld* world = GetWorld();
	UGameplayStatics::SetGamePaused(world, true);
	APlayerController* pc =UGameplayStatics::GetPlayerController(world, 0);
	pc->bShowMouseCursor = true;
	upgradeMenu = CreateWidget<UUserWidget>(pc, wUpgradeMenu);
	if (upgradeMenu)
	{
		upgradeMenu->AddToViewport();
	}
}

