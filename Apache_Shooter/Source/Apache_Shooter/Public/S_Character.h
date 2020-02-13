// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "S_Character.generated.h"

UCLASS()
class APACHE_SHOOTER_API AS_Character : public ACharacter
{
	GENERATED_BODY()

public:
	AS_Character();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	void HidePickup(AS_Pickup* Hide);

	void CharInits();

protected:
	//PROPERTYES
	UPROPERTY(EditAnywhere, Category = Components)
	FString Index;

	UPROPERTY(EditAnywhere, Category = Components)
	float MaxSpeed;

	UPROPERTY(EditAnywhere, Category = Components)
	float Health;

	//The overlapping item, should be null if none
	UPROPERTY(VisibleAnywhere, Category = PickupItem)
	class AS_Pickup* PickupNearActor;

	//Global Reference to the currently equipped item
	UPROPERTY(VisibleAnywhere, Category = PickupItem)
	class AS_Pickup* InHandsItem;

	//Character items Inventory
	UPROPERTY(VisibleAnywhere, Category = ItemsInventory)
	TArray<class AS_Pickup*> ItemsInventory;

	//Character weapons Inventory
	UPROPERTY(VisibleAnywhere, Category = WeaponsInventory)
	TArray<class AS_Pickup*> WeaponInventory;

	UPROPERTY(VisibleAnywhere, Category = Components)
	class USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, Category = Components)
	class UCameraComponent* CameraComp;

	//FUNCTIONS
	virtual void BeginPlay() override;

	UFUNCTION()
	void MoveForward(float Value);

	UFUNCTION()
	void MoveRight(float Value);

	UFUNCTION()
	void GetOverlappingItems();

	UFUNCTION()
	void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void PickupItem();

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void HoldItem(AS_Pickup* ItemIn);

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void DropSelectedItem();

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void SelectItem1();

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void SelectItem2();

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void SelectItem3();

	UFUNCTION(BlueprintCallable, Category = Pickup)
	void SelectItem4();

};
