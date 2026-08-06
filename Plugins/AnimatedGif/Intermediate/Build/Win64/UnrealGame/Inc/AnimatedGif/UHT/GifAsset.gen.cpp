// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GifAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGifAsset() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifAsset();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifAsset_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGifAsset Function GetDimensions *****************************************
struct Z_Construct_UFunction_UGifAsset_GetDimensions_Statics
{
	struct GifAsset_eventGetDimensions_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifAsset_eventGetDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifAsset, nullptr, "GetDimensions", Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::GifAsset_eventGetDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::GifAsset_eventGetDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifAsset_GetDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifAsset_GetDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifAsset::execGetDimensions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetDimensions();
	P_NATIVE_END;
}
// ********** End Class UGifAsset Function GetDimensions *******************************************

// ********** Begin Class UGifAsset Function GetDurationSeconds ************************************
struct Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics
{
	struct GifAsset_eventGetDurationSeconds_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GifAsset_eventGetDurationSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGifAsset, nullptr, "GetDurationSeconds", Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::GifAsset_eventGetDurationSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::GifAsset_eventGetDurationSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGifAsset_GetDurationSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGifAsset_GetDurationSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGifAsset::execGetDurationSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDurationSeconds();
	P_NATIVE_END;
}
// ********** End Class UGifAsset Function GetDurationSeconds **************************************

// ********** Begin Class UGifAsset ****************************************************************
void UGifAsset::StaticRegisterNativesUGifAsset()
{
	UClass* Class = UGifAsset::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDimensions", &UGifAsset::execGetDimensions },
		{ "GetDurationSeconds", &UGifAsset::execGetDurationSeconds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGifAsset;
UClass* UGifAsset::GetPrivateStaticClass()
{
	using TClass = UGifAsset;
	if (!Z_Registration_Info_UClass_UGifAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GifAsset"),
			Z_Registration_Info_UClass_UGifAsset.InnerSingleton,
			StaticRegisterNativesUGifAsset,
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
	return Z_Registration_Info_UClass_UGifAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UGifAsset_NoRegister()
{
	return UGifAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGifAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Imported, cooked GIF. Stores lightweight metadata as reflected properties (so\n * the asset registry sees it without loading pixels) and the decoded BGRA frames\n * in manually-serialized bulk data. Immutable at runtime; one asset can back many\n * independent UGifPlayer instances.\n */" },
		{ "IncludePath", "GifAsset.h" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
		{ "ToolTip", "Imported, cooked GIF. Stores lightweight metadata as reflected properties (so\nthe asset registry sees it without loading pixels) and the decoded BGRA frames\nin manually-serialized bulk data. Immutable at runtime; one asset can back many\nindependent UGifPlayer instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "GIF" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopCount_MetaData[] = {
		{ "Category", "GIF" },
		{ "Comment", "/**\n\x09 * Number of play-throughs before playback stops; 0 = loop forever. Seeded from\n\x09 * the GIF's NETSCAPE2.0 extension on import, editable here, and used by UGifPlayer\n\x09 * as the default loop count (a player/widget may still override it).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
		{ "ToolTip", "Number of play-throughs before playback stops; 0 = loop forever. Seeded from\nthe GIF's NETSCAPE2.0 extension on import, editable here, and used by UGifPlayer\nas the default loop count (a player/widget may still override it)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameDelays_MetaData[] = {
		{ "Category", "GIF" },
		{ "Comment", "/** Per-frame display duration in seconds (raw, before the playback clamp). */" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
		{ "ToolTip", "Per-frame display duration in seconds (raw, before the playback clamp)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedRenderTarget_MetaData[] = {
		{ "Category", "GIF|Material" },
		{ "Comment", "/**\n\x09 * Optional render target a player drives so the GIF can be sampled in a material\n\x09 * graph. At runtime the player reconfigures it to this GIF's size and BGRA8 format\n\x09 * and uses it as its output texture. Shared: one logical playback per target \xe2\x80\x94 if\n\x09 * several players run this asset they all write here (last write wins).\n\x09 */" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
		{ "ToolTip", "Optional render target a player drives so the GIF can be sampled in a material\ngraph. At runtime the player reconfigures it to this GIF's size and BGRA8 format\nand uses it as its output texture. Shared: one logical playback per target \xe2\x80\x94 if\nseveral players run this asset they all write here (last write wins)." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GifAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailTexture_MetaData[] = {
		{ "ModuleRelativePath", "Public/GifAsset.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoopCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDelays_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FrameDelays;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedRenderTarget;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThumbnailTexture;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGifAsset_GetDimensions, "GetDimensions" }, // 355254380
		{ &Z_Construct_UFunction_UGifAsset_GetDurationSeconds, "GetDurationSeconds" }, // 457234643
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGifAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_LoopCount = { "LoopCount", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, LoopCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopCount_MetaData), NewProp_LoopCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_FrameDelays_Inner = { "FrameDelays", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_FrameDelays = { "FrameDelays", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, FrameDelays), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameDelays_MetaData), NewProp_FrameDelays_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_LinkedRenderTarget = { "LinkedRenderTarget", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, LinkedRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedRenderTarget_MetaData), NewProp_LinkedRenderTarget_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x01160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetImportData_MetaData), NewProp_AssetImportData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGifAsset_Statics::NewProp_ThumbnailTexture = { "ThumbnailTexture", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifAsset, ThumbnailTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThumbnailTexture_MetaData), NewProp_ThumbnailTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGifAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_LoopCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_FrameDelays_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_FrameDelays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_LinkedRenderTarget,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_AssetImportData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifAsset_Statics::NewProp_ThumbnailTexture,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGifAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGifAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGifAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGifAsset_Statics::ClassParams = {
	&UGifAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGifAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGifAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGifAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UGifAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGifAsset()
{
	if (!Z_Registration_Info_UClass_UGifAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGifAsset.OuterSingleton, Z_Construct_UClass_UGifAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGifAsset.OuterSingleton;
}
UGifAsset::UGifAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGifAsset);
UGifAsset::~UGifAsset() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UGifAsset)
// ********** End Class UGifAsset ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifAsset_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGifAsset, UGifAsset::StaticClass, TEXT("UGifAsset"), &Z_Registration_Info_UClass_UGifAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGifAsset), 3829382166U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifAsset_h__Script_AnimatedGif_1214395739(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifAsset_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifAsset_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
