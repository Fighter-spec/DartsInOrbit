// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncAction_LoadAnimatedGif.h"

#ifdef ANIMATEDGIF_AsyncAction_LoadAnimatedGif_generated_h
#error "AsyncAction_LoadAnimatedGif.generated.h already included, missing '#pragma once' in AsyncAction_LoadAnimatedGif.h"
#endif
#define ANIMATEDGIF_AsyncAction_LoadAnimatedGif_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncAction_LoadAnimatedGif;
class UGifPlayer;
class UObject;

// ********** Begin Delegate FOnAnimatedGifLoaded **************************************************
#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_15_DELEGATE \
ANIMATEDGIF_API void FOnAnimatedGifLoaded_DelegateWrapper(const FMulticastScriptDelegate& OnAnimatedGifLoaded, UGifPlayer* Player);


// ********** End Delegate FOnAnimatedGifLoaded ****************************************************

// ********** Begin Delegate FOnAnimatedGifLoadFailed **********************************************
#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_16_DELEGATE \
ANIMATEDGIF_API void FOnAnimatedGifLoadFailed_DelegateWrapper(const FMulticastScriptDelegate& OnAnimatedGifLoadFailed, const FString& Error);


// ********** End Delegate FOnAnimatedGifLoadFailed ************************************************

// ********** Begin Class UAsyncAction_LoadAnimatedGif *********************************************
#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadAnimatedGifFromBytes); \
	DECLARE_FUNCTION(execLoadAnimatedGifFromFile);


ANIMATEDGIF_API UClass* Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister();

#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncAction_LoadAnimatedGif(); \
	friend struct Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ANIMATEDGIF_API UClass* Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_LoadAnimatedGif, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimatedGif"), Z_Construct_UClass_UAsyncAction_LoadAnimatedGif_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_LoadAnimatedGif)


#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_LoadAnimatedGif(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_LoadAnimatedGif(UAsyncAction_LoadAnimatedGif&&) = delete; \
	UAsyncAction_LoadAnimatedGif(const UAsyncAction_LoadAnimatedGif&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_LoadAnimatedGif); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_LoadAnimatedGif); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_LoadAnimatedGif) \
	NO_API virtual ~UAsyncAction_LoadAnimatedGif();


#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_23_PROLOG
#define FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_LoadAnimatedGif;

// ********** End Class UAsyncAction_LoadAnimatedGif ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_yabaz_Documents_Unreal_Projects_1__Plugins_MyPlugins_AnimatedGif_HostProject_Plugins_AnimatedGif_Source_AnimatedGif_Public_AsyncAction_LoadAnimatedGif_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
