// Shoot Them Up Game. All rights reserved.


#include "Weapons/Components/STUWeaponVFXComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Components/DecalComponent.h"
#include "Sound/SoundCue.h"


// Sets default values for this component's properties
USTUWeaponVFXComponent::USTUWeaponVFXComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void USTUWeaponVFXComponent::PLayImpactFX(const FHitResult& Hit)
{
	auto ImpactData = DefaultImpactData;
	if (Hit.PhysMaterial.IsValid())
	{
		const auto Physmat = Hit.PhysMaterial.Get();
		if (ImpactDataMap.Contains(Physmat))
		{
			ImpactData = ImpactDataMap[Physmat];
		}
	}
	// Niagara
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(),
		ImpactData.NiagaraEffect,
		Hit.ImpactPoint,
		Hit.ImpactNormal.Rotation());

	//Decal
	auto DecalComponent = UGameplayStatics::SpawnDecalAtLocation //
	(
		GetWorld(), //
		ImpactData.DecalData.Material, //
		ImpactData.DecalData.Size, //
		Hit.ImpactPoint, //
		Hit.ImpactNormal.Rotation() //
	);
	if (DecalComponent)
	{
		DecalComponent->SetFadeOut(ImpactData.DecalData.LifeTime, ImpactData.DecalData.FadeOutTime);
	}

	//Sound
	UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactData.Sound, Hit.ImpactPoint);
}
