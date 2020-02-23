// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "S_Pickup.h"
#include "S_Weapon.generated.h"


UCLASS()
class APACHE_SHOOTER_API AS_Weapon : public AS_Pickup
{
	GENERATED_BODY()

	public:
	AS_Weapon();

	void SetAim(bool bAim) { bWantToAim = bAim; }

//VARIABLES
	UPROPERTY(EditAnywhere, Category = "Propertyes")
	FName Index;

	UPROPERTY(EditAnywhere, Category = "Propertyes")
	float Damage;

	UPROPERTY(EditAnywhere, Category = "Propertyes")
	float ShotDistance;

	UPROPERTY(EditAnywhere, Category = "Propertyes")
	float LaserDistance;

	UPROPERTY(EditAnywhere, Category = "Propertyes")
	int Ammo;

	UPROPERTY(EditAnywhere, Category = "Propertyes")
	int Magazine;

	UPROPERTY(EditAnywhere, Category = "Propertyes")
	float ReloadSpeed;

//FUNCTIONS
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void Shoot();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void LauncherShoot();

	UFUNCTION(BlueprintCallable, Category = "Weapon")
	virtual void Reload();

	void CheckAim();

	protected:
	virtual void BeginPlay() override;

//PROPERTYES
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	class USkeletalMeshComponent* MeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UArrowComponent* ArrowComp;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStaticMeshComponent* LaserMesh;

//STATES
	bool bWantToAim;
};
