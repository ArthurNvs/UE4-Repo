#include "BAnimInstance.h"

UBAnimInstance::UBAnimInstance()
{
	//variables defaults
	bIsGrabbing = false;
	bIsGrabbable = false;
}

void UBAnimInstance::SetGrab(bool bGrab)
{
	if (bGrab)
	bIsGrabbing = true;

	else
	bIsGrabbing = false;
}

void UBAnimInstance::SetIsGrabbable(bool bCanGrab)
{
	if (bCanGrab)
	bIsGrabbable = true;

	else
	bIsGrabbable = false;
}
