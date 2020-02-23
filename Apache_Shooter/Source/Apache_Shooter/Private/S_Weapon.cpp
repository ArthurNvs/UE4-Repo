// Arthur Monteiro 2020 - @theApache_ // arthurnvsm@gmail.com - All Rights Reserved.


#include "S_Weapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/StaticMeshComponent.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "Components/LightComponent.h"

AS_Weapon::AS_Weapon()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(FName("MeshComp"));
	RootComponent = MeshComp;

	ArrowComp = CreateDefaultSubobject<UArrowComponent>(FName("ArrowComp"));
	ArrowComp->SetRelativeLocation(FVector(-0.135368f, 23.085697f, 9.562613f));
	ArrowComp->SetupAttachment(RootComponent);

	LaserMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("LaserMesh"));
	LaserMesh->SetupAttachment(RootComponent);
	LaserMesh->SetVisibility(false);

	bIsWeapon = true;
}


void AS_Weapon::BeginPlay()
{
	Super::BeginPlay();

}


void AS_Weapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	CheckAim();
}


void AS_Weapon::Shoot()
{
	ArrowComp = FindComponentByClass<UArrowComponent>();

	if (ArrowComp && Ammo > 0)
	{
		//Shoot management
		FVector Start = ArrowComp->GetComponentLocation();
		FVector Direction = ArrowComp->GetComponentRotation().Vector();
		FVector End = Start + (Direction * ShotDistance);

		FHitResult HitResult;
		FCollisionQueryParams Params;
		Params.AddIgnoredActor(this);
		Params.AddIgnoredActor(GetOwner());
		Params.bTraceComplex = true;

		bool bIsHit = GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, Params);

		if (bIsHit)
		{
			UE_LOG(LogTemp, Warning, TEXT("Hit!"));
		}

		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 0.7f, (uint8)0, 1.0f);

		--Ammo;
	}
}


void AS_Weapon::LauncherShoot()
{
	//@TODO
}


void AS_Weapon::Reload()
{

}


void AS_Weapon::CheckAim()
{
	if (bWantToAim)
		LaserMesh->SetVisibility(true);

	else
		LaserMesh->SetVisibility(false);
}
