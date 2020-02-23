#pragma once

//Default
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BInteractable.generated.h"

UCLASS()
class BREAKTHROUGH_API ABInteractable : public AActor
{
	GENERATED_BODY()

public:
	ABInteractable();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactables Properties")
	FName ItemID;

	UPROPERTY(EditDefaultsOnly, Category = "Interactables Properties")
	FString Name;

	UPROPERTY(EditDefaultsOnly, Category = "Interactables Properties")
	FString	Action;

	UPROPERTY(EditAnywhere, Category = "Pickup")
	class UTextRenderComponent* TextRender;

	//Functions
	UFUNCTION(BlueprintCallable, Category = "Interactables Functions") //BlueprintImplementableEvent
	void Interact(APlayerController* Controller); //Called via blueprint in overridable function

	void SetTextVisibility(bool bStatus);

	UFUNCTION(BlueprintCallable, Category = "Interactables Functions")
	FString GetUseText() const { return FString::Printf(TEXT("% s : Press A to % s"), *Name, *Action); }
};
