// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apache_Shooter/Public/S_Pickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Pickup() {}
// Cross Module References
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Pickup_NoRegister();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Pickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Apache_Shooter();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AS_Pickup::StaticRegisterNativesAS_Pickup()
	{
	}
	UClass* Z_Construct_UClass_AS_Pickup_NoRegister()
	{
		return AS_Pickup::StaticClass();
	}
	struct Z_Construct_UClass_AS_Pickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColliderComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ColliderComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS_Pickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Apache_Shooter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Pickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S_Pickup.h" },
		{ "ModuleRelativePath", "Public/S_Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Pickup_Statics::NewProp_ColliderComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Pickup_Statics::NewProp_ColliderComp = { "ColliderComp", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Pickup, ColliderComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Pickup_Statics::NewProp_ColliderComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Pickup_Statics::NewProp_ColliderComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Pickup_Statics::NewProp_PickupMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Pickup_Statics::NewProp_PickupMesh = { "PickupMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Pickup, PickupMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Pickup_Statics::NewProp_PickupMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Pickup_Statics::NewProp_PickupMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Pickup_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "Properties" },
		{ "ModuleRelativePath", "Public/S_Pickup.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AS_Pickup_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Pickup, ItemName), METADATA_PARAMS(Z_Construct_UClass_AS_Pickup_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Pickup_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AS_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Pickup_Statics::NewProp_ColliderComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Pickup_Statics::NewProp_PickupMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Pickup_Statics::NewProp_ItemName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS_Pickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_Pickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS_Pickup_Statics::ClassParams = {
		&AS_Pickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AS_Pickup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AS_Pickup_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AS_Pickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Pickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS_Pickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS_Pickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS_Pickup, 698604576);
	template<> APACHE_SHOOTER_API UClass* StaticClass<AS_Pickup>()
	{
		return AS_Pickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS_Pickup(Z_Construct_UClass_AS_Pickup, &AS_Pickup::StaticClass, TEXT("/Script/Apache_Shooter"), TEXT("AS_Pickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS_Pickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
