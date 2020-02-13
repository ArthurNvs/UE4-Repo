// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AS_Pickup;
class AActor;
#ifdef APACHE_SHOOTER_S_Character_generated_h
#error "S_Character.generated.h already included, missing '#pragma once' in S_Character.h"
#endif
#define APACHE_SHOOTER_S_Character_generated_h

#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_SPARSE_DATA
#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSelectItem4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectItem3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectItem2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectItem1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropSelectedItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropSelectedItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHoldItem) \
	{ \
		P_GET_OBJECT(AS_Pickup,Z_Param_ItemIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HoldItem(Z_Param_ItemIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickupItem(); \
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
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSelectItem4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectItem3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectItem2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSelectItem1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SelectItem1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDropSelectedItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropSelectedItem(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHoldItem) \
	{ \
		P_GET_OBJECT(AS_Pickup,Z_Param_ItemIn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HoldItem(Z_Param_ItemIn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickupItem) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PickupItem(); \
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
	} \
 \
	DECLARE_FUNCTION(execGetOverlappingItems) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetOverlappingItems(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveRight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveRight(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveForward) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MoveForward(Z_Param_Value); \
		P_NATIVE_END; \
	}


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAS_Character(); \
	friend struct Z_Construct_UClass_AS_Character_Statics; \
public: \
	DECLARE_CLASS(AS_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apache_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AS_Character)


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAS_Character(); \
	friend struct Z_Construct_UClass_AS_Character_Statics; \
public: \
	DECLARE_CLASS(AS_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Apache_Shooter"), NO_API) \
	DECLARE_SERIALIZER(AS_Character)


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AS_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AS_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS_Character(AS_Character&&); \
	NO_API AS_Character(const AS_Character&); \
public:


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AS_Character(AS_Character&&); \
	NO_API AS_Character(const AS_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AS_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AS_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AS_Character)


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Index() { return STRUCT_OFFSET(AS_Character, Index); } \
	FORCEINLINE static uint32 __PPO__MaxSpeed() { return STRUCT_OFFSET(AS_Character, MaxSpeed); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(AS_Character, Health); } \
	FORCEINLINE static uint32 __PPO__PickupNearActor() { return STRUCT_OFFSET(AS_Character, PickupNearActor); } \
	FORCEINLINE static uint32 __PPO__InHandsItem() { return STRUCT_OFFSET(AS_Character, InHandsItem); } \
	FORCEINLINE static uint32 __PPO__ItemsInventory() { return STRUCT_OFFSET(AS_Character, ItemsInventory); } \
	FORCEINLINE static uint32 __PPO__WeaponInventory() { return STRUCT_OFFSET(AS_Character, WeaponInventory); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AS_Character, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AS_Character, CameraComp); }


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_9_PROLOG
#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_SPARSE_DATA \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_RPC_WRAPPERS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_INCLASS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_SPARSE_DATA \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_INCLASS_NO_PURE_DECLS \
	Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> APACHE_SHOOTER_API UClass* StaticClass<class AS_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Apache_Shooter_Source_Apache_Shooter_Public_S_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
