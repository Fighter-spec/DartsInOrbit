// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GifPlaybackSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGifPlaybackSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlaybackSubsystem();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlaybackSubsystem_NoRegister();
ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
UPackage* Z_Construct_UPackage__Script_AnimatedGif();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGifPlaybackSubsystem ****************************************************
void UGifPlaybackSubsystem::StaticRegisterNativesUGifPlaybackSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGifPlaybackSubsystem;
UClass* UGifPlaybackSubsystem::GetPrivateStaticClass()
{
	using TClass = UGifPlaybackSubsystem;
	if (!Z_Registration_Info_UClass_UGifPlaybackSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GifPlaybackSubsystem"),
			Z_Registration_Info_UClass_UGifPlaybackSubsystem.InnerSingleton,
			StaticRegisterNativesUGifPlaybackSubsystem,
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
	return Z_Registration_Info_UClass_UGifPlaybackSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UGifPlaybackSubsystem_NoRegister()
{
	return UGifPlaybackSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGifPlaybackSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Drives all GIF players that belong to a world. Ticks with world delta time, so\n * playback is pause- and time-dilation-aware by default; per-player overrides let\n * HUD/menu GIFs keep running while paused.\n */" },
#endif
		{ "IncludePath", "GifPlaybackSubsystem.h" },
		{ "ModuleRelativePath", "Public/GifPlaybackSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drives all GIF players that belong to a world. Ticks with world delta time, so\nplayback is pause- and time-dilation-aware by default; per-player overrides let\nHUD/menu GIFs keep running while paused." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivePlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/GifPlaybackSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivePlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivePlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGifPlaybackSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGifPlaybackSubsystem_Statics::NewProp_ActivePlayers_Inner = { "ActivePlayers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGifPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGifPlaybackSubsystem_Statics::NewProp_ActivePlayers = { "ActivePlayers", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGifPlaybackSubsystem, ActivePlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivePlayers_MetaData), NewProp_ActivePlayers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGifPlaybackSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlaybackSubsystem_Statics::NewProp_ActivePlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGifPlaybackSubsystem_Statics::NewProp_ActivePlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlaybackSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGifPlaybackSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGif,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlaybackSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGifPlaybackSubsystem_Statics::ClassParams = {
	&UGifPlaybackSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGifPlaybackSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlaybackSubsystem_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGifPlaybackSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGifPlaybackSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGifPlaybackSubsystem()
{
	if (!Z_Registration_Info_UClass_UGifPlaybackSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGifPlaybackSubsystem.OuterSingleton, Z_Construct_UClass_UGifPlaybackSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGifPlaybackSubsystem.OuterSingleton;
}
UGifPlaybackSubsystem::UGifPlaybackSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGifPlaybackSubsystem);
UGifPlaybackSubsystem::~UGifPlaybackSubsystem() {}
// ********** End Class UGifPlaybackSubsystem ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlaybackSubsystem_h__Script_AnimatedGif_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGifPlaybackSubsystem, UGifPlaybackSubsystem::StaticClass, TEXT("UGifPlaybackSubsystem"), &Z_Registration_Info_UClass_UGifPlaybackSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGifPlaybackSubsystem), 1900222100U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlaybackSubsystem_h__Script_AnimatedGif_698752672(TEXT("/Script/AnimatedGif"),
	Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlaybackSubsystem_h__Script_AnimatedGif_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlaybackSubsystem_h__Script_AnimatedGif_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
