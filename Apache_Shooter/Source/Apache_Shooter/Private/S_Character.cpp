// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.


#include "S_Character.h"
#include "S_Pickup.h"
#include "S_Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "Containers/Array.h"

#define MAX_INVENTORY_ITEMS 4
#define MAX_INVENTORY_WEAPONS 2

AS_Character::AS_Character()
{
	PrimaryActorTick.bCanEverTick = true;

	// Configure character movement
	//GetCharacterMovement()->bOrientRotationToMovement = true; // Rotate character to moving direction
	GetCharacterMovement()->RotationRate = FRotator(0.f, 640.f, 0.f);
	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->bSnapToPlaneAtStart = true;

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(FName("SpringArmComp"));
	SpringArmComp->TargetArmLength = 200.f;
	SpringArmComp->SetUsingAbsoluteRotation(true); // bAbsoluteRotation = true; // Don't want arm to rotate when character does
	SpringArmComp->SetupAttachment(RootComponent);

	CameraComp = CreateDefaultSubobject<UCameraComponent>(FName("CameraComp"));
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	AutoPossessPlayer = EAutoReceiveInput::Player0;

	Index = "Local Player 1";
	MaxSpeed = 3.f;
	Health = 100.f;
}


void AS_Character::BeginPlay()
{
	Super::BeginPlay();

	CharInits();
}


void AS_Character::CharInits()
{
	PickupNearActor = nullptr;
	WeaponNearActor = nullptr;

	GetCharacterMovement()->MaxWalkSpeed = 150 * MaxSpeed;

	OnActorBeginOverlap.AddDynamic(this, &AS_Character::BeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &AS_Character::EndOverlap);

	//Init inventory
	ItemsInventory.SetNum(MAX_INVENTORY_ITEMS);
	WeaponInventory.SetNum(2);
}


void AS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//ACTIONS
	InputComponent->BindAction("Pickup", IE_Pressed, this, &AS_Character::SetPickupType);
	InputComponent->BindAction("DropItem", IE_Pressed, this, &AS_Character::DropSelectedItem);
	InputComponent->BindAction("Item1", IE_Pressed, this, &AS_Character::SelectItem1);
	InputComponent->BindAction("Item2", IE_Pressed, this, &AS_Character::SelectItem2);
	InputComponent->BindAction("Item3", IE_Pressed, this, &AS_Character::SelectItem3);
	InputComponent->BindAction("Item4", IE_Pressed, this, &AS_Character::SelectItem4);

	//AXIS
	PlayerInputComponent->BindAxis("Forward", this, &AS_Character::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &AS_Character::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AS_Character::AddControllerYawInput);

}


void AS_Character::GetOverlappingItems()
{
	AActor* NearestOverlappingActor = nullptr;
	float NearestOverlap = 10000.0f;

	TArray<AActor*> OverlapActors;
	GetOverlappingActors(OverlapActors);
	FVector PlayerLocation = GetActorLocation();

	for (AActor* Actors : OverlapActors)
	{
		float MyLength = (Actors->GetActorLocation() - PlayerLocation).Size();

		if (MyLength < NearestOverlap)
		{
			NearestOverlappingActor = Actors;
			NearestOverlap = MyLength;

			PickupNearActor = Cast<AS_Pickup>(NearestOverlappingActor);
		}

		else
			PickupNearActor = nullptr;
			WeaponNearActor = nullptr;

		GLog->Log("ItemNearActor is now null!");
	}
}


void AS_Character::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	GetOverlappingItems();
	GLog->Log("overlapped");
}


void AS_Character::EndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	PickupNearActor = nullptr;
	WeaponNearActor = nullptr;
	GLog->Log("UNOVER");
}

void AS_Character::SetPickupType()
{
	if (!PickupNearActor->bIsWeapon)
	{
		PickupItem();
		return;
	}


	if (PickupNearActor->bIsWeapon)
		PickupWeapon();

	return;
}


