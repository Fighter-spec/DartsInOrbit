// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedGifThumbnailRenderer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimatedGifThumbnailRenderer() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIFEDITOR_API UClass* Z_Construct_UClass_UAnimatedGifThumbnailRenderer();
ANIMATEDGIFEDITOR_API UClass* Z_Construct_UClass_UAnimatedGifThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_AnimatedGifEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimatedGifThumbnailRenderer ********************************************
void UAnimatedGifThumbnailRenderer::StaticRegisterNativesUAnimatedGifThumbnailRenderer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer;
UClass* UAnimatedGifThumbnailRenderer::GetPrivateStaticClass()
{
	using TClass = UAnimatedGifThumbnailRenderer;
	if (!Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimatedGifThumbnailRenderer"),
			Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer.InnerSingleton,
			StaticRegisterNativesUAnimatedGifThumbnailRenderer,
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
	return Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimatedGifThumbnailRenderer_NoRegister()
{
	return UAnimatedGifThumbnailRenderer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AnimatedGifThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/AnimatedGifThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedGifThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGifEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics::ClassParams = {
	&UAnimatedGifThumbnailRenderer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedGifThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UAnimatedGifThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer.OuterSingleton;
}
UAnimatedGifThumbnailRenderer::UAnimatedGifThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedGifThumbnailRenderer);
UAnimatedGifThumbnailRenderer::~UAnimatedGifThumbnailRenderer() {}
// ********** End Class UAnimatedGifThumbnailRenderer **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifThumbnailRenderer_h__Script_AnimatedGifEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedGifThumbnailRenderer, UAnimatedGifThumbnailRenderer::StaticClass, TEXT("UAnimatedGifThumbnailRenderer"), &Z_Registration_Info_UClass_UAnimatedGifThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedGifThumbnailRenderer), 3163529694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifThumbnailRenderer_h__Script_AnimatedGifEditor_1301247070(TEXT("/Script/AnimatedGifEditor"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifThumbnailRenderer_h__Script_AnimatedGifEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifThumbnailRenderer_h__Script_AnimatedGifEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
