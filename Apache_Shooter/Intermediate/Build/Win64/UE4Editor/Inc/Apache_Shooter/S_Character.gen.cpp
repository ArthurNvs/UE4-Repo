// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apache_Shooter/Public/S_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Character() {}
// Cross Module References
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Character_NoRegister();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Apache_Shooter();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_BeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_DropSelectedItem();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_EndOverlap();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_GetOverlappingItems();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_HoldItem();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Pickup_NoRegister();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_MoveForward();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_MoveRight();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_PickupItem();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_SelectItem1();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_SelectItem2();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_SelectItem3();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Character_SelectItem4();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void AS_Character::StaticRegisterNativesAS_Character()
	{
		UClass* Class = AS_Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &AS_Character::execBeginOverlap },
			{ "DropSelectedItem", &AS_Character::execDropSelectedItem },
			{ "EndOverlap", &AS_Character::execEndOverlap },
			{ "GetOverlappingItems", &AS_Character::execGetOverlappingItems },
			{ "HoldItem", &AS_Character::execHoldItem },
			{ "MoveForward", &AS_Character::execMoveForward },
			{ "MoveRight", &AS_Character::execMoveRight },
			{ "PickupItem", &AS_Character::execPickupItem },
			{ "SelectItem1", &AS_Character::execSelectItem1 },
			{ "SelectItem2", &AS_Character::execSelectItem2 },
			{ "SelectItem3", &AS_Character::execSelectItem3 },
			{ "SelectItem4", &AS_Character::execSelectItem4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AS_Character_BeginOverlap_Statics
	{
		struct S_Character_eventBeginOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(S_Character_eventBeginOverlap_Parms), Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_DropSelectedItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_DropSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_DropSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "DropSelectedItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_DropSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_DropSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_DropSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_DropSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_EndOverlap_Statics
	{
		struct S_Character_eventEndOverlap_Parms
		{
			AActor* OverlappedActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AS_Character_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AS_Character_EndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AS_Character_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_EndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "EndOverlap", nullptr, nullptr, sizeof(S_Character_eventEndOverlap_Parms), Z_Construct_UFunction_AS_Character_EndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_EndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_GetOverlappingItems_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_GetOverlappingItems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_GetOverlappingItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "GetOverlappingItems", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_GetOverlappingItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_GetOverlappingItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_GetOverlappingItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_GetOverlappingItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_HoldItem_Statics
	{
		struct S_Character_eventHoldItem_Parms
		{
			AS_Pickup* ItemIn;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AS_Character_HoldItem_Statics::NewProp_ItemIn = { "ItemIn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventHoldItem_Parms, ItemIn), Z_Construct_UClass_AS_Pickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AS_Character_HoldItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_HoldItem_Statics::NewProp_ItemIn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_HoldItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_HoldItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "HoldItem", nullptr, nullptr, sizeof(S_Character_eventHoldItem_Parms), Z_Construct_UFunction_AS_Character_HoldItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_HoldItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_HoldItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_HoldItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_HoldItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_HoldItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_MoveForward_Statics
	{
		struct S_Character_eventMoveForward_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AS_Character_MoveForward_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventMoveForward_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AS_Character_MoveForward_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_MoveForward_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "MoveForward", nullptr, nullptr, sizeof(S_Character_eventMoveForward_Parms), Z_Construct_UFunction_AS_Character_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_MoveRight_Statics
	{
		struct S_Character_eventMoveRight_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AS_Character_MoveRight_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(S_Character_eventMoveRight_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AS_Character_MoveRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AS_Character_MoveRight_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "MoveRight", nullptr, nullptr, sizeof(S_Character_eventMoveRight_Parms), Z_Construct_UFunction_AS_Character_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_PickupItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_PickupItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_PickupItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "PickupItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_PickupItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_PickupItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_PickupItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_PickupItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_SelectItem1_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_SelectItem1_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_SelectItem1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "SelectItem1", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_SelectItem1_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_SelectItem1_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_SelectItem1()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_SelectItem1_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_SelectItem2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_SelectItem2_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_SelectItem2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "SelectItem2", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_SelectItem2_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_SelectItem2_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_SelectItem2()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_SelectItem2_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_SelectItem3_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_SelectItem3_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_SelectItem3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "SelectItem3", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_SelectItem3_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_SelectItem3_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_SelectItem3()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_SelectItem3_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Character_SelectItem4_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Character_SelectItem4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Character_SelectItem4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Character, nullptr, "SelectItem4", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Character_SelectItem4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Character_SelectItem4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Character_SelectItem4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Character_SelectItem4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AS_Character_NoRegister()
	{
		return AS_Character::StaticClass();
	}
	struct Z_Construct_UClass_AS_Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeaponInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemsInventory;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemsInventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InHandsItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InHandsItem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupNearActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupNearActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS_Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Apache_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AS_Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AS_Character_BeginOverlap, "BeginOverlap" }, // 3242761754
		{ &Z_Construct_UFunction_AS_Character_DropSelectedItem, "DropSelectedItem" }, // 2872208140
		{ &Z_Construct_UFunction_AS_Character_EndOverlap, "EndOverlap" }, // 4153241200
		{ &Z_Construct_UFunction_AS_Character_GetOverlappingItems, "GetOverlappingItems" }, // 4222742001
		{ &Z_Construct_UFunction_AS_Character_HoldItem, "HoldItem" }, // 2022603674
		{ &Z_Construct_UFunction_AS_Character_MoveForward, "MoveForward" }, // 1553510999
		{ &Z_Construct_UFunction_AS_Character_MoveRight, "MoveRight" }, // 2342522472
		{ &Z_Construct_UFunction_AS_Character_PickupItem, "PickupItem" }, // 2072469641
		{ &Z_Construct_UFunction_AS_Character_SelectItem1, "SelectItem1" }, // 2626534057
		{ &Z_Construct_UFunction_AS_Character_SelectItem2, "SelectItem2" }, // 2917058894
		{ &Z_Construct_UFunction_AS_Character_SelectItem3, "SelectItem3" }, // 2669369615
		{ &Z_Construct_UFunction_AS_Character_SelectItem4, "SelectItem4" }, // 3850284550
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "S_Character.h" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory_MetaData[] = {
		{ "Category", "WeaponsInventory" },
		{ "Comment", "//Character weapons Inventory\n" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
		{ "ToolTip", "Character weapons Inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory = { "WeaponInventory", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, WeaponInventory), METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory_Inner = { "WeaponInventory", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AS_Pickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory_MetaData[] = {
		{ "Category", "ItemsInventory" },
		{ "Comment", "//Character items Inventory\n" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
		{ "ToolTip", "Character items Inventory" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory = { "ItemsInventory", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, ItemsInventory), METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory_Inner = { "ItemsInventory", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AS_Pickup_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_InHandsItem_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "Comment", "//Global Reference to the currently equipped item\n" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
		{ "ToolTip", "Global Reference to the currently equipped item" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_InHandsItem = { "InHandsItem", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, InHandsItem), Z_Construct_UClass_AS_Pickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_InHandsItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_InHandsItem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_PickupNearActor_MetaData[] = {
		{ "Category", "PickupItem" },
		{ "Comment", "//The overlapping item, should be null if none\n" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
		{ "ToolTip", "The overlapping item, should be null if none" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_PickupNearActor = { "PickupNearActor", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, PickupNearActor), Z_Construct_UClass_AS_Pickup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_PickupNearActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_PickupNearActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, Health), METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Character_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//PROPERTYES\n" },
		{ "ModuleRelativePath", "Public/S_Character.h" },
		{ "ToolTip", "PROPERTYES" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AS_Character_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Character, Index), METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AS_Character_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_WeaponInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_ItemsInventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_InHandsItem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_PickupNearActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_MaxSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Character_Statics::NewProp_Index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS_Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_Character>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS_Character_Statics::ClassParams = {
		&AS_Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AS_Character_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AS_Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS_Character_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS_Character, 3185105635);
	template<> APACHE_SHOOTER_API UClass* StaticClass<AS_Character>()
	{
		return AS_Character::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS_Character(Z_Construct_UClass_AS_Character, &AS_Character::StaticClass, TEXT("/Script/Apache_Shooter"), TEXT("AS_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
