// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKTHROUGH_BGamePlayController_generated_h
#error "BGamePlayController.generated.h already included, missing '#pragma once' in BGamePlayController.h"
#endif
#define BREAKTHROUGH_BGamePlayController_generated_h

#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddToInventoryByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToInventoryByID(Z_Param_ID); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddToInventoryByID) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddToInventoryByID(Z_Param_ID); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABGamePlayController(); \
	friend struct Z_Construct_UClass_ABGamePlayController_Statics; \
public: \
	DECLARE_CLASS(ABGamePlayController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABGamePlayController)


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABGamePlayController(); \
	friend struct Z_Construct_UClass_ABGamePlayController_Statics; \
public: \
	DECLARE_CLASS(ABGamePlayController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABGamePlayController)


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABGamePlayController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABGamePlayController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABGamePlayController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABGamePlayController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABGamePlayController(ABGamePlayController&&); \
	NO_API ABGamePlayController(const ABGamePlayController&); \
public:


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABGamePlayController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABGamePlayController(ABGamePlayController&&); \
	NO_API ABGamePlayController(const ABGamePlayController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABGamePlayController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABGamePlayController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABGamePlayController)


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_PRIVATE_PROPERTY_OFFSET
#define Breakthrough_Source_Breakthrough_BGamePlayController_h_10_PROLOG
#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_INCLASS \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BGamePlayController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BGamePlayController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABGamePlayController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BGamePlayController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
