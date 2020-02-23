// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBObject() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABObject_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_UBInteractionInterface_NoRegister();
// End Cross Module References
	void ABObject::StaticRegisterNativesABObject()
	{
	}
	UClass* Z_Construct_UClass_ABObject_NoRegister()
	{
		return ABObject::StaticClass();
	}
	struct Z_Construct_UClass_ABObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BObject.h" },
		{ "ModuleRelativePath", "BObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABObject_Statics::NewProp_ObjectMesh_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABObject_Statics::NewProp_ObjectMesh = { "ObjectMesh", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABObject, ObjectMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABObject_Statics::NewProp_ObjectMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABObject_Statics::NewProp_ObjectMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABObject_Statics::NewProp_ObjectMesh,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABObject_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBInteractionInterface_NoRegister, (int32)VTABLE_OFFSET(ABObject, IBInteractionInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABObject_Statics::ClassParams = {
		&ABObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABObject_Statics::PropPointers,
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABObject_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABObject, 2098617704);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABObject>()
	{
		return ABObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABObject(Z_Construct_UClass_ABObject, &ABObject::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
