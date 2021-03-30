// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneAIC.h"

#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BlackboardData.h"

ADroneAIC::ADroneAIC()
{
	droneAIParams = CreateDefaultSubobject<UDroneAIParameters>(TEXT("DroneAIParams"));
}

void ADroneAIC::Init()
{
	pawnSensing->OnSeePawn.AddDynamic(this, &ADroneAIC::OnSeePawn);
}

void ADroneAIC::SetupAIC(UBehaviorTree* bt, APawn* pawnTarget, UDroneAIParameters* aiParams)
{
	behaviorTree = bt;
	target = pawnTarget;
	droneAIParams = aiParams;
	RunBehaviorTree(behaviorTree);
	UBlackboardComponent* bb = GetBlackboardComponent();
	bb->SetValueAsObject("Target", target);
	bb->SetValueAsVector("Origin", GetPawn()->GetActorLocation());
	bb->SetValueAsFloat("MaxDistToPlayer", droneAIParams->compMaxDistFromTarget);
	bb->SetValueAsFloat("MinDistToPlayer", droneAIParams->compMinDistFromTarget);
	
}

void ADroneAIC::RunBT()
{
	RunBehaviorTree(behaviorTree);
}

void ADroneAIC::OnSeePawn(APawn* pawn)
{
	
}
