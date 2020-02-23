#include "BPlayerHand.h"

#include "BInteractionInterface.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/SphereComponent.h"
#include "BGamePlayController.h"
#include "BPlayer.h"
#include "Components/WidgetInteractionComponent.h"
#include "InputCoreTypes.h"

ABPlayerHand::ABPlayerHand()
{
	PrimaryActorTick.bCanEverTick = true;

	MotionController = CreateDefaultSubobject<UMotionControllerComponent>(FName("MotionController"));
	RootComponent = MotionController;

	HandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("HandMesh"));
	HandMesh->SetupAttachment(MotionController);

	GrabShpere = CreateDefaultSubobject<USphereComponent>(TEXT("GrabShpere"));
	GrabShpere->SetupAttachment(HandMesh);
	GrabShpere->SetRelativeLocation(FVector(14.286342f, 0.224237f, 1.484932f));
	GrabShpere->SetSphereRadius(10.0f);
	GrabShpere->SetCollisionProfileName(TEXT("OverlapAllDynamic"));
	GrabShpere->SetGenerateOverlapEvents(true);

	HandPointer = CreateDefaultSubobject<UWidgetInteractionComponent>(FName("HandPointer"));
	HandPointer->SetupAttachment(MotionController);

	SetAnimation();
}

void ABPlayerHand::BeginPlay()
{
	Super::BeginPlay();

	CastHandAnimInstance();

	OnActorBeginOverlap.AddDynamic(this, &ABPlayerHand::BeginOverlap);
	OnActorEndOverlap.AddDynamic(this, &ABPlayerHand::EndOverlap);

}

void ABPlayerHand::GetPlayerController(AController* MyPlayerController)
{
	PlayerController = MyPlayerController;
	GamePlayController = Cast<ABGamePlayController>(PlayerController);

	if (!GamePlayController)
	{
		UE_LOG(LogTemp, Warning, TEXT("Controller NOT casting!"));
		return;
	}
};

void ABPlayerHand::CastHandAnimInstance()
{
	HandAnimation = Cast<UBAnimInstance>(HandMesh->GetAnimInstance());

	if (!HandAnimation)
	{
		UE_LOG(LogTemp, Warning, TEXT("HandAnimation is NOT casting..."));
		return;
	}
}

void ABPlayerHand::SetAnimation()
{
	static ConstructorHelpers::FObjectFinder<UClass>Animation
	(TEXT("Class'/Game/VRHands/Mannequin/Animations/RightHand_AnimBP.RightHand_AnimBP_C'"));

	if (!Animation.Succeeded())
	{
		UE_LOG(LogTemp, Warning, TEXT("[ERROR] Animation could not be created..."));
		return;
	}

	HandMesh->SetAnimInstanceClass(Animation.Object);
}

void ABPlayerHand::SetHand(FName Hand)
{
	MotionController->SetTrackingMotionSource(Hand);

	if (Hand == FXRMotionControllerBase::LeftHandSourceId)
	{
		HandMesh->SetRelativeScale3D(FVector(1.0f, -1.0f, 1.0f));
	}
}

bool ABPlayerHand::SetCanClimb() const
{
	TArray<AActor*> OverlappingActors;
	GetOverlappingActors(OverlappingActors);

	for (AActor* Actors : OverlappingActors)
	{
		if (Actors->ActorHasTag(TEXT("CanClimb")))
		{
			if (HandAnimation)
			HandAnimation->SetIsGrabbable(true);

			return true;
		}
	}

	return false;
}

