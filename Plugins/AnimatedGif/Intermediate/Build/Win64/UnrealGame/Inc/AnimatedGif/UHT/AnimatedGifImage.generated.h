// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AnimatedGifImage.h"

#ifdef ANIMATEDGIF_AnimatedGifImage_generated_h
#error "AnimatedGifImage.generated.h already included, missing '#pragma once' in AnimatedGifImage.h"
#endif
#define ANIMATEDGIF_AnimatedGifImage_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UGifAsset;
class UGifPlayer;
struct FLinearColor;

// ********** Begin Class UAnimatedGifImage ********************************************************
#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetPlayer); \
	DECLARE_FUNCTION(execSetColorAndOpacity); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetGifAsset);


ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifImage_NoRegister();

#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimatedGifImage(); \
	friend struct Z_Construct_UClass_UAnimatedGifImage_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATEDGIF_API UClass* Z_Construct_UClass_UAnimatedGifImage_NoRegister(); \
public: \
	DECLARE_CLASS2(UAnimatedGifImage, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimatedGif"), Z_Construct_UClass_UAnimatedGifImage_NoRegister) \
	DECLARE_SERIALIZER(UAnimatedGifImage)


#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimatedGifImage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAnimatedGifImage(UAnimatedGifImage&&) = delete; \
	UAnimatedGifImage(const UAnimatedGifImage&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimatedGifImage); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimatedGifImage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimatedGifImage) \
	NO_API virtual ~UAnimatedGifImage();


#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_21_PROLOG
#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAnimatedGifImage;

// ********** End Class UAnimatedGifImage **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AnimatedGifImage_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
