// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UniversalCamera.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
class UAsyncNode;
class UCameraComponent;
class UMeshComponent;
class USceneComponent;
struct FBoolRotation;
struct FConstrainVector2;
struct FTargetSettings_WithTemplates;
struct FUniversalCameraPositionSaveFormat;
#ifdef UNIVERSALCAMERAPLUGIN_UniversalCamera_generated_h
#error "UniversalCamera.generated.h already included, missing '#pragma once' in UniversalCamera.h"
#endif
#define UNIVERSALCAMERAPLUGIN_UniversalCamera_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstrainVector_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FConstrainVector>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FConstrainVector2_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FConstrainVector2>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoolRotation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FBoolRotation>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics; \
	static class UScriptStruct* StaticStruct();


template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<struct FTargetSettings_WithTemplates>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_RPC_WRAPPERS \
	virtual float Lag_GetTickDesiredZoom_Implementation(float DeltaTime); \
	virtual FRotator Lag_GetTickDesiredRotation_Implementation(float DeltaTime); \
	virtual float Lag_GetTickDesiredHeight_Implementation(float DeltaTime); \
	virtual FVector Lag_GetTickDesiredSocketOffset_Implementation(float DeltaTime); \
	virtual FVector Lag_GetTickDesiredTargetOffset_Implementation(float DeltaTime); \
	virtual FVector Lag_GetTickDesiredLocation_Implementation(float DeltaTime); \
	virtual void OnEndEdgeScrolling_Implementation(); \
	virtual void OnUpdateEdgeScrolling_Implementation(ESimplifiedMovementDirection SimplifiedDirection, FVector2D MovementDirection); \
	virtual void OnBeginEdgeScrolling_Implementation(); \
	virtual void EdgeScrollingTick_Implementation(float RightAxis, float ForwardAxis, float RightMultiplier, float ForwardMultiplier, bool bTargetOffset, bool bSocketOffset); \
	virtual float GetTerrainHeightAdaptationValue_Implementation(bool& IsValid); \
	virtual float GetZoomInScaling_Implementation(); \
	virtual float GetMovementScaling_Implementation(); \
	virtual bool GetActorFocusLocation_Implementation(AActor* Actor, FVector& Location, float& IdealZoom); \
 \
	DECLARE_FUNCTION(execUseSocket); \
	DECLARE_FUNCTION(execUseSceneComponent); \
	DECLARE_FUNCTION(execUseActor); \
	DECLARE_FUNCTION(execGetAlternativeUpVector); \
	DECLARE_FUNCTION(execGetAlternativeRightVector); \
	DECLARE_FUNCTION(execGetAlternativeForwardVector); \
	DECLARE_FUNCTION(execSetConstrainDots); \
	DECLARE_FUNCTION(execToggleConstrainDots); \
	DECLARE_FUNCTION(execGetActorsLocation2D); \
	DECLARE_FUNCTION(execLag_GetTickDesiredZoom); \
	DECLARE_FUNCTION(execLag_GetTickDesiredRotation); \
	DECLARE_FUNCTION(execLag_GetTickDesiredHeight); \
	DECLARE_FUNCTION(execLag_GetTickDesiredSocketOffset); \
	DECLARE_FUNCTION(execLag_GetTickDesiredTargetOffset); \
	DECLARE_FUNCTION(execLag_GetTickDesiredLocation); \
	DECLARE_FUNCTION(execIsFollowingAnyActor); \
	DECLARE_FUNCTION(execStopFollowing); \
	DECLARE_FUNCTION(execFollowTargetTick); \
	DECLARE_FUNCTION(execFollowTarget); \
	DECLARE_FUNCTION(execToggleScreenSliding); \
	DECLARE_FUNCTION(execTogglePreciseMouseDrag); \
	DECLARE_FUNCTION(execOnEndEdgeScrolling); \
	DECLARE_FUNCTION(execOnUpdateEdgeScrolling); \
	DECLARE_FUNCTION(execOnBeginEdgeScrolling); \
	DECLARE_FUNCTION(execEdgeScrollingTick_Internal); \
	DECLARE_FUNCTION(execEdgeScrollingTick); \
	DECLARE_FUNCTION(execGetTerrainHeightAdaptationValue); \
	DECLARE_FUNCTION(execGetCorrectedDestinationFromOriginCollisions); \
	DECLARE_FUNCTION(execGetZoomInScaling); \
	DECLARE_FUNCTION(execGetMovementScaling); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execRotateRoll); \
	DECLARE_FUNCTION(execRotatePitch); \
	DECLARE_FUNCTION(execRotateYaw); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execMoveUp); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execQuickLoadSettings); \
	DECLARE_FUNCTION(execQuickSaveSettings); \
	DECLARE_FUNCTION(execQuickLoadPosition); \
	DECLARE_FUNCTION(execQuickSavePosition); \
	DECLARE_FUNCTION(execLoadPositionSaveFormat); \
	DECLARE_FUNCTION(execGetPositionSaveFormat); \
	DECLARE_FUNCTION(execLoadSettingsSaveFormat); \
	DECLARE_FUNCTION(execGetSettingsSaveFormat); \
	DECLARE_FUNCTION(execZoomAtCursor); \
	DECLARE_FUNCTION(execZoomAtLocation); \
	DECLARE_FUNCTION(execGetActorFocusLocation); \
	DECLARE_FUNCTION(execResetRotationOffset); \
	DECLARE_FUNCTION(execResetSocketOffset); \
	DECLARE_FUNCTION(execResetTargetOffset); \
	DECLARE_FUNCTION(execRotatePitchAroundPivot); \
	DECLARE_FUNCTION(execRotateYawAroundPivot); \
	DECLARE_FUNCTION(execGetImpactPointUnderCursor); \
	DECLARE_FUNCTION(execGetMousePositionRatio); \
	DECLARE_FUNCTION(execSetDesiredZoom); \
	DECLARE_FUNCTION(execSetDesiredRotationOffset); \
	DECLARE_FUNCTION(execSetDesiredRotation); \
	DECLARE_FUNCTION(execSetDesiredRollOffset); \
	DECLARE_FUNCTION(execSetDesiredRoll); \
	DECLARE_FUNCTION(execSetDesiredPitchOffset); \
	DECLARE_FUNCTION(execSetDesiredPitch); \
	DECLARE_FUNCTION(execSetDesiredYawOffset); \
	DECLARE_FUNCTION(execSetDesiredYaw); \
	DECLARE_FUNCTION(execSetDesiredSocketOffset); \
	DECLARE_FUNCTION(execSetDesiredTargetOffset); \
	DECLARE_FUNCTION(execSetDesiredLocation); \
	DECLARE_FUNCTION(execSetDesiredPosition); \
	DECLARE_FUNCTION(execAreFeaturesEnabled); \
	DECLARE_FUNCTION(execDisableFeatures); \
	DECLARE_FUNCTION(execEnableFeatures); \
	DECLARE_FUNCTION(execGetCorrectedDestinationFromRestrictions); \
	DECLARE_FUNCTION(execGetClampedZoom); \
	DECLARE_FUNCTION(execGetClampedRoll); \
	DECLARE_FUNCTION(execGetClampedPitch); \
	DECLARE_FUNCTION(execGetClampedYaw); \
	DECLARE_FUNCTION(execGetClampedOffset); \
	DECLARE_FUNCTION(execGetClampedLocation); \
	DECLARE_FUNCTION(execAbortTravelTask); \
	DECLARE_FUNCTION(execEndTravelTask); \
	DECLARE_FUNCTION(execTravelTaskTick); \
	DECLARE_FUNCTION(execStartTraveling_Internal); \
	DECLARE_FUNCTION(execGetDesiredCameraWorldLocation); \
	DECLARE_FUNCTION(execGetDesiredSocketOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetSocketOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetDesiredTargetOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetTargetOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetDesiredRotationWithOffset); \
	DECLARE_FUNCTION(execGetCameraComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual float Lag_GetTickDesiredZoom_Implementation(float DeltaTime); \
	virtual FRotator Lag_GetTickDesiredRotation_Implementation(float DeltaTime); \
	virtual float Lag_GetTickDesiredHeight_Implementation(float DeltaTime); \
	virtual FVector Lag_GetTickDesiredSocketOffset_Implementation(float DeltaTime); \
	virtual FVector Lag_GetTickDesiredTargetOffset_Implementation(float DeltaTime); \
	virtual FVector Lag_GetTickDesiredLocation_Implementation(float DeltaTime); \
	virtual void EdgeScrollingTick_Implementation(float RightAxis, float ForwardAxis, float RightMultiplier, float ForwardMultiplier, bool bTargetOffset, bool bSocketOffset); \
	virtual float GetTerrainHeightAdaptationValue_Implementation(bool& IsValid); \
	virtual float GetZoomInScaling_Implementation(); \
	virtual float GetMovementScaling_Implementation(); \
	virtual bool GetActorFocusLocation_Implementation(AActor* Actor, FVector& Location, float& IdealZoom); \
 \
	DECLARE_FUNCTION(execUseSocket); \
	DECLARE_FUNCTION(execUseSceneComponent); \
	DECLARE_FUNCTION(execUseActor); \
	DECLARE_FUNCTION(execGetAlternativeUpVector); \
	DECLARE_FUNCTION(execGetAlternativeRightVector); \
	DECLARE_FUNCTION(execGetAlternativeForwardVector); \
	DECLARE_FUNCTION(execSetConstrainDots); \
	DECLARE_FUNCTION(execToggleConstrainDots); \
	DECLARE_FUNCTION(execGetActorsLocation2D); \
	DECLARE_FUNCTION(execLag_GetTickDesiredZoom); \
	DECLARE_FUNCTION(execLag_GetTickDesiredRotation); \
	DECLARE_FUNCTION(execLag_GetTickDesiredHeight); \
	DECLARE_FUNCTION(execLag_GetTickDesiredSocketOffset); \
	DECLARE_FUNCTION(execLag_GetTickDesiredTargetOffset); \
	DECLARE_FUNCTION(execLag_GetTickDesiredLocation); \
	DECLARE_FUNCTION(execIsFollowingAnyActor); \
	DECLARE_FUNCTION(execStopFollowing); \
	DECLARE_FUNCTION(execFollowTargetTick); \
	DECLARE_FUNCTION(execFollowTarget); \
	DECLARE_FUNCTION(execToggleScreenSliding); \
	DECLARE_FUNCTION(execTogglePreciseMouseDrag); \
	DECLARE_FUNCTION(execOnEndEdgeScrolling); \
	DECLARE_FUNCTION(execOnUpdateEdgeScrolling); \
	DECLARE_FUNCTION(execOnBeginEdgeScrolling); \
	DECLARE_FUNCTION(execEdgeScrollingTick_Internal); \
	DECLARE_FUNCTION(execEdgeScrollingTick); \
	DECLARE_FUNCTION(execGetTerrainHeightAdaptationValue); \
	DECLARE_FUNCTION(execGetCorrectedDestinationFromOriginCollisions); \
	DECLARE_FUNCTION(execGetZoomInScaling); \
	DECLARE_FUNCTION(execGetMovementScaling); \
	DECLARE_FUNCTION(execZoomIn); \
	DECLARE_FUNCTION(execRotateRoll); \
	DECLARE_FUNCTION(execRotatePitch); \
	DECLARE_FUNCTION(execRotateYaw); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execMoveUp); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward); \
	DECLARE_FUNCTION(execQuickLoadSettings); \
	DECLARE_FUNCTION(execQuickSaveSettings); \
	DECLARE_FUNCTION(execQuickLoadPosition); \
	DECLARE_FUNCTION(execQuickSavePosition); \
	DECLARE_FUNCTION(execLoadPositionSaveFormat); \
	DECLARE_FUNCTION(execGetPositionSaveFormat); \
	DECLARE_FUNCTION(execLoadSettingsSaveFormat); \
	DECLARE_FUNCTION(execGetSettingsSaveFormat); \
	DECLARE_FUNCTION(execZoomAtCursor); \
	DECLARE_FUNCTION(execZoomAtLocation); \
	DECLARE_FUNCTION(execGetActorFocusLocation); \
	DECLARE_FUNCTION(execResetRotationOffset); \
	DECLARE_FUNCTION(execResetSocketOffset); \
	DECLARE_FUNCTION(execResetTargetOffset); \
	DECLARE_FUNCTION(execRotatePitchAroundPivot); \
	DECLARE_FUNCTION(execRotateYawAroundPivot); \
	DECLARE_FUNCTION(execGetImpactPointUnderCursor); \
	DECLARE_FUNCTION(execGetMousePositionRatio); \
	DECLARE_FUNCTION(execSetDesiredZoom); \
	DECLARE_FUNCTION(execSetDesiredRotationOffset); \
	DECLARE_FUNCTION(execSetDesiredRotation); \
	DECLARE_FUNCTION(execSetDesiredRollOffset); \
	DECLARE_FUNCTION(execSetDesiredRoll); \
	DECLARE_FUNCTION(execSetDesiredPitchOffset); \
	DECLARE_FUNCTION(execSetDesiredPitch); \
	DECLARE_FUNCTION(execSetDesiredYawOffset); \
	DECLARE_FUNCTION(execSetDesiredYaw); \
	DECLARE_FUNCTION(execSetDesiredSocketOffset); \
	DECLARE_FUNCTION(execSetDesiredTargetOffset); \
	DECLARE_FUNCTION(execSetDesiredLocation); \
	DECLARE_FUNCTION(execSetDesiredPosition); \
	DECLARE_FUNCTION(execAreFeaturesEnabled); \
	DECLARE_FUNCTION(execDisableFeatures); \
	DECLARE_FUNCTION(execEnableFeatures); \
	DECLARE_FUNCTION(execGetCorrectedDestinationFromRestrictions); \
	DECLARE_FUNCTION(execGetClampedZoom); \
	DECLARE_FUNCTION(execGetClampedRoll); \
	DECLARE_FUNCTION(execGetClampedPitch); \
	DECLARE_FUNCTION(execGetClampedYaw); \
	DECLARE_FUNCTION(execGetClampedOffset); \
	DECLARE_FUNCTION(execGetClampedLocation); \
	DECLARE_FUNCTION(execAbortTravelTask); \
	DECLARE_FUNCTION(execEndTravelTask); \
	DECLARE_FUNCTION(execTravelTaskTick); \
	DECLARE_FUNCTION(execStartTraveling_Internal); \
	DECLARE_FUNCTION(execGetDesiredCameraWorldLocation); \
	DECLARE_FUNCTION(execGetDesiredSocketOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetSocketOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetDesiredTargetOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetTargetOffsetWorldLocation); \
	DECLARE_FUNCTION(execGetDesiredRotationWithOffset); \
	DECLARE_FUNCTION(execGetCameraComponent);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUniversalCamera(); \
	friend struct Z_Construct_UClass_AUniversalCamera_Statics; \
