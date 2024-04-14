// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/STUWeaponsComponent.h"
#include "STUAIWeaponsComponent.generated.h"

/**
 * 
 */
UCLASS()
class STU_PROJECT_API USTUAIWeaponsComponent : public USTUWeaponsComponent
{
	GENERATED_BODY()
	
public:
	virtual void StartFire() override;
	virtual void NextWeapon() override;

};
