// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimatedGif_init() {}
	ANIMATEDGIF_API UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature();
	ANIMATEDGIF_API UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature();
	ANIMATEDGIF_API UFunction* Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AnimatedGif;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AnimatedGif()
	{
		if (!Z_Registration_Info_UPackage__Script_AnimatedGif.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoaded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimatedGif_OnAnimatedGifLoadFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AnimatedGif_OnGifPlaybackEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AnimatedGif",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x9992F4E3,
				0xE2D6EB65,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AnimatedGif.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AnimatedGif.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AnimatedGif(Z_Construct_UPackage__Script_AnimatedGif, TEXT("/Script/AnimatedGif"), Z_Registration_Info_UPackage__Script_AnimatedGif, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x9992F4E3, 0xE2D6EB65));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
