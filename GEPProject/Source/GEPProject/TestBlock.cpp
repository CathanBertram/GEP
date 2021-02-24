// Fill out your copyright notice in the Description page of Project Settings.


#include "TestBlock.h"

#include <string>


#include "Components/BoxComponent.h"
int a = 0;
// Sets default values
ATestBlock::ATestBlock()
{
	boxMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Box"));

}

void ATestBlock::GetShot_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red, FString::Printf(TEXT("Shot")));
}

void ATestBlock::OnInteract_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red, FString::Printf(TEXT("Interact")));
}

// Called when the game starts or when spawned
void ATestBlock::BeginPlay()
{
	Super::BeginPlay();
	
}

