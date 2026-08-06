// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AsyncAction_LoadAnimatedGif.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAsyncAction_LoadAnimatedGif() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAsyncAction_LoadAnimatedGif();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister();
ANIMATEDGIF_API UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature();
ANIMATEDGIF_API UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnAnimatedGifLoaded **************************************************
struct Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics
{
	struct _Script_AnimatedGif_eventOnAnimatedGifLoaded_Parms
	{
		UGifPlayer* Player;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AnimatedGif_eventOnAnimatedGifLoaded_Parms, Player), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::NewProp_Player,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AnimatedGif, nullptr, "OnAnimatedGifLoaded__DelegateSignature", Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::_Script_AnimatedGif_eventOnAnimatedGifLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::_Script_AnimatedGif_eventOnAnimatedGifLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimatedGifLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAnimatedGifLoaded, UGifPlayer* Player)
{
	struct _Script_AnimatedGif_eventOnAnimatedGifLoaded_Parms
	{
		UGifPlayer* Player;
	};
	_Script_AnimatedGif_eventOnAnimatedGifLoaded_Parms Parms;
	Parms.Player=Player;
	OnAnimatedGifLoaded.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimatedGifLoaded ****************************************************

// ********** Begin Delegate FOnAnimatedGifLoadFailed **********************************************
struct Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics
{
	struct _Script_AnimatedGif_eventOnAnimatedGifLoadFailed_Parms
	{
		FString Error;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Error_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Error;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AnimatedGif_eventOnAnimatedGifLoadFailed_Parms, Error), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Error_MetaData), NewProp_Error_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::NewProp_Error,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AnimatedGif, nullptr, "OnAnimatedGifLoadFailed__DelegateSignature", Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::_Script_AnimatedGif_eventOnAnimatedGifLoadFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::_Script_AnimatedGif_eventOnAnimatedGifLoadFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnAnimatedGifLoadFailed_DelegateWrapper(const FMulticastScriptDelegate& OnAnimatedGifLoadFailed, const FString& Error)
{
	struct _Script_AnimatedGif_eventOnAnimatedGifLoadFailed_Parms
	{
		FString Error;
	};
	_Script_AnimatedGif_eventOnAnimatedGifLoadFailed_Parms Parms;
	Parms.Error=Error;
	OnAnimatedGifLoadFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FOnAnimatedGifLoadFailed ************************************************

// ********** Begin Class UAsyncAction_LoadAnimatedGif Function LoadAnimatedGifFromBytes ***********
struct Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics
{
	struct AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms
	{
		UObject* WorldContextObject;
		TArray<uint8> GifBytes;
		bool bAutoPlay;
		bool bLooping;
		UAsyncAction_LoadAnimatedGif* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animated GIF" },
		{ "CPP_Default_bAutoPlay", "true" },
		{ "CPP_Default_bLooping", "true" },
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_GifBytes_Inner = { "GifBytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_GifBytes = { "GifBytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms, GifBytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GifBytes_MetaData), NewProp_GifBytes_MetaData) };
void Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms), &Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms), &Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_GifBytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_GifBytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_LoadAnimatedGif, nullptr, "LoadAnimatedGifFromBytes", Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromBytes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_LoadAnimatedGif::execLoadAnimatedGifFromBytes)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_GifBytes);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_GET_UBOOL(Z_Param_bLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_LoadAnimatedGif**)Z_Param__Result=UAsyncAction_LoadAnimatedGif::LoadAnimatedGifFromBytes(Z_Param_WorldContextObject,Z_Param_Out_GifBytes,Z_Param_bAutoPlay,Z_Param_bLooping);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_LoadAnimatedGif Function LoadAnimatedGifFromBytes *************

// ********** Begin Class UAsyncAction_LoadAnimatedGif Function LoadAnimatedGifFromFile ************
struct Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics
{
	struct AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms
	{
		UObject* WorldContextObject;
		FString FilePath;
		bool bAutoPlay;
		bool bLooping;
		UAsyncAction_LoadAnimatedGif* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Animated GIF" },
		{ "CPP_Default_bAutoPlay", "true" },
		{ "CPP_Default_bLooping", "true" },
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
void Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms), &Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms), &Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms, ReturnValue), Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAsyncAction_LoadAnimatedGif, nullptr, "LoadAnimatedGifFromFile", Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::AsyncAction_LoadAnimatedGif_eventLoadAnimatedGifFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAsyncAction_LoadAnimatedGif::execLoadAnimatedGifFromFile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_GET_UBOOL(Z_Param_bAutoPlay);
	P_GET_UBOOL(Z_Param_bLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncAction_LoadAnimatedGif**)Z_Param__Result=UAsyncAction_LoadAnimatedGif::LoadAnimatedGifFromFile(Z_Param_WorldContextObject,Z_Param_FilePath,Z_Param_bAutoPlay,Z_Param_bLooping);
	P_NATIVE_END;
}
// ********** End Class UAsyncAction_LoadAnimatedGif Function LoadAnimatedGifFromFile **************

