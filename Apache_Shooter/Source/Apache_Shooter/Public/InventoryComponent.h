// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.

#pragma once

#include "InventoryActor.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryComponent.generated.h"

class AInventoryActor;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class APACHE_SHOOTER_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

	UPROPERTY(VisibleAnywhere)
	TArray<AInventoryActor*> CurrentInventory;

	UFUNCTION()
	int32 AddToInventory(AInventoryActor* ActorToAdd);

	UFUNCTION()
	void RemoveFromInventory(AInventoryActor* ActorToRemove);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
