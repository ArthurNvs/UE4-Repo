#pragma once

#include "BInteractionInterface.h"

//Default
#include "CoreMinimal.h"
#include "BInteractable.h"
#include "BPickup.generated.h"

UCLASS()
class BREAKTHROUGH_API ABPickup : public ABInteractable, public IBInteractionInterface
{
	GENERATED_BODY()

public:
	ABPickup();

	virtual void BeginPlay() override;

	virtual void Pickup_Implementation(class USceneComponent* AttachTo);

	virtual void Drop_Implementation();

protected:
	UPROPERTY(EditAnywhere, Category = "Pickup")
	class UStaticMeshComponent* PickupMesh;
};
