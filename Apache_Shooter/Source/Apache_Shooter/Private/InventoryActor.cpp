// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.


#include "InventoryActor.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/CollisionProfile.h"
#include "Components/StaticMeshComponent.h"

AInventoryActor::AInventoryActor()
{
	PrimaryActorTick.bCanEverTick = true;

	auto MeshAsset = ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("StaticMesh'/Engine/BasicShapes/Cube.Cube'"));
		if (MeshAsset.Object != nullptr)
		{
			GetStaticMeshComponent()->SetStaticMesh(MeshAsset.Object);
			GetStaticMeshComponent()->SetCollisionProfileName(
				UCollisionProfile::Pawn_ProfileName);
		}

	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);

	SetActorEnableCollision(true);
}


void AInventoryActor::Pickup()
{
	SetActorTickEnabled(false);
	SetActorHiddenInGame(true);
	SetActorEnableCollision(false);
}


void AInventoryActor::PutDown(FTransform TargetLocation)
{
	SetActorTickEnabled(true);
	SetActorHiddenInGame(false);
	SetActorEnableCollision(true);
	SetActorLocation(TargetLocation.GetLocation());
}
