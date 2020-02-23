// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKTHROUGH_BPickup_generated_h
#error "BPickup.generated.h already included, missing '#pragma once' in BPickup.h"
#endif
#define BREAKTHROUGH_BPickup_generated_h

#define Breakthrough_Source_Breakthrough_BPickup_h_13_RPC_WRAPPERS
#define Breakthrough_Source_Breakthrough_BPickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Breakthrough_Source_Breakthrough_BPickup_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABPickup(); \
	friend struct Z_Construct_UClass_ABPickup_Statics; \
public: \
	DECLARE_CLASS(ABPickup, ABInteractable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABPickup) \
	virtual UObject* _getUObject() const override { return const_cast<ABPickup*>(this); }


#define Breakthrough_Source_Breakthrough_BPickup_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABPickup(); \
	friend struct Z_Construct_UClass_ABPickup_Statics; \
public: \
	DECLARE_CLASS(ABPickup, ABInteractable, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABPickup) \
	virtual UObject* _getUObject() const override { return const_cast<ABPickup*>(this); }


#define Breakthrough_Source_Breakthrough_BPickup_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABPickup(ABPickup&&); \
	NO_API ABPickup(const ABPickup&); \
public:


#define Breakthrough_Source_Breakthrough_BPickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABPickup(ABPickup&&); \
	NO_API ABPickup(const ABPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABPickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABPickup)


#define Breakthrough_Source_Breakthrough_BPickup_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupMesh() { return STRUCT_OFFSET(ABPickup, PickupMesh); }


#define Breakthrough_Source_Breakthrough_BPickup_h_10_PROLOG
#define Breakthrough_Source_Breakthrough_BPickup_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BPickup_h_13_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BPickup_h_13_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BPickup_h_13_INCLASS \
	Breakthrough_Source_Breakthrough_BPickup_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BPickup_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BPickup_h_13_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BPickup_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BPickup_h_13_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BPickup_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
