// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AsyncNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AUniversalCamera;
class UAsyncNode;
class UCurveFloat;
struct FOffsetSettings;
struct FTargetFloat;
struct FTargetSettings;
struct FTargetVector;
struct FTravelSpeedSettings;
#ifdef UNIVERSALCAMERAPLUGIN_AsyncNode_generated_h
#error "AsyncNode.generated.h already included, missing '#pragma once' in AsyncNode.h"
#endif
#define UNIVERSALCAMERAPLUGIN_AsyncNode_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_11_DELEGATE \
static inline void FOnReachedDestination_DelegateWrapper(const FMulticastScriptDelegate& OnReachedDestination) \
{ \
	OnReachedDestination.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FTravelSpeedSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetVector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FTargetVector>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOffsetSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FOffsetSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetFloat_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FTargetFloat>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUseSocketOffset); \
	DECLARE_FUNCTION(execUseTargetOffset); \
	DECLARE_FUNCTION(execUseDuration); \
	DECLARE_FUNCTION(execUseSpeed); \
	DECLARE_FUNCTION(execUseSceneComponentValue); \
	DECLARE_FUNCTION(execUseSocketValue); \
	DECLARE_FUNCTION(execUseActorValue); \
	DECLARE_FUNCTION(execUseCustomValue); \
	DECLARE_FUNCTION(execUseSceneComponentLocation); \
	DECLARE_FUNCTION(execUseSocketLocation); \
	DECLARE_FUNCTION(execUseActorLocation); \
	DECLARE_FUNCTION(execUseCustomLocation); \
	DECLARE_FUNCTION(execCameraTravel);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUseSocketOffset); \
	DECLARE_FUNCTION(execUseTargetOffset); \
	DECLARE_FUNCTION(execUseDuration); \
	DECLARE_FUNCTION(execUseSpeed); \
	DECLARE_FUNCTION(execUseSceneComponentValue); \
	DECLARE_FUNCTION(execUseSocketValue); \
	DECLARE_FUNCTION(execUseActorValue); \
	DECLARE_FUNCTION(execUseCustomValue); \
	DECLARE_FUNCTION(execUseSceneComponentLocation); \
	DECLARE_FUNCTION(execUseSocketLocation); \
	DECLARE_FUNCTION(execUseActorLocation); \
	DECLARE_FUNCTION(execUseCustomLocation); \
	DECLARE_FUNCTION(execCameraTravel);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAsyncNode(); \
	friend struct Z_Construct_UClass_UAsyncNode_Statics; \
public: \
	DECLARE_CLASS(UAsyncNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniversalCameraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAsyncNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncNode(); \
	friend struct Z_Construct_UClass_UAsyncNode_Statics; \
public: \
	DECLARE_CLASS(UAsyncNode, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UniversalCameraPlugin"), NO_API) \
	DECLARE_SERIALIZER(UAsyncNode)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncNode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncNode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncNode(UAsyncNode&&); \
	NO_API UAsyncNode(const UAsyncNode&); \
public: \
	NO_API virtual ~UAsyncNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncNode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAsyncNode(UAsyncNode&&); \
	NO_API UAsyncNode(const UAsyncNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncNode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncNode) \
	NO_API virtual ~UAsyncNode();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_86_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_89_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALCAMERAPLUGIN_API UClass* StaticClass<class UAsyncNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