// ********** Begin Class UAsyncAction_LoadAnimatedGif *********************************************
void UAsyncAction_LoadAnimatedGif::StaticRegisterNativesUAsyncAction_LoadAnimatedGif()
{
	UClass* Class = UAsyncAction_LoadAnimatedGif::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadAnimatedGifFromBytes", &UAsyncAction_LoadAnimatedGif::execLoadAnimatedGifFromBytes },
		{ "LoadAnimatedGifFromFile", &UAsyncAction_LoadAnimatedGif::execLoadAnimatedGifFromFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif;
UClass* UAsyncAction_LoadAnimatedGif::GetPrivateStaticClass()
{
	using TClass = UAsyncAction_LoadAnimatedGif;
	if (!Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AsyncAction_LoadAnimatedGif"),
			Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif.InnerSingleton,
			StaticRegisterNativesUAsyncAction_LoadAnimatedGif,
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
	return Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif.InnerSingleton;
}
UClass* Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister()
{
	return UAsyncAction_LoadAnimatedGif::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Async latent node: reads/decodes a GIF on a worker thread, then creates the\n * player on the game thread. Use this (not the synchronous library calls) for\n * anything large or loaded at runtime, so the game thread never blocks on decode.\n */" },
		{ "IncludePath", "AsyncAction_LoadAnimatedGif.h" },
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
		{ "ToolTip", "Async latent node: reads/decodes a GIF on a worker thread, then creates the\nplayer on the game thread. Use this (not the synchronous library calls) for\nanything large or loaded at runtime, so the game thread never blocks on decode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingPlayer_MetaData[] = {
		{ "Comment", "/** Roots the created player across the OnLoaded broadcast so GC can't reclaim it before the BP stores it. */" },
		{ "ModuleRelativePath", "Public/AsyncAction_LoadAnimatedGif.h" },
		{ "ToolTip", "Roots the created player across the OnLoaded broadcast so GC can't reclaim it before the BP stores it." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoaded;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailed;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromBytes, "LoadAnimatedGifFromBytes" }, // 448894273
		{ &Z_Construct_UFunction_UAsyncAction_LoadAnimatedGif_LoadAnimatedGifFromFile, "LoadAnimatedGifFromFile" }, // 2988319417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncAction_LoadAnimatedGif>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_OnLoaded = { "OnLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_LoadAnimatedGif, OnLoaded), Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLoaded_MetaData), NewProp_OnLoaded_MetaData) }; // 585715262
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_OnFailed = { "OnFailed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_LoadAnimatedGif, OnFailed), Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailed_MetaData), NewProp_OnFailed_MetaData) }; // 662792158
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_LoadAnimatedGif, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_PendingPlayer = { "PendingPlayer", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAsyncAction_LoadAnimatedGif, PendingPlayer), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingPlayer_MetaData), NewProp_PendingPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_OnLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_OnFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::NewProp_PendingPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::ClassParams = {
	&UAsyncAction_LoadAnimatedGif::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::Class_MetaDataParams), Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAsyncAction_LoadAnimatedGif()
{
	if (!Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif.OuterSingleton, Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif.OuterSingleton;
}
UAsyncAction_LoadAnimatedGif::UAsyncAction_LoadAnimatedGif(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncAction_LoadAnimatedGif);
UAsyncAction_LoadAnimatedGif::~UAsyncAction_LoadAnimatedGif() {}
// ********** End Class UAsyncAction_LoadAnimatedGif ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncAction_LoadAnimatedGif, UAsyncAction_LoadAnimatedGif::StaticClass, TEXT("UAsyncAction_LoadAnimatedGif"), &Z_Registration_Info_UClass_UAsyncAction_LoadAnimatedGif, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncAction_LoadAnimatedGif), 4173005632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h__Script_AnimatedGif_1428316011(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
