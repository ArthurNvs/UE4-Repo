// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BInteractable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBInteractable() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABInteractable_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABInteractable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABInteractable_GetUseText();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABInteractable_Interact();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	void ABInteractable::StaticRegisterNativesABInteractable()
	{
		UClass* Class = ABInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUseText", &ABInteractable::execGetUseText },
			{ "Interact", &ABInteractable::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABInteractable_GetUseText_Statics
	{
		struct BInteractable_eventGetUseText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ABInteractable_GetUseText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BInteractable_eventGetUseText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABInteractable_GetUseText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABInteractable_GetUseText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABInteractable_GetUseText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactables Functions" },
		{ "ModuleRelativePath", "BInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABInteractable_GetUseText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABInteractable, nullptr, "GetUseText", nullptr, nullptr, sizeof(BInteractable_eventGetUseText_Parms), Z_Construct_UFunction_ABInteractable_GetUseText_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABInteractable_GetUseText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABInteractable_GetUseText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABInteractable_GetUseText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABInteractable_GetUseText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABInteractable_GetUseText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABInteractable_Interact_Statics
	{
		struct BInteractable_eventInteract_Parms
		{
			APlayerController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABInteractable_Interact_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BInteractable_eventInteract_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABInteractable_Interact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABInteractable_Interact_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABInteractable_Interact_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interactables Functions" },
		{ "Comment", "//Functions\n//BlueprintImplementableEvent\n" },
		{ "ModuleRelativePath", "BInteractable.h" },
		{ "ToolTip", "Functions\nBlueprintImplementableEvent" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABInteractable_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABInteractable, nullptr, "Interact", nullptr, nullptr, sizeof(BInteractable_eventInteract_Parms), Z_Construct_UFunction_ABInteractable_Interact_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABInteractable_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABInteractable_Interact_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABInteractable_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABInteractable_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABInteractable_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABInteractable_NoRegister()
	{
		return ABInteractable::StaticClass();
	}
	struct Z_Construct_UClass_ABInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRender_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRender;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABInteractable_GetUseText, "GetUseText" }, // 1899438881
		{ &Z_Construct_UFunction_ABInteractable_Interact, "Interact" }, // 888507784
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BInteractable.h" },
		{ "ModuleRelativePath", "BInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABInteractable_Statics::NewProp_TextRender_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABInteractable_Statics::NewProp_TextRender = { "TextRender", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABInteractable, TextRender), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABInteractable_Statics::NewProp_TextRender_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABInteractable_Statics::NewProp_TextRender_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABInteractable_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Interactables Properties" },
		{ "ModuleRelativePath", "BInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABInteractable_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABInteractable, Action), METADATA_PARAMS(Z_Construct_UClass_ABInteractable_Statics::NewProp_Action_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABInteractable_Statics::NewProp_Action_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABInteractable_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Interactables Properties" },
		{ "ModuleRelativePath", "BInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ABInteractable_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABInteractable, Name), METADATA_PARAMS(Z_Construct_UClass_ABInteractable_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABInteractable_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABInteractable_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Interactables Properties" },
		{ "ModuleRelativePath", "BInteractable.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ABInteractable_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABInteractable, ItemID), METADATA_PARAMS(Z_Construct_UClass_ABInteractable_Statics::NewProp_ItemID_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABInteractable_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABInteractable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABInteractable_Statics::NewProp_TextRender,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABInteractable_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABInteractable_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABInteractable_Statics::NewProp_ItemID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABInteractable_Statics::ClassParams = {
		&ABInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABInteractable_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABInteractable_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABInteractable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABInteractable, 1944108834);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABInteractable>()
	{
		return ABInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABInteractable(Z_Construct_UClass_ABInteractable, &ABInteractable::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABInteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
