#include "BGamePlayController.h"

#include "Breakthrough.h"
#include "BInteractable.h"
#include "BGameMode.h"
#include "BPlayer.h"

void ABGamePlayController::Interact()
{
	if (CurrentInteractable)
	{
		CurrentInteractable->Interact(this);
	}
}

void ABGamePlayController::AddToInventoryByID(FName ID)
{
	//Give access to BGameMode and all Items in DataTable
	ABGameMode* GameMode = Cast<ABGameMode>(GetWorld()->GetAuthGameMode());
	UDataTable* ItemTable = GameMode->GetItemDB();

	FInventoryItem* ItemToAdd = ItemTable->FindRow<FInventoryItem>(ID, "");

	if (ItemToAdd)
	{
		Inventory.Add(*ItemToAdd);
	}
}

void ABGamePlayController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAction("Interact", IE_Pressed, this, &ABGamePlayController::Interact);
}