public: \
	DECLARE_CLASS(AUniversalCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalCameraPlugin"), NO_API) \
	DECLARE_SERIALIZER(AUniversalCamera) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DesiredLocation=NETFIELD_REP_START, \
		DesiredSocketOffset, \
		DesiredTargetOffset, \
		DesiredRotation, \
		DesiredRotationOffset, \
		DesiredZoom, \
		NETFIELD_REP_END=DesiredZoom	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_INCLASS \
private: \
	static void StaticRegisterNativesAUniversalCamera(); \
	friend struct Z_Construct_UClass_AUniversalCamera_Statics; \
public: \
	DECLARE_CLASS(AUniversalCamera, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UniversalCameraPlugin"), NO_API) \
	DECLARE_SERIALIZER(AUniversalCamera) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DesiredLocation=NETFIELD_REP_START, \
		DesiredSocketOffset, \
		DesiredTargetOffset, \
		DesiredRotation, \
		DesiredRotationOffset, \
		DesiredZoom, \
		NETFIELD_REP_END=DesiredZoom	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUniversalCamera(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUniversalCamera) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniversalCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniversalCamera); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUniversalCamera(AUniversalCamera&&); \
	NO_API AUniversalCamera(const AUniversalCamera&); \
public: \
	NO_API virtual ~AUniversalCamera();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUniversalCamera(AUniversalCamera&&); \
	NO_API AUniversalCamera(const AUniversalCamera&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUniversalCamera); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUniversalCamera); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUniversalCamera) \
	NO_API virtual ~AUniversalCamera();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_171_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UNIVERSALCAMERAPLUGIN_API UClass* StaticClass<class AUniversalCamera>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h


