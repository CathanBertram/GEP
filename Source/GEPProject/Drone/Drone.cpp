// Fill out your copyright notice in the Description page of Project Settings.


#include "Drone.h"

#include "DroneAIC.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
ADrone::ADrone()
{
	droneAIParameters = CreateDefaultSubobject<UDroneAIParameters>(TEXT("DroneAIParams"));
	staticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	staticMesh->SetRenderCustomDepth(true);
	staticMesh->CustomDepthStencilValue = 2;
	staticMesh->SetupAttachment(GetCapsuleComponent());

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	projSpawn = CreateDefaultSubobject<USceneComponent>(TEXT("GunMuzzle"));
	projSpawn->SetupAttachment(staticMesh);
	//arrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrownComponent"));
}

void ADrone::OnInteract_Implementation(AGEPProjectCharacter* character)
{
	character->GetController()->Possess(this);
	FVector p1 = character->GetActorLocation();
	FVector p2 = GetActorLocation();

	FVector direction = (p1-p2);
	direction.Normalize();
	FRotator rot = direction.Rotation();
	SetActorRotation(FRotator::ZeroRotator);
	SetActorRotation(rot);

	bUseControllerRotationPitch = true;
	bUseControllerRotationRoll = true;
	bUseControllerRotationYaw = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;
	player = character->GetAsPawn_Implementation();

	UCapsuleComponent* capsuleComponent = GetCapsuleComponent();
	capsuleComponent->SetSimulatePhysics(false);
	capsuleComponent->SetEnableGravity(true);
	GetCharacterMovement()->GravityScale = 0.0f;
	capsuleComponent->SetLinearDamping(0.01f);
	capsuleComponent->SetAngularDamping(0.0f);
	staticMesh->SetVisibility(false);
}

ADrone* ADrone::GetDrone_Implementation()
{
	return this;
}

void ADrone::UpdateTarget(AActor* newTarget, bool enemy)
{
	aiController->GetBlackboardComponent()->SetValueAsObject("Target", newTarget);
	aiController->GetBlackboardComponent()->SetValueAsBool("TargettingEnemy", enemy);
	curTarget = newTarget;
	targettingEnemy = enemy;
}

void ADrone::Shoot()
{
	if (!canAttack)
		return;
	
	canAttack = false;

	UWorld* const world = GetWorld();
	if (world != nullptr)
	{	
		FHitResult hit(ForceInit);
		APlayerCameraManager* cameraManager = UGameplayStatics::GetPlayerController(world, 0)->PlayerCameraManager;
		FVector start = GetActorLocation();
		FVector forward = GetActorForwardVector();
		//add screen shake maybe
		
		UGameplayStatics::PlaySoundAtLocation(world, shootSound, start, GetActorRotation());
		UGameplayStatics::SpawnEmitterAtLocation(world, muzzleFlash , projSpawn->GetComponentLocation());
		
		FVector end = (forward * range) + start;

		// const FName traceTag("TraceTag");
		// world->DebugDrawTraceTag = traceTag; //Draws arrow at hit point
		FCollisionQueryParams collisionParams;
		// collisionParams.TraceTag = traceTag;
		collisionParams.AddIgnoredActor(this);
		
		if (world->LineTraceSingleByChannel(hit, start,end, ECC_Visibility, collisionParams))
		{
			if (UKismetSystemLibrary::DoesImplementInterface(hit.GetActor(), UShootable::StaticClass()))
			{
				IShootable::Execute_GetShot(hit.GetActor());
			}
			//Use this to damage enemies
			UGameplayStatics::ApplyDamage(hit.GetActor(), attackDamage, this->GetInstigatorController(), this, TSubclassOf<UDamageType>(UDamageType::StaticClass()));
			UGameplayStatics::SpawnEmitterAtLocation(world, hitParticle , hit.Location);	
		}
	}

	FTimerHandle timer;
	GetWorldTimerManager().SetTimer(timer, this, &ADrone::ResetCanAttack, attackCooldown);
}


void ADrone::Init()
{
	droneAIParameters->Setup();

	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	aiController = Cast<ADroneAIC>(GetController());
	aiController->SetupAIC(bt, UGameplayStatics::GetPlayerPawn(GetWorld(), 0), droneAIParameters);

	aiController->GetBlackboardComponent()->SetValueAsBool("TargettingEnemy", false);
	canTargetEnemy = true;
	canAttack = true;

}

void ADrone::EnemyDied()
{
	canTargetEnemy = false;
	FTimerHandle resetTimer;
	GetWorldTimerManager().SetTimer(resetTimer, this, &ADrone::ResetCanTarget, targetCooldown);
}

void ADrone::UpdateValues(float damage, float cooldown, float moveSpeed)
{
	attackDamage = damage;
	targetCooldown = cooldown;
	droneAIParameters->compMaxForce = moveSpeed;
}

void ADrone::ResetCanTarget()
{
	canTargetEnemy = true;
}

void ADrone::Crouching()
{
	if(!crouching) return;
	
	AddMovementInput(GetActorUpVector(), -1);
	FTimerHandle timer;
	GetWorldTimerManager().SetTimer(timer, this, &ADrone::Crouching, 0.05f);
}

void ADrone::Jumping()
{
	if(!jumping) return;
	
	AddMovementInput(GetActorUpVector(), 1);
	FTimerHandle timer;
	GetWorldTimerManager().SetTimer(timer, this, &ADrone::Jumping, 0.05f);
}

void ADrone::ResetCanAttack()
{
	canAttack = true;
}

void ADrone::JumpPressed_Implementation()
{
	jumping = true;
	Jumping();
}

void ADrone::JumpReleased_Implementation()
{
	jumping = false;
}

void ADrone::FirePressed_Implementation()
{
	Shoot();
}

void ADrone::FireReleased_Implementation()
{
}

void ADrone::InteractPressed_Implementation()
{
	GetController()->Possess(player);
	aiController->Possess(this);
	aiController->RunBT();
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
	GetCharacterMovement()->bOrientRotationToMovement = true;
	droneAIParameters->Setup();
	staticMesh->SetVisibility(true);
}

void ADrone::InteractReleased_Implementation()
{
}

void ADrone::Key1Pressed_Implementation()
{
}

void ADrone::Key2Pressed_Implementation()
{
}

void ADrone::Key3Pressed_Implementation()
{
}

void ADrone::Key4Pressed_Implementation()
{
}

void ADrone::Key5Pressed_Implementation()
{
}

void ADrone::Key6Pressed_Implementation()
{
}

void ADrone::Key7Pressed_Implementation()
{
}

void ADrone::Key8Pressed_Implementation()
{
}

void ADrone::NextWeaponPressed_Implementation()
{
}

void ADrone::PrevWeaponPressed_Implementation()
{
}

void ADrone::CrouchPressed_Implementation()
{
	crouching = true;
	Crouching();
}

void ADrone::CrouchReleased_Implementation()
{
	crouching = false;
}

void ADrone::MoveForward_Implementation(float value)
{
	if (value != 0.0f)
		AddMovementInput(GetActorForwardVector(), value);
}

void ADrone::MoveRight_Implementation(float value)
{
	if (value != 0.0f)
		AddMovementInput(GetActorRightVector(), value);
}

void ADrone::LookUpAtRate_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerPitchInput(value * GetWorld()->GetDeltaSeconds());
}

void ADrone::TurnAtRate_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerYawInput(value * GetWorld()->GetDeltaSeconds());
}

void ADrone::LookUp_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerPitchInput(value);
}

void ADrone::Turn_Implementation(float value)
{
	if (value != 0.0f)
		AddControllerYawInput(value);
}


