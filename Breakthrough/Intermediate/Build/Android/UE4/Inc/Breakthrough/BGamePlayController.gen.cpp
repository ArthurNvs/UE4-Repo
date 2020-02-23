// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BGamePlayController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBGamePlayController() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABGamePlayController_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABGamePlayController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID();
	BREAKTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABInteractable_NoRegister();
// End Cross Module References
	void ABGamePlayController::StaticRegisterNativesABGamePlayController()
	{
		UClass* Class = ABGamePlayController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddToInventoryByID", &ABGamePlayController::execAddToInventoryByID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics
	{
		struct BGamePlayController_eventAddToInventoryByID_Parms
		{
			FName ID;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BGamePlayController_eventAddToInventoryByID_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Utils" },
		{ "Comment", "//THINK about create a separate file for this USTRUCT\n" },
		{ "ModuleRelativePath", "BGamePlayController.h" },
		{ "ToolTip", "THINK about create a separate file for this USTRUCT" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABGamePlayController, nullptr, "AddToInventoryByID", nullptr, nullptr, sizeof(BGamePlayController_eventAddToInventoryByID_Parms), Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABGamePlayController_NoRegister()
	{
		return ABGamePlayController::StaticClass();
	}
	struct Z_Construct_UClass_ABGamePlayController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentInteractable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentInteractable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABGamePlayController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABGamePlayController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABGamePlayController_AddToInventoryByID, "AddToInventoryByID" }, // 4282874707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGamePlayController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BGamePlayController.h" },
		{ "ModuleRelativePath", "BGamePlayController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory_MetaData[] = {
		{ "Category", "BGamePlayController" },
		{ "ModuleRelativePath", "BGamePlayController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABGamePlayController, Inventory), METADATA_PARAMS(Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInventoryItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABGamePlayController_Statics::NewProp_CurrentInteractable_MetaData[] = {
		{ "Category", "BGamePlayController" },
		{ "Comment", "//The interactable that the hand is overlapping with (null if not)\n" },
		{ "ModuleRelativePath", "BGamePlayController.h" },
		{ "ToolTip", "The interactable that the hand is overlapping with (null if not)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABGamePlayController_Statics::NewProp_CurrentInteractable = { "CurrentInteractable", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABGamePlayController, CurrentInteractable), Z_Construct_UClass_ABInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABGamePlayController_Statics::NewProp_CurrentInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABGamePlayController_Statics::NewProp_CurrentInteractable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABGamePlayController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGamePlayController_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABGamePlayController_Statics::NewProp_CurrentInteractable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABGamePlayController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABGamePlayController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABGamePlayController_Statics::ClassParams = {
		&ABGamePlayController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABGamePlayController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABGamePlayController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABGamePlayController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABGamePlayController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABGamePlayController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABGamePlayController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABGamePlayController, 3114358291);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABGamePlayController>()
	{
		return ABGamePlayController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABGamePlayController(Z_Construct_UClass_ABGamePlayController, &ABGamePlayController::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABGamePlayController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABGamePlayController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
