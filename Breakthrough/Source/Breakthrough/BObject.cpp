#include "BObject.h"

#include "Components/StaticMeshComponent.h"

ABObject::ABObject()
{
	PrimaryActorTick.bCanEverTick = true;

	ObjectMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("RootMesh"));
	ObjectMesh->SetRelativeScale3D(FVector(15.0f));

	RootComponent = ObjectMesh;

	//ObjectMesh->SetSimulatePhysics(true);
	//ObjectMesh->SetNotifyRigidBodyCollision(true);
	//ObjectMesh->SetGenerateOverlapEvents(true);
	//ObjectMesh->SetCollisionProfileName("PhysicsActor");
}

void ABObject::BeginPlay()
{
	Super::BeginPlay();
}

void ABObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABObject::Pickup_Implementation(USceneComponent* AttachTo)
{
	const FVector ObjLoc(10.0f, 0.0f, 0.0f);
	const FRotator ObjRot(0.0f, 90.0f, -90.0f);
	const FVector ObjSca(20.0f);
	const FTransform ObjTransform(ObjRot, ObjLoc, ObjSca);

	ObjectMesh->SetSimulatePhysics(false);
	
	FAttachmentTransformRules AttachmentTransformRules(EAttachmentRule::SnapToTarget, false); //EAttachmentRule::Keepworld
	GetRootComponent()->AttachToComponent(AttachTo, AttachmentTransformRules);
	ObjectMesh->SetRelativeTransform(ObjTransform);

}

void ABObject::Drop_Implementation()
{
	ObjectMesh->SetSimulatePhysics(true);

	FDetachmentTransformRules DetatchmentTransformRules(EDetachmentRule::KeepWorld, true);
	DetachFromActor(DetatchmentTransformRules);
}