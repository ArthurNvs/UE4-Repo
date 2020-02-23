#pragma once

#include "BPlayerHand.h"
#include "Engine/DataTable.h"

//Default
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BPlayer.generated.h"

USTRUCT(BlueprintType)
struct FCraftingInfo : public FTableRowBase
{
	GENERATED_BODY()

	public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ComponentID; //component used to craft

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ProductID; //the component created from craft

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyItemA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bDestroyItemB;
};

USTRUCT(BlueprintType)
struct FInventoryItem : public FTableRowBase
{
	GENERATED_BODY()

	public: 

	FInventoryItem()
	{
		ItemName = FText::FromString("Item");
		ItemAction = FText::FromString("Use");
		ItemDescription = FText::FromString("Please enter a description for this item");
		ItemValue = 10;
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<class ABPickup> ItemPickup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ItemAction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Thumbnail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCraftingInfo> CraftCombinations; //holds all possible craft combinations 

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanBeUsed;

	bool operator==(const FInventoryItem& Item) const 
	{
		if (ItemID == Item.ItemID)
		return true;
		else return false;
	}
};

UCLASS()
class BREAKTHROUGH_API ABPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	ABPlayer();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

	void HandInstance();

	void GripLeft() { LController->Grab(); }

	void ReleaseLeft() { LController->Release(); }

	void GripRight() { RController->Grab(); }

	void ReleaseRight() { RController->Release(); }

	void RightTriggerPressed() { if (RController) RController->TriggerPressed(); }

	void RightTriggerReleased() { if (RController) RController->TriggerReleased(); }

private:
	UPROPERTY(VisibleAnywhere, Category = "Camera")
	class UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywhere, Category = "Character")
	class USceneComponent* PlayerRoot;

	UPROPERTY(EditAnywhere, Category = "Controller")
	ABPlayerHand* LController;

	UPROPERTY(EditAnywhere, Category = "Controller")
	ABPlayerHand* RController;

	UPROPERTY(EditAnywhere, Category = "Controller")
	TSubclassOf<ABPlayerHand> PlayerHandClass;

	UPROPERTY(VisibleAnywhere, Category = "Teleport")
	class UStaticMeshComponent* DestinationMarker;

	UPROPERTY(VisibleAnywhere, Category = "Teleport")
	class USplineComponent* TeleportPath;

	UPROPERTY(VisibleAnywhere, Category = "Teleport")
	TArray<class USplineMeshComponent*> TeleportPathMeshPool;

	UPROPERTY(EditDefaultsOnly, Category = "Teleport")
	class UStaticMesh* TeleportArchMesh;

	UPROPERTY(EditDefaultsOnly, Category = "Teleport")
	class UMaterialInterface* TeleportArchMaterial;

	//LineTracing data
	FHitResult HitResult;

	FTimerHandle THandle;

	UPROPERTY(EditAnywhere)
	float  TeleportProjectileSpeed = 1100;

	UPROPERTY(EditAnywhere)
	float  TeleportProjectileRadius = 10;

	UPROPERTY(EditAnywhere)
	float  TeleportSimulationTime = 2;

	UPROPERTY(EditAnywhere)
	float  TeleportFadeTime = 1;

	UPROPERTY(EditAnywhere)
	FVector  TeleportProjectionExtent = FVector(100, 100, 100);

};
