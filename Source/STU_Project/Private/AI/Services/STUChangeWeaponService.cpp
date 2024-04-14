// Shoot Them Up Game. All rights reserved.


#include "AI/Services/STUChangeWeaponService.h"
#include "Components/STUWeaponsComponent.h"
#include "AIController.h"
#include "STUUtils.h"

USTUChangeWeaponService::USTUChangeWeaponService()
{
	NodeName = "Change Weapon";
}

void USTUChangeWeaponService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (Controller)
	{
		const auto WeaponsComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponsComponent>(Controller->GetPawn());
		if (WeaponsComponent && Probability > 0 && FMath::FRand() <= Probability)
		{
			WeaponsComponent->NextWeapon();
		}
	}

	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
