// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "STUHealthPersentDecorator.generated.h"

/**
 * 
 */
UCLASS()
class STU_PROJECT_API USTUHealthPersentDecorator : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	USTUHealthPersentDecorator();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	float HealthPercent = 0.6f;

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

};
