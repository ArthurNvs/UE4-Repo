// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Breakthrough/BPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPlayer() {}
// Cross Module References
	BREAKTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Breakthrough();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	BREAKTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPickup_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPlayer_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	BREAKTHROUGH_API UClass* Z_Construct_UClass_ABPlayerHand_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FInventoryItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BREAKTHROUGH_API uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventoryItem, Z_Construct_UPackage__Script_Breakthrough(), TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_Hash());
	}
	return Singleton;
}
template<> BREAKTHROUGH_API UScriptStruct* StaticStruct<FInventoryItem>()
{
	return FInventoryItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInventoryItem(FInventoryItem::StaticStruct, TEXT("/Script/Breakthrough"), TEXT("InventoryItem"), false, nullptr, nullptr);
static struct FScriptStruct_Breakthrough_StaticRegisterNativesFInventoryItem
{
	FScriptStruct_Breakthrough_StaticRegisterNativesFInventoryItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InventoryItem")),new UScriptStruct::TCppStructOps<FInventoryItem>);
	}
} ScriptStruct_Breakthrough_StaticRegisterNativesFInventoryItem;
	struct Z_Construct_UScriptStruct_FInventoryItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanBeUsed_MetaData[];
#endif
		static void NewProp_bCanBeUsed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanBeUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraftCombinations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CraftCombinations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CraftCombinations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ItemValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ItemPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInventoryItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventoryItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "Comment", "//holds all possible craft combinations \n" },
		{ "ModuleRelativePath", "BPlayer.h" },
		{ "ToolTip", "holds all possible craft combinations" },
	};
