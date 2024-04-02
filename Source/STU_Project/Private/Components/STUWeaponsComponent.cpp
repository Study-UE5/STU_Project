// Shoot Them Up Game. All rights reserved.


#include "Components/STUWeaponsComponent.h"
#include "Weapons/STUBaseWeapon.h"
#include "GameFramework/Character.h"
#include "Animations/STUEquipFinishedAnimNotify.h"
#include "Animations/STUReloadFinishedAnimNotify.h"
#include "Animations/AnimUtils.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponsComponent, All, All)

constexpr static int32 WeaponNum = 2;
USTUWeaponsComponent::USTUWeaponsComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void USTUWeaponsComponent::BeginPlay()
{
	Super::BeginPlay();

	checkf(WeaponData.Num() == WeaponNum, TEXT("Our Character can hold only %i weapon items"), WeaponNum);

	CurrentWeaponIndex = 0;
	InitAnimations();
	SpawnWeapons();
	EquipWeapon(CurrentWeaponIndex);
}

void USTUWeaponsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	CurrentWeapon = nullptr;
	for (auto Weapon : Weapons)
	{
		Weapon->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
		Weapon->Destroy();
	}
	Weapons.Empty();

	Super::EndPlay(EndPlayReason);
}

void USTUWeaponsComponent::SpawnWeapons()
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character || !GetWorld()) return;

	for (auto OneWeaponData : WeaponData)
	{
		auto Weapon = GetWorld()->SpawnActor<ASTUBaseWeapon>(OneWeaponData.WeaponClass);
		if (!Weapon) return;

		Weapon->OnClipEmpty.AddUObject(this, &USTUWeaponsComponent::OnEmtyClip);
		Weapon->SetOwner(Character);
		Weapons.Add(Weapon);

		AttachWeaponToSocket(Weapon, Character->GetMesh(), WeaponArmorySocketName);
	}
}

void USTUWeaponsComponent::AttachWeaponToSocket(ASTUBaseWeapon* Weapon, USceneComponent* SceneComponent, const FName& SocketName)
{
	if (!Weapon || !SceneComponent) return;

	FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, false);
	Weapon->AttachToComponent(SceneComponent, AttachmentRules, SocketName);
}

void USTUWeaponsComponent::EquipWeapon(int32 WeaponIndex)
{
	if (WeaponIndex < 0 || WeaponIndex >= Weapons.Num())
	{
		UE_LOG(LogWeaponsComponent, Warning, TEXT("Invalid Weapon Index"));
		return;
	}

	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character) return;

	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
		AttachWeaponToSocket(CurrentWeapon, Character->GetMesh(), WeaponArmorySocketName);
	}

	CurrentWeapon = Weapons[WeaponIndex];
	//CurrentReloadAnimMontage = WeaponData[WeaponIndex].ReloadAnimMontage;
	const auto CurrentWeaponData = WeaponData.FindByPredicate([&](const FWeaponData& Data) {return Data.WeaponClass == CurrentWeapon->GetClass(); });
	CurrentReloadAnimMontage = CurrentWeaponData ? CurrentWeaponData->ReloadAnimMontage : nullptr;

	AttachWeaponToSocket(CurrentWeapon, Character->GetMesh(), WeaponEquipSocketName);
	EquipAnimProgress = true;
	PlayAnimmontage(EquipAnimMontage);
}

void USTUWeaponsComponent::StartFire()
{
	if (!CanFire()) return;
	CurrentWeapon->StartFire();
}

void USTUWeaponsComponent::StopFire()
{
	if (!CurrentWeapon) return;
	CurrentWeapon->StopFire();
}

void USTUWeaponsComponent::NextWeapon()
{
	if (!CanEquip()) return;
	CurrentWeaponIndex = (CurrentWeaponIndex + 1) % Weapons.Num();
	EquipWeapon(CurrentWeaponIndex);
}

void USTUWeaponsComponent::PlayAnimmontage(UAnimMontage* Animation)
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character) return;

	Character->PlayAnimMontage(Animation);
}

