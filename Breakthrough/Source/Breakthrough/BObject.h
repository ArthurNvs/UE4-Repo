#pragma once

#include "BInteractionInterface.h"

//Default
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BObject.generated.h"

UCLASS()
class BREAKTHROUGH_API ABObject : public AActor, public IBInteractionInterface
{
	GENERATED_BODY()
	
public:	
	ABObject();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Pickup")
	class UStaticMeshComponent* ObjectMesh;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void Pickup_Implementation(class USceneComponent* AttachTo);

	virtual void Drop_Implementation();
};
