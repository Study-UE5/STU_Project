// Shoot Them Up Game. All rights reserved.


#include "Pickups/STUAmmoRiflePickup.h"
#include "Components/STUHealthComponent.h"
#include "Components/STUWeaponsComponent.h"
#include "STUUtils.h"

DEFINE_LOG_CATEGORY_STATIC(LogAmmoRiflePickup, All, All);

bool ASTUAmmoRiflePickup::GivePickupTo(APawn* PlayerPawn)
{
	const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(PlayerPawn);
	if (!HealthComponent || HealthComponent->IsDead()) return false;

	const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponsComponent>(PlayerPawn);
	if (!WeaponComponent) return false;

	return WeaponComponent->TryToAddRifle(RifleType, ClipsRifleAmount);
}
