// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BREAKTHROUGH_BObject_generated_h
#error "BObject.generated.h already included, missing '#pragma once' in BObject.h"
#endif
#define BREAKTHROUGH_BObject_generated_h

#define Breakthrough_Source_Breakthrough_BObject_h_13_RPC_WRAPPERS
#define Breakthrough_Source_Breakthrough_BObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Breakthrough_Source_Breakthrough_BObject_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABObject(); \
	friend struct Z_Construct_UClass_ABObject_Statics; \
public: \
	DECLARE_CLASS(ABObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABObject) \
	virtual UObject* _getUObject() const override { return const_cast<ABObject*>(this); }


#define Breakthrough_Source_Breakthrough_BObject_h_13_INCLASS \
private: \
	static void StaticRegisterNativesABObject(); \
	friend struct Z_Construct_UClass_ABObject_Statics; \
public: \
	DECLARE_CLASS(ABObject, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Breakthrough"), NO_API) \
	DECLARE_SERIALIZER(ABObject) \
	virtual UObject* _getUObject() const override { return const_cast<ABObject*>(this); }


#define Breakthrough_Source_Breakthrough_BObject_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABObject(ABObject&&); \
	NO_API ABObject(const ABObject&); \
public:


#define Breakthrough_Source_Breakthrough_BObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABObject(ABObject&&); \
	NO_API ABObject(const ABObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABObject)


#define Breakthrough_Source_Breakthrough_BObject_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectMesh() { return STRUCT_OFFSET(ABObject, ObjectMesh); }


#define Breakthrough_Source_Breakthrough_BObject_h_10_PROLOG
#define Breakthrough_Source_Breakthrough_BObject_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BObject_h_13_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BObject_h_13_RPC_WRAPPERS \
	Breakthrough_Source_Breakthrough_BObject_h_13_INCLASS \
	Breakthrough_Source_Breakthrough_BObject_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Breakthrough_Source_Breakthrough_BObject_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Breakthrough_Source_Breakthrough_BObject_h_13_PRIVATE_PROPERTY_OFFSET \
	Breakthrough_Source_Breakthrough_BObject_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BObject_h_13_INCLASS_NO_PURE_DECLS \
	Breakthrough_Source_Breakthrough_BObject_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BREAKTHROUGH_API UClass* StaticClass<class ABObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Breakthrough_Source_Breakthrough_BObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
