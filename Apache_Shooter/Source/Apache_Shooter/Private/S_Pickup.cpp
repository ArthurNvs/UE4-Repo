// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.


#include "S_Pickup.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"

AS_Pickup::AS_Pickup()
{
	PrimaryActorTick.bCanEverTick = true;

	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("PickupMesh"));
	PickupMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	PickupMesh->SetSimulatePhysics(true);
	PickupMesh->SetEnableGravity(true);

	RootComponent = PickupMesh;

	ColliderComp = CreateDefaultSubobject<USphereComponent>(FName("ColliderComp"));
	ColliderComp->SetupAttachment(PickupMesh);

	ItemName = FName("set name");
}


void AS_Pickup::AttachPickupTo(USceneComponent* SceneComp, FName GripName)
{
	PickupMesh->SetSimulatePhysics(false);
	PickupMesh->SetEnableGravity(false);
	PickupMesh->AttachToComponent(SceneComp, FAttachmentTransformRules::SnapToTargetNotIncludingScale, GripName);
}

void AS_Pickup::DetachPickup()
{
	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
	PickupMesh->SetSimulatePhysics(true);
	PickupMesh->SetEnableGravity(true);
	PickupMesh->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
}


void AS_Pickup::BeginPlay()
{
	Super::BeginPlay();
	
}


void AS_Pickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}