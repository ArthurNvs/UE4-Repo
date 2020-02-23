#pragma once

//Default
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BInteractionInterface.generated.h"

UINTERFACE(MinimalAPI)
class UBInteractionInterface : public UInterface
{
	GENERATED_BODY()
};

class BREAKTHROUGH_API IBInteractionInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Player Ability")
	void Pickup(class USceneComponent* AttachTo);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Player Ability")
	void Drop();
};