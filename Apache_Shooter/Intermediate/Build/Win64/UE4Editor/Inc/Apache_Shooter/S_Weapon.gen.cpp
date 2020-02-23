// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Apache_Shooter/Public/S_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_Weapon() {}
// Cross Module References
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Weapon_NoRegister();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Weapon();
	APACHE_SHOOTER_API UClass* Z_Construct_UClass_AS_Pickup();
	UPackage* Z_Construct_UPackage__Script_Apache_Shooter();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Weapon_LauncherShoot();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Weapon_Reload();
	APACHE_SHOOTER_API UFunction* Z_Construct_UFunction_AS_Weapon_Shoot();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AS_Weapon::StaticRegisterNativesAS_Weapon()
	{
		UClass* Class = AS_Weapon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LauncherShoot", &AS_Weapon::execLauncherShoot },
			{ "Reload", &AS_Weapon::execReload },
			{ "Shoot", &AS_Weapon::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AS_Weapon_LauncherShoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Weapon_LauncherShoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Weapon_LauncherShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Weapon, nullptr, "LauncherShoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Weapon_LauncherShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Weapon_LauncherShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Weapon_LauncherShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Weapon_LauncherShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Weapon_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Weapon_Reload_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Weapon_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Weapon, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Weapon_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Weapon_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Weapon_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Weapon_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AS_Weapon_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AS_Weapon_Shoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AS_Weapon_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AS_Weapon, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AS_Weapon_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AS_Weapon_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AS_Weapon_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AS_Weapon_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AS_Weapon_NoRegister()
	{
		return AS_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_AS_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LaserMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReloadSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Magazine_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Magazine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaserDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaserDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShotDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShotDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AS_Pickup,
		(UObject* (*)())Z_Construct_UPackage__Script_Apache_Shooter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AS_Weapon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AS_Weapon_LauncherShoot, "LauncherShoot" }, // 996173643
		{ &Z_Construct_UFunction_AS_Weapon_Reload, "Reload" }, // 1112206862
		{ &Z_Construct_UFunction_AS_Weapon_Shoot, "Shoot" }, // 2914767149
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S_Weapon.h" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserMesh = { "LaserMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, LaserMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_ArrowComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_ArrowComp = { "ArrowComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, ArrowComp), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_ArrowComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_ArrowComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_MeshComp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "Comment", "//PROPERTYES\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
		{ "ToolTip", "PROPERTYES" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_ReloadSpeed_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_ReloadSpeed = { "ReloadSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, ReloadSpeed), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_ReloadSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_ReloadSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_Magazine_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_Magazine = { "Magazine", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, Magazine), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Magazine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Magazine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, Ammo), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserDistance_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserDistance = { "LaserDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, LaserDistance), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_ShotDistance_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_ShotDistance = { "ShotDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, ShotDistance), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_ShotDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_ShotDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, Damage), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS_Weapon_Statics::NewProp_Index_MetaData[] = {
		{ "Category", "Propertyes" },
		{ "Comment", "//VARIABLES\n" },
		{ "ModuleRelativePath", "Public/S_Weapon.h" },
		{ "ToolTip", "VARIABLES" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AS_Weapon_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AS_Weapon, Index), METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Index_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::NewProp_Index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AS_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_ArrowComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_ReloadSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_Magazine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_Ammo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_LaserDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_ShotDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_Weapon_Statics::NewProp_Index,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS_Weapon_Statics::ClassParams = {
		&AS_Weapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AS_Weapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AS_Weapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AS_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS_Weapon, 1187007354);
	template<> APACHE_SHOOTER_API UClass* StaticClass<AS_Weapon>()
	{
		return AS_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS_Weapon(Z_Construct_UClass_AS_Weapon, &AS_Weapon::StaticClass, TEXT("/Script/Apache_Shooter"), TEXT("AS_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
