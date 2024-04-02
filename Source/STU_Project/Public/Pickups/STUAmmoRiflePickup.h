// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Pickups/STUBasePickup.h"
#include "STUAmmoRiflePickup.generated.h"

class ASTUBaseWeapon;
/**
 * 
 */
UCLASS()
class STU_PROJECT_API ASTUAmmoRiflePickup : public ASTUBasePickup
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup", meta = (ClampMin = "1.0", ClampMax = "10.0"))
	int32 ClipsRifleAmount = 10;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pickup")
	TSubclassOf<ASTUBaseWeapon> RifleType;

private:
	virtual bool GivePickupTo(APawn* PlayerPawn) override;
};