void AS_Character::PickupItem()
{
	if (PickupNearActor)
	{
		//Find the first available slot
		int32 EmptySlot = ItemsInventory.Find(nullptr);

		AS_Pickup* ArrayItem = PickupNearActor;

		if (EmptySlot != INDEX_NONE)
		{
			for (int32 i = 0; i < MAX_INVENTORY_ITEMS; ++i)
			{				
				if (ItemsInventory[i] == PickupNearActor)
				{
					GLog->Log("Can't carry this item");
					return;
				}
			}

			//Add the item to the first valid slot in the array
			if (EmptySlot < MAX_INVENTORY_ITEMS)
			ItemsInventory[EmptySlot] = ArrayItem; GLog->Log("+ item");

			HidePickup(ArrayItem);
				
			HoldItem(ArrayItem);

			PickupNearActor = nullptr;

			return;
		}

		else
			GLog->Log("Can't carry any more items!");
	}
}

void AS_Character::PickupWeapon()
{
	WeaponNearActor = Cast<AS_Weapon>(PickupNearActor);

	if (WeaponNearActor)
	{
		//Find the first available slot
		int32 EmptySlot = WeaponInventory.Find(nullptr);

		AS_Weapon* ArrayItem = WeaponNearActor;

		if (EmptySlot != INDEX_NONE)
		{
			for (int32 i = 0; i < MAX_INVENTORY_WEAPONS; ++i)
			{
				if (WeaponInventory[i] == WeaponNearActor)
				{
					GLog->Log("Can't carry this weapon");
					return;
				}
			}

			//Add the item to the first valid slot in the array
			if(EmptySlot < MAX_INVENTORY_WEAPONS)
			WeaponInventory[EmptySlot] = ArrayItem; GLog->Log("+ weapon");

			WeaponNearActor = nullptr;

			return;
		}

		else
			GLog->Log("Can't carry any more items!");
	}
}


void AS_Character::HoldItem(AS_Pickup* ItemIn)
{
	if (InHandsItem)
		HidePickup(InHandsItem);

	if (ItemIn)
	{
		InHandsItem = ItemIn;

		if (InHandsItem)
		{
			InHandsItem->AttachPickupTo(GetMesh(), FName("hand_r"));
			InHandsItem->SetActorTickEnabled(true);
			InHandsItem->SetActorHiddenInGame(false);
			GLog->Log("done!");
		}
	}
}


void AS_Character::DropSelectedItem()
{
	if (InHandsItem)
	{
		int32 IndexOfItem;
		if (ItemsInventory.Find(InHandsItem, IndexOfItem))
		{
			InHandsItem->DetachPickup();
			InHandsItem->SetActorTickEnabled(true);
			InHandsItem->SetActorHiddenInGame(false);
			InHandsItem->SetActorEnableCollision(true);

			GLog->Log("item dropped");

			if (InHandsItem)
			{
				ItemsInventory[IndexOfItem] = nullptr;
				InHandsItem = nullptr;
			}
		}
	}

	else
		GLog->Log("No item to drop");
}


void AS_Character::SelectItem1()
{
	SelectItem(0);
}



void AS_Character::SelectItem2()
{
	SelectItem(1);
}


void AS_Character::SelectItem3()
{
	SelectItem(2);
}


void AS_Character::SelectItem4()
{
	SelectItem(3);
}


void AS_Character::SelectItem(int32 ItemIndex)
{
	if (InHandsItem)
	{
		HidePickup(InHandsItem);
		InHandsItem = nullptr;
	}

	if (ItemsInventory[ItemIndex])
	{
		InHandsItem = ItemsInventory[ItemIndex];

		HoldItem(InHandsItem);

		UE_LOG(LogTemp, Warning, TEXT("INVENTORY SLOT = %d"), ItemIndex);
		GLog->Log("ITEM: " + InHandsItem->GetName());
	}
}


void AS_Character::MoveForward(float Value)
{
	AddMovementInput(CameraComp->GetForwardVector() * Value);
}


void AS_Character::MoveRight(float Value)
{
	AddMovementInput(CameraComp->GetRightVector() * Value);
}


void AS_Character::HidePickup(AS_Pickup* Hide)
{
	Hide->SetActorTickEnabled(false);
	Hide->SetActorHiddenInGame(true);
	Hide->SetActorEnableCollision(false);
}