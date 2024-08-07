// Shoot Them Up Game. All rights reserved.


#include "AI/Services/STUFireService.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Components/STUWeaponsComponent.h"
#include "STUUtils.h"


USTUFireService::USTUFireService()
{
	NodeName = "Fire";
}

void USTUFireService::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	const auto Controller = OwnerComp.GetAIOwner();
	const auto Blackboard = OwnerComp.GetBlackboardComponent();

	const auto HasAim = Blackboard && Blackboard->GetValueAsObject(EnemyActorKey.SelectedKeyName);
	if (Controller)
	{
		const auto WeaponComponent = STUUtils::GetSTUPlayerComponent<USTUWeaponsComponent>(Controller->GetPawn());
		if (WeaponComponent)
		{
			HasAim ? WeaponComponent->StartFire() : WeaponComponent->StopFire();
		}
	}

	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
}
