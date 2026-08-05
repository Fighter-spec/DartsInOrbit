// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedGifFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimatedGifFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifFunctionLibrary();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifFunctionLibrary_NoRegister();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifAsset_NoRegister();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimatedGifFunctionLibrary Function CreateGifPlayer *********************
struct Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics
{
	struct AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms
	{
		UObject* WorldContextObject;
		UGifAsset* GifAsset;
		bool bAutoPlay;
		bool bLooping;
		UGifPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "Comment", "/** Create a player from an imported asset. */" },
		{ "CPP_Default_bAutoPlay", "true" },
		{ "CPP_Default_bLooping", "true" },
		{ "ModuleRelativePath", "Public/AnimatedGifFunctionLibrary.h" },
		{ "ToolTip", "Create a player from an imported asset." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GifAsset;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_GifAsset = { "GifAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms, GifAsset), Z_Construct_UClass_UGifAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms), &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms), &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms, ReturnValue), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_GifAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifFunctionLibrary, nullptr, "CreateGifPlayer", Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::AnimatedGifFunctionLibrary_eventCreateGifPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifFunctionLibrary::execCreateGifPlayer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UGifAsset,Z_Param_GifAsset);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_GET_UBOOL(Z_Param_bLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGifPlayer**)Z_Param__Result=UAnimatedGifFunctionLibrary::CreateGifPlayer(Z_Param_WorldContextObject,Z_Param_GifAsset,Z_Param_bAutoPlay,Z_Param_bLooping);
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifFunctionLibrary Function CreateGifPlayer ***********************

// ********** Begin Class UAnimatedGifFunctionLibrary Function CreateGifPlayerFromBytes ************
struct Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics
{
	struct AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> GifBytes;
		bool bAutoPlay;
		bool bLooping;
		UGifPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "Comment", "/**\n\x09 * Decode raw GIF bytes and create a player. Synchronous \xe2\x80\x94 decode happens on the\n\x09 * calling thread; prefer LoadAnimatedGifFromBytes (async node) for large GIFs.\n\x09 */" },
		{ "CPP_Default_bAutoPlay", "true" },
		{ "CPP_Default_bLooping", "true" },
		{ "ModuleRelativePath", "Public/AnimatedGifFunctionLibrary.h" },
		{ "ToolTip", "Decode raw GIF bytes and create a player. Synchronous \xe2\x80\x94 decode happens on the\ncalling thread; prefer LoadAnimatedGifFromBytes (async node) for large GIFs." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GifBytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GifBytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GifBytes;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_GifBytes_Inner = { "GifBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_GifBytes = { "GifBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms, GifBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GifBytes_MetaData), NewProp_GifBytes_MetaData) };
void Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms), &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms), &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms, ReturnValue), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_GifBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_GifBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifFunctionLibrary, nullptr, "CreateGifPlayerFromBytes", Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::AnimatedGifFunctionLibrary_eventCreateGifPlayerFromBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifFunctionLibrary::execCreateGifPlayerFromBytes)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_GifBytes);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_GET_UBOOL(Z_Param_bLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGifPlayer**)Z_Param__Result=UAnimatedGifFunctionLibrary::CreateGifPlayerFromBytes(Z_Param_WorldContextObject,Z_Param_Out_GifBytes,Z_Param_bAutoPlay,Z_Param_bLooping);
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifFunctionLibrary Function CreateGifPlayerFromBytes **************

// ********** Begin Class UAnimatedGifFunctionLibrary Function LoadGifPlayerFromFile ***************
struct Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics
{
	struct AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms
	{
		UObject* WorldContextObject;
		FString FilePath;
		bool bAutoPlay;
		bool bLooping;
		UGifPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "Comment", "/** Read a .gif from disk and create a player. Synchronous; prefer the async node. */" },
		{ "CPP_Default_bAutoPlay", "true" },
		{ "CPP_Default_bLooping", "true" },
		{ "ModuleRelativePath", "Public/AnimatedGifFunctionLibrary.h" },
		{ "ToolTip", "Read a .gif from disk and create a player. Synchronous; prefer the async node." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms), &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms), &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms, ReturnValue), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifFunctionLibrary, nullptr, "LoadGifPlayerFromFile", Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::AnimatedGifFunctionLibrary_eventLoadGifPlayerFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifFunctionLibrary::execLoadGifPlayerFromFile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_GET_UBOOL(Z_Param_bLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGifPlayer**)Z_Param__Result=UAnimatedGifFunctionLibrary::LoadGifPlayerFromFile(Z_Param_WorldContextObject,Z_Param_FilePath,Z_Param_bAutoPlay,Z_Param_bLooping);
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifFunctionLibrary Function LoadGifPlayerFromFile *****************

// ********** Begin Class UAnimatedGifFunctionLibrary **********************************************
void UAnimatedGifFunctionLibrary::StaticRegisterNativesUAnimatedGifFunctionLibrary()
{
	UClass* Class = UAnimatedGifFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateGifPlayer", &UAnimatedGifFunctionLibrary::execCreateGifPlayer },
		{ "CreateGifPlayerFromBytes", &UAnimatedGifFunctionLibrary::execCreateGifPlayerFromBytes },
		{ "LoadGifPlayerFromFile", &UAnimatedGifFunctionLibrary::execLoadGifPlayerFromFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary;
UClass* UAnimatedGifFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = UAnimatedGifFunctionLibrary;
	if (!Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimatedGifFunctionLibrary"),
			Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUAnimatedGifFunctionLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimatedGifFunctionLibrary_NoRegister()
{
	return UAnimatedGifFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Helpers to spin up GIF players from assets, bytes or files. */" },
		{ "IncludePath", "AnimatedGifFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/AnimatedGifFunctionLibrary.h" },
		{ "ToolTip", "Helpers to spin up GIF players from assets, bytes or files." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayer, "CreateGifPlayer" }, // 997597617
		{ &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_CreateGifPlayerFromBytes, "CreateGifPlayerFromBytes" }, // 2503864739
		{ &Z_Construct_UFunction_UAnimatedGifFunctionLibrary_LoadGifPlayerFromFile, "LoadGifPlayerFromFile" }, // 519955741
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedGifFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics::ClassParams = {
	&UAnimatedGifFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedGifFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary.OuterSingleton, Z_Construct_UClass_UAnimatedGifFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary.OuterSingleton;
}
UAnimatedGifFunctionLibrary::UAnimatedGifFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedGifFunctionLibrary);
UAnimatedGifFunctionLibrary::~UAnimatedGifFunctionLibrary() {}
// ********** End Class UAnimatedGifFunctionLibrary ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifFunctionLibrary_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedGifFunctionLibrary, UAnimatedGifFunctionLibrary::StaticClass, TEXT("UAnimatedGifFunctionLibrary"), &Z_Registration_Info_UClass_UAnimatedGifFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedGifFunctionLibrary), 2950316533U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifFunctionLibrary_h__Script_AnimatedGif_3387809492(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifFunctionLibrary_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifFunctionLibrary_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
