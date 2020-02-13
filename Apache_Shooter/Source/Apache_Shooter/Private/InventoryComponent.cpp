// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.


#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	CurrentInventory.SetNum(3);
}


int32 UInventoryComponent::AddToInventory(AInventoryActor* ActorToAdd)
{
	return CurrentInventory.Add(ActorToAdd);
}

void UInventoryComponent::RemoveFromInventory(AInventoryActor* ActorToRemove)
{
	CurrentInventory.Remove(ActorToRemove);
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	
}


void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

