// Shoot Them Up Game. All rights reserved.


#include "Weapons/Components/STUWeaponVFXComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "PhysicalMaterials/PhysicalMaterial.h"


// Sets default values for this component's properties
USTUWeaponVFXComponent::USTUWeaponVFXComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void USTUWeaponVFXComponent::PLayImpactFX(const FHitResult& Hit)
{
	auto Effect = DefaultEffect;
	if (Hit.PhysMaterial.IsValid())
	{
		const auto Physmat = Hit.PhysMaterial.Get();
		if (EffectsMap.Contains(Physmat))
		{
			Effect = EffectsMap[Physmat];
		}
	}
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), Effect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
}
