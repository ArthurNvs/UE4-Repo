#pragma once

//Default
#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "BGameMode.generated.h"

UCLASS()
class BREAKTHROUGH_API ABGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	class UDataTable* GetItemDB() const { return ItemDB; }

protected:
	UPROPERTY(EditDefaultsOnly)
	class UDataTable* ItemDB;

};
