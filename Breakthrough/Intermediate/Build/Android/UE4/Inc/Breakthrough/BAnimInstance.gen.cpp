// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBAnimInstance() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_UBAnimInstance_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_UBAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
// End Cross Module References
	void UBAnimInstance::StaticRegisterNativesUBAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UBAnimInstance_NoRegister()
	{
		return UBAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UBAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrabbable_MetaData[];
#endif
		static void NewProp_bIsGrabbable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrabbable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsGrabbing_MetaData[];
#endif
		static void NewProp_bIsGrabbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsGrabbing;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "BAnimInstance.h" },
		{ "ModuleRelativePath", "BAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "BAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable_SetBit(void* Obj)
	{
		((UBAnimInstance*)Obj)->bIsGrabbable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable = { "bIsGrabbable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBAnimInstance), &Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing_MetaData[] = {
		{ "Category", "Blend" },
		{ "ModuleRelativePath", "BAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing_SetBit(void* Obj)
	{
		((UBAnimInstance*)Obj)->bIsGrabbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing = { "bIsGrabbing", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBAnimInstance), &Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBAnimInstance_Statics::NewProp_bIsGrabbing,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBAnimInstance_Statics::ClassParams = {
		&UBAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBAnimInstance, 2011142965);
	template<> BREAKTHROUGH_API UClass* StaticClass<UBAnimInstance>()
	{
		return UBAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBAnimInstance(Z_Construct_UClass_UBAnimInstance, &UBAnimInstance::StaticClass, TEXT("/Script/Breakthrough"), TEXT("UBAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
