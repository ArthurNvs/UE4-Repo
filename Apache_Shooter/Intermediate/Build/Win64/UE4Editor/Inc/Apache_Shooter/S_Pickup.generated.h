// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef APACHE_SHOOTER_S_Pickup_generated_h
#error "S_Pickup.generated.h already included, missing '#pragma once' in S_Pickup.h"
#endif
#define APACHE_SHOOTER_S_Pickup_generated_h

#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_SPARSE_DATA
#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_RPC_WRAPPERS
#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAS_Pickup(); \
	friend struct Z_Construct_UClass_AS_Pickup_Statics; \
public: \
	DECLARE_CLASS(AS_Pickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apache_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AS_Pickup)


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAS_Pickup(); \
	friend struct Z_Construct_UClass_AS_Pickup_Statics; \
public: \
	DECLARE_CLASS(AS_Pickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apache_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AS_Pickup)


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AS_Pickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AS_Pickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS_Pickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS_Pickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS_Pickup(AS_Pickup&&); \
	NO_API AS_Pickup(const AS_Pickup&); \
public:


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS_Pickup(AS_Pickup&&); \
	NO_API AS_Pickup(const AS_Pickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS_Pickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS_Pickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AS_Pickup)


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(AS_Pickup, PickupMesh); } \
	FORCEINLINE static uint32 __PPO__ColliderComp() { return STRUCT_OFFSET(AS_Pickup, ColliderComp); }


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_9_PROLOG
#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_SPARSE_DATA \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_RPC_WRAPPERS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_INCLASS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_PRIVATE_PROPERTY_OFFSET \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_SPARSE_DATA \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_INCLASS_NO_PURE_DECLS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APACHE_SHOOTER_API UClass* StaticClass<class AS_Pickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Apache_Shooter_Source_Apache_Shooter_Public_S_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
