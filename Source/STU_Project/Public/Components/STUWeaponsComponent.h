// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUWeaponsComponent.generated.h"

class ASTUBaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STU_PROJECT_API USTUWeaponsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	USTUWeaponsComponent();

	void StartFire();
	void StopFire();

protected:
	
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<ASTUBaseWeapon> WeaponClass;

	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	FName WeaponAttachPointName = "WeaponSocket";

	virtual void BeginPlay() override;
		
private:
	UPROPERTY()
	ASTUBaseWeapon* CurrentWeapon = nullptr;

	void SpawnWeapon();
};
