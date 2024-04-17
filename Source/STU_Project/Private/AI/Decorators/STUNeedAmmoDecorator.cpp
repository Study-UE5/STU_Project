// Shoot Them Up Game. All rights reserved.


#include "AI/Decorators/STUNeedAmmoDecorator.h"
#include "AIController.h"
#include "STUUtils.h"
#include "Components/STUWeaponsComponent.h"

USTUNeedAmmoDecorator::USTUNeedAmmoDecorator()
{
	NodeName = "Need Ammo";
}

bool USTUNeedAmmoDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (!Controller) return false;

	const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponsComponent>(Controller->GetPawn());
	if (!WeaponComponent) return false;

	return WeaponComponent->NeedAmmo(WeaponType);
}
