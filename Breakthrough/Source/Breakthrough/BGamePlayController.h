#pragma once

#include "BPlayer.h"

//Default
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BGamePlayController.generated.h"

UCLASS()
class BREAKTHROUGH_API ABGamePlayController : public APlayerController
{
	GENERATED_BODY()

public:
	//The interactable that the hand is overlapping with (null if not)
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	class ABInteractable* CurrentInteractable;

	void Interact();

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<FInventoryItem> Inventory; //THINK about create a separate file for this USTRUCT

	UFUNCTION(BlueprintCallable, Category = "Utils")
	void AddToInventoryByID(FName ID);
	
protected:
	virtual void SetupInputComponent() override;

};
