// Shoot Them Up Game. All rights reserved.


#include "Weapons/STULauncherWeapon.h"
#include "Weapons/STUProjectile.h"
#include "Kismet/GameplayStatics.h"

void ASTULauncherWeapon::StartFire()
{
	MakeShot();
}

void ASTULauncherWeapon::MakeShot()
{
	const FTransform SpawnTransform(FRotator::ZeroRotator, GetMuzzleWorldLocation());
	auto Projectile = UGameplayStatics::BeginDeferredActorSpawnFromClass(GetWorld(), ProjectileClass, SpawnTransform);
	// TODO set projectile params
	UGameplayStatics::FinishSpawningActor(Projectile, SpawnTransform);
}
