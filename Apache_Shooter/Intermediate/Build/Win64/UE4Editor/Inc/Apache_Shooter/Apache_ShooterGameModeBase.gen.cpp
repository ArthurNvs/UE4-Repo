// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apache_Shooter/Apache_ShooterGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeApache_ShooterGameModeBase() {}
// Cross Module References
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AApache_ShooterGameModeBase_NoRegister();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AApache_ShooterGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Apache_Shooter();
// End Cross Module References
	void AApache_ShooterGameModeBase::StaticRegisterNativesAApache_ShooterGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AApache_ShooterGameModeBase_NoRegister()
	{
		return AApache_ShooterGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AApache_ShooterGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Apache_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Apache_ShooterGameModeBase.h" },
		{ "ModuleRelativePath", "Apache_ShooterGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AApache_ShooterGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::ClassParams = {
		&AApache_ShooterGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AApache_ShooterGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AApache_ShooterGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AApache_ShooterGameModeBase, 4236801167);
	template<> APACHE_SHOOTER_API UClass* StaticClass<AApache_ShooterGameModeBase>()
	{
		return AApache_ShooterGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AApache_ShooterGameModeBase(Z_Construct_UClass_AApache_ShooterGameModeBase, &AApache_ShooterGameModeBase::StaticClass, TEXT("/Script/Apache_Shooter"), TEXT("AApache_ShooterGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AApache_ShooterGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
