// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/STUBaseWeapon.h"
#include "STULauncherWeapon.generated.h"


class ASTUProjectile;
class USoundCue;

UCLASS()
class STU_PROJECT_API ASTULauncherWeapon : public ASTUBaseWeapon
{
	GENERATED_BODY()
	
public:
	virtual void StartFire() override;

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Weapon")
	TSubclassOf<ASTUProjectile> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Sound")
	USoundCue* NoAmmoSound;

	virtual void MakeShot() override;

};
