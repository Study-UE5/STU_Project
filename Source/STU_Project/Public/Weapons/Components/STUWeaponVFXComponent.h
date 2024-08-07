// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUCoreTypes.h"
#include "STUWeaponVFXComponent.generated.h"

class UNiagaraSystem;
class UPhysicalMaterial;


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class STU_PROJECT_API USTUWeaponVFXComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	USTUWeaponVFXComponent();

	void PLayImpactFX(const FHitResult& Hit);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
	FImpactData DefaultImpactData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "VFX")
	TMap<UPhysicalMaterial*, FImpactData> ImpactDataMap;
};
