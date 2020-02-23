// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BInteractionInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBInteractionInterface() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_UBInteractionInterface_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_UBInteractionInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_UBInteractionInterface_Drop();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_UBInteractionInterface_Pickup();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void IBInteractionInterface::Drop()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Drop instead.");
	}
	void IBInteractionInterface::Pickup(USceneComponent* AttachTo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Pickup instead.");
	}
	void UBInteractionInterface::StaticRegisterNativesUBInteractionInterface()
	{
		UClass* Class = UBInteractionInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Drop", &IBInteractionInterface::execDrop },
			{ "Pickup", &IBInteractionInterface::execPickup },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBInteractionInterface_Drop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBInteractionInterface_Drop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Ability" },
		{ "ModuleRelativePath", "BInteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBInteractionInterface_Drop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBInteractionInterface, nullptr, "Drop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBInteractionInterface_Drop_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBInteractionInterface_Drop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBInteractionInterface_Drop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBInteractionInterface_Drop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::NewProp_AttachTo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::NewProp_AttachTo = { "AttachTo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BInteractionInterface_eventPickup_Parms, AttachTo), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::NewProp_AttachTo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::NewProp_AttachTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::NewProp_AttachTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Ability" },
		{ "ModuleRelativePath", "BInteractionInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBInteractionInterface, nullptr, "Pickup", nullptr, nullptr, sizeof(BInteractionInterface_eventPickup_Parms), Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBInteractionInterface_Pickup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBInteractionInterface_Pickup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBInteractionInterface_NoRegister()
	{
		return UBInteractionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBInteractionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBInteractionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBInteractionInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBInteractionInterface_Drop, "Drop" }, // 2210424128
		{ &Z_Construct_UFunction_UBInteractionInterface_Pickup, "Pickup" }, // 3979032930
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBInteractionInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BInteractionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBInteractionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBInteractionInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBInteractionInterface_Statics::ClassParams = {
		&UBInteractionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBInteractionInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBInteractionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBInteractionInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBInteractionInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBInteractionInterface, 4082876992);
	template<> BREAKTHROUGH_API UClass* StaticClass<UBInteractionInterface>()
	{
		return UBInteractionInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBInteractionInterface(Z_Construct_UClass_UBInteractionInterface, &UBInteractionInterface::StaticClass, TEXT("/Script/Breakthrough"), TEXT("UBInteractionInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBInteractionInterface);
	static FName NAME_UBInteractionInterface_Drop = FName(TEXT("Drop"));
	void IBInteractionInterface::Execute_Drop(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBInteractionInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UBInteractionInterface_Drop);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IBInteractionInterface*)(O->GetNativeInterfaceAddress(UBInteractionInterface::StaticClass())))
		{
			I->Drop_Implementation();
		}
	}
	static FName NAME_UBInteractionInterface_Pickup = FName(TEXT("Pickup"));
	void IBInteractionInterface::Execute_Pickup(UObject* O, USceneComponent* AttachTo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UBInteractionInterface::StaticClass()));
		BInteractionInterface_eventPickup_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UBInteractionInterface_Pickup);
		if (Func)
		{
			Parms.AttachTo=AttachTo;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IBInteractionInterface*)(O->GetNativeInterfaceAddress(UBInteractionInterface::StaticClass())))
		{
			I->Pickup_Implementation(AttachTo);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
