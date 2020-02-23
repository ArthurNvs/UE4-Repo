#pragma once

//Default
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BAnimInstance.generated.h"

UCLASS()
class BREAKTHROUGH_API UBAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UBAnimInstance();

	void SetGrab(bool bGrab);

	void SetIsGrabbable(bool bCanGrab);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blend")
	bool bIsGrabbing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blend")
	bool bIsGrabbable;
};
