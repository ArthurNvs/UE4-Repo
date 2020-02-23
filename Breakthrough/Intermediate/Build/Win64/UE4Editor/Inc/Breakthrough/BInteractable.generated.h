// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef BREAKTHROUGH_BInteractable_generated_h
#error "BInteractable.generated.h already included, missing '#pragma once' in BInteractable.h"
#endif
#define BREAKTHROUGH_BInteractable_generated_h

#define Breakthrough_Source_Breakthrough_BInteractable_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUseText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUseText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(Z_Param_Controller); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUseText) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetUseText(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInteract) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Interact(Z_Param_Controller); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABInteractable(); \
	friend struct Z_Construct_UClass_ABInteractable_Statics; \
public: \
	DECLARE_CLASS(ABInteractable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABInteractable)


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABInteractable(); \
	friend struct Z_Construct_UClass_ABInteractable_Statics; \
public: \
	DECLARE_CLASS(ABInteractable, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABInteractable)


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABInteractable(ABInteractable&&); \
	NO_API ABInteractable(const ABInteractable&); \
public:


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABInteractable(ABInteractable&&); \
	NO_API ABInteractable(const ABInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABInteractable)


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_PRIVATE_PROPERTY_OFFSET
#define Breakthrough_Source_Breakthrough_BInteractable_h_8_PROLOG
#define Breakthrough_Source_Breakthrough_BInteractable_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_INCLASS \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BInteractable_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BInteractable_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
