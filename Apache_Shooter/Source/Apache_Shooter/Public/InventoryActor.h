// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InventoryActor.generated.h"


UCLASS()
class APACHE_SHOOTER_API AInventoryActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AInventoryActor();

	virtual void Pickup();

	virtual void PutDown(FTransform TargetLocation);
};
