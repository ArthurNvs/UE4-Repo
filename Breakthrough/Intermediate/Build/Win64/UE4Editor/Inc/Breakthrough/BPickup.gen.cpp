// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPickup() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPickup_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPickup();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABInteractable();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_UBInteractionInterface_NoRegister();
// End Cross Module References
	void ABPickup::StaticRegisterNativesABPickup()
	{
	}
	UClass* Z_Construct_UClass_ABPickup_NoRegister()
	{
		return ABPickup::StaticClass();
	}
	struct Z_Construct_UClass_ABPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPickup.h" },
		{ "ModuleRelativePath", "BPickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPickup_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPickup_Statics::NewProp_PickupMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPickup_Statics::NewProp_PickupMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPickup_Statics::NewProp_PickupMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABPickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ABPickup, IBInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABPickup_Statics::ClassParams = {
		&ABPickup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABPickup_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABPickup_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABPickup_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABPickup, 1719207820);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABPickup>()
	{
		return ABPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABPickup(Z_Construct_UClass_ABPickup, &ABPickup::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
