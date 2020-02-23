#include "BPlayer.h"

#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"

ABPlayer::ABPlayer()
{
	PrimaryActorTick.bCanEverTick = true;

	PlayerRoot = CreateDefaultSubobject<USceneComponent>(FName("PlayerRoot"));
	PlayerRoot->SetupAttachment(GetRootComponent());

	CameraComp = CreateDefaultSubobject<UCameraComponent>(FName("CameraComp"));
	CameraComp->SetupAttachment(PlayerRoot);

}

void ABPlayer::BeginPlay()
{
	Super::BeginPlay();

	HandInstance();
}

void ABPlayer::HandInstance()
{
	if (PlayerHandClass)
	{
		LController = GetWorld()->SpawnActor<ABPlayerHand>(PlayerHandClass);
		if (LController)
		{
			LController->AttachToComponent(PlayerRoot, FAttachmentTransformRules::KeepRelativeTransform);
			LController->SetOwner(this);
			LController->SetHand(FXRMotionControllerBase::LeftHandSourceId);
			LController->GetPlayerController(GetController());
		}

		RController = GetWorld()->SpawnActor<ABPlayerHand>(PlayerHandClass);
		if (RController)
		{
			RController->AttachToComponent(PlayerRoot, FAttachmentTransformRules::KeepRelativeTransform);
			RController->SetOwner(this);
			RController->SetHand(FXRMotionControllerBase::RightHandSourceId);
			RController->GetPlayerController(GetController());
		}
	}

	else
	UE_LOG(LogTemp, Warning, TEXT("Player's hand NOT instantiated..."));
}

void ABPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("GripLeft", IE_Pressed, this, &ABPlayer::GripLeft);
	PlayerInputComponent->BindAction("GripLeft", IE_Released, this, &ABPlayer::ReleaseLeft);
	PlayerInputComponent->BindAction("GripRight", IE_Pressed, this, &ABPlayer::GripRight);
	PlayerInputComponent->BindAction("GripRight", IE_Released, this, &ABPlayer::ReleaseRight);
	//UI Interactions
	PlayerInputComponent->BindAction("TriggerRight", IE_Pressed, this, &ABPlayer::RightTriggerPressed);
	PlayerInputComponent->BindAction("TriggerRight", IE_Released, this, &ABPlayer::RightTriggerReleased);
}

void ABPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Keeps PlayerRoot inside the Capsule
	FVector NewCameraOffset = CameraComp->GetComponentLocation() - GetActorLocation();
	NewCameraOffset.Z = 0;
	AddActorWorldOffset(NewCameraOffset);
	PlayerRoot->AddWorldOffset(-NewCameraOffset);
}