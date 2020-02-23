// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKTHROUGH_BGameMode_generated_h
#error "BGameMode.generated.h already included, missing '#pragma once' in BGameMode.h"
#endif
#define BREAKTHROUGH_BGameMode_generated_h

#define Breakthrough_Source_Breakthrough_BGameMode_h_11_RPC_WRAPPERS
#define Breakthrough_Source_Breakthrough_BGameMode_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define Breakthrough_Source_Breakthrough_BGameMode_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABGameMode(); \
	friend struct Z_Construct_UClass_ABGameMode_Statics; \
public: \
	DECLARE_CLASS(ABGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABGameMode)


#define Breakthrough_Source_Breakthrough_BGameMode_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABGameMode(); \
	friend struct Z_Construct_UClass_ABGameMode_Statics; \
public: \
	DECLARE_CLASS(ABGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABGameMode)


#define Breakthrough_Source_Breakthrough_BGameMode_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABGameMode(ABGameMode&&); \
	NO_API ABGameMode(const ABGameMode&); \
public:


#define Breakthrough_Source_Breakthrough_BGameMode_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABGameMode(ABGameMode&&); \
	NO_API ABGameMode(const ABGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABGameMode)


#define Breakthrough_Source_Breakthrough_BGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ItemDB() { return STRUCT_OFFSET(ABGameMode, ItemDB); }


#define Breakthrough_Source_Breakthrough_BGameMode_h_8_PROLOG
#define Breakthrough_Source_Breakthrough_BGameMode_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_INCLASS \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BGameMode_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BGameMode_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
