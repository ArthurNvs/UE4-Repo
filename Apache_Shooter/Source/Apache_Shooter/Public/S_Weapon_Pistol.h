// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "S_Weapon.h"
#include "S_Weapon_Pistol.generated.h"


UCLASS()
class APACHE_SHOOTER_API AS_Weapon_Pistol : public AS_Weapon
{
	GENERATED_BODY()

public:
	AS_Weapon_Pistol();

protected:
	//FUNCTIONS
	virtual void Shoot() override;
	virtual void Reload() override;
};
