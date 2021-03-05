// Fill out your copyright notice in the Description page of Project Settings.


#include "EventSystem.h"

void UEventSystem::OnEventName()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Red,"OnEventName");
	onEventName.Broadcast();
}
