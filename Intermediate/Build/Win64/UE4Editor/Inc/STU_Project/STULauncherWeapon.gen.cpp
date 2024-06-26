// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Weapons/STULauncherWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTULauncherWeapon() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTULauncherWeapon_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTULauncherWeapon();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void ASTULauncherWeapon::StaticRegisterNativesASTULauncherWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASTULauncherWeapon_NoRegister()
	{
		return ASTULauncherWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTULauncherWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoAmmoSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoAmmoSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTULauncherWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/STULauncherWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapons/STULauncherWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/STULauncherWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTULauncherWeapon, ProjectileClass), Z_Construct_UClass_ASTUProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_NoAmmoSound_MetaData[] = {
		{ "Category", "Sound" },
		{ "ModuleRelativePath", "Public/Weapons/STULauncherWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_NoAmmoSound = { "NoAmmoSound", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTULauncherWeapon, NoAmmoSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_NoAmmoSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_NoAmmoSound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_ProjectileClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTULauncherWeapon_Statics::NewProp_NoAmmoSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTULauncherWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTULauncherWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTULauncherWeapon_Statics::ClassParams = {
		&ASTULauncherWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTULauncherWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTULauncherWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTULauncherWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTULauncherWeapon, 3603614174);
	template<> STU_PROJECT_API UClass* StaticClass<ASTULauncherWeapon>()
	{
		return ASTULauncherWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTULauncherWeapon(Z_Construct_UClass_ASTULauncherWeapon, &ASTULauncherWeapon::StaticClass, TEXT("/Script/STU_Project"), TEXT("ASTULauncherWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTULauncherWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
