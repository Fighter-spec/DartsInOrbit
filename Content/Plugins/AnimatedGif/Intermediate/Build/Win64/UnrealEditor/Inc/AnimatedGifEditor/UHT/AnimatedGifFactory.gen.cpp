// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimatedGifFactory.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAnimatedGifFactory() {}

// ********** Begin Cross Module References ********************************************************
ANIMATEDGIFEDITOR_API UClass* Z_Construct_UClass_UAnimatedGifFactory();
ANIMATEDGIFEDITOR_API UClass* Z_Construct_UClass_UAnimatedGifFactory_NoRegister();
ANIMATEDGIFEDITOR_API UClass* Z_Construct_UClass_UReimportAnimatedGifFactory();
ANIMATEDGIFEDITOR_API UClass* Z_Construct_UClass_UReimportAnimatedGifFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_AnimatedGifEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAnimatedGifFactory ******************************************************
void UAnimatedGifFactory::StaticRegisterNativesUAnimatedGifFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAnimatedGifFactory;
UClass* UAnimatedGifFactory::GetPrivateStaticClass()
{
	using TClass = UAnimatedGifFactory;
	if (!Z_Registration_Info_UClass_UAnimatedGifFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AnimatedGifFactory"),
			Z_Registration_Info_UClass_UAnimatedGifFactory.InnerSingleton,
			StaticRegisterNativesUAnimatedGifFactory,
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
	return Z_Registration_Info_UClass_UAnimatedGifFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UAnimatedGifFactory_NoRegister()
{
	return UAnimatedGifFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAnimatedGifFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Imports a .gif into a UGifAsset (decode + bake frames). */" },
		{ "IncludePath", "AnimatedGifFactory.h" },
		{ "ModuleRelativePath", "Private/AnimatedGifFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Imports a .gif into a UGifAsset (decode + bake frames)." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimatedGifFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimatedGifFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGifEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimatedGifFactory_Statics::ClassParams = {
	&UAnimatedGifFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimatedGifFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimatedGifFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimatedGifFactory()
{
	if (!Z_Registration_Info_UClass_UAnimatedGifFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimatedGifFactory.OuterSingleton, Z_Construct_UClass_UAnimatedGifFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimatedGifFactory.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimatedGifFactory);
UAnimatedGifFactory::~UAnimatedGifFactory() {}
// ********** End Class UAnimatedGifFactory ********************************************************

// ********** Begin Class UReimportAnimatedGifFactory **********************************************
void UReimportAnimatedGifFactory::StaticRegisterNativesUReimportAnimatedGifFactory()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UReimportAnimatedGifFactory;
UClass* UReimportAnimatedGifFactory::GetPrivateStaticClass()
{
	using TClass = UReimportAnimatedGifFactory;
	if (!Z_Registration_Info_UClass_UReimportAnimatedGifFactory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ReimportAnimatedGifFactory"),
			Z_Registration_Info_UClass_UReimportAnimatedGifFactory.InnerSingleton,
			StaticRegisterNativesUReimportAnimatedGifFactory,
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
	return Z_Registration_Info_UClass_UReimportAnimatedGifFactory.InnerSingleton;
}
UClass* Z_Construct_UClass_UReimportAnimatedGifFactory_NoRegister()
{
	return UReimportAnimatedGifFactory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UReimportAnimatedGifFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Adds reimport support for UGifAsset. */" },
		{ "IncludePath", "AnimatedGifFactory.h" },
		{ "ModuleRelativePath", "Private/AnimatedGifFactory.h" },
		{ "ToolTip", "Adds reimport support for UGifAsset." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReimportAnimatedGifFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UReimportAnimatedGifFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimatedGifFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_AnimatedGifEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReimportAnimatedGifFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UReimportAnimatedGifFactory_Statics::ClassParams = {
	&UReimportAnimatedGifFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReimportAnimatedGifFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UReimportAnimatedGifFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UReimportAnimatedGifFactory()
{
	if (!Z_Registration_Info_UClass_UReimportAnimatedGifFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReimportAnimatedGifFactory.OuterSingleton, Z_Construct_UClass_UReimportAnimatedGifFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UReimportAnimatedGifFactory.OuterSingleton;
}
UReimportAnimatedGifFactory::UReimportAnimatedGifFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UReimportAnimatedGifFactory);
UReimportAnimatedGifFactory::~UReimportAnimatedGifFactory() {}
// ********** End Class UReimportAnimatedGifFactory ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifFactory_h__Script_AnimatedGifEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimatedGifFactory, UAnimatedGifFactory::StaticClass, TEXT("UAnimatedGifFactory"), &Z_Registration_Info_UClass_UAnimatedGifFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimatedGifFactory), 1646559160U) },
		{ Z_Construct_UClass_UReimportAnimatedGifFactory, UReimportAnimatedGifFactory::StaticClass, TEXT("UReimportAnimatedGifFactory"), &Z_Registration_Info_UClass_UReimportAnimatedGifFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReimportAnimatedGifFactory), 564604292U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifFactory_h__Script_AnimatedGifEditor_3181801401(TEXT("/Script/AnimatedGifEditor"),
	Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifFactory_h__Script_AnimatedGifEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGifEditor_Private_AnimatedGifFactory_h__Script_AnimatedGifEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
