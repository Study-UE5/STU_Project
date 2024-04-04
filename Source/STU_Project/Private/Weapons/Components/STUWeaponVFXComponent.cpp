// Shoot Them Up Game. All rights reserved.


#include "Weapons/Components/STUWeaponVFXComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"


// Sets default values for this component's properties
USTUWeaponVFXComponent::USTUWeaponVFXComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void USTUWeaponVFXComponent::PLayImpactFX(const FHitResult& Hit)
{
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), Effect, Hit.ImpactPoint, Hit.ImpactNormal.Rotation());
}
