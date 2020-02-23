// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKTHROUGH_BPlayer_generated_h
#error "BPlayer.generated.h already included, missing '#pragma once' in BPlayer.h"
#endif
#define BREAKTHROUGH_BPlayer_generated_h

#define Breakthrough_Source_Breakthrough_BPlayer_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventoryItem_Statics; \
	BREAKTHROUGH_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BREAKTHROUGH_API UScriptStruct* StaticStruct<struct FInventoryItem>();

#define Breakthrough_Source_Breakthrough_BPlayer_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraftingInfo_Statics; \
	BREAKTHROUGH_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BREAKTHROUGH_API UScriptStruct* StaticStruct<struct FCraftingInfo>();

#define Breakthrough_Source_Breakthrough_BPlayer_h_84_RPC_WRAPPERS
#define Breakthrough_Source_Breakthrough_BPlayer_h_84_RPC_WRAPPERS_NO_PURE_DECLS
#define Breakthrough_Source_Breakthrough_BPlayer_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABPlayer(); \
	friend struct Z_Construct_UClass_ABPlayer_Statics; \
public: \
	DECLARE_CLASS(ABPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABPlayer)


#define Breakthrough_Source_Breakthrough_BPlayer_h_84_INCLASS \
private: \
	static void StaticRegisterNativesABPlayer(); \
	friend struct Z_Construct_UClass_ABPlayer_Statics; \
public: \
	DECLARE_CLASS(ABPlayer, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABPlayer)


#define Breakthrough_Source_Breakthrough_BPlayer_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABPlayer(ABPlayer&&); \
	NO_API ABPlayer(const ABPlayer&); \
public:


#define Breakthrough_Source_Breakthrough_BPlayer_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABPlayer(ABPlayer&&); \
	NO_API ABPlayer(const ABPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABPlayer)


#define Breakthrough_Source_Breakthrough_BPlayer_h_84_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ABPlayer, CameraComp); } \
	FORCEINLINE static uint32 __PPO__PlayerRoot() { return STRUCT_OFFSET(ABPlayer, PlayerRoot); } \
	FORCEINLINE static uint32 __PPO__LController() { return STRUCT_OFFSET(ABPlayer, LController); } \
	FORCEINLINE static uint32 __PPO__RController() { return STRUCT_OFFSET(ABPlayer, RController); } \
	FORCEINLINE static uint32 __PPO__PlayerHandClass() { return STRUCT_OFFSET(ABPlayer, PlayerHandClass); } \
	FORCEINLINE static uint32 __PPO__DestinationMarker() { return STRUCT_OFFSET(ABPlayer, DestinationMarker); } \
	FORCEINLINE static uint32 __PPO__TeleportPath() { return STRUCT_OFFSET(ABPlayer, TeleportPath); } \
	FORCEINLINE static uint32 __PPO__TeleportPathMeshPool() { return STRUCT_OFFSET(ABPlayer, TeleportPathMeshPool); } \
	FORCEINLINE static uint32 __PPO__TeleportArchMesh() { return STRUCT_OFFSET(ABPlayer, TeleportArchMesh); } \
	FORCEINLINE static uint32 __PPO__TeleportArchMaterial() { return STRUCT_OFFSET(ABPlayer, TeleportArchMaterial); } \
	FORCEINLINE static uint32 __PPO__TeleportProjectileSpeed() { return STRUCT_OFFSET(ABPlayer, TeleportProjectileSpeed); } \
	FORCEINLINE static uint32 __PPO__TeleportProjectileRadius() { return STRUCT_OFFSET(ABPlayer, TeleportProjectileRadius); } \
	FORCEINLINE static uint32 __PPO__TeleportSimulationTime() { return STRUCT_OFFSET(ABPlayer, TeleportSimulationTime); } \
	FORCEINLINE static uint32 __PPO__TeleportFadeTime() { return STRUCT_OFFSET(ABPlayer, TeleportFadeTime); } \
	FORCEINLINE static uint32 __PPO__TeleportProjectionExtent() { return STRUCT_OFFSET(ABPlayer, TeleportProjectionExtent); }


#define Breakthrough_Source_Breakthrough_BPlayer_h_81_PROLOG
#define Breakthrough_Source_Breakthrough_BPlayer_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_INCLASS \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BPlayer_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BPlayer_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
