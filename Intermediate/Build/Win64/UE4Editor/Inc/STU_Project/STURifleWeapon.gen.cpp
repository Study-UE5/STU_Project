// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "STU_Project/Public/Weapons/STURifleWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTURifleWeapon() {}
// Cross Module References
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTURifleWeapon_NoRegister();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTURifleWeapon();
	STU_PROJECT_API UClass* Z_Construct_UClass_ASTUBaseWeapon();
	UPackage* Z_Construct_UPackage__Script_STU_Project();
// End Cross Module References
	void ASTURifleWeapon::StaticRegisterNativesASTURifleWeapon()
	{
	}
	UClass* Z_Construct_UClass_ASTURifleWeapon_NoRegister()
	{
		return ASTURifleWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ASTURifleWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeBetweenShots_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeBetweenShots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletSpred_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BulletSpred;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASTURifleWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASTUBaseWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_STU_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURifleWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Weapons/STURifleWeapon.h" },
		{ "ModuleRelativePath", "Public/Weapons/STURifleWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_TimeBetweenShots_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/STURifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_TimeBetweenShots = { "TimeBetweenShots", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURifleWeapon, TimeBetweenShots), METADATA_PARAMS(Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_TimeBetweenShots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_TimeBetweenShots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_BulletSpred_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/STURifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_BulletSpred = { "BulletSpred", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURifleWeapon, BulletSpred), METADATA_PARAMS(Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_BulletSpred_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_BulletSpred_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/Weapons/STURifleWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0020080000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASTURifleWeapon, DamageAmount), METADATA_PARAMS(Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_DamageAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_DamageAmount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTURifleWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_TimeBetweenShots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_BulletSpred,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTURifleWeapon_Statics::NewProp_DamageAmount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASTURifleWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTURifleWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASTURifleWeapon_Statics::ClassParams = {
		&ASTURifleWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASTURifleWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASTURifleWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASTURifleWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASTURifleWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASTURifleWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASTURifleWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASTURifleWeapon, 2283665614);
	template<> STU_PROJECT_API UClass* StaticClass<ASTURifleWeapon>()
	{
		return ASTURifleWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASTURifleWeapon(Z_Construct_UClass_ASTURifleWeapon, &ASTURifleWeapon::StaticClass, TEXT("/Script/STU_Project"), TEXT("ASTURifleWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASTURifleWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