#define FOREACH_ENUM_EEDGESCROLLMODE(op) \
	op(ScrollMovement) \
	op(ScrollTargetOffset) \
	op(ScrollSocketOffset) 
#define FOREACH_ENUM_ESIMPLIFIEDMOVEMENTDIRECTION(op) \
	op(MovementDirection_None) \
	op(Direction_RightBackward) \
	op(Direction_Right) \
	op(Direction_RightForward) \
	op(Direction_Forward) \
	op(Direction_LeftForward) \
	op(Direction_Left) \
	op(Direction_LeftBackward) \
	op(Direction_Backward) 
#define FOREACH_ENUM_ESCREENSLIDINGTYPE(op) \
	op(ScreenSliding_None) \
	op(SlideCamera) \
	op(SlideTargetOffset) \
	op(SlideSocketOffset) \
	op(SlideYaw) \
	op(SlidePitch) \
	op(SlideYawAndPitch) 
#define FOREACH_ENUM_ECONSTRAINTYPE(op) \
	op(NoConstrain) \
	op(MaxDistance) \
	op(CustomConstrain) 
#define FOREACH_ENUM_ESTOPFOLLOWINGREASON(op) \
	op(StopFollowingReason_Manual) \
	op(StopFollowingReason_InvalidTarget) \
	op(StopFollowingReason_DisabledFeature) 
#define FOREACH_ENUM_EENABLEDFEATURES(op) \
	op(None) \
	op(Movement) \
	op(Rotation) \
	op(Zoom) \
	op(EdgeScrolling) \
	op(ScreenSliding) \
	op(OriginCollisions) \
	op(SpringArmCollisions) \
	op(TerrainHeightAdaptation) \
	op(LagMovement) \
	op(LagOffset) \
	op(LagRotation) \
	op(LagZoom) \
	op(FollowTarget) \
	op(PreciseMouseDrag) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
