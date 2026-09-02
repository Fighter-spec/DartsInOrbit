// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GifPlayer.h"

#ifdef ANIMATEDGIF_GifPlayer_generated_h
#error "GifPlayer.generated.h already included, missing '#pragma once' in GifPlayer.h"
#endif
#define ANIMATEDGIF_GifPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UTexture2DDynamic;
class UTexture;
class UTextureRenderTarget2D;

// ********** Begin Delegate FOnGifPlaybackEvent ***************************************************
#define FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_21_DELEGATE \
ANIMATEDGIF_API void FOnGifPlaybackEvent_DelegateWrapper(const FMulticastScriptDelegate& OnGifPlaybackEvent);


// ********** End Delegate FOnGifPlaybackEvent *****************************************************

// ********** Begin Class UGifPlayer ***************************************************************
#define FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetDimensions); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execGetNumFrames); \
	DECLARE_FUNCTION(execGetCurrentFrame); \
	DECLARE_FUNCTION(execSetRenderTarget); \
	DECLARE_FUNCTION(execGetRenderTarget); \
	DECLARE_FUNCTION(execGetDynamicTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSeekToTime); \
	DECLARE_FUNCTION(execSeekToFrame); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execPlay);


ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister();

#define FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGifPlayer(); \
	friend struct Z_Construct_UClass_UGifPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATEDGIF_API UClass* Z_Construct_UClass_UGifPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(UGifPlayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimatedGif"), Z_Construct_UClass_UGifPlayer_NoRegister) \
	DECLARE_SERIALIZER(UGifPlayer)


#define FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGifPlayer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGifPlayer(UGifPlayer&&) = delete; \
	UGifPlayer(const UGifPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGifPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGifPlayer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGifPlayer) \
	NO_API virtual ~UGifPlayer();


#define FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_28_PROLOG
#define FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_INCLASS_NO_PURE_DECLS \
	FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGifPlayer;

// ********** End Class UGifPlayer *****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Realf_OneDrive_Documents_DartsFolder_DartsInOrbit_Plugins_AnimatedGif_Source_AnimatedGif_Public_GifPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