AActor* ABPlayerHand::GetActorNearHand() const
{
	AActor* NearestOverlappingActor = nullptr;
	AActor* NearestOverlappingInteractiveActor = nullptr;
	float NearestOverlap = 10000.0f;

	bool bIsInteractive = false;

	TArray<AActor*> OverlapActors;
	GetOverlappingActors(OverlapActors);
	FVector HandLocation = GetActorLocation();

	for (AActor* Actors : OverlapActors)
	{
		bool bHasPickupInterface = Actors->GetClass()->ImplementsInterface(UBInteractionInterface::StaticClass());
		float MyLength = (Actors->GetActorLocation() - HandLocation).Size();

		if (bHasPickupInterface && Actors->ActorHasTag("Interactable"))
		{
			if (MyLength < NearestOverlap)
			{
				NearestOverlappingInteractiveActor = Actors;
				NearestOverlap = MyLength;

				ABInteractable* Interactable = Cast<ABInteractable>(NearestOverlappingInteractiveActor);

				if (Interactable)
				{
					bIsInteractive = true;

					if (HandAnimation)
					HandAnimation->SetIsGrabbable(true);

					GamePlayController->CurrentInteractable = Interactable;
					GamePlayController->CurrentInteractable->SetTextVisibility(true);

					UE_LOG(LogTemp, Warning, TEXT("tem controller"));
				}
			}
		}

		if (bHasPickupInterface && !Actors->ActorHasTag("IsInteractive"))
		{
			if (MyLength < NearestOverlap)
			{
				NearestOverlappingActor = Actors;
				NearestOverlap = MyLength;

				bIsInteractive = false;

				if (HandAnimation)
				HandAnimation->SetIsGrabbable(true);

				return NearestOverlappingActor;
			}
		}
	}

	if (bIsInteractive)
	return NearestOverlappingInteractiveActor;

	return NearestOverlappingActor;
}

void ABPlayerHand::GrabObject()
{
	AActor* NearActor = GetActorNearHand();

	if (NearActor && NearActor->IsValidLowLevel() && !NearActor->IsPendingKill())
	{
		AttachedActor = NearActor;
		IBInteractionInterface::Execute_Pickup(NearActor, MotionController);
	}
}

void ABPlayerHand::ReleaseObject()
{
	if (AttachedActor && AttachedActor->IsValidLowLevel() && !AttachedActor->IsPendingKill())
	{
		if (AttachedActor->GetRootComponent()->GetAttachParent() == MotionController)
		{
			if (AttachedActor->GetClass()->ImplementsInterface(UBInteractionInterface::StaticClass()))
			{
				IBInteractionInterface::Execute_Drop(AttachedActor);

				AttachedActor = nullptr;
			}
		}
		else
		{
			//Clear the reference
			AttachedActor = nullptr;
		}
	}
}

void ABPlayerHand::Grab()
{
	if (HandAnimation)
	HandAnimation->SetGrab(true);

	GrabObject();

	if (bCanClimb && !bIsClimbing)
	{
		bIsClimbing = true;
		ClimbingStartLocation = GetActorLocation();
	}
}

void ABPlayerHand::Release()
{
	if (HandAnimation)
	HandAnimation->SetGrab(false);

	bIsClimbing = false;

	ReleaseObject();
}

void ABPlayerHand::TriggerPressed()
{
	HandPointer->PressPointerKey(EKeys::LeftMouseButton);
}

void ABPlayerHand::TriggerReleased()
{
	HandPointer->ReleasePointerKey(EKeys::LeftMouseButton);
}

void ABPlayerHand::BeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	bool bNewCanClimb = SetCanClimb();
	GetActorNearHand();

	if (bCanClimb && bNewCanClimb)
	{
		APawn* Pawn = Cast<APawn>(GetAttachParentActor());
		if (Pawn)
		{
			//Implement Haptic Effect
			//APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());
			//if (Controller)
			//{
			//Controller->PlayHapticEffect(HapticEffect, MotionController->GetTrackingSource());
			//}
		}
	}

	bCanClimb = bNewCanClimb;
}

void ABPlayerHand::EndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	bCanClimb = SetCanClimb();

	if (GamePlayController->CurrentInteractable)
	{
		GamePlayController->CurrentInteractable->SetTextVisibility(false);
		GamePlayController->CurrentInteractable = nullptr;
	}

	if (HandAnimation)
	HandAnimation->SetIsGrabbable(false);
}

void ABPlayerHand::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bIsClimbing)
	{
		FVector HandControllerDelta = GetActorLocation() - ClimbingStartLocation;
		GetAttachParentActor()->AddActorWorldOffset(-HandControllerDelta);
	}
}