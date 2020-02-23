// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BREAKTHROUGH_BPlayerHand_generated_h
#error "BPlayerHand.generated.h already included, missing '#pragma once' in BPlayerHand.h"
#endif
#define BREAKTHROUGH_BPlayerHand_generated_h

#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execReleaseObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorNearHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanClimb) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCanClimb(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastHandAnimInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CastHandAnimInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReleaseObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ReleaseObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrabObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GrabObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetActorNearHand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=P_THIS->GetActorNearHand(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanClimb) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SetCanClimb(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAnimation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCastHandAnimInstance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CastHandAnimInstance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEndOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBeginOverlap) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OverlappedActor); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BeginOverlap(Z_Param_OverlappedActor,Z_Param_OtherActor); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABPlayerHand(); \
	friend struct Z_Construct_UClass_ABPlayerHand_Statics; \
public: \
	DECLARE_CLASS(ABPlayerHand, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABPlayerHand)


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_INCLASS \
private: \
	static void StaticRegisterNativesABPlayerHand(); \
	friend struct Z_Construct_UClass_ABPlayerHand_Statics; \
public: \
	DECLARE_CLASS(ABPlayerHand, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABPlayerHand)


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABPlayerHand(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABPlayerHand) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPlayerHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPlayerHand); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABPlayerHand(ABPlayerHand&&); \
	NO_API ABPlayerHand(const ABPlayerHand&); \
public:


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABPlayerHand(ABPlayerHand&&); \
	NO_API ABPlayerHand(const ABPlayerHand&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPlayerHand); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPlayerHand); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABPlayerHand)


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MotionController() { return STRUCT_OFFSET(ABPlayerHand, MotionController); } \
	FORCEINLINE static uint32 __PPO__HandMesh() { return STRUCT_OFFSET(ABPlayerHand, HandMesh); } \
	FORCEINLINE static uint32 __PPO__GrabShpere() { return STRUCT_OFFSET(ABPlayerHand, GrabShpere); } \
	FORCEINLINE static uint32 __PPO__HandPointer() { return STRUCT_OFFSET(ABPlayerHand, HandPointer); } \
	FORCEINLINE static uint32 __PPO__AttachedActor() { return STRUCT_OFFSET(ABPlayerHand, AttachedActor); }


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_16_PROLOG
#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_INCLASS \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BPlayerHand_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BPlayerHand_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABPlayerHand>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BPlayerHand_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
