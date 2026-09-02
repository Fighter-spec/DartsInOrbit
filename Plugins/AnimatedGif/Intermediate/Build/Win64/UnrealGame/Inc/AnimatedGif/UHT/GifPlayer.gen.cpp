// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GifPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGifPlayer() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister();
ANIMATEDGIF_API UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FOnGifPlaybackEvent ***************************************************
struct Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_AnimatedGif, nullptr, "OnGifPlaybackEvent__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGifPlaybackEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGifPlaybackEvent)
{
	OnGifPlaybackEvent.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FOnGifPlaybackEvent *****************************************************

// ********** Begin Class UGifPlayer Function GetCurrentFrame **************************************
struct Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics
{
	struct GifPlayer_eventGetCurrentFrame_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventGetCurrentFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "GetCurrentFrame", Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::GifPlayer_eventGetCurrentFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::GifPlayer_eventGetCurrentFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_GetCurrentFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_GetCurrentFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execGetCurrentFrame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentFrame();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function GetCurrentFrame ****************************************

// ********** Begin Class UGifPlayer Function GetDimensions ****************************************
struct Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics
{
	struct GifPlayer_eventGetDimensions_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventGetDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "GetDimensions", Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::GifPlayer_eventGetDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::GifPlayer_eventGetDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_GetDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_GetDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execGetDimensions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetDimensions();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function GetDimensions ******************************************

// ********** Begin Class UGifPlayer Function GetDynamicTexture ************************************
struct Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics
{
	struct GifPlayer_eventGetDynamicTexture_Parms
	{
		UTexture2DDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Internal dynamic texture, typed for UImage::SetBrushFromTextureDynamic. Null when a render target is the sink. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Internal dynamic texture, typed for UImage::SetBrushFromTextureDynamic. Null when a render target is the sink." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventGetDynamicTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "GetDynamicTexture", Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::GifPlayer_eventGetDynamicTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::GifPlayer_eventGetDynamicTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_GetDynamicTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_GetDynamicTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execGetDynamicTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2DDynamic**)Z_Param__Result=P_THIS->GetDynamicTexture();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function GetDynamicTexture **************************************

// ********** Begin Class UGifPlayer Function GetNumFrames *****************************************
struct Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics
{
	struct GifPlayer_eventGetNumFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventGetNumFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "GetNumFrames", Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::GifPlayer_eventGetNumFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::GifPlayer_eventGetNumFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_GetNumFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_GetNumFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execGetNumFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumFrames();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function GetNumFrames *******************************************

// ********** Begin Class UGifPlayer Function GetRenderTarget **************************************
struct Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics
{
	struct GifPlayer_eventGetRenderTarget_Parms
	{
		UTextureRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The render target this player drives, if one is set (e.g. the asset's linked target). */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The render target this player drives, if one is set (e.g. the asset's linked target)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventGetRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "GetRenderTarget", Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::GifPlayer_eventGetRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::GifPlayer_eventGetRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_GetRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_GetRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execGetRenderTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->GetRenderTarget();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function GetRenderTarget ****************************************

// ********** Begin Class UGifPlayer Function GetTexture *******************************************
struct Z_Construct_UFunction_UGifPlayer_GetTexture_Statics
{
	struct GifPlayer_eventGetTexture_Parms
	{
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The live, self-updating texture (UTexture2DDynamic or render target). Bind to a material, or to a UImage via SetBrushResourceObject. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The live, self-updating texture (UTexture2DDynamic or render target). Bind to a material, or to a UImage via SetBrushResourceObject." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventGetTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "GetTexture", Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::GifPlayer_eventGetTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::GifPlayer_eventGetTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_GetTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_GetTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execGetTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->GetTexture();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function GetTexture *********************************************

// ********** Begin Class UGifPlayer Function IsPlaying ********************************************
struct Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics
{
	struct GifPlayer_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GifPlayer_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GifPlayer_eventIsPlaying_Parms), &Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "IsPlaying", Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::GifPlayer_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::GifPlayer_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function IsPlaying **********************************************

// ********** Begin Class UGifPlayer Function Pause ************************************************
struct Z_Construct_UFunction_UGifPlayer_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_Pause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGifPlayer_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function Pause **************************************************

// ********** Begin Class UGifPlayer Function Play *************************************************
struct Z_Construct_UFunction_UGifPlayer_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGifPlayer_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function Play ***************************************************

// ********** Begin Class UGifPlayer Function SeekToFrame ******************************************
struct Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics
{
	struct GifPlayer_eventSeekToFrame_Parms
	{
		int32 FrameIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventSeekToFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::NewProp_FrameIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "SeekToFrame", Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::GifPlayer_eventSeekToFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::GifPlayer_eventSeekToFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_SeekToFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_SeekToFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execSeekToFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SeekToFrame(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function SeekToFrame ********************************************

// ********** Begin Class UGifPlayer Function SeekToTime *******************************************
struct Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics
{
	struct GifPlayer_eventSeekToTime_Parms
	{
		float TimeSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::NewProp_TimeSeconds = { "TimeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventSeekToTime_Parms, TimeSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::NewProp_TimeSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "SeekToTime", Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::GifPlayer_eventSeekToTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::GifPlayer_eventSeekToTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_SeekToTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_SeekToTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execSeekToTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SeekToTime(Z_Param_TimeSeconds);
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function SeekToTime *********************************************

// ********** Begin Class UGifPlayer Function SetRenderTarget **************************************
struct Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics
{
	struct GifPlayer_eventSetRenderTarget_Parms
	{
		UTextureRenderTarget2D* InRenderTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Drive a render-target asset instead of an internal texture, so the GIF can be\n\x09 * sampled in a material graph. The target is reconfigured to this GIF's size and\n\x09 * BGRA8 format. Pass null to revert to an internal texture. Best set before Play().\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drive a render-target asset instead of an internal texture, so the GIF can be\nsampled in a material graph. The target is reconfigured to this GIF's size and\nBGRA8 format. Pass null to revert to an internal texture. Best set before Play()." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InRenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::NewProp_InRenderTarget = { "InRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifPlayer_eventSetRenderTarget_Parms, InRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::NewProp_InRenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "SetRenderTarget", Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::GifPlayer_eventSetRenderTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::GifPlayer_eventSetRenderTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifPlayer_SetRenderTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_SetRenderTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execSetRenderTarget)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InRenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderTarget(Z_Param_InRenderTarget);
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function SetRenderTarget ****************************************

// ********** Begin Class UGifPlayer Function Stop *************************************************
struct Z_Construct_UFunction_UGifPlayer_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop and rewind to the first frame. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop and rewind to the first frame." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifPlayer_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifPlayer, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifPlayer_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifPlayer_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGifPlayer_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifPlayer_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifPlayer::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UGifPlayer Function Stop ***************************************************

// ********** Begin Class UGifPlayer ***************************************************************
void UGifPlayer::StaticRegisterNativesUGifPlayer()
{
	UClass* Class = UGifPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentFrame", &UGifPlayer::execGetCurrentFrame },
		{ "GetDimensions", &UGifPlayer::execGetDimensions },
		{ "GetDynamicTexture", &UGifPlayer::execGetDynamicTexture },
		{ "GetNumFrames", &UGifPlayer::execGetNumFrames },
		{ "GetRenderTarget", &UGifPlayer::execGetRenderTarget },
		{ "GetTexture", &UGifPlayer::execGetTexture },
		{ "IsPlaying", &UGifPlayer::execIsPlaying },
		{ "Pause", &UGifPlayer::execPause },
		{ "Play", &UGifPlayer::execPlay },
		{ "SeekToFrame", &UGifPlayer::execSeekToFrame },
		{ "SeekToTime", &UGifPlayer::execSeekToTime },
		{ "SetRenderTarget", &UGifPlayer::execSetRenderTarget },
		{ "Stop", &UGifPlayer::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGifPlayer;
UClass* UGifPlayer::GetPrivateStaticClass()
{
	using TClass = UGifPlayer;
	if (!Z_Registration_Info_UClass_UGifPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GifPlayer"),
			Z_Registration_Info_UClass_UGifPlayer.InnerSingleton,
			StaticRegisterNativesUGifPlayer,
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
	return Z_Registration_Info_UClass_UGifPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UGifPlayer_NoRegister()
{
	return UGifPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGifPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Per-instance playhead + GPU sink. Owns one UTexture2DDynamic and advances a\n * playhead over a shared FAnimatedImageData; on each frame change it uploads the\n * frame to the GPU. Created either from a UGifAsset or from a runtime decode.\n */" },
#endif
		{ "IncludePath", "GifPlayer.h" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-instance playhead + GPU sink. Owns one UTexture2DDynamic and advances a\nplayhead over a shared FAnimatedImageData; on each frame change it uploads the\nframe to the GPU. Created either from a UGifAsset or from a runtime decode." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "GIF" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Playback rate multiplier (forward only in v1). */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Playback rate multiplier (forward only in v1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Master loop switch. When false the GIF plays exactly once and fires OnFinished,\n\x09 * regardless of LoopCount. When true, LoopCount decides how many play-throughs.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Master loop switch. When false the GIF plays exactly once and fires OnFinished,\nregardless of LoopCount. When true, LoopCount decides how many play-throughs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "GIF" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Play-throughs before stopping when bLooping is true; 0 = forever. Seeded from\n\x09 * the asset in Initialize; set it afterwards to override.\n\x09 */" },
#endif
		{ "EditCondition", "bLooping" },
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play-throughs before stopping when bLooping is true; 0 = forever. Seeded from\nthe asset in Initialize; set it afterwards to override." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePause_MetaData[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keep animating while the game is paused (HUD/menu/loading GIFs). */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep animating while the game is paused (HUD/menu/loading GIFs)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Advance by real time, ignoring world time dilation. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Advance by real time, ignoring world time dilation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnLooped_MetaData[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired each time playback wraps from the last frame back to the first. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired each time playback wraps from the last frame back to the first." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinished_MetaData[] = {
		{ "Category", "GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired once when a non-looping player reaches the final frame. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired once when a non-looping player reaches the final frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When set, this render target is the output instead of OutputTexture. */" },
#endif
		{ "ModuleRelativePath", "Public/GifPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When set, this render target is the output instead of OutputTexture." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static void NewProp_bIgnorePause_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePause;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLooped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinished;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGifPlayer_GetCurrentFrame, "GetCurrentFrame" }, // 621265161
		{ &Z_Construct_UFunction_UGifPlayer_GetDimensions, "GetDimensions" }, // 2832547121
		{ &Z_Construct_UFunction_UGifPlayer_GetDynamicTexture, "GetDynamicTexture" }, // 97724157
		{ &Z_Construct_UFunction_UGifPlayer_GetNumFrames, "GetNumFrames" }, // 3673450365
		{ &Z_Construct_UFunction_UGifPlayer_GetRenderTarget, "GetRenderTarget" }, // 2881270101
		{ &Z_Construct_UFunction_UGifPlayer_GetTexture, "GetTexture" }, // 2825790591
		{ &Z_Construct_UFunction_UGifPlayer_IsPlaying, "IsPlaying" }, // 3925299739
		{ &Z_Construct_UFunction_UGifPlayer_Pause, "Pause" }, // 3924307497
		{ &Z_Construct_UFunction_UGifPlayer_Play, "Play" }, // 3814441812
		{ &Z_Construct_UFunction_UGifPlayer_SeekToFrame, "SeekToFrame" }, // 2357442549
		{ &Z_Construct_UFunction_UGifPlayer_SeekToTime, "SeekToTime" }, // 231477164
		{ &Z_Construct_UFunction_UGifPlayer_SetRenderTarget, "SetRenderTarget" }, // 878863521
		{ &Z_Construct_UFunction_UGifPlayer_Stop, "Stop" }, // 3172416301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGifPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlayer, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UClass_UGifPlayer_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UGifPlayer*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGifPlayer), &Z_Construct_UClass_UGifPlayer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlayer, LoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) };
void Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnorePause_SetBit(void* Obj)
{
	((UGifPlayer*)Obj)->bIgnorePause = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnorePause = { "bIgnorePause", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGifPlayer), &Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnorePause_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnorePause_MetaData), NewProp_bIgnorePause_MetaData) };
void Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((UGifPlayer*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGifPlayer), &Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_OnLooped = { "OnLooped", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlayer, OnLooped), Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnLooped_MetaData), NewProp_OnLooped_MetaData) }; // 3705380790
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_OnFinished = { "OnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlayer, OnFinished), Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinished_MetaData), NewProp_OnFinished_MetaData) }; // 3705380790
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_OutputTexture = { "OutputTexture", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlayer, OutputTexture), Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputTexture_MetaData), NewProp_OutputTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGifPlayer_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlayer, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTarget_MetaData), NewProp_RenderTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGifPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnorePause,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_bIgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_OnLooped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_OnFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_OutputTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlayer_Statics::NewProp_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGifPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGifPlayer_Statics::ClassParams = {
	&UGifPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGifPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlayer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGifPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGifPlayer()
{
	if (!Z_Registration_Info_UClass_UGifPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGifPlayer.OuterSingleton, Z_Construct_UClass_UGifPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGifPlayer.OuterSingleton;
}
UGifPlayer::UGifPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGifPlayer);
UGifPlayer::~UGifPlayer() {}
// ********** End Class UGifPlayer *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGifPlayer, UGifPlayer::StaticClass, TEXT("UGifPlayer"), &Z_Registration_Info_UClass_UGifPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGifPlayer), 534385007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h__Script_AnimatedGif_3554622128(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
