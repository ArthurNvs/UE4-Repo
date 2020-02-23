#include "BInteractable.h"

#include "Components/TextRenderComponent.h"
#include "BGamePlayController.h"

ABInteractable::ABInteractable()
{
	PrimaryActorTick.bCanEverTick = true;

	Name = "empty";
	Action = "empty action";

	TextRender = CreateDefaultSubobject<UTextRenderComponent>(FName("TextRender"));
	TextRender->SetupAttachment(GetRootComponent());
	TextRender->SetWorldSize(6.0f);
	TextRender->SetVisibility(false);
}

void ABInteractable::BeginPlay()
{
	Super::BeginPlay();
}

void ABInteractable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FQuat QuatRotation = FQuat(FRotator(0.f, 1.f, 0.f));
	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);

	TextRender->SetText(GetUseText());
}

void ABInteractable::Interact(APlayerController* Controller)
{
	ABGamePlayController* PController = Cast<ABGamePlayController>(Controller);
	PController->AddToInventoryByID(ItemID);
	this->Destroy(true);
}

void ABInteractable::SetTextVisibility(bool bStatus)
{
	TextRender->SetVisibility(bStatus);
}