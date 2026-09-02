// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedGifImage.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimatedGifImage() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifImage();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifImage_NoRegister();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifAsset_NoRegister();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
UMG_API UClass* Z_Construct_UClass_UWidget();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimatedGifImage Function GetPlayer *************************************
struct Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics
{
	struct AnimatedGifImage_eventGetPlayer_Parms
	{
		UGifPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The underlying player (texture, playback state, events). */" },
#endif
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The underlying player (texture, playback state, events)." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifImage_eventGetPlayer_Parms, ReturnValue), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifImage, nullptr, "GetPlayer", Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::AnimatedGifImage_eventGetPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::AnimatedGifImage_eventGetPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedGifImage_GetPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifImage_GetPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifImage::execGetPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGifPlayer**)Z_Param__Result=P_THIS->GetPlayer();
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifImage Function GetPlayer ***************************************

// ********** Begin Class UAnimatedGifImage Function Pause *****************************************
struct Z_Construct_UFunction_UAnimatedGifImage_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifImage_Pause_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifImage, nullptr, "Pause", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifImage_Pause_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimatedGifImage_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifImage_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifImage::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifImage Function Pause *******************************************

// ********** Begin Class UAnimatedGifImage Function Play ******************************************
struct Z_Construct_UFunction_UAnimatedGifImage_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifImage_Play_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifImage, nullptr, "Play", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifImage_Play_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimatedGifImage_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifImage_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifImage::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifImage Function Play ********************************************

// ********** Begin Class UAnimatedGifImage Function SetColorAndOpacity ****************************
struct Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics
{
	struct AnimatedGifImage_eventSetColorAndOpacity_Parms
	{
		FLinearColor InColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::NewProp_InColor = { "InColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifImage_eventSetColorAndOpacity_Parms, InColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::NewProp_InColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifImage, nullptr, "SetColorAndOpacity", Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::AnimatedGifImage_eventSetColorAndOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::AnimatedGifImage_eventSetColorAndOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifImage::execSetColorAndOpacity)
{
	P_GET_STRUCT(FLinearColor,Z_Param_InColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetColorAndOpacity(Z_Param_InColor);
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifImage Function SetColorAndOpacity ******************************

// ********** Begin Class UAnimatedGifImage Function SetGifAsset ***********************************
struct Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics
{
	struct AnimatedGifImage_eventSetGifAsset_Parms
	{
		UGifAsset* InAsset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::NewProp_InAsset = { "InAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimatedGifImage_eventSetGifAsset_Parms, InAsset), Z_Construct_UClass_UGifAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::NewProp_InAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifImage, nullptr, "SetGifAsset", Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::AnimatedGifImage_eventSetGifAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::AnimatedGifImage_eventSetGifAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifImage::execSetGifAsset)
{
	P_GET_OBJECT(UGifAsset,Z_Param_InAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetGifAsset(Z_Param_InAsset);
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifImage Function SetGifAsset *************************************

// ********** Begin Class UAnimatedGifImage Function Stop ******************************************
struct Z_Construct_UFunction_UAnimatedGifImage_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimatedGifImage_Stop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAnimatedGifImage, nullptr, "Stop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimatedGifImage_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimatedGifImage_Stop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAnimatedGifImage_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimatedGifImage_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimatedGifImage::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// ********** End Class UAnimatedGifImage Function Stop ********************************************

// ********** Begin Class UAnimatedGifImage ********************************************************
void UAnimatedGifImage::StaticRegisterNativesUAnimatedGifImage()
{
	UClass* Class = UAnimatedGifImage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayer", &UAnimatedGifImage::execGetPlayer },
		{ "Pause", &UAnimatedGifImage::execPause },
		{ "Play", &UAnimatedGifImage::execPlay },
		{ "SetColorAndOpacity", &UAnimatedGifImage::execSetColorAndOpacity },
		{ "SetGifAsset", &UAnimatedGifImage::execSetGifAsset },
		{ "Stop", &UAnimatedGifImage::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatedGifImage;
UClass* UAnimatedGifImage::GetPrivateStaticClass()
{
	using TClass = UAnimatedGifImage;
	if (!Z_Registration_Info_UClass_UAnimatedGifImage.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimatedGifImage"),
			Z_Registration_Info_UClass_UAnimatedGifImage.InnerSingleton,
			StaticRegisterNativesUAnimatedGifImage,
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
	return Z_Registration_Info_UClass_UAnimatedGifImage.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimatedGifImage_NoRegister()
{
	return UAnimatedGifImage::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimatedGifImage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMG widget that plays a UGifAsset. Owns a UGifPlayer (the clock + GPU texture)\n * and repaints the Slate widget only when the player reports a new frame.\n */" },
#endif
		{ "IncludePath", "AnimatedGifImage.h" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMG widget that plays a UGifAsset. Owns a UGifPlayer (the clock + GPU texture)\nand repaints the Slate widget only when the player reports a new frame." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GifAsset_MetaData[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorAndOpacity_MetaData[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Animated GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Start playing as soon as the widget is constructed (runtime only). */" },
#endif
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start playing as soon as the widget is constructed (runtime only)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Category", "Animated GIF" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCountOverride_MetaData[] = {
		{ "Category", "Animated GIF" },
		{ "ClampMin", "-1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** -1 = use the asset's loop count; >= 0 overrides it (0 = loop forever). */" },
#endif
		{ "EditCondition", "bLooping" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-1 = use the asset's loop count; >= 0 overrides it (0 = loop forever)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Animated GIF" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewInDesigner_MetaData[] = {
		{ "Category", "Animated GIF" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Play the GIF inside the UMG designer preview (off by default to keep the editor light). */" },
#endif
		{ "DisplayName", "Preview In Designer" },
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Play the GIF inside the UMG designer preview (off by default to keep the editor light)." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuiltAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimatedGifImage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GifAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorAndOpacity;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCountOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_EDITORONLY_DATA
	static void NewProp_bPreviewInDesigner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewInDesigner;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuiltAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimatedGifImage_GetPlayer, "GetPlayer" }, // 3361301752
		{ &Z_Construct_UFunction_UAnimatedGifImage_Pause, "Pause" }, // 1494498577
		{ &Z_Construct_UFunction_UAnimatedGifImage_Play, "Play" }, // 915465578
		{ &Z_Construct_UFunction_UAnimatedGifImage_SetColorAndOpacity, "SetColorAndOpacity" }, // 671615681
		{ &Z_Construct_UFunction_UAnimatedGifImage_SetGifAsset, "SetGifAsset" }, // 3439369956
		{ &Z_Construct_UFunction_UAnimatedGifImage_Stop, "Stop" }, // 380105817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedGifImage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_GifAsset = { "GifAsset", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifImage, GifAsset), Z_Construct_UClass_UGifAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GifAsset_MetaData), NewProp_GifAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_ColorAndOpacity = { "ColorAndOpacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifImage, ColorAndOpacity), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorAndOpacity_MetaData), NewProp_ColorAndOpacity_MetaData) };
void Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((UAnimatedGifImage*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimatedGifImage), &Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
void Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UAnimatedGifImage*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimatedGifImage), &Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_LoopCountOverride = { "LoopCountOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifImage, LoopCountOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCountOverride_MetaData), NewProp_LoopCountOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifImage, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bPreviewInDesigner_SetBit(void* Obj)
{
	((UAnimatedGifImage*)Obj)->bPreviewInDesigner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bPreviewInDesigner = { "bPreviewInDesigner", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimatedGifImage), &Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bPreviewInDesigner_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreviewInDesigner_MetaData), NewProp_bPreviewInDesigner_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifImage, Player), Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_BuiltAsset = { "BuiltAsset", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifImage, BuiltAsset), Z_Construct_UClass_UGifAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuiltAsset_MetaData), NewProp_BuiltAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedGifImage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_GifAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_ColorAndOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_LoopCountOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_PlayRate,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_bPreviewInDesigner,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifImage_Statics::NewProp_BuiltAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifImage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimatedGifImage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifImage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedGifImage_Statics::ClassParams = {
	&UAnimatedGifImage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAnimatedGifImage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifImage_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifImage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedGifImage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedGifImage()
{
	if (!Z_Registration_Info_UClass_UAnimatedGifImage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedGifImage.OuterSingleton, Z_Construct_UClass_UAnimatedGifImage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedGifImage.OuterSingleton;
}
UAnimatedGifImage::UAnimatedGifImage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedGifImage);
UAnimatedGifImage::~UAnimatedGifImage() {}
// ********** End Class UAnimatedGifImage **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedGifImage, UAnimatedGifImage::StaticClass, TEXT("UAnimatedGifImage"), &Z_Registration_Info_UClass_UAnimatedGifImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedGifImage), 3663885172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h__Script_AnimatedGif_4192271362(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