void USTUWeaponsComponent::InitAnimations()
{
	auto EquipFinishedNotify = AnimUtils::FindNotifyByClass<USTUEquipFinishedAnimNotify>(EquipAnimMontage);
	if (EquipFinishedNotify)
	{
		EquipFinishedNotify->OnNotified.AddUObject(this, &USTUWeaponsComponent::OnEquipFinished);
	}
	else
	{
		UE_LOG(LogWeaponsComponent, Error, TEXT("Equip anim notify is forgotten to set"));
		checkNoEntry();
	}

	for (auto OneWeaponData: WeaponData)
	{
		auto ReloadFinishedNotify = AnimUtils::FindNotifyByClass<USTUReloadFinishedAnimNotify>(OneWeaponData.ReloadAnimMontage);
		if (!ReloadFinishedNotify)
		{
			UE_LOG(LogWeaponsComponent, Error, TEXT("Reload anim notify is forgotten to set"));
			checkNoEntry();
		}
		ReloadFinishedNotify->OnNotified.AddUObject(this, &USTUWeaponsComponent::OnReloadFinished);
	}
}

void USTUWeaponsComponent::OnEquipFinished(USkeletalMeshComponent* MeshComp)
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character || MeshComp != Character->GetMesh()) return;

	EquipAnimProgress = false;
}

void USTUWeaponsComponent::OnReloadFinished(USkeletalMeshComponent* MeshComp)
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character || MeshComp != Character->GetMesh()) return;

	ReloadAnimProgress = false;
}

bool USTUWeaponsComponent::CanFire() const
{
	return CurrentWeapon && !EquipAnimProgress && !ReloadAnimProgress;
}

bool USTUWeaponsComponent::CanEquip() const
{
	return !EquipAnimProgress && !ReloadAnimProgress;
}

bool USTUWeaponsComponent::CanReload() const
{
	return CurrentWeapon && !EquipAnimProgress && !ReloadAnimProgress && CurrentWeapon->CanReload();
}

void USTUWeaponsComponent::Reload()
{
	ChangeClip();
}

void USTUWeaponsComponent::OnEmtyClip(ASTUBaseWeapon* AmmoEmtyWeapon)
{
	if (!AmmoEmtyWeapon) return;

	if (CurrentWeapon == AmmoEmtyWeapon)
	{
		ChangeClip();
	}
	else
	{
		for (const auto Weapon : Weapons)
		{
			if (Weapon == AmmoEmtyWeapon)
			{
				Weapon->ChangeClip();
			}
		}
	}
}

void USTUWeaponsComponent::ChangeClip()
{
	if (!CanReload()) return;
	CurrentWeapon->StopFire();
	CurrentWeapon->ChangeClip();
	ReloadAnimProgress = true;
	PlayAnimmontage(CurrentReloadAnimMontage);
}

bool USTUWeaponsComponent::GetCurrentWeaponUIData(FWeaponUIData& UIData) const
{
	if (CurrentWeapon)
	{
		UIData = CurrentWeapon->GetUIData();
		return true;
	}
	return false;
}

bool USTUWeaponsComponent::GetCurrentWeaponAmmoData(FAmmoData& AmmoData) const
{
	if (CurrentWeapon)
	{
		AmmoData = CurrentWeapon->GetAmmoData();
		return true;
	}
	return false;
}

bool USTUWeaponsComponent::TryToAddAmmo(TSubclassOf<ASTUBaseWeapon> WeaponType, int32 ClipsAmount)
{
	for (const auto Weapon : Weapons)
	{
		if (Weapon && Weapon->IsA(WeaponType))
		{
			return Weapon->TryToAddAmmo(ClipsAmount);
		}
	}
	return false;
}

bool USTUWeaponsComponent::TryToAddRifle(TSubclassOf<ASTUBaseWeapon> RifleType, int32 ClipsRifleAmount)
{
	for (const auto Weapon : Weapons)
	{
		if (Weapon && Weapon->IsA(RifleType))
		{
			return Weapon->TryToAddRifle(ClipsRifleAmount);
		}
	}
	return false;
}
