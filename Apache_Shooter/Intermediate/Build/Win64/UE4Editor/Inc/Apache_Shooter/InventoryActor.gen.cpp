// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apache_Shooter/Public/InventoryActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryActor() {}
// Cross Module References
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AInventoryActor_NoRegister();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AInventoryActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_Apache_Shooter();
// End Cross Module References
	void AInventoryActor::StaticRegisterNativesAInventoryActor()
	{
	}
	UClass* Z_Construct_UClass_AInventoryActor_NoRegister()
	{
		return AInventoryActor::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Apache_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InventoryActor.h" },
		{ "ModuleRelativePath", "Public/InventoryActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryActor_Statics::ClassParams = {
		&AInventoryActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryActor, 2361324650);
	template<> APACHE_SHOOTER_API UClass* StaticClass<AInventoryActor>()
	{
		return AInventoryActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryActor(Z_Construct_UClass_AInventoryActor, &AInventoryActor::StaticClass, TEXT("/Script/Apache_Shooter"), TEXT("AInventoryActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
