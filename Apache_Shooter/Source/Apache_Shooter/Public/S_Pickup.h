// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "S_Pickup.generated.h"

UCLASS()
class APACHE_SHOOTER_API AS_Pickup : public AActor
{
	GENERATED_BODY()
	
public:	
	AS_Pickup();

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Properties")
	FName ItemName;

	void AttachPickupTo(USceneComponent* SceneComp, FName GripName);

	void DetachPickup();

protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, Category = "Components")
	class USphereComponent* ColliderComp;
};
