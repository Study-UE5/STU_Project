// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Components/STUWeaponsComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTUWeaponsComponent() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUWeaponsComponent_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_USTUWeaponsComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
	STU_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FWeaponData();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUBaseWeapon_NoRegister();
// End Cross Module References
	void USTUWeaponsComponent::StaticRegisterNativesUSTUWeaponsComponent()
	{
	}
	UClass* Z_Construct_UClass_USTUWeaponsComponent_NoRegister()
	{
		return USTUWeaponsComponent::StaticClass();
	}
	struct Z_Construct_UClass_USTUWeaponsComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WeaponData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponEquipSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponEquipSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponArmorySocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WeaponArmorySocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipAnimMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Weapons_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Weapons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentReloadAnimMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentReloadAnimMontage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USTUWeaponsComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/STUWeaponsComponent.h" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData_Inner = { "WeaponData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWeaponData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData = { "WeaponData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, WeaponData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponEquipSocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponEquipSocketName = { "WeaponEquipSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, WeaponEquipSocketName), METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponEquipSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponEquipSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponArmorySocketName_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponArmorySocketName = { "WeaponArmorySocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, WeaponArmorySocketName), METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponArmorySocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponArmorySocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_EquipAnimMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_EquipAnimMontage = { "EquipAnimMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, EquipAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_EquipAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_EquipAnimMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, CurrentWeapon), Z_Construct_UClass_ASTUBaseWeapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ASTUBaseWeapon_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentReloadAnimMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/STUWeaponsComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentReloadAnimMontage = { "CurrentReloadAnimMontage", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USTUWeaponsComponent, CurrentReloadAnimMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentReloadAnimMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentReloadAnimMontage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USTUWeaponsComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponEquipSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_WeaponArmorySocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_EquipAnimMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_Weapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USTUWeaponsComponent_Statics::NewProp_CurrentReloadAnimMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USTUWeaponsComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USTUWeaponsComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USTUWeaponsComponent_Statics::ClassParams = {
		&USTUWeaponsComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USTUWeaponsComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USTUWeaponsComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USTUWeaponsComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USTUWeaponsComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USTUWeaponsComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USTUWeaponsComponent, 1893542814);
	template<> STU_PROJECT_API UClass* StaticClass<USTUWeaponsComponent>()
	{
		return USTUWeaponsComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USTUWeaponsComponent(Z_Construct_UClass_USTUWeaponsComponent, &USTUWeaponsComponent::StaticClass, TEXT("/Script/STU_Project"), TEXT("USTUWeaponsComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USTUWeaponsComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
