// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BPlayerHand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPlayerHand() {}
// Cross Module References
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPlayerHand_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPlayerHand();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_BeginOverlap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_EndOverlap();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_GetActorNearHand();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_GrabObject();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_ReleaseObject();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_SetAnimation();
	BREAKTHROUGH_API UFunction* Z_Construct_UFunction_ABPlayerHand_SetCanClimb();
	UMG_API UClass* Z_Construct_UClass_UWidgetInteractionComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
// End Cross Module References
	void ABPlayerHand::StaticRegisterNativesABPlayerHand()
	{
		UClass* Class = ABPlayerHand::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginOverlap", &ABPlayerHand::execBeginOverlap },
			{ "CastHandAnimInstance", &ABPlayerHand::execCastHandAnimInstance },
			{ "EndOverlap", &ABPlayerHand::execEndOverlap },
			{ "GetActorNearHand", &ABPlayerHand::execGetActorNearHand },
			{ "GrabObject", &ABPlayerHand::execGrabObject },
			{ "ReleaseObject", &ABPlayerHand::execReleaseObject },
			{ "SetAnimation", &ABPlayerHand::execSetAnimation },
			{ "SetCanClimb", &ABPlayerHand::execSetCanClimb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics
	{
		struct BPlayerHand_eventBeginOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPlayerHand_eventBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPlayerHand_eventBeginOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Functions\n" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
		{ "ToolTip", "Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "BeginOverlap", nullptr, nullptr, sizeof(BPlayerHand_eventBeginOverlap_Parms), Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_BeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_BeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "CastHandAnimInstance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics
	{
		struct BPlayerHand_eventEndOverlap_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPlayerHand_eventEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::NewProp_OverlappedActor = { "OverlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPlayerHand_eventEndOverlap_Parms, OverlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::NewProp_OverlappedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "EndOverlap", nullptr, nullptr, sizeof(BPlayerHand_eventEndOverlap_Parms), Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_EndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_EndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics
	{
		struct BPlayerHand_eventGetActorNearHand_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPlayerHand_eventGetActorNearHand_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::Function_MetaDataParams[] = {
		{ "Category", "Grab Objects" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "GetActorNearHand", nullptr, nullptr, sizeof(BPlayerHand_eventGetActorNearHand_Parms), Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_GetActorNearHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_GetActorNearHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_GrabObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_GrabObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_GrabObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "GrabObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_GrabObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_GrabObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_GrabObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_GrabObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_ReleaseObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_ReleaseObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_ReleaseObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "ReleaseObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_ReleaseObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_ReleaseObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_ReleaseObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_ReleaseObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_SetAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_SetAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_SetAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "SetAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_SetAnimation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_SetAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_SetAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_SetAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics
	{
		struct BPlayerHand_eventSetCanClimb_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPlayerHand_eventSetCanClimb_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPlayerHand_eventSetCanClimb_Parms), &Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABPlayerHand, nullptr, "SetCanClimb", nullptr, nullptr, sizeof(BPlayerHand_eventSetCanClimb_Parms), Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABPlayerHand_SetCanClimb()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABPlayerHand_SetCanClimb_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABPlayerHand_NoRegister()
	{
		return ABPlayerHand::StaticClass();
	}
	struct Z_Construct_UClass_ABPlayerHand_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachedActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandPointer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandPointer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrabShpere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GrabShpere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MotionController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MotionController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABPlayerHand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABPlayerHand_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABPlayerHand_BeginOverlap, "BeginOverlap" }, // 1799573586
		{ &Z_Construct_UFunction_ABPlayerHand_CastHandAnimInstance, "CastHandAnimInstance" }, // 110966133
		{ &Z_Construct_UFunction_ABPlayerHand_EndOverlap, "EndOverlap" }, // 1449182539
		{ &Z_Construct_UFunction_ABPlayerHand_GetActorNearHand, "GetActorNearHand" }, // 152304150
		{ &Z_Construct_UFunction_ABPlayerHand_GrabObject, "GrabObject" }, // 501221841
		{ &Z_Construct_UFunction_ABPlayerHand_ReleaseObject, "ReleaseObject" }, // 3407915010
		{ &Z_Construct_UFunction_ABPlayerHand_SetAnimation, "SetAnimation" }, // 1090602730
		{ &Z_Construct_UFunction_ABPlayerHand_SetCanClimb, "SetCanClimb" }, // 2528149275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerHand_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPlayerHand.h" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerHand_Statics::NewProp_AttachedActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayerHand_Statics::NewProp_AttachedActor = { "AttachedActor", nullptr, (EPropertyFlags)0x0040000000010005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayerHand, AttachedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_AttachedActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_AttachedActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandPointer_MetaData[] = {
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandPointer = { "HandPointer", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayerHand, HandPointer), Z_Construct_UClass_UWidgetInteractionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandPointer_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandPointer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerHand_Statics::NewProp_GrabShpere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayerHand_Statics::NewProp_GrabShpere = { "GrabShpere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayerHand, GrabShpere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_GrabShpere_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_GrabShpere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandMesh = { "HandMesh", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayerHand, HandMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayerHand_Statics::NewProp_MotionController_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//Properties\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayerHand.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayerHand_Statics::NewProp_MotionController = { "MotionController", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayerHand, MotionController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_MotionController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::NewProp_MotionController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABPlayerHand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayerHand_Statics::NewProp_AttachedActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandPointer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayerHand_Statics::NewProp_GrabShpere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayerHand_Statics::NewProp_HandMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayerHand_Statics::NewProp_MotionController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABPlayerHand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPlayerHand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABPlayerHand_Statics::ClassParams = {
		&ABPlayerHand::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABPlayerHand_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABPlayerHand_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABPlayerHand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABPlayerHand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABPlayerHand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABPlayerHand, 3659614726);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABPlayerHand>()
	{
		return ABPlayerHand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABPlayerHand(Z_Construct_UClass_ABPlayerHand, &ABPlayerHand::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABPlayerHand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABPlayerHand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
