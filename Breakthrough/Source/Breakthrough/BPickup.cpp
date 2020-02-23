#include "BPickup.h"

#include "Components/StaticMeshComponent.h"

ABPickup::ABPickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("PickupMesh"));
	PickupMesh->SetRelativeScale3D(FVector(25.0f));

	RootComponent = PickupMesh;

	ItemID = FName("Enter an ID");
}

void ABPickup::BeginPlay()
{
	Super::BeginPlay();
}

void ABPickup::Pickup_Implementation(USceneComponent* AttachTo)
{
	//PickupMesh->SetSimulatePhysics(false);
	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::KeepWorld, false);
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
}

void ABPickup::Drop_Implementation()
{
	//PickupMesh->SetSimulatePhysics(true);
	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);
}