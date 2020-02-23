// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef BREAKTHROUGH_BInteractionInterface_generated_h
#error "BInteractionInterface.generated.h already included, missing '#pragma once' in BInteractionInterface.h"
#endif
#define BREAKTHROUGH_BInteractionInterface_generated_h

#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_RPC_WRAPPERS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Drop_Implementation() {}; \
	virtual void Pickup_Implementation(USceneComponent* AttachTo) {}; \
 \
	DECLARE_FUNCTION(execDrop) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Drop_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPickup) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_AttachTo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Pickup_Implementation(Z_Param_AttachTo); \
		P_NATIVE_END; \
	}


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_EVENT_PARMS \
	struct BInteractionInterface_eventPickup_Parms \
	{ \
		USceneComponent* AttachTo; \
	};


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_CALLBACK_WRAPPERS
#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BREAKTHROUGH_API UBInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBInteractionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BREAKTHROUGH_API, UBInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBInteractionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BREAKTHROUGH_API UBInteractionInterface(UBInteractionInterface&&); \
	BREAKTHROUGH_API UBInteractionInterface(const UBInteractionInterface&); \
public:


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BREAKTHROUGH_API UBInteractionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BREAKTHROUGH_API UBInteractionInterface(UBInteractionInterface&&); \
	BREAKTHROUGH_API UBInteractionInterface(const UBInteractionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BREAKTHROUGH_API, UBInteractionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBInteractionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBInteractionInterface)


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBInteractionInterface(); \
	friend struct Z_Construct_UClass_UBInteractionInterface_Statics; \
public: \
	DECLARE_CLASS(UBInteractionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Breakthrough"), BREAKTHROUGH_API) \
	DECLARE_SERIALIZER(UBInteractionInterface)


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_GENERATED_UINTERFACE_BODY() \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBInteractionInterface() {} \
public: \
	typedef UBInteractionInterface UClassType; \
	typedef IBInteractionInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IBInteractionInterface() {} \
public: \
	typedef UBInteractionInterface UClassType; \
	typedef IBInteractionInterface ThisClass; \
	static void Execute_Drop(UObject* O); \
	static void Execute_Pickup(UObject* O, USceneComponent* AttachTo); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_8_PROLOG \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_EVENT_PARMS


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_CALLBACK_WRAPPERS \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BInteractionInterface_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_CALLBACK_WRAPPERS \
	Breakthrough_Source_Breakthrough_BInteractionInterface_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class UBInteractionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BInteractionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
