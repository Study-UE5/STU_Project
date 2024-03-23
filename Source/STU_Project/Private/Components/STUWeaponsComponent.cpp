// Shoot Them Up Game. All rights reserved.


#include "Components/STUWeaponsComponent.h"
#include "Weapons/STUBaseWeapon.h"
#include "GameFramework/Character.h"
#include "Animations/STUEquipFinishedAnimNotify.h"

DEFINE_LOG_CATEGORY_STATIC(LogWeaponsComponent, All, All)

USTUWeaponsComponent::USTUWeaponsComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void USTUWeaponsComponent::BeginPlay()
{
	Super::BeginPlay();

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

	for (auto WeaponClass : WeaponClasses)
	{
		auto Weapon = GetWorld()->SpawnActor<ASTUBaseWeapon>(WeaponClass);
		if (!Weapon) return;

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
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character) return;

	if (CurrentWeapon)
	{
		CurrentWeapon->StopFire();
		AttachWeaponToSocket(CurrentWeapon, Character->GetMesh(), WeaponArmorySocketName);
	}

	CurrentWeapon = Weapons[WeaponIndex];
	AttachWeaponToSocket(CurrentWeapon, Character->GetMesh(), WeaponEquipSocketName);
	PlayAnimmontage(EquipAnimMontage);
}

void USTUWeaponsComponent::StartFire()
{
	if (!CurrentWeapon) return;
	CurrentWeapon->StartFire();
}

void USTUWeaponsComponent::StopFire()
{
	if (!CurrentWeapon) return;
	CurrentWeapon->StopFire();
}

void USTUWeaponsComponent::NextWeapon()
{
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
	if (!EquipAnimMontage) return;

	const auto NotifyEvents = EquipAnimMontage->Notifies;
	for (auto NotifyEvent : NotifyEvents)
	{
		auto EquipFinishedNotify = Cast<USTUEquipFinishedAnimNotify>(NotifyEvent.Notify);
		if (EquipFinishedNotify)
		{
			EquipFinishedNotify->OnNotified.AddUObject(this, &USTUWeaponsComponent::OnEquipFinished);
			break;
		}
	}
}

void USTUWeaponsComponent::OnEquipFinished(USkeletalMeshComponent* MeshComponent)
{
	ACharacter* Character = Cast<ACharacter>(GetOwner());
	if (!Character) return;

	if (Character->GetMesh() == MeshComponent)
	{
		UE_LOG(LogWeaponsComponent, Display, TEXT("Equip Finished !!!"), *GetName());
	}
}
