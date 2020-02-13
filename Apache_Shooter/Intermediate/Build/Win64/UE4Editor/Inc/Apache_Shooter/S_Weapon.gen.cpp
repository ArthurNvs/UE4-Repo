// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apache_Shooter/Public/S_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Weapon() {}
// Cross Module References
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Weapon_NoRegister();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Weapon();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Pickup();
	UPackage* Z_Construct_UPackage__Script_Apache_Shooter();
// End Cross Module References
	void AS_Weapon::StaticRegisterNativesAS_Weapon()
	{
	}
	UClass* Z_Construct_UClass_AS_Weapon_NoRegister()
	{
		return AS_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_AS_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AS_Pickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Apache_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S_Weapon.h" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS_Weapon_Statics::ClassParams = {
		&AS_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS_Weapon, 4259005480);
	template<> APACHE_SHOOTER_API UClass* StaticClass<AS_Weapon>()
	{
		return AS_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS_Weapon(Z_Construct_UClass_AS_Weapon, &AS_Weapon::StaticClass, TEXT("/Script/Apache_Shooter"), TEXT("AS_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
