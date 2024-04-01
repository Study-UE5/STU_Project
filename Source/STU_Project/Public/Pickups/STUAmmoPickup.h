// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/STUBasePickup.h"
#include "STUAmmoPickup.generated.h"

/**
 * 
 */
UCLASS()
class STU_PROJECT_API ASTUAmmoPickup : public ASTUBasePickup
{
	GENERATED_BODY()
	
private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
};
