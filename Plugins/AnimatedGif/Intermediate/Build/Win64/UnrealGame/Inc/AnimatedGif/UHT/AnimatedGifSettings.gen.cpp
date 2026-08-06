// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedGifSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimatedGifSettings() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifSettings();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifSettings_NoRegister();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimatedGifSettings *****************************************************
void UAnimatedGifSettings::StaticRegisterNativesUAnimatedGifSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatedGifSettings;
UClass* UAnimatedGifSettings::GetPrivateStaticClass()
{
	using TClass = UAnimatedGifSettings;
	if (!Z_Registration_Info_UClass_UAnimatedGifSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimatedGifSettings"),
			Z_Registration_Info_UClass_UAnimatedGifSettings.InnerSingleton,
			StaticRegisterNativesUAnimatedGifSettings,
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
	return Z_Registration_Info_UClass_UAnimatedGifSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimatedGifSettings_NoRegister()
{
	return UAnimatedGifSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimatedGifSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Project-wide GIF playback defaults. Frame delays come from the file, but many\n * GIFs ship 0ms delays expecting browser behaviour (~10fps); these settings\n * reproduce that clamp.\n */" },
		{ "DisplayName", "Animated GIF" },
		{ "IncludePath", "AnimatedGifSettings.h" },
		{ "ModuleRelativePath", "Public/AnimatedGifSettings.h" },
		{ "ToolTip", "Project-wide GIF playback defaults. Frame delays come from the file, but many\nGIFs ship 0ms delays expecting browser behaviour (~10fps); these settings\nreproduce that clamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFrameDelaySeconds_MetaData[] = {
		{ "Category", "Playback" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Frames whose stored delay is below this are bumped to FallbackFrameDelaySeconds. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/AnimatedGifSettings.h" },
		{ "ToolTip", "Frames whose stored delay is below this are bumped to FallbackFrameDelaySeconds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FallbackFrameDelaySeconds_MetaData[] = {
		{ "Category", "Playback" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Delay used in place of a too-short frame delay. */" },
		{ "ForceUnits", "s" },
		{ "ModuleRelativePath", "Public/AnimatedGifSettings.h" },
		{ "ToolTip", "Delay used in place of a too-short frame delay." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFrameDelaySeconds;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FallbackFrameDelaySeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedGifSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedGifSettings_Statics::NewProp_MinFrameDelaySeconds = { "MinFrameDelaySeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifSettings, MinFrameDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFrameDelaySeconds_MetaData), NewProp_MinFrameDelaySeconds_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimatedGifSettings_Statics::NewProp_FallbackFrameDelaySeconds = { "FallbackFrameDelaySeconds", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimatedGifSettings, FallbackFrameDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FallbackFrameDelaySeconds_MetaData), NewProp_FallbackFrameDelaySeconds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimatedGifSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifSettings_Statics::NewProp_MinFrameDelaySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimatedGifSettings_Statics::NewProp_FallbackFrameDelaySeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimatedGifSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedGifSettings_Statics::ClassParams = {
	&UAnimatedGifSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimatedGifSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedGifSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedGifSettings()
{
	if (!Z_Registration_Info_UClass_UAnimatedGifSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedGifSettings.OuterSingleton, Z_Construct_UClass_UAnimatedGifSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedGifSettings.OuterSingleton;
}
UAnimatedGifSettings::UAnimatedGifSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedGifSettings);
UAnimatedGifSettings::~UAnimatedGifSettings() {}
// ********** End Class UAnimatedGifSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifSettings_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedGifSettings, UAnimatedGifSettings::StaticClass, TEXT("UAnimatedGifSettings"), &Z_Registration_Info_UClass_UAnimatedGifSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedGifSettings), 2875002247U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifSettings_h__Script_AnimatedGif_2551203478(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifSettings_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifSettings_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