#endif
	void Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_SetBit(void* Obj)
	{
		((FInventoryItem*)Obj)->bCanBeUsed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed = { "bCanBeUsed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInventoryItem), &Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations = { "CraftCombinations", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, CraftCombinations), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations_Inner = { "CraftCombinations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCraftingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemValue_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemValue = { "ItemValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, ItemValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemValue_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemAction_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemAction = { "ItemAction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, ItemAction), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemAction_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, ItemDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemDescription_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup = { "ItemPickup", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, ItemPickup), Z_Construct_UClass_ABPickup_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "InventoryItem" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInventoryItem, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_bCanBeUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_CraftCombinations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_Thumbnail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventoryItem_Statics::NewProp_ItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InventoryItem",
		sizeof(FInventoryItem),
		alignof(FInventoryItem),
		Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FInventoryItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInventoryItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Breakthrough();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InventoryItem"), sizeof(FInventoryItem), Get_Z_Construct_UScriptStruct_FInventoryItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInventoryItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInventoryItem_Hash() { return 1306053836U; }
class UScriptStruct* FCraftingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BREAKTHROUGH_API uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraftingInfo, Z_Construct_UPackage__Script_Breakthrough(), TEXT("CraftingInfo"), sizeof(FCraftingInfo), Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash());
	}
	return Singleton;
}
template<> BREAKTHROUGH_API UScriptStruct* StaticStruct<FCraftingInfo>()
{
	return FCraftingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCraftingInfo(FCraftingInfo::StaticStruct, TEXT("/Script/Breakthrough"), TEXT("CraftingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Breakthrough_StaticRegisterNativesFCraftingInfo
{
	FScriptStruct_Breakthrough_StaticRegisterNativesFCraftingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CraftingInfo")),new UScriptStruct::TCppStructOps<FCraftingInfo>);
	}
} ScriptStruct_Breakthrough_StaticRegisterNativesFCraftingInfo;
	struct Z_Construct_UScriptStruct_FCraftingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyItemB_MetaData[];
#endif
		static void NewProp_bDestroyItemB_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyItemB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyItemA_MetaData[];
#endif
		static void NewProp_bDestroyItemA_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyItemA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ProductID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ComponentID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraftingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_SetBit(void* Obj)
	{
		((FCraftingInfo*)Obj)->bDestroyItemB = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB = { "bDestroyItemB", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCraftingInfo), &Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "Comment", "//the component created from craft\n" },
		{ "ModuleRelativePath", "BPlayer.h" },
		{ "ToolTip", "the component created from craft" },
	};
#endif
	void Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_SetBit(void* Obj)
	{
		((FCraftingInfo*)Obj)->bDestroyItemA = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA = { "bDestroyItemA", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCraftingInfo), &Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "Comment", "//component used to craft\n" },
		{ "ModuleRelativePath", "BPlayer.h" },
		{ "ToolTip", "component used to craft" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID = { "ProductID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, ProductID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, ComponentID), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_bDestroyItemA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ProductID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ComponentID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CraftingInfo",
		sizeof(FCraftingInfo),
		alignof(FCraftingInfo),
		Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Breakthrough();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CraftingInfo"), sizeof(FCraftingInfo), Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash() { return 2509583655U; }
	void ABPlayer::StaticRegisterNativesABPlayer()
	{
	}
	UClass* Z_Construct_UClass_ABPlayer_NoRegister()
	{
		return ABPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ABPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportProjectionExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeleportProjectionExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportFadeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportFadeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportSimulationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportSimulationTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportProjectileRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportProjectileRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportProjectileSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeleportProjectileSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportArchMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportArchMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportArchMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportArchMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportPathMeshPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeleportPathMeshPool;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportPathMeshPool_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TeleportPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestinationMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestinationMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHandClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerHandClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Breakthrough,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BPlayer.h" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectionExtent_MetaData[] = {
		{ "Category", "BPlayer" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectionExtent = { "TeleportProjectionExtent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportProjectionExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectionExtent_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectionExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportFadeTime_MetaData[] = {
		{ "Category", "BPlayer" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportFadeTime = { "TeleportFadeTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportFadeTime), METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportFadeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportFadeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportSimulationTime_MetaData[] = {
		{ "Category", "BPlayer" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportSimulationTime = { "TeleportSimulationTime", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportSimulationTime), METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportSimulationTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportSimulationTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileRadius_MetaData[] = {
		{ "Category", "BPlayer" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileRadius = { "TeleportProjectileRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportProjectileRadius), METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileSpeed_MetaData[] = {
		{ "Category", "BPlayer" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileSpeed = { "TeleportProjectileSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportProjectileSpeed), METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMaterial_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMaterial = { "TeleportArchMaterial", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportArchMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMesh_MetaData[] = {
		{ "Category", "Teleport" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMesh = { "TeleportArchMesh", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportArchMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool_MetaData[] = {
		{ "Category", "Teleport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool = { "TeleportPathMeshPool", nullptr, (EPropertyFlags)0x0040008000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportPathMeshPool), METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool_Inner = { "TeleportPathMeshPool", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPath_MetaData[] = {
		{ "Category", "Teleport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPath = { "TeleportPath", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, TeleportPath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_DestinationMarker_MetaData[] = {
		{ "Category", "Teleport" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_DestinationMarker = { "DestinationMarker", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, DestinationMarker), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_DestinationMarker_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_DestinationMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerHandClass_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerHandClass = { "PlayerHandClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, PlayerHandClass), Z_Construct_UClass_ABPlayerHand_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerHandClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerHandClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_RController_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_RController = { "RController", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, RController), Z_Construct_UClass_ABPlayerHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_RController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_RController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_LController_MetaData[] = {
		{ "Category", "Controller" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_LController = { "LController", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, LController), Z_Construct_UClass_ABPlayerHand_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_LController_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_LController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerRoot_MetaData[] = {
		{ "Category", "Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerRoot = { "PlayerRoot", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, PlayerRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerRoot_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABPlayer_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABPlayer_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABPlayer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::NewProp_CameraComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::NewProp_CameraComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectionExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportFadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportSimulationTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportProjectileSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportArchMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPathMeshPool_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_TeleportPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_DestinationMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerHandClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_RController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_LController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_PlayerRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABPlayer_Statics::NewProp_CameraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABPlayer_Statics::ClassParams = {
		&ABPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABPlayer_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABPlayer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABPlayer, 597351166);
	template<> BREAKTHROUGH_API UClass* StaticClass<ABPlayer>()
	{
		return ABPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABPlayer(Z_Construct_UClass_ABPlayer, &ABPlayer::StaticClass, TEXT("/Script/Breakthrough"), TEXT("ABPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
