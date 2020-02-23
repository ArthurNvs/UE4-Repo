// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKTHROUGH_BAnimInstance_generated_h
#error "BAnimInstance.generated.h already included, missing '#pragma once' in BAnimInstance.h"
#endif
#define BREAKTHROUGH_BAnimInstance_generated_h

#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_RPC_WRAPPERS
#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBAnimInstance(); \
	friend struct Z_Construct_UClass_UBAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(UBAnimInstance)


#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUBAnimInstance(); \
	friend struct Z_Construct_UClass_UBAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UBAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(UBAnimInstance)


#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBAnimInstance(UBAnimInstance&&); \
	NO_API UBAnimInstance(const UBAnimInstance&); \
public:


#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBAnimInstance(UBAnimInstance&&); \
	NO_API UBAnimInstance(const UBAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBAnimInstance)


#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsGrabbing() { return STRUCT_OFFSET(UBAnimInstance, bIsGrabbing); } \
	FORCEINLINE static uint32 __PPO__bIsGrabbable() { return STRUCT_OFFSET(UBAnimInstance, bIsGrabbable); }


#define Breakthrough_Source_Breakthrough_BAnimInstance_h_8_PROLOG
#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_INCLASS \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BAnimInstance_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BAnimInstance_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class UBAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
