// Shoot Them Up Game. All rights reserved.


#include "Weapons/STUBaseWeapon.h"
#include "Components/SkeletalMeshComponent.h"

// Sets default values
ASTUBaseWeapon::ASTUBaseWeapon()
{
	PrimaryActorTick.bCanEverTick = false;

	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponMesh");
	SetRootComponent(WeaponMesh);
}

void ASTUBaseWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASTUBaseWeapon::Fire()
{
}
