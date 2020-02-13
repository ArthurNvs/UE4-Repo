// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AInventoryActor;
#ifdef APACHE_SHOOTER_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define APACHE_SHOOTER_InventoryComponent_generated_h

#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_SPARSE_DATA
#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory) \
	{ \
		P_GET_OBJECT(AInventoryActor,Z_Param_ActorToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromInventory(Z_Param_ActorToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToInventory) \
	{ \
		P_GET_OBJECT(AInventoryActor,Z_Param_ActorToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_ActorToAdd); \
		P_NATIVE_END; \
	}


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveFromInventory) \
	{ \
		P_GET_OBJECT(AInventoryActor,Z_Param_ActorToRemove); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveFromInventory(Z_Param_ActorToRemove); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddToInventory) \
	{ \
		P_GET_OBJECT(AInventoryActor,Z_Param_ActorToAdd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddToInventory(Z_Param_ActorToAdd); \
		P_NATIVE_END; \
	}


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apache_Shooter"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apache_Shooter"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_13_PROLOG
#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_SPARSE_DATA \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_RPC_WRAPPERS \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_INCLASS \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_SPARSE_DATA \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_INCLASS_NO_PURE_DECLS \
	Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APACHE_SHOOTER_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Apache_Shooter_Source_Apache_Shooter_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
