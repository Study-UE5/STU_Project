// Shoot Them Up Game. All rights reserved.


#include "AI/Decorators/STUHealthPersentDecorator.h"
#include "AIController.h"
#include "STUUtils.h"
#include "Components/STUHealthComponent.h"


USTUHealthPersentDecorator::USTUHealthPersentDecorator()
{
	NodeName = "Health Percent";
}

bool USTUHealthPersentDecorator::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	const auto Controller = OwnerComp.GetAIOwner();
	if (!Controller) return false;

	const auto HealthComponent = STUUtils::GetSTUPlayerComponent<USTUHealthComponent>(Controller->GetPawn());
	if (!HealthComponent || HealthComponent->IsDead()) return false;

	return HealthComponent->GetHealthPercent() <= HealthPercent;
}
