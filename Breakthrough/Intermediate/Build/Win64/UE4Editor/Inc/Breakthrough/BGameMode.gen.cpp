// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGameMode() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABGameMode_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void ABGameMode::StaticRegisterNativesABGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABGameMode_NoRegister()
	{
		return ABGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemDB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BGameMode.h" },
		{ "ModuleRelativePath", "BGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGameMode_Statics::NewProp_ItemDB_MetaData[] = {
		{ "Category", "BGameMode" },
		{ "ModuleRelativePath", "BGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGameMode_Statics::NewProp_ItemDB = { "ItemDB", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABGameMode, ItemDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABGameMode_Statics::NewProp_ItemDB_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABGameMode_Statics::NewProp_ItemDB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGameMode_Statics::NewProp_ItemDB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABGameMode_Statics::ClassParams = {
		&ABGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABGameMode_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABGameMode, 3320426020);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABGameMode>()
	{
		return ABGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABGameMode(Z_Construct_UClass_ABGameMode, &ABGameMode::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
