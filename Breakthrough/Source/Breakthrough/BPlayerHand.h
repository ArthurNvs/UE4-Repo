#pragma once

#include "XRMotionControllerBase.h"
#include "MotionControllerComponent.h"
#include "BAnimInstance.h"
#include "BInteractable.h"
#include "GameFramework/Controller.h"
//#include "BGamePlayController.h"
#include "BPickup.h"

//Default
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BPlayerHand.generated.h"

UCLASS()
class BREAKTHROUGH_API ABPlayerHand : public AActor
{
	GENERATED_BODY()
	
public:	
	ABPlayerHand();

	virtual void Tick(float DeltaTime) override;

	void SetHand(FName Hand);

	void Grab();

	void Release();

	void TriggerPressed();

	void TriggerReleased();

	//Get our Player Controller
	AController* PlayerController;
	class ABGamePlayController* GamePlayController;

	void GetPlayerController(AController* MyPlayerController);

protected:
	virtual void BeginPlay() override;

private:
	//Properties
	UPROPERTY(VisibleAnywhere, Category = "Components")
	class UMotionControllerComponent* MotionController;

	UPROPERTY(EditAnywhere, Category = "Components")
	class USkeletalMeshComponent* HandMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	class USphereComponent* GrabShpere;

	UPROPERTY(VisibleAnywhere, Category = "UI")
	class UWidgetInteractionComponent* HandPointer;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Interaction", meta = (AllowPrivateAccess = "true"))
	AActor* AttachedActor;

	UBAnimInstance* HandAnimation;

	//States
	bool bCanClimb = false;

	bool bIsClimbing = false;

	bool bCanInteract = false;

	FVector ClimbingStartLocation;

	//Functions
	UFUNCTION()
	void BeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION()
	void CastHandAnimInstance();

	UFUNCTION()
	void SetAnimation();

	UFUNCTION()
	bool SetCanClimb() const;

	UFUNCTION(BlueprintCallable, Category = "Grab Objects")
	AActor* GetActorNearHand() const;

	UFUNCTION()
	void GrabObject();

	UFUNCTION()
	void ReleaseObject();
};
