// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSCameraPlugin/Public/UniversalCamera.h"
#include "RTSCameraPlugin/Public/SharedStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalCamera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_AUniversalCamera();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_AUniversalCamera_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_UAsyncNode_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBoolRotation();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FConstrainVector();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FConstrainVector2();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTargetSettings_WithTemplates();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat();
	UPackage* Z_Construct_UPackage__Script_UniversalCameraPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEdgeScrollMode;
	static UEnum* EEdgeScrollMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEdgeScrollMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEdgeScrollMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("EEdgeScrollMode"));
		}
		return Z_Registration_Info_UEnum_EEdgeScrollMode.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<EEdgeScrollMode>()
	{
		return EEdgeScrollMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::Enumerators[] = {
		{ "ScrollMovement", (int64)ScrollMovement },
		{ "ScrollTargetOffset", (int64)ScrollTargetOffset },
		{ "ScrollSocketOffset", (int64)ScrollSocketOffset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ScrollMovement.DisplayName", "Movement" },
		{ "ScrollMovement.Name", "ScrollMovement" },
		{ "ScrollSocketOffset.DisplayName", "Socket" },
		{ "ScrollSocketOffset.Name", "ScrollSocketOffset" },
		{ "ScrollTargetOffset.DisplayName", "Target" },
		{ "ScrollTargetOffset.Name", "ScrollTargetOffset" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"EEdgeScrollMode",
		"EEdgeScrollMode",
		Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode()
	{
		if (!Z_Registration_Info_UEnum_EEdgeScrollMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEdgeScrollMode.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEdgeScrollMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimplifiedMovementDirection;
	static UEnum* ESimplifiedMovementDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimplifiedMovementDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimplifiedMovementDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("ESimplifiedMovementDirection"));
		}
		return Z_Registration_Info_UEnum_ESimplifiedMovementDirection.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<ESimplifiedMovementDirection>()
	{
		return ESimplifiedMovementDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::Enumerators[] = {
		{ "MovementDirection_None", (int64)MovementDirection_None },
		{ "Direction_RightBackward", (int64)Direction_RightBackward },
		{ "Direction_Right", (int64)Direction_Right },
		{ "Direction_RightForward", (int64)Direction_RightForward },
		{ "Direction_Forward", (int64)Direction_Forward },
		{ "Direction_LeftForward", (int64)Direction_LeftForward },
		{ "Direction_Left", (int64)Direction_Left },
		{ "Direction_LeftBackward", (int64)Direction_LeftBackward },
		{ "Direction_Backward", (int64)Direction_Backward },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Direction_Backward.DisplayName", "Backward" },
		{ "Direction_Backward.Name", "Direction_Backward" },
		{ "Direction_Forward.DisplayName", "Forward" },
		{ "Direction_Forward.Name", "Direction_Forward" },
		{ "Direction_Left.DisplayName", "Left" },
		{ "Direction_Left.Name", "Direction_Left" },
		{ "Direction_LeftBackward.DisplayName", "LeftBackward" },
		{ "Direction_LeftBackward.Name", "Direction_LeftBackward" },
		{ "Direction_LeftForward.DisplayName", "LeftForward" },
		{ "Direction_LeftForward.Name", "Direction_LeftForward" },
		{ "Direction_Right.DisplayName", "Right" },
		{ "Direction_Right.Name", "Direction_Right" },
		{ "Direction_RightBackward.DisplayName", "RightBackward" },
		{ "Direction_RightBackward.Name", "Direction_RightBackward" },
		{ "Direction_RightForward.DisplayName", "RightForward" },
		{ "Direction_RightForward.Name", "Direction_RightForward" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "MovementDirection_None.DisplayName", "None" },
		{ "MovementDirection_None.Name", "MovementDirection_None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"ESimplifiedMovementDirection",
		"ESimplifiedMovementDirection",
		Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection()
	{
		if (!Z_Registration_Info_UEnum_ESimplifiedMovementDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimplifiedMovementDirection.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimplifiedMovementDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScreenSlidingType;
	static UEnum* EScreenSlidingType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScreenSlidingType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScreenSlidingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("EScreenSlidingType"));
		}
		return Z_Registration_Info_UEnum_EScreenSlidingType.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<EScreenSlidingType>()
	{
		return EScreenSlidingType_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::Enumerators[] = {
		{ "ScreenSliding_None", (int64)ScreenSliding_None },
		{ "SlideCamera", (int64)SlideCamera },
		{ "SlideTargetOffset", (int64)SlideTargetOffset },
		{ "SlideSocketOffset", (int64)SlideSocketOffset },
		{ "SlideYaw", (int64)SlideYaw },
		{ "SlidePitch", (int64)SlidePitch },
		{ "SlideYawAndPitch", (int64)SlideYawAndPitch },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ScreenSliding_None.DisplayName", "None" },
		{ "ScreenSliding_None.Name", "ScreenSliding_None" },
		{ "SlideCamera.DisplayName", "Camera" },
		{ "SlideCamera.Name", "SlideCamera" },
		{ "SlidePitch.DisplayName", "Pitch" },
		{ "SlidePitch.Name", "SlidePitch" },
		{ "SlideSocketOffset.DisplayName", "SocketOffset" },
		{ "SlideSocketOffset.Name", "SlideSocketOffset" },
		{ "SlideTargetOffset.DisplayName", "TargetOffset" },
		{ "SlideTargetOffset.Name", "SlideTargetOffset" },
		{ "SlideYaw.DisplayName", "Yaw" },
		{ "SlideYaw.Name", "SlideYaw" },
		{ "SlideYawAndPitch.DisplayName", "Yaw and Pitch" },
		{ "SlideYawAndPitch.Name", "SlideYawAndPitch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"EScreenSlidingType",
		"EScreenSlidingType",
		Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType()
	{
		if (!Z_Registration_Info_UEnum_EScreenSlidingType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScreenSlidingType.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScreenSlidingType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConstrainType;
	static UEnum* EConstrainType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConstrainType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConstrainType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("EConstrainType"));
		}
		return Z_Registration_Info_UEnum_EConstrainType.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<EConstrainType>()
	{
		return EConstrainType_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::Enumerators[] = {
		{ "NoConstrain", (int64)NoConstrain },
		{ "MaxDistance", (int64)MaxDistance },
		{ "CustomConstrain", (int64)CustomConstrain },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CustomConstrain.DisplayName", "Custom" },
		{ "CustomConstrain.Name", "CustomConstrain" },
		{ "MaxDistance.DisplayName", "MaxDistance" },
		{ "MaxDistance.Name", "MaxDistance" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "NoConstrain.DisplayName", "None" },
		{ "NoConstrain.Name", "NoConstrain" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"EConstrainType",
		"EConstrainType",
		Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType()
	{
		if (!Z_Registration_Info_UEnum_EConstrainType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConstrainType.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConstrainType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStopFollowingReason;
	static UEnum* EStopFollowingReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EStopFollowingReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EStopFollowingReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("EStopFollowingReason"));
		}
		return Z_Registration_Info_UEnum_EStopFollowingReason.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<EStopFollowingReason>()
	{
		return EStopFollowingReason_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::Enumerators[] = {
		{ "StopFollowingReason_Manual", (int64)StopFollowingReason_Manual },
		{ "StopFollowingReason_InvalidTarget", (int64)StopFollowingReason_InvalidTarget },
		{ "StopFollowingReason_DisabledFeature", (int64)StopFollowingReason_DisabledFeature },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "StopFollowingReason_DisabledFeature.DisplayName", "Disabled Feature" },
		{ "StopFollowingReason_DisabledFeature.Name", "StopFollowingReason_DisabledFeature" },
		{ "StopFollowingReason_InvalidTarget.DisplayName", "Invalid Target" },
		{ "StopFollowingReason_InvalidTarget.Name", "StopFollowingReason_InvalidTarget" },
		{ "StopFollowingReason_Manual.DisplayName", "Manual" },
		{ "StopFollowingReason_Manual.Name", "StopFollowingReason_Manual" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"EStopFollowingReason",
		"EStopFollowingReason",
		Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason()
	{
		if (!Z_Registration_Info_UEnum_EStopFollowingReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStopFollowingReason.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EStopFollowingReason.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstrainVector;
class UScriptStruct* FConstrainVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstrainVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstrainVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstrainVector, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("ConstrainVector"));
	}
	return Z_Registration_Info_UScriptStruct_ConstrainVector.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FConstrainVector>()
{
	return FConstrainVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstrainVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static void NewProp_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static void NewProp_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static void NewProp_Z_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstrainVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstrainVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X_SetBit(void* Obj)
	{
		((FConstrainVector*)Obj)->X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstrainVector), &Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y_SetBit(void* Obj)
	{
		((FConstrainVector*)Obj)->Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstrainVector), &Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z_SetBit(void* Obj)
	{
		((FConstrainVector*)Obj)->Z = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstrainVector), &Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstrainVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstrainVector_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstrainVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"ConstrainVector",
		sizeof(FConstrainVector),
		alignof(FConstrainVector),
		Z_Construct_UScriptStruct_FConstrainVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstrainVector()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstrainVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstrainVector.InnerSingleton, Z_Construct_UScriptStruct_FConstrainVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstrainVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstrainVector2;
class UScriptStruct* FConstrainVector2::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstrainVector2.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstrainVector2.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstrainVector2, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("ConstrainVector2"));
	}
	return Z_Registration_Info_UScriptStruct_ConstrainVector2.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FConstrainVector2>()
{
	return FConstrainVector2::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstrainVector2_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static void NewProp_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static void NewProp_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static void NewProp_Z_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Z;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstrainVector2>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X_SetBit(void* Obj)
	{
		((FConstrainVector2*)Obj)->X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstrainVector2), &Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y_SetBit(void* Obj)
	{
		((FConstrainVector2*)Obj)->Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstrainVector2), &Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z_SetBit(void* Obj)
	{
		((FConstrainVector2*)Obj)->Z = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConstrainVector2), &Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConstrainVector2_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewProp_Z,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstrainVector2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"ConstrainVector2",
		sizeof(FConstrainVector2),
		alignof(FConstrainVector2),
		Z_Construct_UScriptStruct_FConstrainVector2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstrainVector2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstrainVector2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstrainVector2()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstrainVector2.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstrainVector2.InnerSingleton, Z_Construct_UScriptStruct_FConstrainVector2_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstrainVector2.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoolRotation;
class UScriptStruct* FBoolRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoolRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoolRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoolRotation, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("BoolRotation"));
	}
	return Z_Registration_Info_UScriptStruct_BoolRotation.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FBoolRotation>()
{
	return FBoolRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBoolRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static void NewProp_Yaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static void NewProp_Pitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Roll_MetaData[];
#endif
		static void NewProp_Roll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoolRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoolRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw_SetBit(void* Obj)
	{
		((FBoolRotation*)Obj)->Yaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBoolRotation), &Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch_SetBit(void* Obj)
	{
		((FBoolRotation*)Obj)->Pitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBoolRotation), &Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll_SetBit(void* Obj)
	{
		((FBoolRotation*)Obj)->Roll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FBoolRotation), &Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoolRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoolRotation_Statics::NewProp_Roll,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoolRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"BoolRotation",
		sizeof(FBoolRotation),
		alignof(FBoolRotation),
		Z_Construct_UScriptStruct_FBoolRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoolRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoolRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoolRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_BoolRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoolRotation.InnerSingleton, Z_Construct_UScriptStruct_FBoolRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BoolRotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates;
class UScriptStruct* FTargetSettings_WithTemplates::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetSettings_WithTemplates, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("TargetSettings_WithTemplates"));
	}
	return Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FTargetSettings_WithTemplates>()
{
	return FTargetSettings_WithTemplates::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetSettings_WithTemplates>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"TargetSettings_WithTemplates",
		sizeof(FTargetSettings_WithTemplates),
		alignof(FTargetSettings_WithTemplates),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetSettings_WithTemplates()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates.InnerSingleton, Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnabledFeatures;
	static UEnum* EEnabledFeatures_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnabledFeatures.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnabledFeatures.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("EEnabledFeatures"));
		}
		return Z_Registration_Info_UEnum_EEnabledFeatures.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<EEnabledFeatures>()
	{
		return EEnabledFeatures_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::Enumerators[] = {
		{ "None", (int64)None },
		{ "Movement", (int64)Movement },
		{ "Rotation", (int64)Rotation },
		{ "Zoom", (int64)Zoom },
		{ "EdgeScrolling", (int64)EdgeScrolling },
		{ "ScreenSliding", (int64)ScreenSliding },
		{ "OriginCollisions", (int64)OriginCollisions },
		{ "SpringArmCollisions", (int64)SpringArmCollisions },
		{ "TerrainHeightAdaptation", (int64)TerrainHeightAdaptation },
		{ "LagMovement", (int64)LagMovement },
		{ "LagOffset", (int64)LagOffset },
		{ "LagRotation", (int64)LagRotation },
		{ "LagZoom", (int64)LagZoom },
		{ "FollowTarget", (int64)FollowTarget },
		{ "PreciseMouseDrag", (int64)PreciseMouseDrag },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "EdgeScrolling.Comment", "//\x09Move the Camera when the mouse cursor comes close to the edges of the screen.\n" },
		{ "EdgeScrolling.Name", "EdgeScrolling" },
		{ "EdgeScrolling.ToolTip", "Move the Camera when the mouse cursor comes close to the edges of the screen." },
		{ "FollowTarget.Comment", "//\x09""Allows to follow an Actor with \"FollowTarget\" and \"StopFollowing\".\n//\x09If you want to be able to move around while following an Actor, move the Offset of the camera while following it.\n" },
		{ "FollowTarget.Name", "FollowTarget" },
		{ "FollowTarget.ToolTip", "Allows to follow an Actor with \"FollowTarget\" and \"StopFollowing\".\nIf you want to be able to move around while following an Actor, move the Offset of the camera while following it." },
		{ "LagMovement.Comment", "//\x09Lag applied to Forward/Backward, Right/Left, Up/Down Movement.\n" },
		{ "LagMovement.Name", "LagMovement" },
		{ "LagMovement.ToolTip", "Lag applied to Forward/Backward, Right/Left, Up/Down Movement." },
		{ "LagOffset.Comment", "//\x09Lag applied to Offset Movement.\n" },
		{ "LagOffset.Name", "LagOffset" },
		{ "LagOffset.ToolTip", "Lag applied to Offset Movement." },
		{ "LagRotation.Comment", "//\x09Lag applied to Yaw and Pitch Rotation.\n" },
		{ "LagRotation.Name", "LagRotation" },
		{ "LagRotation.ToolTip", "Lag applied to Yaw and Pitch Rotation." },
		{ "LagZoom.Comment", "//\x09Lag applied to Zoom.\n" },
		{ "LagZoom.Name", "LagZoom" },
		{ "LagZoom.ToolTip", "Lag applied to Zoom." },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "Movement.Comment", "//\x09""Forward/Backward, Right/Left, Up/Down Movement.\n" },
		{ "Movement.Name", "Movement" },
		{ "Movement.ToolTip", "Forward/Backward, Right/Left, Up/Down Movement." },
		{ "None.Hidden", "" },
		{ "None.Name", "None" },
		{ "OriginCollisions.Comment", "//\x09Make the Origin of the Universal Camera collide with the environment (see the \"Origin Collisions\" category in the defaults)\n" },
		{ "OriginCollisions.DisplayName", "Origin Collisions (BETA)" },
		{ "OriginCollisions.Name", "OriginCollisions" },
		{ "OriginCollisions.ToolTip", "Make the Origin of the Universal Camera collide with the environment (see the \"Origin Collisions\" category in the defaults)" },
		{ "PreciseMouseDrag.Comment", "//\x09Use this to drag the Camera around with the mouse, while the cursor remains at the initial position.\n//\x09""Activate/Deactivate it with \"TogglePreciseMouseDrag\" when pressing/releasing a key (usually a mouse key).\n" },
		{ "PreciseMouseDrag.Name", "PreciseMouseDrag" },
		{ "PreciseMouseDrag.ToolTip", "Use this to drag the Camera around with the mouse, while the cursor remains at the initial position.\nActivate/Deactivate it with \"TogglePreciseMouseDrag\" when pressing/releasing a key (usually a mouse key)." },
		{ "Rotation.Comment", "//\x09Yaw and Pitch Rotation.\n" },
		{ "Rotation.Name", "Rotation" },
		{ "Rotation.ToolTip", "Yaw and Pitch Rotation." },
		{ "ScreenSliding.Comment", "//\x09Move the camera by maintaining a key and moving the mouse around.\n//\x09""Activate/Deactivate it with \"ToggleScreenSliding\" when pressing/releasing a key (usually a mouse key).\n" },
		{ "ScreenSliding.Name", "ScreenSliding" },
		{ "ScreenSliding.ToolTip", "Move the camera by maintaining a key and moving the mouse around.\nActivate/Deactivate it with \"ToggleScreenSliding\" when pressing/releasing a key (usually a mouse key)." },
		{ "SpringArmCollisions.Comment", "//\x09Make the SpringArmComponent collide with the environment, so that you can always see the Origin\n" },
		{ "SpringArmCollisions.DisplayName", "Spring Arm Collisions (BETA)" },
		{ "SpringArmCollisions.Name", "SpringArmCollisions" },
		{ "SpringArmCollisions.ToolTip", "Make the SpringArmComponent collide with the environment, so that you can always see the Origin" },
		{ "TerrainHeightAdaptation.Comment", "//\x09""Correct the Z location of the camera to adapt to terrain.\n//\x09Override \"GetTerrainHeightAdaptationValue\" if you prefer to implement your own adapatation method.\n" },
		{ "TerrainHeightAdaptation.Name", "TerrainHeightAdaptation" },
		{ "TerrainHeightAdaptation.ToolTip", "Correct the Z location of the camera to adapt to terrain.\nOverride \"GetTerrainHeightAdaptationValue\" if you prefer to implement your own adapatation method." },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Zoom.Comment", "//\x09Zoom.\n" },
		{ "Zoom.Name", "Zoom" },
		{ "Zoom.ToolTip", "Zoom." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"EEnabledFeatures",
		"EEnabledFeatures",
		Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures()
	{
		if (!Z_Registration_Info_UEnum_EEnabledFeatures.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnabledFeatures.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_EEnabledFeatures_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnabledFeatures.InnerSingleton;
	}
	DEFINE_FUNCTION(AUniversalCamera::execUseSocket)
	{
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_Socket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetSettings_WithTemplates*)Z_Param__Result=AUniversalCamera::UseSocket(Z_Param_MeshComponent,Z_Param_Socket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execUseSceneComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetSettings_WithTemplates*)Z_Param__Result=AUniversalCamera::UseSceneComponent(Z_Param_SceneComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execUseActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetSettings_WithTemplates*)Z_Param__Result=AUniversalCamera::UseActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetAlternativeUpVector)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=AUniversalCamera::GetAlternativeUpVector(Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetAlternativeRightVector)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=AUniversalCamera::GetAlternativeRightVector(Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetAlternativeForwardVector)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=AUniversalCamera::GetAlternativeForwardVector(Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetConstrainDots)
	{
		P_GET_TARRAY(FVector2D,Z_Param_Dots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetConstrainDots(Z_Param_Dots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execToggleConstrainDots)
	{
		P_GET_UBOOL(Z_Param_ConstrainWithDots);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleConstrainDots(Z_Param_ConstrainWithDots);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetActorsLocation2D)
	{
		P_GET_TARRAY(AActor*,Z_Param_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=AUniversalCamera::GetActorsLocation2D(Z_Param_Actors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLag_GetTickDesiredZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Lag_GetTickDesiredZoom_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLag_GetTickDesiredRotation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->Lag_GetTickDesiredRotation_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLag_GetTickDesiredHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->Lag_GetTickDesiredHeight_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLag_GetTickDesiredSocketOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Lag_GetTickDesiredSocketOffset_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLag_GetTickDesiredTargetOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Lag_GetTickDesiredTargetOffset_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLag_GetTickDesiredLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->Lag_GetTickDesiredLocation_Implementation(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execIsFollowingAnyActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFollowingAnyActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execStopFollowing)
	{
		P_GET_UBOOL(Z_Param_bResetOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopFollowing(Z_Param_bResetOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execFollowTargetTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowTargetTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execFollowTarget)
	{
		P_GET_STRUCT(FTargetSettings_WithTemplates,Z_Param_TargetSettings);
		P_GET_STRUCT(FConstrainVector2,Z_Param_FollowAxis);
		P_GET_STRUCT(FBoolRotation,Z_Param_FollowRotations);
		P_GET_UBOOL(Z_Param_ResetOffsetIfPrematurelyEnded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FollowTarget(Z_Param_TargetSettings,Z_Param_FollowAxis,Z_Param_FollowRotations,Z_Param_ResetOffsetIfPrematurelyEnded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execToggleScreenSliding)
	{
		P_GET_UBOOL(Z_Param_Activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleScreenSliding(Z_Param_Activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execTogglePreciseMouseDrag)
	{
		P_GET_UBOOL(Z_Param_Activate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TogglePreciseMouseDrag(Z_Param_Activate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execOnEndEdgeScrolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndEdgeScrolling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execOnUpdateEdgeScrolling)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_SimplifiedDirection);
		P_GET_STRUCT(FVector2D,Z_Param_MovementDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdateEdgeScrolling_Implementation(ESimplifiedMovementDirection(Z_Param_SimplifiedDirection),Z_Param_MovementDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execOnBeginEdgeScrolling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginEdgeScrolling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execEdgeScrollingTick_Internal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EdgeScrollingTick_Internal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execEdgeScrollingTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardMultiplier);
		P_GET_UBOOL(Z_Param_bTargetOffset);
		P_GET_UBOOL(Z_Param_bSocketOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EdgeScrollingTick_Implementation(Z_Param_RightAxis,Z_Param_ForwardAxis,Z_Param_RightMultiplier,Z_Param_ForwardMultiplier,Z_Param_bTargetOffset,Z_Param_bSocketOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetTerrainHeightAdaptationValue)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetTerrainHeightAdaptationValue_Implementation(Z_Param_Out_IsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetCorrectedDestinationFromOriginCollisions)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FVector,Z_Param_Destination);
		P_GET_UBOOL_REF(Z_Param_Out_DidHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCorrectedDestinationFromOriginCollisions(Z_Param_Location,Z_Param_Destination,Z_Param_Out_DidHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetZoomInScaling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetZoomInScaling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetMovementScaling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementScaling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execZoomIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomIn(Z_Param_AxisValue,Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execRotateRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_RotateOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateRoll(Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_RotateOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execRotatePitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_RotateOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotatePitch(Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_RotateOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execRotateYaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_RotateOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateYaw(Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_RotateOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_NormalizeDirection);
		P_GET_UBOOL(Z_Param_MoveTargetOffset);
		P_GET_UBOOL(Z_Param_MoveSocketOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_ForwardAxis,Z_Param_RightAxis,Z_Param_UpAxis,Z_Param_Multiplier,Z_Param_NormalizeDirection,Z_Param_MoveTargetOffset,Z_Param_MoveSocketOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execMoveUp)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_MoveTargetOffset);
		P_GET_UBOOL(Z_Param_MoveSocketOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveUp(Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_MoveTargetOffset,Z_Param_MoveSocketOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_MoveTargetOffset);
		P_GET_UBOOL(Z_Param_MoveSocketOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_MoveTargetOffset,Z_Param_MoveSocketOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_MoveTargetOffset);
		P_GET_UBOOL(Z_Param_MoveSocketOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_MoveTargetOffset,Z_Param_MoveSocketOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execQuickLoadSettings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickLoadSettings(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execQuickSaveSettings)
	{
		P_GET_TARRAY(uint8,Z_Param_SettingsSaveFormat);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickSaveSettings(Z_Param_SettingsSaveFormat,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execQuickLoadPosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickLoadPosition(Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execQuickSavePosition)
	{
		P_GET_STRUCT(FUniversalCameraPositionSaveFormat,Z_Param_PositionSaveFormat);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuickSavePosition(Z_Param_PositionSaveFormat,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLoadPositionSaveFormat)
	{
		P_GET_STRUCT(FUniversalCameraPositionSaveFormat,Z_Param_PositionSaveFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadPositionSaveFormat(Z_Param_PositionSaveFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetPositionSaveFormat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUniversalCameraPositionSaveFormat*)Z_Param__Result=P_THIS->GetPositionSaveFormat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execLoadSettingsSaveFormat)
	{
		P_GET_TARRAY(uint8,Z_Param_SettingsSaveFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadSettingsSaveFormat(Z_Param_SettingsSaveFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetSettingsSaveFormat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetSettingsSaveFormat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execZoomAtCursor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_CollisionChannel);
		P_GET_UBOOL_REF(Z_Param_Out_DidHit);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_LockZoomLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomAtCursor(Z_Param_AxisValue,ECollisionChannel(Z_Param_CollisionChannel),Z_Param_Out_DidHit,Z_Param_Multiplier,Z_Param_LockZoomLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execZoomAtLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_LockZoomLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoomAtLocation(Z_Param_AxisValue,Z_Param_Location,Z_Param_Multiplier,Z_Param_LockZoomLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetActorFocusLocation)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_IdealZoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorFocusLocation_Implementation(Z_Param_Actor,Z_Param_Out_Location,Z_Param_Out_IdealZoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execResetRotationOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetRotationOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execResetSocketOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetSocketOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execResetTargetOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTargetOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execRotatePitchAroundPivot)
	{
		P_GET_STRUCT(FVector,Z_Param_Pivot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_GET_UBOOL(Z_Param_LockZAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotatePitchAroundPivot(Z_Param_Pivot,Z_Param_AxisValue,Z_Param_Multiplier,Z_Param_LockZAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execRotateYawAroundPivot)
	{
		P_GET_STRUCT(FVector,Z_Param_Pivot);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AxisValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Multiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateYawAroundPivot(Z_Param_Pivot,Z_Param_AxisValue,Z_Param_Multiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetImpactPointUnderCursor)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_TraceComplex);
		P_GET_UBOOL_REF(Z_Param_Out_DidHit);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=AUniversalCamera::GetImpactPointUnderCursor(Z_Param_PlayerController,ECollisionChannel(Z_Param_TraceChannel),Z_Param_TraceComplex,Z_Param_Out_DidHit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetMousePositionRatio)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_RawPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=AUniversalCamera::GetMousePositionRatio(Z_Param_PlayerController,Z_Param_Out_RawPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredZoom(Z_Param_NewZoom,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredRotationOffset)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotationOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRotationOffset(Z_Param_NewRotationOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRotation(Z_Param_NewRotation,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredRollOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRollOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRollOffset(Z_Param_NewRollOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRoll);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredRoll(Z_Param_NewRoll,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredPitchOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitchOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredPitchOffset(Z_Param_NewPitchOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitch);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredPitch(Z_Param_NewPitch,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredYawOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewYawOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredYawOffset(Z_Param_NewYawOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredYaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredYaw(Z_Param_NewYaw,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredSocketOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_NewSocketOffset);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSocketOffset(Z_Param_NewSocketOffset,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredTargetOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_NewTargetOffset);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredTargetOffset(Z_Param_NewTargetOffset,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredLocation(Z_Param_NewLocation,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execSetDesiredPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FVector,Z_Param_NewTargetOffset);
		P_GET_STRUCT(FVector,Z_Param_NewSocketOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewYaw);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewPitch);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewRoll);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewZoom);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredPosition(Z_Param_NewLocation,Z_Param_NewTargetOffset,Z_Param_NewSocketOffset,Z_Param_NewYaw,Z_Param_NewPitch,Z_Param_NewRoll,Z_Param_NewZoom,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execAreFeaturesEnabled)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FeaturesToTest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AreFeaturesEnabled(Z_Param_FeaturesToTest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execDisableFeatures)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FeaturesToDisable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableFeatures(Z_Param_FeaturesToDisable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execEnableFeatures)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FeaturesToEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableFeatures(Z_Param_FeaturesToEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetCorrectedDestinationFromRestrictions)
	{
		P_GET_STRUCT(FVector,Z_Param_Destination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCorrectedDestinationFromRestrictions(Z_Param_Destination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetClampedZoom)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Zoom);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClampedZoom(Z_Param_Zoom);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetClampedRoll)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Roll);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClampedRoll(Z_Param_Roll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetClampedPitch)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClampedPitch(Z_Param_Pitch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetClampedYaw)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetClampedYaw(Z_Param_Yaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetClampedOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_Offset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClampedOffset(Z_Param_Offset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetClampedLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetClampedLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execAbortTravelTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbortTravelTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execEndTravelTask)
	{
		P_GET_UBOOL(Z_Param_Abort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndTravelTask(Z_Param_Abort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execTravelTaskTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TravelTaskTick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execStartTraveling_Internal)
	{
		P_GET_OBJECT(UAsyncNode,Z_Param_AsyncNode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTraveling_Internal(Z_Param_AsyncNode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetDesiredCameraWorldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDesiredCameraWorldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetDesiredSocketOffsetWorldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDesiredSocketOffsetWorldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetSocketOffsetWorldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSocketOffsetWorldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetDesiredTargetOffsetWorldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetDesiredTargetOffsetWorldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetTargetOffsetWorldLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTargetOffsetWorldLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetDesiredRotationWithOffset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetDesiredRotationWithOffset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUniversalCamera::execGetCameraComponent)
	{
		P_GET_UBOOL_REF(Z_Param_Out_HasCameraAttached);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent(Z_Param_Out_HasCameraAttached);
		P_NATIVE_END;
	}
	struct UniversalCamera_eventEdgeScrollingTick_Parms
	{
		float RightAxis;
		float ForwardAxis;
		float RightMultiplier;
		float ForwardMultiplier;
		bool bTargetOffset;
		bool bSocketOffset;
	};
	struct UniversalCamera_eventGetActorFocusLocation_Parms
	{
		AActor* Actor;
		FVector Location;
		float IdealZoom;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventGetActorFocusLocation_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct UniversalCamera_eventGetMovementScaling_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventGetMovementScaling_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms
	{
		bool IsValid;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct UniversalCamera_eventGetZoomInScaling_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventGetZoomInScaling_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct UniversalCamera_eventLag_GetTickDesiredHeight_Parms
	{
		float DeltaTime;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventLag_GetTickDesiredHeight_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct UniversalCamera_eventLag_GetTickDesiredLocation_Parms
	{
		float DeltaTime;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventLag_GetTickDesiredLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct UniversalCamera_eventLag_GetTickDesiredRotation_Parms
	{
		float DeltaTime;
		FRotator ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventLag_GetTickDesiredRotation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct UniversalCamera_eventLag_GetTickDesiredSocketOffset_Parms
	{
		float DeltaTime;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventLag_GetTickDesiredSocketOffset_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct UniversalCamera_eventLag_GetTickDesiredTargetOffset_Parms
	{
		float DeltaTime;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventLag_GetTickDesiredTargetOffset_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct UniversalCamera_eventLag_GetTickDesiredZoom_Parms
	{
		float DeltaTime;
		float ReturnValue;

		/** Constructor, initializes return property only **/
		UniversalCamera_eventLag_GetTickDesiredZoom_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct UniversalCamera_eventOnBeginScreenSliding_Parms
	{
		FVector2D OriginPosition;
	};
	struct UniversalCamera_eventOnStoppedFollowing_Parms
	{
		TEnumAsByte<EStopFollowingReason> Reason;
	};
	struct UniversalCamera_eventOnUpdateEdgeScrolling_Parms
	{
		TEnumAsByte<ESimplifiedMovementDirection> SimplifiedDirection;
		FVector2D MovementDirection;
	};
	struct UniversalCamera_eventOnUpdateScreenSliding_Parms
	{
		FVector2D Direction;
	};
	static FName NAME_AUniversalCamera_EdgeScrollingTick = FName(TEXT("EdgeScrollingTick"));
	void AUniversalCamera::EdgeScrollingTick(float RightAxis, float ForwardAxis, float RightMultiplier, float ForwardMultiplier, bool bTargetOffset, bool bSocketOffset)
	{
		UniversalCamera_eventEdgeScrollingTick_Parms Parms;
		Parms.RightAxis=RightAxis;
		Parms.ForwardAxis=ForwardAxis;
		Parms.RightMultiplier=RightMultiplier;
		Parms.ForwardMultiplier=ForwardMultiplier;
		Parms.bTargetOffset=bTargetOffset ? true : false;
		Parms.bSocketOffset=bSocketOffset ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_EdgeScrollingTick),&Parms);
	}
	static FName NAME_AUniversalCamera_GetActorFocusLocation = FName(TEXT("GetActorFocusLocation"));
	bool AUniversalCamera::GetActorFocusLocation(AActor* Actor, FVector& Location, float& IdealZoom)
	{
		UniversalCamera_eventGetActorFocusLocation_Parms Parms;
		Parms.Actor=Actor;
		Parms.Location=Location;
		Parms.IdealZoom=IdealZoom;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_GetActorFocusLocation),&Parms);
		Location=Parms.Location;
		IdealZoom=Parms.IdealZoom;
		return !!Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_GetMovementScaling = FName(TEXT("GetMovementScaling"));
	float AUniversalCamera::GetMovementScaling()
	{
		UniversalCamera_eventGetMovementScaling_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_GetMovementScaling),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_GetTerrainHeightAdaptationValue = FName(TEXT("GetTerrainHeightAdaptationValue"));
	float AUniversalCamera::GetTerrainHeightAdaptationValue(bool& IsValid)
	{
		UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms Parms;
		Parms.IsValid=IsValid ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_GetTerrainHeightAdaptationValue),&Parms);
		IsValid=Parms.IsValid;
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_GetZoomInScaling = FName(TEXT("GetZoomInScaling"));
	float AUniversalCamera::GetZoomInScaling()
	{
		UniversalCamera_eventGetZoomInScaling_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_GetZoomInScaling),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_Lag_GetTickDesiredHeight = FName(TEXT("Lag_GetTickDesiredHeight"));
	float AUniversalCamera::Lag_GetTickDesiredHeight(float DeltaTime)
	{
		UniversalCamera_eventLag_GetTickDesiredHeight_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_Lag_GetTickDesiredHeight),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_Lag_GetTickDesiredLocation = FName(TEXT("Lag_GetTickDesiredLocation"));
	FVector AUniversalCamera::Lag_GetTickDesiredLocation(float DeltaTime)
	{
		UniversalCamera_eventLag_GetTickDesiredLocation_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_Lag_GetTickDesiredLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_Lag_GetTickDesiredRotation = FName(TEXT("Lag_GetTickDesiredRotation"));
	FRotator AUniversalCamera::Lag_GetTickDesiredRotation(float DeltaTime)
	{
		UniversalCamera_eventLag_GetTickDesiredRotation_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_Lag_GetTickDesiredRotation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_Lag_GetTickDesiredSocketOffset = FName(TEXT("Lag_GetTickDesiredSocketOffset"));
	FVector AUniversalCamera::Lag_GetTickDesiredSocketOffset(float DeltaTime)
	{
		UniversalCamera_eventLag_GetTickDesiredSocketOffset_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_Lag_GetTickDesiredSocketOffset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_Lag_GetTickDesiredTargetOffset = FName(TEXT("Lag_GetTickDesiredTargetOffset"));
	FVector AUniversalCamera::Lag_GetTickDesiredTargetOffset(float DeltaTime)
	{
		UniversalCamera_eventLag_GetTickDesiredTargetOffset_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_Lag_GetTickDesiredTargetOffset),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_Lag_GetTickDesiredZoom = FName(TEXT("Lag_GetTickDesiredZoom"));
	float AUniversalCamera::Lag_GetTickDesiredZoom(float DeltaTime)
	{
		UniversalCamera_eventLag_GetTickDesiredZoom_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_Lag_GetTickDesiredZoom),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AUniversalCamera_OnBeginEdgeScrolling = FName(TEXT("OnBeginEdgeScrolling"));
	void AUniversalCamera::OnBeginEdgeScrolling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnBeginEdgeScrolling),NULL);
	}
	static FName NAME_AUniversalCamera_OnBeginScreenSliding = FName(TEXT("OnBeginScreenSliding"));
	void AUniversalCamera::OnBeginScreenSliding(FVector2D OriginPosition)
	{
		UniversalCamera_eventOnBeginScreenSliding_Parms Parms;
		Parms.OriginPosition=OriginPosition;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnBeginScreenSliding),&Parms);
	}
	static FName NAME_AUniversalCamera_OnEndEdgeScrolling = FName(TEXT("OnEndEdgeScrolling"));
	void AUniversalCamera::OnEndEdgeScrolling()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnEndEdgeScrolling),NULL);
	}
	static FName NAME_AUniversalCamera_OnEndScreenSliding = FName(TEXT("OnEndScreenSliding"));
	void AUniversalCamera::OnEndScreenSliding()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnEndScreenSliding),NULL);
	}
	static FName NAME_AUniversalCamera_OnStoppedFollowing = FName(TEXT("OnStoppedFollowing"));
	void AUniversalCamera::OnStoppedFollowing(EStopFollowingReason Reason)
	{
		UniversalCamera_eventOnStoppedFollowing_Parms Parms;
		Parms.Reason=Reason;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnStoppedFollowing),&Parms);
	}
	static FName NAME_AUniversalCamera_OnUpdateEdgeScrolling = FName(TEXT("OnUpdateEdgeScrolling"));
	void AUniversalCamera::OnUpdateEdgeScrolling(ESimplifiedMovementDirection SimplifiedDirection, FVector2D MovementDirection)
	{
		UniversalCamera_eventOnUpdateEdgeScrolling_Parms Parms;
		Parms.SimplifiedDirection=SimplifiedDirection;
		Parms.MovementDirection=MovementDirection;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnUpdateEdgeScrolling),&Parms);
	}
	static FName NAME_AUniversalCamera_OnUpdateScreenSliding = FName(TEXT("OnUpdateScreenSliding"));
	void AUniversalCamera::OnUpdateScreenSliding(FVector2D Direction)
	{
		UniversalCamera_eventOnUpdateScreenSliding_Parms Parms;
		Parms.Direction=Direction;
		ProcessEvent(FindFunctionChecked(NAME_AUniversalCamera_OnUpdateScreenSliding),&Parms);
	}
	void AUniversalCamera::StaticRegisterNativesAUniversalCamera()
	{
		UClass* Class = AUniversalCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbortTravelTask", &AUniversalCamera::execAbortTravelTask },
			{ "AreFeaturesEnabled", &AUniversalCamera::execAreFeaturesEnabled },
			{ "DisableFeatures", &AUniversalCamera::execDisableFeatures },
			{ "EdgeScrollingTick", &AUniversalCamera::execEdgeScrollingTick },
			{ "EdgeScrollingTick_Internal", &AUniversalCamera::execEdgeScrollingTick_Internal },
			{ "EnableFeatures", &AUniversalCamera::execEnableFeatures },
			{ "EndTravelTask", &AUniversalCamera::execEndTravelTask },
			{ "FollowTarget", &AUniversalCamera::execFollowTarget },
			{ "FollowTargetTick", &AUniversalCamera::execFollowTargetTick },
			{ "GetActorFocusLocation", &AUniversalCamera::execGetActorFocusLocation },
			{ "GetActorsLocation2D", &AUniversalCamera::execGetActorsLocation2D },
			{ "GetAlternativeForwardVector", &AUniversalCamera::execGetAlternativeForwardVector },
			{ "GetAlternativeRightVector", &AUniversalCamera::execGetAlternativeRightVector },
			{ "GetAlternativeUpVector", &AUniversalCamera::execGetAlternativeUpVector },
			{ "GetCameraComponent", &AUniversalCamera::execGetCameraComponent },
			{ "GetClampedLocation", &AUniversalCamera::execGetClampedLocation },
			{ "GetClampedOffset", &AUniversalCamera::execGetClampedOffset },
			{ "GetClampedPitch", &AUniversalCamera::execGetClampedPitch },
			{ "GetClampedRoll", &AUniversalCamera::execGetClampedRoll },
			{ "GetClampedYaw", &AUniversalCamera::execGetClampedYaw },
			{ "GetClampedZoom", &AUniversalCamera::execGetClampedZoom },
			{ "GetCorrectedDestinationFromOriginCollisions", &AUniversalCamera::execGetCorrectedDestinationFromOriginCollisions },
			{ "GetCorrectedDestinationFromRestrictions", &AUniversalCamera::execGetCorrectedDestinationFromRestrictions },
			{ "GetDesiredCameraWorldLocation", &AUniversalCamera::execGetDesiredCameraWorldLocation },
			{ "GetDesiredRotationWithOffset", &AUniversalCamera::execGetDesiredRotationWithOffset },
			{ "GetDesiredSocketOffsetWorldLocation", &AUniversalCamera::execGetDesiredSocketOffsetWorldLocation },
			{ "GetDesiredTargetOffsetWorldLocation", &AUniversalCamera::execGetDesiredTargetOffsetWorldLocation },
			{ "GetImpactPointUnderCursor", &AUniversalCamera::execGetImpactPointUnderCursor },
			{ "GetMousePositionRatio", &AUniversalCamera::execGetMousePositionRatio },
			{ "GetMovementScaling", &AUniversalCamera::execGetMovementScaling },
			{ "GetPositionSaveFormat", &AUniversalCamera::execGetPositionSaveFormat },
			{ "GetSettingsSaveFormat", &AUniversalCamera::execGetSettingsSaveFormat },
			{ "GetSocketOffsetWorldLocation", &AUniversalCamera::execGetSocketOffsetWorldLocation },
			{ "GetTargetOffsetWorldLocation", &AUniversalCamera::execGetTargetOffsetWorldLocation },
			{ "GetTerrainHeightAdaptationValue", &AUniversalCamera::execGetTerrainHeightAdaptationValue },
			{ "GetZoomInScaling", &AUniversalCamera::execGetZoomInScaling },
			{ "IsFollowingAnyActor", &AUniversalCamera::execIsFollowingAnyActor },
			{ "Lag_GetTickDesiredHeight", &AUniversalCamera::execLag_GetTickDesiredHeight },
			{ "Lag_GetTickDesiredLocation", &AUniversalCamera::execLag_GetTickDesiredLocation },
			{ "Lag_GetTickDesiredRotation", &AUniversalCamera::execLag_GetTickDesiredRotation },
			{ "Lag_GetTickDesiredSocketOffset", &AUniversalCamera::execLag_GetTickDesiredSocketOffset },
			{ "Lag_GetTickDesiredTargetOffset", &AUniversalCamera::execLag_GetTickDesiredTargetOffset },
			{ "Lag_GetTickDesiredZoom", &AUniversalCamera::execLag_GetTickDesiredZoom },
			{ "LoadPositionSaveFormat", &AUniversalCamera::execLoadPositionSaveFormat },
			{ "LoadSettingsSaveFormat", &AUniversalCamera::execLoadSettingsSaveFormat },
			{ "Move", &AUniversalCamera::execMove },
			{ "MoveForward", &AUniversalCamera::execMoveForward },
			{ "MoveRight", &AUniversalCamera::execMoveRight },
			{ "MoveUp", &AUniversalCamera::execMoveUp },
			{ "OnBeginEdgeScrolling", &AUniversalCamera::execOnBeginEdgeScrolling },
			{ "OnEndEdgeScrolling", &AUniversalCamera::execOnEndEdgeScrolling },
			{ "OnUpdateEdgeScrolling", &AUniversalCamera::execOnUpdateEdgeScrolling },
			{ "QuickLoadPosition", &AUniversalCamera::execQuickLoadPosition },
			{ "QuickLoadSettings", &AUniversalCamera::execQuickLoadSettings },
			{ "QuickSavePosition", &AUniversalCamera::execQuickSavePosition },
			{ "QuickSaveSettings", &AUniversalCamera::execQuickSaveSettings },
			{ "ResetRotationOffset", &AUniversalCamera::execResetRotationOffset },
			{ "ResetSocketOffset", &AUniversalCamera::execResetSocketOffset },
			{ "ResetTargetOffset", &AUniversalCamera::execResetTargetOffset },
			{ "RotatePitch", &AUniversalCamera::execRotatePitch },
			{ "RotatePitchAroundPivot", &AUniversalCamera::execRotatePitchAroundPivot },
			{ "RotateRoll", &AUniversalCamera::execRotateRoll },
			{ "RotateYaw", &AUniversalCamera::execRotateYaw },
			{ "RotateYawAroundPivot", &AUniversalCamera::execRotateYawAroundPivot },
			{ "SetConstrainDots", &AUniversalCamera::execSetConstrainDots },
			{ "SetDesiredLocation", &AUniversalCamera::execSetDesiredLocation },
			{ "SetDesiredPitch", &AUniversalCamera::execSetDesiredPitch },
			{ "SetDesiredPitchOffset", &AUniversalCamera::execSetDesiredPitchOffset },
			{ "SetDesiredPosition", &AUniversalCamera::execSetDesiredPosition },
			{ "SetDesiredRoll", &AUniversalCamera::execSetDesiredRoll },
			{ "SetDesiredRollOffset", &AUniversalCamera::execSetDesiredRollOffset },
			{ "SetDesiredRotation", &AUniversalCamera::execSetDesiredRotation },
			{ "SetDesiredRotationOffset", &AUniversalCamera::execSetDesiredRotationOffset },
			{ "SetDesiredSocketOffset", &AUniversalCamera::execSetDesiredSocketOffset },
			{ "SetDesiredTargetOffset", &AUniversalCamera::execSetDesiredTargetOffset },
			{ "SetDesiredYaw", &AUniversalCamera::execSetDesiredYaw },
			{ "SetDesiredYawOffset", &AUniversalCamera::execSetDesiredYawOffset },
			{ "SetDesiredZoom", &AUniversalCamera::execSetDesiredZoom },
			{ "StartTraveling_Internal", &AUniversalCamera::execStartTraveling_Internal },
			{ "StopFollowing", &AUniversalCamera::execStopFollowing },
			{ "ToggleConstrainDots", &AUniversalCamera::execToggleConstrainDots },
			{ "TogglePreciseMouseDrag", &AUniversalCamera::execTogglePreciseMouseDrag },
			{ "ToggleScreenSliding", &AUniversalCamera::execToggleScreenSliding },
			{ "TravelTaskTick", &AUniversalCamera::execTravelTaskTick },
			{ "UseActor", &AUniversalCamera::execUseActor },
			{ "UseSceneComponent", &AUniversalCamera::execUseSceneComponent },
			{ "UseSocket", &AUniversalCamera::execUseSocket },
			{ "ZoomAtCursor", &AUniversalCamera::execZoomAtCursor },
			{ "ZoomAtLocation", &AUniversalCamera::execZoomAtLocation },
			{ "ZoomIn", &AUniversalCamera::execZoomIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUniversalCamera_AbortTravelTask_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_AbortTravelTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|CameraTravel" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_AbortTravelTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "AbortTravelTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_AbortTravelTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_AbortTravelTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_AbortTravelTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_AbortTravelTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics
	{
		struct UniversalCamera_eventAreFeaturesEnabled_Parms
		{
			int32 FeaturesToTest;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeaturesToTest_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FeaturesToTest;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_FeaturesToTest_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UniversalCameraPlugin.EEnabledFeatures" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_FeaturesToTest = { "FeaturesToTest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventAreFeaturesEnabled_Parms, FeaturesToTest), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_FeaturesToTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_FeaturesToTest_MetaData)) };
	void Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalCamera_eventAreFeaturesEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventAreFeaturesEnabled_Parms), &Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_FeaturesToTest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Features" },
		{ "Comment", "//\x09Returns true if all the tagged features are enabled.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns true if all the tagged features are enabled." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "AreFeaturesEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::UniversalCamera_eventAreFeaturesEnabled_Parms), Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics
	{
		struct UniversalCamera_eventDisableFeatures_Parms
		{
			int32 FeaturesToDisable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeaturesToDisable_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FeaturesToDisable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::NewProp_FeaturesToDisable_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UniversalCameraPlugin.EEnabledFeatures" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::NewProp_FeaturesToDisable = { "FeaturesToDisable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventDisableFeatures_Parms, FeaturesToDisable), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::NewProp_FeaturesToDisable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::NewProp_FeaturesToDisable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::NewProp_FeaturesToDisable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Features" },
		{ "Comment", "//\x09Toggles the listed features Off.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Toggles the listed features Off." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "DisableFeatures", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::UniversalCamera_eventDisableFeatures_Parms), Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_DisableFeatures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_DisableFeatures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightMultiplier;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardMultiplier;
		static void NewProp_bTargetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTargetOffset;
		static void NewProp_bSocketOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSocketOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventEdgeScrollingTick_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventEdgeScrollingTick_Parms, ForwardAxis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_RightMultiplier = { "RightMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventEdgeScrollingTick_Parms, RightMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_ForwardMultiplier = { "ForwardMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventEdgeScrollingTick_Parms, ForwardMultiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bTargetOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventEdgeScrollingTick_Parms*)Obj)->bTargetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bTargetOffset = { "bTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventEdgeScrollingTick_Parms), &Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bTargetOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bSocketOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventEdgeScrollingTick_Parms*)Obj)->bSocketOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bSocketOffset = { "bSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventEdgeScrollingTick_Parms), &Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bSocketOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_RightAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_ForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_RightMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_ForwardMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::NewProp_bSocketOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin | Edge Scrolling" },
		{ "Comment", "//\x09Override this to implement your own EdgeScrolling method\n//\x09\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Override this to implement your own EdgeScrolling method" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "EdgeScrollingTick", nullptr, nullptr, sizeof(UniversalCamera_eventEdgeScrollingTick_Parms), Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin | Edge Scrolling" },
		{ "Comment", "//\x09Will return the strenght multiplier of the EdgeScrolling. If \"UseEdgeScrollingStrength\" is false, will return 1.f.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Will return the strenght multiplier of the EdgeScrolling. If \"UseEdgeScrollingStrength\" is false, will return 1.f." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "EdgeScrollingTick_Internal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics
	{
		struct UniversalCamera_eventEnableFeatures_Parms
		{
			int32 FeaturesToEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeaturesToEnable_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FeaturesToEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::NewProp_FeaturesToEnable_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UniversalCameraPlugin.EEnabledFeatures" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::NewProp_FeaturesToEnable = { "FeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventEnableFeatures_Parms, FeaturesToEnable), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::NewProp_FeaturesToEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::NewProp_FeaturesToEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::NewProp_FeaturesToEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Features" },
		{ "Comment", "//\x09Toggles the listed features On.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Toggles the listed features On." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "EnableFeatures", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::UniversalCamera_eventEnableFeatures_Parms), Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_EnableFeatures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_EnableFeatures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics
	{
		struct UniversalCamera_eventEndTravelTask_Parms
		{
			bool Abort;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Abort_MetaData[];
#endif
		static void NewProp_Abort_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Abort;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort_SetBit(void* Obj)
	{
		((UniversalCamera_eventEndTravelTask_Parms*)Obj)->Abort = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort = { "Abort", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventEndTravelTask_Parms), &Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::NewProp_Abort,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "EndTravelTask", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::UniversalCamera_eventEndTravelTask_Parms), Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_EndTravelTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_EndTravelTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics
	{
		struct UniversalCamera_eventFollowTarget_Parms
		{
			FTargetSettings_WithTemplates TargetSettings;
			FConstrainVector2 FollowAxis;
			FBoolRotation FollowRotations;
			bool ResetOffsetIfPrematurelyEnded;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowRotations;
		static void NewProp_ResetOffsetIfPrematurelyEnded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ResetOffsetIfPrematurelyEnded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_TargetSettings = { "TargetSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventFollowTarget_Parms, TargetSettings), Z_Construct_UScriptStruct_FTargetSettings_WithTemplates, METADATA_PARAMS(nullptr, 0) }; // 2639154408
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_FollowAxis = { "FollowAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventFollowTarget_Parms, FollowAxis), Z_Construct_UScriptStruct_FConstrainVector2, METADATA_PARAMS(nullptr, 0) }; // 3976140335
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_FollowRotations = { "FollowRotations", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventFollowTarget_Parms, FollowRotations), Z_Construct_UScriptStruct_FBoolRotation, METADATA_PARAMS(nullptr, 0) }; // 2897540821
	void Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_ResetOffsetIfPrematurelyEnded_SetBit(void* Obj)
	{
		((UniversalCamera_eventFollowTarget_Parms*)Obj)->ResetOffsetIfPrematurelyEnded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_ResetOffsetIfPrematurelyEnded = { "ResetOffsetIfPrematurelyEnded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventFollowTarget_Parms), &Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_ResetOffsetIfPrematurelyEnded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_TargetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_FollowAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_FollowRotations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::NewProp_ResetOffsetIfPrematurelyEnded,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Follow Actor" },
		{ "Comment", "//\x09""Follow the target Actor (Mesh and Socket are optional)\n//\x09You won't be able to move the Origin while following, however you can move the Offset\n//\x09@Param ResetOffsetIfPrematurelyEnded Will reset the offset if the task prematurely ended (invalid target, disabled feature, etc.)\n" },
		{ "CPP_Default_ResetOffsetIfPrematurelyEnded", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Follow the target Actor (Mesh and Socket are optional)\nYou won't be able to move the Origin while following, however you can move the Offset\n@Param ResetOffsetIfPrematurelyEnded Will reset the offset if the task prematurely ended (invalid target, disabled feature, etc.)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "FollowTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::UniversalCamera_eventFollowTarget_Parms), Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_FollowTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_FollowTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_FollowTargetTick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_FollowTargetTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_FollowTargetTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "FollowTargetTick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_FollowTargetTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_FollowTargetTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_FollowTargetTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_FollowTargetTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_IdealZoom;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetActorFocusLocation_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetActorFocusLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_IdealZoom = { "IdealZoom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetActorFocusLocation_Parms, IdealZoom), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalCamera_eventGetActorFocusLocation_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventGetActorFocusLocation_Parms), &Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_IdealZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "// Returns the focus position for the Actor\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the focus position for the Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetActorFocusLocation", nullptr, nullptr, sizeof(UniversalCamera_eventGetActorFocusLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1CC80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics
	{
		struct UniversalCamera_eventGetActorsLocation2D_Parms
		{
			TArray<AActor*> Actors;
			TArray<FVector2D> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetActorsLocation2D_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetActorsLocation2D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_Actors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Dots Shape" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetActorsLocation2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::UniversalCamera_eventGetActorsLocation2D_Parms), Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics
	{
		struct UniversalCamera_eventGetAlternativeForwardVector_Parms
		{
			FRotator Rotation;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetAlternativeForwardVector_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetAlternativeForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Character Tools" },
		{ "Comment", "//\x09Returns the Forward Vector using only the Yaw axis\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the Forward Vector using only the Yaw axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetAlternativeForwardVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::UniversalCamera_eventGetAlternativeForwardVector_Parms), Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics
	{
		struct UniversalCamera_eventGetAlternativeRightVector_Parms
		{
			FRotator Rotation;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetAlternativeRightVector_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetAlternativeRightVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Character Tools" },
		{ "Comment", "//\x09Returns the Right Vector using only the Yaw axis\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the Right Vector using only the Yaw axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetAlternativeRightVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::UniversalCamera_eventGetAlternativeRightVector_Parms), Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics
	{
		struct UniversalCamera_eventGetAlternativeUpVector_Parms
		{
			FRotator Rotation;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetAlternativeUpVector_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetAlternativeUpVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Character Tools" },
		{ "Comment", "//\x09Returns the Up Vector moving only on the Z axis\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the Up Vector moving only on the Z axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetAlternativeUpVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::UniversalCamera_eventGetAlternativeUpVector_Parms), Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics
	{
		struct UniversalCamera_eventGetCameraComponent_Parms
		{
			bool HasCameraAttached;
			UCameraComponent* ReturnValue;
		};
		static void NewProp_HasCameraAttached_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasCameraAttached;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_HasCameraAttached_SetBit(void* Obj)
	{
		((UniversalCamera_eventGetCameraComponent_Parms*)Obj)->HasCameraAttached = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_HasCameraAttached = { "HasCameraAttached", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventGetCameraComponent_Parms), &Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_HasCameraAttached_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_HasCameraAttached,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::UniversalCamera_eventGetCameraComponent_Parms), Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics
	{
		struct UniversalCamera_eventGetClampedLocation_Parms
		{
			FVector Location;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09RESTRICTIONS\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "RESTRICTIONS" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetClampedLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::UniversalCamera_eventGetClampedLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetClampedLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetClampedLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics
	{
		struct UniversalCamera_eventGetClampedOffset_Parms
		{
			FVector Offset;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedOffset_Parms, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetClampedOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::UniversalCamera_eventGetClampedOffset_Parms), Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetClampedOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetClampedOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics
	{
		struct UniversalCamera_eventGetClampedPitch_Parms
		{
			float Pitch;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedPitch_Parms, Pitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedPitch_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetClampedPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::UniversalCamera_eventGetClampedPitch_Parms), Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetClampedPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetClampedPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics
	{
		struct UniversalCamera_eventGetClampedRoll_Parms
		{
			float Roll;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Roll;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::NewProp_Roll = { "Roll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedRoll_Parms, Roll), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedRoll_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::NewProp_Roll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetClampedRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::UniversalCamera_eventGetClampedRoll_Parms), Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetClampedRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetClampedRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics
	{
		struct UniversalCamera_eventGetClampedYaw_Parms
		{
			float Yaw;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedYaw_Parms, Yaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedYaw_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetClampedYaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::UniversalCamera_eventGetClampedYaw_Parms), Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetClampedYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetClampedYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics
	{
		struct UniversalCamera_eventGetClampedZoom_Parms
		{
			float Zoom;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedZoom_Parms, Zoom), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetClampedZoom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetClampedZoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::UniversalCamera_eventGetClampedZoom_Parms), Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetClampedZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetClampedZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics
	{
		struct UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms
		{
			FVector Location;
			FVector Destination;
			bool DidHit;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static void NewProp_DidHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DidHit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_DidHit_SetBit(void* Obj)
	{
		((UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms*)Obj)->DidHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_DidHit = { "DidHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms), &Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_DidHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_DidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin | Origin Collisions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetCorrectedDestinationFromOriginCollisions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::UniversalCamera_eventGetCorrectedDestinationFromOriginCollisions_Parms), Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics
	{
		struct UniversalCamera_eventGetCorrectedDestinationFromRestrictions_Parms
		{
			FVector Destination;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Destination;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetCorrectedDestinationFromRestrictions_Parms, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetCorrectedDestinationFromRestrictions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::NewProp_Destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Basic Movement & Zoom|Restrictions|Location" },
		{ "Comment", "//\x09Get the Corrected Destination from Restrictions\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Get the Corrected Destination from Restrictions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetCorrectedDestinationFromRestrictions", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::UniversalCamera_eventGetCorrectedDestinationFromRestrictions_Parms), Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics
	{
		struct UniversalCamera_eventGetDesiredCameraWorldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetDesiredCameraWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "Comment", "//\x09Returns the desired location of the CameraComponent\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the desired location of the CameraComponent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetDesiredCameraWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::UniversalCamera_eventGetDesiredCameraWorldLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics
	{
		struct UniversalCamera_eventGetDesiredRotationWithOffset_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetDesiredRotationWithOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetDesiredRotationWithOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::UniversalCamera_eventGetDesiredRotationWithOffset_Parms), Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics
	{
		struct UniversalCamera_eventGetDesiredSocketOffsetWorldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetDesiredSocketOffsetWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetDesiredSocketOffsetWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::UniversalCamera_eventGetDesiredSocketOffsetWorldLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics
	{
		struct UniversalCamera_eventGetDesiredTargetOffsetWorldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetDesiredTargetOffsetWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetDesiredTargetOffsetWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::UniversalCamera_eventGetDesiredTargetOffsetWorldLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics
	{
		struct UniversalCamera_eventGetImpactPointUnderCursor_Parms
		{
			APlayerController* PlayerController;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			bool TraceComplex;
			bool DidHit;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
		static void NewProp_DidHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DidHit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetImpactPointUnderCursor_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetImpactPointUnderCursor_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	void Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((UniversalCamera_eventGetImpactPointUnderCursor_Parms*)Obj)->TraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventGetImpactPointUnderCursor_Parms), &Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_DidHit_SetBit(void* Obj)
	{
		((UniversalCamera_eventGetImpactPointUnderCursor_Parms*)Obj)->DidHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_DidHit = { "DidHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventGetImpactPointUnderCursor_Parms), &Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_DidHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetImpactPointUnderCursor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_TraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_DidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09Returns the ImpactPoint of the HitResult of \"GetHitResultUnderCursor\"\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the ImpactPoint of the HitResult of \"GetHitResultUnderCursor\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetImpactPointUnderCursor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::UniversalCamera_eventGetImpactPointUnderCursor_Parms), Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C82401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics
	{
		struct UniversalCamera_eventGetMousePositionRatio_Parms
		{
			APlayerController* PlayerController;
			FVector2D RawPosition;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawPosition;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetMousePositionRatio_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::NewProp_RawPosition = { "RawPosition", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetMousePositionRatio_Parms, RawPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetMousePositionRatio_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::NewProp_RawPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09Returns the mouse position relative to the viewport size\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns the mouse position relative to the viewport size" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetMousePositionRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::UniversalCamera_eventGetMousePositionRatio_Parms), Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C82401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetMovementScaling_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// Override this to make your own scaling method!\n// You don't need to worry about MinimumMovementSpeed and MaximumMovementSpeed as it is automatically applied.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Override this to make your own scaling method!\nYou don't need to worry about MinimumMovementSpeed and MaximumMovementSpeed as it is automatically applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetMovementScaling", nullptr, nullptr, sizeof(UniversalCamera_eventGetMovementScaling_Parms), Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetMovementScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetMovementScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics
	{
		struct UniversalCamera_eventGetPositionSaveFormat_Parms
		{
			FUniversalCameraPositionSaveFormat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetPositionSaveFormat_Parms, ReturnValue), Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat, METADATA_PARAMS(nullptr, 0) }; // 1458947203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetPositionSaveFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::UniversalCamera_eventGetPositionSaveFormat_Parms), Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics
	{
		struct UniversalCamera_eventGetSettingsSaveFormat_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetSettingsSaveFormat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "Comment", "//\x09Save & Load\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Save & Load" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetSettingsSaveFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::UniversalCamera_eventGetSettingsSaveFormat_Parms), Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics
	{
		struct UniversalCamera_eventGetSocketOffsetWorldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetSocketOffsetWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetSocketOffsetWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::UniversalCamera_eventGetSocketOffsetWorldLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics
	{
		struct UniversalCamera_eventGetTargetOffsetWorldLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetTargetOffsetWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetTargetOffsetWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::UniversalCamera_eventGetTargetOffsetWorldLocation_Parms), Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics
	{
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms*)Obj)->IsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms), &Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::NewProp_IsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin |Terrain Height Adaptation" },
		{ "Comment", "//\x09Override this function if you want to implement your own Z Correction depending on the environment for TerrainHeightAdaptation\n//\x09You can use the defaults in the section \"Universal Camera Plugin | Terrain Height Adaptation\" if you want\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Override this function if you want to implement your own Z Correction depending on the environment for TerrainHeightAdaptation\nYou can use the defaults in the section \"Universal Camera Plugin | Terrain Height Adaptation\" if you want" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetTerrainHeightAdaptationValue", nullptr, nullptr, sizeof(UniversalCamera_eventGetTerrainHeightAdaptationValue_Parms), Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventGetZoomInScaling_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// Override this to make your own scaling method!\n// You don't need to worry about MinimumZoomSpeed and MaximumZoomSpeed as it is automatically applied.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Override this to make your own scaling method!\nYou don't need to worry about MinimumZoomSpeed and MaximumZoomSpeed as it is automatically applied." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "GetZoomInScaling", nullptr, nullptr, sizeof(UniversalCamera_eventGetZoomInScaling_Parms), Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics
	{
		struct UniversalCamera_eventIsFollowingAnyActor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UniversalCamera_eventIsFollowingAnyActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventIsFollowingAnyActor_Parms), &Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Follow Actor" },
		{ "Comment", "//\x09Returns true if the Camera is currently following an Actor\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Returns true if the Camera is currently following an Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "IsFollowingAnyActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::UniversalCamera_eventIsFollowingAnyActor_Parms), Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredHeight_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "Comment", "//\x09On each Tick, this function will gradually make the Origin Height closer to its desired Height (Same as for \"Lag_GetTickDesiredOffset\" but for the Z axis)\n//\x09Override this function if you want to implement your own method!\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "On each Tick, this function will gradually make the Origin Height closer to its desired Height (Same as for \"Lag_GetTickDesiredOffset\" but for the Z axis)\nOverride this function if you want to implement your own method!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Lag_GetTickDesiredHeight", nullptr, nullptr, sizeof(UniversalCamera_eventLag_GetTickDesiredHeight_Parms), Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredLocation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "Comment", "//\x09On each Tick, this function will gradually make the Origin location closer to its DesiredLocation\n//\x09Override this function if you want to implement your own method!\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "On each Tick, this function will gradually make the Origin location closer to its DesiredLocation\nOverride this function if you want to implement your own method!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Lag_GetTickDesiredLocation", nullptr, nullptr, sizeof(UniversalCamera_eventLag_GetTickDesiredLocation_Parms), Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredRotation_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "Comment", "//\x09On each Tick, this function will gradually make the Origin Rotation closer to its DesiredRotation\n//\x09Override this function if you want to implement your own method!\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "On each Tick, this function will gradually make the Origin Rotation closer to its DesiredRotation\nOverride this function if you want to implement your own method!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Lag_GetTickDesiredRotation", nullptr, nullptr, sizeof(UniversalCamera_eventLag_GetTickDesiredRotation_Parms), Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredSocketOffset_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredSocketOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "Comment", "//\x09On each Tick, this function will gradually make the SocketOffset closer to its DesiredSocketOffset location\n//\x09Override this function if you want to implement your own method!\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "On each Tick, this function will gradually make the SocketOffset closer to its DesiredSocketOffset location\nOverride this function if you want to implement your own method!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Lag_GetTickDesiredSocketOffset", nullptr, nullptr, sizeof(UniversalCamera_eventLag_GetTickDesiredSocketOffset_Parms), Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredTargetOffset_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredTargetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "Comment", "//\x09On each Tick, this function will gradually make the TargetOffset closer to its DesiredTargetOffset location\n//\x09Override this function if you want to implement your own method!\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "On each Tick, this function will gradually make the TargetOffset closer to its DesiredTargetOffset location\nOverride this function if you want to implement your own method!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Lag_GetTickDesiredTargetOffset", nullptr, nullptr, sizeof(UniversalCamera_eventLag_GetTickDesiredTargetOffset_Parms), Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredZoom_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLag_GetTickDesiredZoom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::NewProp_DeltaTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "Comment", "//\x09On each Tick, this function will gradually make the Zoom closer to its DesiredZoom\n//\x09Override this function if you want to implement your own method!\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "On each Tick, this function will gradually make the Zoom closer to its DesiredZoom\nOverride this function if you want to implement your own method!" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Lag_GetTickDesiredZoom", nullptr, nullptr, sizeof(UniversalCamera_eventLag_GetTickDesiredZoom_Parms), Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics
	{
		struct UniversalCamera_eventLoadPositionSaveFormat_Parms
		{
			FUniversalCameraPositionSaveFormat PositionSaveFormat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionSaveFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::NewProp_PositionSaveFormat = { "PositionSaveFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLoadPositionSaveFormat_Parms, PositionSaveFormat), Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat, METADATA_PARAMS(nullptr, 0) }; // 1458947203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::NewProp_PositionSaveFormat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "LoadPositionSaveFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::UniversalCamera_eventLoadPositionSaveFormat_Parms), Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics
	{
		struct UniversalCamera_eventLoadSettingsSaveFormat_Parms
		{
			TArray<uint8> SettingsSaveFormat;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsSaveFormat_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SettingsSaveFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::NewProp_SettingsSaveFormat_Inner = { "SettingsSaveFormat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::NewProp_SettingsSaveFormat = { "SettingsSaveFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventLoadSettingsSaveFormat_Parms, SettingsSaveFormat), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::NewProp_SettingsSaveFormat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::NewProp_SettingsSaveFormat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "LoadSettingsSaveFormat", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::UniversalCamera_eventLoadSettingsSaveFormat_Parms), Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_Move_Statics
	{
		struct UniversalCamera_eventMove_Parms
		{
			float ForwardAxis;
			float RightAxis;
			float UpAxis;
			float Multiplier;
			bool NormalizeDirection;
			bool MoveTargetOffset;
			bool MoveSocketOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpAxis;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_NormalizeDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizeDirection;
		static void NewProp_MoveTargetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveTargetOffset;
		static void NewProp_MoveSocketOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveSocketOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_ForwardAxis = { "ForwardAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMove_Parms, ForwardAxis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMove_Parms, RightAxis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMove_Parms, UpAxis), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMove_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_NormalizeDirection_SetBit(void* Obj)
	{
		((UniversalCamera_eventMove_Parms*)Obj)->NormalizeDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_NormalizeDirection = { "NormalizeDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMove_Parms), &Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_NormalizeDirection_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveTargetOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMove_Parms*)Obj)->MoveTargetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveTargetOffset = { "MoveTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMove_Parms), &Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveTargetOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveSocketOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMove_Parms*)Obj)->MoveSocketOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveSocketOffset = { "MoveSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMove_Parms), &Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveSocketOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_ForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_RightAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_UpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_NormalizeDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_Move_Statics::NewProp_MoveSocketOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "CPP_Default_MoveSocketOffset", "false" },
		{ "CPP_Default_MoveTargetOffset", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "CPP_Default_NormalizeDirection", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_Move_Statics::UniversalCamera_eventMove_Parms), Z_Construct_UFunction_AUniversalCamera_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics
	{
		struct UniversalCamera_eventMoveForward_Parms
		{
			float AxisValue;
			float Multiplier;
			bool MoveTargetOffset;
			bool MoveSocketOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_MoveTargetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveTargetOffset;
		static void NewProp_MoveSocketOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveSocketOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMoveForward_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMoveForward_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveTargetOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMoveForward_Parms*)Obj)->MoveTargetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveTargetOffset = { "MoveTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMoveForward_Parms), &Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveTargetOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveSocketOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMoveForward_Parms*)Obj)->MoveSocketOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveSocketOffset = { "MoveSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMoveForward_Parms), &Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveSocketOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::NewProp_MoveSocketOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n// @param MoveTargetOffset - Set this to true to move the TargetOffset instead of the Origin.\n// @param MoveSocketOffset - Set this to true to move the SocketOffset instead of the Origin.\n" },
		{ "CPP_Default_MoveSocketOffset", "false" },
		{ "CPP_Default_MoveTargetOffset", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction.\n@param MoveTargetOffset - Set this to true to move the TargetOffset instead of the Origin.\n@param MoveSocketOffset - Set this to true to move the SocketOffset instead of the Origin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::UniversalCamera_eventMoveForward_Parms), Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics
	{
		struct UniversalCamera_eventMoveRight_Parms
		{
			float AxisValue;
			float Multiplier;
			bool MoveTargetOffset;
			bool MoveSocketOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_MoveTargetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveTargetOffset;
		static void NewProp_MoveSocketOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveSocketOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMoveRight_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMoveRight_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveTargetOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMoveRight_Parms*)Obj)->MoveTargetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveTargetOffset = { "MoveTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMoveRight_Parms), &Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveTargetOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveSocketOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMoveRight_Parms*)Obj)->MoveSocketOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveSocketOffset = { "MoveSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMoveRight_Parms), &Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveSocketOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::NewProp_MoveSocketOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n// @param MoveTargetOffset - Set this to true to move the TargetOffset instead of the Origin.\n// @param MoveSocketOffset - Set this to true to move the SocketOffset instead of the Origin.\n" },
		{ "CPP_Default_MoveSocketOffset", "false" },
		{ "CPP_Default_MoveTargetOffset", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction.\n@param MoveTargetOffset - Set this to true to move the TargetOffset instead of the Origin.\n@param MoveSocketOffset - Set this to true to move the SocketOffset instead of the Origin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::UniversalCamera_eventMoveRight_Parms), Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics
	{
		struct UniversalCamera_eventMoveUp_Parms
		{
			float AxisValue;
			float Multiplier;
			bool MoveTargetOffset;
			bool MoveSocketOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_MoveTargetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveTargetOffset;
		static void NewProp_MoveSocketOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MoveSocketOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMoveUp_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventMoveUp_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveTargetOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMoveUp_Parms*)Obj)->MoveTargetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveTargetOffset = { "MoveTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMoveUp_Parms), &Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveTargetOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveSocketOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventMoveUp_Parms*)Obj)->MoveSocketOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveSocketOffset = { "MoveSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventMoveUp_Parms), &Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveSocketOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::NewProp_MoveSocketOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n// @param MoveTargetOffset - Set this to true to move the TargetOffset instead of the Origin.\n// @param MoveSocketOffset - Set this to true to move the SocketOffset instead of the Origin.\n" },
		{ "CPP_Default_MoveSocketOffset", "false" },
		{ "CPP_Default_MoveTargetOffset", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction.\n@param MoveTargetOffset - Set this to true to move the TargetOffset instead of the Origin.\n@param MoveSocketOffset - Set this to true to move the SocketOffset instead of the Origin." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "MoveUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::UniversalCamera_eventMoveUp_Parms), Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_MoveUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_MoveUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin | Edge Scrolling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnBeginEdgeScrolling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::NewProp_OriginPosition = { "OriginPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventOnBeginScreenSliding_Parms, OriginPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::NewProp_OriginPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnBeginScreenSliding", nullptr, nullptr, sizeof(UniversalCamera_eventOnBeginScreenSliding_Parms), Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin | Edge Scrolling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnEndEdgeScrolling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnEndScreenSliding", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_Reason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventOnStoppedFollowing_Parms, Reason), Z_Construct_UEnum_UniversalCameraPlugin_EStopFollowingReason, METADATA_PARAMS(nullptr, 0) }; // 1868544836
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::NewProp_Reason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Follow Actor" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnStoppedFollowing", nullptr, nullptr, sizeof(UniversalCamera_eventOnStoppedFollowing_Parms), Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_SimplifiedDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::NewProp_SimplifiedDirection = { "SimplifiedDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventOnUpdateEdgeScrolling_Parms, SimplifiedDirection), Z_Construct_UEnum_UniversalCameraPlugin_ESimplifiedMovementDirection, METADATA_PARAMS(nullptr, 0) }; // 2722778552
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::NewProp_MovementDirection = { "MovementDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventOnUpdateEdgeScrolling_Parms, MovementDirection), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::NewProp_SimplifiedDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::NewProp_MovementDirection,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin | Edge Scrolling" },
		{ "Comment", "//\x09Used for UI events\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Used for UI events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnUpdateEdgeScrolling", nullptr, nullptr, sizeof(UniversalCamera_eventOnUpdateEdgeScrolling_Parms), Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventOnUpdateScreenSliding_Parms, Direction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "OnUpdateScreenSliding", nullptr, nullptr, sizeof(UniversalCamera_eventOnUpdateScreenSliding_Parms), Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08880800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics
	{
		struct UniversalCamera_eventQuickLoadPosition_Parms
		{
			FString SlotName;
			int32 UserIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickLoadPosition_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickLoadPosition_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "Comment", "//\x09Will make sure the SaveGameObject has valid data (meaning the position has been saved before)\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Will make sure the SaveGameObject has valid data (meaning the position has been saved before)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "QuickLoadPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::UniversalCamera_eventQuickLoadPosition_Parms), Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics
	{
		struct UniversalCamera_eventQuickLoadSettings_Parms
		{
			FString SlotName;
			int32 UserIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickLoadSettings_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickLoadSettings_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "QuickLoadSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::UniversalCamera_eventQuickLoadSettings_Parms), Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics
	{
		struct UniversalCamera_eventQuickSavePosition_Parms
		{
			FUniversalCameraPositionSaveFormat PositionSaveFormat;
			FString SlotName;
			int32 UserIndex;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionSaveFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_PositionSaveFormat = { "PositionSaveFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickSavePosition_Parms, PositionSaveFormat), Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat, METADATA_PARAMS(nullptr, 0) }; // 1458947203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickSavePosition_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickSavePosition_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_PositionSaveFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "Comment", "// SaveGameObj\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "SaveGameObj" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "QuickSavePosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::UniversalCamera_eventQuickSavePosition_Parms), Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_QuickSavePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_QuickSavePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics
	{
		struct UniversalCamera_eventQuickSaveSettings_Parms
		{
			TArray<uint8> SettingsSaveFormat;
			FString SlotName;
			int32 UserIndex;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_SettingsSaveFormat_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SettingsSaveFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UserIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SettingsSaveFormat_Inner = { "SettingsSaveFormat", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SettingsSaveFormat = { "SettingsSaveFormat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickSaveSettings_Parms, SettingsSaveFormat), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickSaveSettings_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SlotName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventQuickSaveSettings_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_UserIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SettingsSaveFormat_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SettingsSaveFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_SlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::NewProp_UserIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Save" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "QuickSaveSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::UniversalCamera_eventQuickSaveSettings_Parms), Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ResetRotationOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09Resets the SocketOffset back to (0.0.0)\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Resets the SocketOffset back to (0.0.0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ResetSocketOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09Resets the TargetOffset back to (0.0.0)\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Resets the TargetOffset back to (0.0.0)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ResetTargetOffset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics
	{
		struct UniversalCamera_eventRotatePitch_Parms
		{
			float AxisValue;
			float Multiplier;
			bool RotateOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_RotateOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotatePitch_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotatePitch_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_RotateOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventRotatePitch_Parms*)Obj)->RotateOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_RotateOffset = { "RotateOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventRotatePitch_Parms), &Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_RotateOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::NewProp_RotateOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "CPP_Default_RotateOffset", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "RotatePitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::UniversalCamera_eventRotatePitch_Parms), Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_RotatePitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_RotatePitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics
	{
		struct UniversalCamera_eventRotatePitchAroundPivot_Parms
		{
			FVector Pivot;
			float AxisValue;
			float Multiplier;
			bool LockZAxis;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_LockZAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockZAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotatePitchAroundPivot_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotatePitchAroundPivot_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotatePitchAroundPivot_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_LockZAxis_SetBit(void* Obj)
	{
		((UniversalCamera_eventRotatePitchAroundPivot_Parms*)Obj)->LockZAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_LockZAxis = { "LockZAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventRotatePitchAroundPivot_Parms), &Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_LockZAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::NewProp_LockZAxis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "CPP_Default_LockZAxis", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "RotatePitchAroundPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::UniversalCamera_eventRotatePitchAroundPivot_Parms), Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics
	{
		struct UniversalCamera_eventRotateRoll_Parms
		{
			float AxisValue;
			float Multiplier;
			bool RotateOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_RotateOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateRoll_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateRoll_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_RotateOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventRotateRoll_Parms*)Obj)->RotateOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_RotateOffset = { "RotateOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventRotateRoll_Parms), &Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_RotateOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::NewProp_RotateOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "CPP_Default_RotateOffset", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "RotateRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::UniversalCamera_eventRotateRoll_Parms), Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_RotateRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_RotateRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics
	{
		struct UniversalCamera_eventRotateYaw_Parms
		{
			float AxisValue;
			float Multiplier;
			bool RotateOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_RotateOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateYaw_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateYaw_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_RotateOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventRotateYaw_Parms*)Obj)->RotateOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_RotateOffset = { "RotateOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventRotateYaw_Parms), &Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_RotateOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::NewProp_RotateOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "CPP_Default_RotateOffset", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "RotateYaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::UniversalCamera_eventRotateYaw_Parms), Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_RotateYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_RotateYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics
	{
		struct UniversalCamera_eventRotateYawAroundPivot_Parms
		{
			FVector Pivot;
			float AxisValue;
			float Multiplier;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Pivot;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::NewProp_Pivot = { "Pivot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateYawAroundPivot_Parms, Pivot), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateYawAroundPivot_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventRotateYawAroundPivot_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::NewProp_Pivot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "RotateYawAroundPivot", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::UniversalCamera_eventRotateYawAroundPivot_Parms), Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics
	{
		struct UniversalCamera_eventSetConstrainDots_Parms
		{
			TArray<FVector2D> Dots;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dots_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Dots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::NewProp_Dots_Inner = { "Dots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::NewProp_Dots = { "Dots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetConstrainDots_Parms, Dots), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::NewProp_Dots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::NewProp_Dots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Dots Shape" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetConstrainDots", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::UniversalCamera_eventSetConstrainDots_Parms), Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetConstrainDots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetConstrainDots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics
	{
		struct UniversalCamera_eventSetDesiredLocation_Parms
		{
			FVector NewLocation;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredLocation_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredLocation_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredLocation_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredLocation_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredLocation_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::UniversalCamera_eventSetDesiredLocation_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics
	{
		struct UniversalCamera_eventSetDesiredPitch_Parms
		{
			float NewPitch;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitch;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_NewPitch = { "NewPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPitch_Parms, NewPitch), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredPitch_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredPitch_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredPitch_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredPitch_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_NewPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredPitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::UniversalCamera_eventSetDesiredPitch_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics
	{
		struct UniversalCamera_eventSetDesiredPitchOffset_Parms
		{
			float NewPitchOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitchOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::NewProp_NewPitchOffset = { "NewPitchOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPitchOffset_Parms, NewPitchOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::NewProp_NewPitchOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredPitchOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::UniversalCamera_eventSetDesiredPitchOffset_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics
	{
		struct UniversalCamera_eventSetDesiredPosition_Parms
		{
			FVector NewLocation;
			FVector NewTargetOffset;
			FVector NewSocketOffset;
			float NewYaw;
			float NewPitch;
			float NewRoll;
			float NewZoom;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSocketOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPitch;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRoll;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewTargetOffset = { "NewTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewSocketOffset = { "NewSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewYaw), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewPitch = { "NewPitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewPitch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewRoll = { "NewRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewRoll), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredPosition_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredPosition_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredPosition_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredPosition_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredPosition_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::UniversalCamera_eventSetDesiredPosition_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics
	{
		struct UniversalCamera_eventSetDesiredRoll_Parms
		{
			float NewRoll;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRoll;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_NewRoll = { "NewRoll", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredRoll_Parms, NewRoll), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredRoll_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredRoll_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredRoll_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredRoll_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_NewRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredRoll", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::UniversalCamera_eventSetDesiredRoll_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics
	{
		struct UniversalCamera_eventSetDesiredRollOffset_Parms
		{
			float NewRollOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRollOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::NewProp_NewRollOffset = { "NewRollOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredRollOffset_Parms, NewRollOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::NewProp_NewRollOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredRollOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::UniversalCamera_eventSetDesiredRollOffset_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics
	{
		struct UniversalCamera_eventSetDesiredRotation_Parms
		{
			FRotator NewRotation;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredRotation_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredRotation_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredRotation_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredRotation_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredRotation_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_NewRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::UniversalCamera_eventSetDesiredRotation_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics
	{
		struct UniversalCamera_eventSetDesiredRotationOffset_Parms
		{
			FRotator NewRotationOffset;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotationOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::NewProp_NewRotationOffset = { "NewRotationOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredRotationOffset_Parms, NewRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::NewProp_NewRotationOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredRotationOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::UniversalCamera_eventSetDesiredRotationOffset_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics
	{
		struct UniversalCamera_eventSetDesiredSocketOffset_Parms
		{
			FVector NewSocketOffset;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSocketOffset;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_NewSocketOffset = { "NewSocketOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredSocketOffset_Parms, NewSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredSocketOffset_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredSocketOffset_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredSocketOffset_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredSocketOffset_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_NewSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredSocketOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::UniversalCamera_eventSetDesiredSocketOffset_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics
	{
		struct UniversalCamera_eventSetDesiredTargetOffset_Parms
		{
			FVector NewTargetOffset;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTargetOffset;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_NewTargetOffset = { "NewTargetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredTargetOffset_Parms, NewTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredTargetOffset_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredTargetOffset_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredTargetOffset_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredTargetOffset_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_NewTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredTargetOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::UniversalCamera_eventSetDesiredTargetOffset_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics
	{
		struct UniversalCamera_eventSetDesiredYaw_Parms
		{
			float NewYaw;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYaw;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_NewYaw = { "NewYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredYaw_Parms, NewYaw), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredYaw_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredYaw_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredYaw_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredYaw_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_NewYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredYaw", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::UniversalCamera_eventSetDesiredYaw_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics
	{
		struct UniversalCamera_eventSetDesiredYawOffset_Parms
		{
			float NewYawOffset;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewYawOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::NewProp_NewYawOffset = { "NewYawOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredYawOffset_Parms, NewYawOffset), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::NewProp_NewYawOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredYawOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::UniversalCamera_eventSetDesiredYawOffset_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics
	{
		struct UniversalCamera_eventSetDesiredZoom_Parms
		{
			float NewZoom;
			bool IgnoreLag;
			bool IgnoreRestrictions;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewZoom;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_NewZoom = { "NewZoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventSetDesiredZoom_Parms, NewZoom), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredZoom_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredZoom_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((UniversalCamera_eventSetDesiredZoom_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventSetDesiredZoom_Parms), &Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_NewZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::NewProp_IgnoreRestrictions,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions\n" },
		{ "CPP_Default_IgnoreLag", "false" },
		{ "CPP_Default_IgnoreRestrictions", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "SetDesiredZoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::UniversalCamera_eventSetDesiredZoom_Parms), Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics
	{
		struct UniversalCamera_eventStartTraveling_Internal_Parms
		{
			UAsyncNode* AsyncNode;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncNode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::NewProp_AsyncNode = { "AsyncNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventStartTraveling_Internal_Parms, AsyncNode), Z_Construct_UClass_UAsyncNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::NewProp_AsyncNode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\x09TRAVEL TASK\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "TRAVEL TASK" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "StartTraveling_Internal", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::UniversalCamera_eventStartTraveling_Internal_Parms), Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics
	{
		struct UniversalCamera_eventStopFollowing_Parms
		{
			bool bResetOffset;
		};
		static void NewProp_bResetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::NewProp_bResetOffset_SetBit(void* Obj)
	{
		((UniversalCamera_eventStopFollowing_Parms*)Obj)->bResetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::NewProp_bResetOffset = { "bResetOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventStopFollowing_Parms), &Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::NewProp_bResetOffset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::NewProp_bResetOffset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Follow Actor" },
		{ "Comment", "//\x09Stops following the current Actor\n" },
		{ "CPP_Default_bResetOffset", "false" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Stops following the current Actor" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "StopFollowing", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::UniversalCamera_eventStopFollowing_Parms), Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_StopFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_StopFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics
	{
		struct UniversalCamera_eventToggleConstrainDots_Parms
		{
			bool ConstrainWithDots;
		};
		static void NewProp_ConstrainWithDots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainWithDots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::NewProp_ConstrainWithDots_SetBit(void* Obj)
	{
		((UniversalCamera_eventToggleConstrainDots_Parms*)Obj)->ConstrainWithDots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::NewProp_ConstrainWithDots = { "ConstrainWithDots", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventToggleConstrainDots_Parms), &Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::NewProp_ConstrainWithDots_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::NewProp_ConstrainWithDots,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Dots Shape" },
		{ "Comment", "/*\n\x09//\x09Override this function to implement your own constrain method\n\x09//\x09@param ShouldUpdate - Whether or not we should take this NewDestination into consideration.\n\x09UFUNCTION(BlueprintNativeEvent, Category = \"Universal Camera Plugin|Movement & Zoom|Restrictions|Location\")\n\x09""FVector GetCorrectedDestinationFromDotsShape(FVector NewDestination, bool& ShouldUpdate);\n\x09""bool DoesDesinationIntersectShape(FVector2D Destination, FVector2D& IntersectedDot1, FVector2D& IntersectedDot2);\n\x09//\x09""Currently not used as only segments matter, which allows for navigation inside OR outside of the shape.\n\x09""bool IsDotInShape(FVector2D Destination);\n\x09static bool AreIntersecting(FVector2D Side1Dot1, FVector2D Side1Dot2, FVector2D Side2Dot1, FVector2D Side2Dot2);\n\x09""FVector2D GetCorrectedDestinationFromIntersection(FVector2D IntersectedSideDot1, FVector2D IntersectedSideDot2, FVector2D Destination);\n\x09*/" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "//      Override this function to implement your own constrain method\n//      @param ShouldUpdate - Whether or not we should take this NewDestination into consideration.\nUFUNCTION(BlueprintNativeEvent, Category = \"Universal Camera Plugin|Movement & Zoom|Restrictions|Location\")\nFVector GetCorrectedDestinationFromDotsShape(FVector NewDestination, bool& ShouldUpdate);\nbool DoesDesinationIntersectShape(FVector2D Destination, FVector2D& IntersectedDot1, FVector2D& IntersectedDot2);\n//      Currently not used as only segments matter, which allows for navigation inside OR outside of the shape.\nbool IsDotInShape(FVector2D Destination);\nstatic bool AreIntersecting(FVector2D Side1Dot1, FVector2D Side1Dot2, FVector2D Side2Dot1, FVector2D Side2Dot2);\nFVector2D GetCorrectedDestinationFromIntersection(FVector2D IntersectedSideDot1, FVector2D IntersectedSideDot2, FVector2D Destination);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ToggleConstrainDots", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::UniversalCamera_eventToggleConstrainDots_Parms), Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics
	{
		struct UniversalCamera_eventTogglePreciseMouseDrag_Parms
		{
			bool Activate;
		};
		static void NewProp_Activate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::NewProp_Activate_SetBit(void* Obj)
	{
		((UniversalCamera_eventTogglePreciseMouseDrag_Parms*)Obj)->Activate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventTogglePreciseMouseDrag_Parms), &Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::NewProp_Activate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Precise Mouse Control" },
		{ "Comment", "//\x09PRECISE MOUSE DRAG\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "PRECISE MOUSE DRAG" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "TogglePreciseMouseDrag", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::UniversalCamera_eventTogglePreciseMouseDrag_Parms), Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics
	{
		struct UniversalCamera_eventToggleScreenSliding_Parms
		{
			bool Activate;
		};
		static void NewProp_Activate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Activate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::NewProp_Activate_SetBit(void* Obj)
	{
		((UniversalCamera_eventToggleScreenSliding_Parms*)Obj)->Activate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::NewProp_Activate = { "Activate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventToggleScreenSliding_Parms), &Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::NewProp_Activate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::NewProp_Activate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "Comment", "//\x09When you activate screen sliding, the position of your cursor will be stored.\n//\x09The camera will then move depending of the position of your cursor compared to its initial position\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "When you activate screen sliding, the position of your cursor will be stored.\nThe camera will then move depending of the position of your cursor compared to its initial position" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ToggleScreenSliding", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::UniversalCamera_eventToggleScreenSliding_Parms), Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics
	{
		struct UniversalCamera_eventTravelTaskTick_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventTravelTaskTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "TravelTaskTick", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::UniversalCamera_eventTravelTaskTick_Parms), Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_TravelTaskTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_TravelTaskTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_UseActor_Statics
	{
		struct UniversalCamera_eventUseActor_Parms
		{
			AActor* Actor;
			FTargetSettings_WithTemplates ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetSettings_WithTemplates, METADATA_PARAMS(nullptr, 0) }; // 2639154408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "FollowTarget|Settings" },
		{ "Comment", "//\x09""FTargetSettings_WithTemplates\n" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "FTargetSettings_WithTemplates" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "UseActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::UniversalCamera_eventUseActor_Parms), Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_UseActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_UseActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics
	{
		struct UniversalCamera_eventUseSceneComponent_Parms
		{
			USceneComponent* SceneComponent;
			FTargetSettings_WithTemplates ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseSceneComponent_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_SceneComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseSceneComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetSettings_WithTemplates, METADATA_PARAMS(nullptr, 0) }; // 2639154408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "FollowTarget|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "UseSceneComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::UniversalCamera_eventUseSceneComponent_Parms), Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_UseSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_UseSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics
	{
		struct UniversalCamera_eventUseSocket_Parms
		{
			UMeshComponent* MeshComponent;
			FName Socket;
			FTargetSettings_WithTemplates ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseSocket_Parms, MeshComponent), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseSocket_Parms, Socket), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventUseSocket_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetSettings_WithTemplates, METADATA_PARAMS(nullptr, 0) }; // 2639154408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_Socket,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "FollowTarget|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "UseSocket", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::UniversalCamera_eventUseSocket_Parms), Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_UseSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_UseSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics
	{
		struct UniversalCamera_eventZoomAtCursor_Parms
		{
			float AxisValue;
			TEnumAsByte<ECollisionChannel> CollisionChannel;
			bool DidHit;
			float Multiplier;
			bool LockZoomLevel;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
		static void NewProp_DidHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DidHit;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_LockZoomLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockZoomLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomAtCursor_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomAtCursor_Parms, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
	void Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_DidHit_SetBit(void* Obj)
	{
		((UniversalCamera_eventZoomAtCursor_Parms*)Obj)->DidHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_DidHit = { "DidHit", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventZoomAtCursor_Parms), &Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_DidHit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomAtCursor_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_LockZoomLevel_SetBit(void* Obj)
	{
		((UniversalCamera_eventZoomAtCursor_Parms*)Obj)->LockZoomLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_LockZoomLevel = { "LockZoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventZoomAtCursor_Parms), &Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_LockZoomLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_DidHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::NewProp_LockZoomLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09Zoom towards the mouse location on the ground. Uses ZoomScaling settings.\n//\x09@param LockZoomLevel If false, move the Zoom Level and lock the Z axis of the Origin. If true, move the Origin instead of the Zoom Level. \n" },
		{ "CPP_Default_LockZoomLevel", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Zoom towards the mouse location on the ground. Uses ZoomScaling settings.\n@param LockZoomLevel If false, move the Zoom Level and lock the Z axis of the Origin. If true, move the Origin instead of the Zoom Level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ZoomAtCursor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::UniversalCamera_eventZoomAtCursor_Parms), Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics
	{
		struct UniversalCamera_eventZoomAtLocation_Parms
		{
			float AxisValue;
			FVector Location;
			float Multiplier;
			bool LockZoomLevel;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static void NewProp_LockZoomLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockZoomLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomAtLocation_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomAtLocation_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_LockZoomLevel_SetBit(void* Obj)
	{
		((UniversalCamera_eventZoomAtLocation_Parms*)Obj)->LockZoomLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_LockZoomLevel = { "LockZoomLevel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UniversalCamera_eventZoomAtLocation_Parms), &Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_LockZoomLevel_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_Multiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::NewProp_LockZoomLevel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin|Tools" },
		{ "Comment", "//\x09Zoom towards the location. Uses ZoomScaling settings.\n//\x09@param LockZoomLevel If false, move the Zoom Level and lock the Z axis of the Origin. If true, move the Origin instead of the Zoom Level. \n" },
		{ "CPP_Default_LockZoomLevel", "false" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Zoom towards the location. Uses ZoomScaling settings.\n@param LockZoomLevel If false, move the Zoom Level and lock the Z axis of the Origin. If true, move the Origin instead of the Zoom Level." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ZoomAtLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::UniversalCamera_eventZoomAtLocation_Parms), Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics
	{
		struct UniversalCamera_eventZoomIn_Parms
		{
			float AxisValue;
			float Multiplier;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisValue;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Multiplier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::NewProp_AxisValue = { "AxisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomIn_Parms, AxisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UniversalCamera_eventZoomIn_Parms, Multiplier), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::NewProp_AxisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::NewProp_Multiplier,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Universal Camera Plugin" },
		{ "Comment", "// @param AxisValue - Feed a negative value to go in the opposite direction.\n" },
		{ "CPP_Default_Multiplier", "1.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "@param AxisValue - Feed a negative value to go in the opposite direction." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUniversalCamera, nullptr, "ZoomIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::UniversalCamera_eventZoomIn_Parms), Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUniversalCamera_ZoomIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUniversalCamera_ZoomIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUniversalCamera);
	UClass* Z_Construct_UClass_AUniversalCamera_NoRegister()
	{
		return AUniversalCamera::StaticClass();
	}
	struct Z_Construct_UClass_AUniversalCamera_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredTargetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredTargetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotationOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTravelTask_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTravelTask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTraveling_MetaData[];
#endif
		static void NewProp_IsTraveling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTraveling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledFeatures_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_EnabledFeatures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStartingLocation_MetaData[];
#endif
		static void NewProp_OverrideStartingLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideStartingLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStartingTargetOffset_MetaData[];
#endif
		static void NewProp_OverrideStartingTargetOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideStartingTargetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingTargetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingTargetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStartingSocketOffset_MetaData[];
#endif
		static void NewProp_OverrideStartingSocketOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideStartingSocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingSocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingSocketOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStartingYaw_MetaData[];
#endif
		static void NewProp_OverrideStartingYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideStartingYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStartingPitch_MetaData[];
#endif
		static void NewProp_OverrideStartingPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideStartingPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideStartingZoom_MetaData[];
#endif
		static void NewProp_OverrideStartingZoom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideStartingZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartingZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAlternativeForwardVector_MetaData[];
#endif
		static void NewProp_UseAlternativeForwardVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAlternativeForwardVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAlternativeRightVector_MetaData[];
#endif
		static void NewProp_UseAlternativeRightVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAlternativeRightVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseAlternativeUpVector_MetaData[];
#endif
		static void NewProp_UseAlternativeUpVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseAlternativeUpVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_IgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreTimeDilation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMovementScaling_MetaData[];
#endif
		static void NewProp_ApplyMovementScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyMovementScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyOffsetScaling_MetaData[];
#endif
		static void NewProp_ApplyOffsetScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyOffsetScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyMoveUpScaling_MetaData[];
#endif
		static void NewProp_ApplyMoveUpScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyMoveUpScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseZoomLevel_MetaData[];
#endif
		static void NewProp_UseZoomLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseZoomLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingDistanceReference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScalingDistanceReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundLevel_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingTraceToGround_MetaData[];
#endif
		static void NewProp_ScalingTraceToGround_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScalingTraceToGround;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScalingTraceChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalingTraceChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalingTraceChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseZoomScaling_MetaData[];
#endif
		static void NewProp_UseZoomScaling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseZoomScaling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumZoomSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumZoomSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomReference_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyOriginCollisions_MetaData[];
#endif
		static void NewProp_ApplyOriginCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyOriginCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyTargetOffsetCollisions_MetaData[];
#endif
		static void NewProp_ApplyTargetOffsetCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyTargetOffsetCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplySocketOffsetCollisions_MetaData[];
#endif
		static void NewProp_ApplySocketOffsetCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplySocketOffsetCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginCollisionsChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OriginCollisionsChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginCollisionsProbeSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginCollisionsProbeSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmCollisionsChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SpringArmCollisionsChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmCollisionsProbeSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmCollisionsProbeSize;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TerrainHeightAdaptationChannels_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainHeightAdaptationChannels_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TerrainHeightAdaptationChannels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginDistanceFromGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginDistanceFromGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZProbeRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZProbeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CanGoBelowSurfaces_MetaData[];
#endif
		static void NewProp_CanGoBelowSurfaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanGoBelowSurfaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysSeeOrigin_MetaData[];
#endif
		static void NewProp_AlwaysSeeOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AlwaysSeeOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityProbeRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibilityProbeRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceAdaptation_MetaData[];
#endif
		static void NewProp_DistanceAdaptation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DistanceAdaptation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceBypassValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceBypassValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollingSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollingSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollingSpeedMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeScrollingSpeedMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseEdgeScrollingStrength_MetaData[];
#endif
		static void NewProp_UseEdgeScrollingStrength_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseEdgeScrollingStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizeEdgeScrollingDirection_MetaData[];
#endif
		static void NewProp_NormalizeEdgeScrollingDirection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizeEdgeScrollingDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EdgeScrollMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeScrollMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsEdgeScrolling_MetaData[];
#endif
		static void NewProp_IsEdgeScrolling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsEdgeScrolling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseMouseDragCollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PreciseMouseDragCollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseMouseDragTraceComplex_MetaData[];
#endif
		static void NewProp_PreciseMouseDragTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreciseMouseDragTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseMouseDragIgnoreMovementLag_MetaData[];
#endif
		static void NewProp_PreciseMouseDragIgnoreMovementLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PreciseMouseDragIgnoreMovementLag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsPreciseMouseDragging_MetaData[];
#endif
		static void NewProp_IsPreciseMouseDragging_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPreciseMouseDragging;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseMouseDragOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreciseMouseDragOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSlidingMaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSlidingMaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSlidingMaxRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenSlidingMaxRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSlidingInvertXAxis_MetaData[];
#endif
		static void NewProp_ScreenSlidingInvertXAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScreenSlidingInvertXAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSlidingInvertYAxis_MetaData[];
#endif
		static void NewProp_ScreenSlidingInvertYAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ScreenSlidingInvertYAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScreenSlidingType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScreenSlidingType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsScreenSliding_MetaData[];
#endif
		static void NewProp_IsScreenSliding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsScreenSliding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowTargetSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowTargetSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowedAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FollowedAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFollowingAnyActor_MetaData[];
#endif
		static void NewProp_bIsFollowingAnyActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFollowingAnyActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldResetOffsetIfFailed_MetaData[];
#endif
		static void NewProp_bShouldResetOffsetIfFailed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldResetOffsetIfFailed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementLagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetLagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightLagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZoomLagSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomLagSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainLocationMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstrainLocationMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainLocationMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstrainLocationMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainLocationToShape_MetaData[];
#endif
		static void NewProp_ConstrainLocationToShape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainLocationToShape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstrainDots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainDots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ConstrainDots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetConstrainType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_OffsetConstrainType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMaxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetMaxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainOffsetMinimum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstrainOffsetMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MinimumOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainOffsetMaximum_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstrainOffsetMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainYaw_MetaData[];
#endif
		static void NewProp_ConstrainYaw_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumYaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumYaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainPitch_MetaData[];
#endif
		static void NewProp_ConstrainPitch_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainRoll_MetaData[];
#endif
		static void NewProp_ConstrainRoll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainZoomMinimum_MetaData[];
#endif
		static void NewProp_ConstrainZoomMinimum_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainZoomMinimum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinimumZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstrainZoomMaximum_MetaData[];
#endif
		static void NewProp_ConstrainZoomMaximum_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ConstrainZoomMaximum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaximumZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaximumZoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DrawDebugSpheres_MetaData[];
#endif
		static void NewProp_DrawDebugSpheres_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DrawDebugSpheres;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugPrintDesiredPosition_MetaData[];
#endif
		static void NewProp_DebugPrintDesiredPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugPrintDesiredPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUniversalCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUniversalCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUniversalCamera_AbortTravelTask, "AbortTravelTask" }, // 3357248984
		{ &Z_Construct_UFunction_AUniversalCamera_AreFeaturesEnabled, "AreFeaturesEnabled" }, // 3277308571
		{ &Z_Construct_UFunction_AUniversalCamera_DisableFeatures, "DisableFeatures" }, // 2530954544
		{ &Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick, "EdgeScrollingTick" }, // 4042271104
		{ &Z_Construct_UFunction_AUniversalCamera_EdgeScrollingTick_Internal, "EdgeScrollingTick_Internal" }, // 1175160212
		{ &Z_Construct_UFunction_AUniversalCamera_EnableFeatures, "EnableFeatures" }, // 3416326054
		{ &Z_Construct_UFunction_AUniversalCamera_EndTravelTask, "EndTravelTask" }, // 1752798177
		{ &Z_Construct_UFunction_AUniversalCamera_FollowTarget, "FollowTarget" }, // 3491718339
		{ &Z_Construct_UFunction_AUniversalCamera_FollowTargetTick, "FollowTargetTick" }, // 1890436874
		{ &Z_Construct_UFunction_AUniversalCamera_GetActorFocusLocation, "GetActorFocusLocation" }, // 2191813808
		{ &Z_Construct_UFunction_AUniversalCamera_GetActorsLocation2D, "GetActorsLocation2D" }, // 4276503999
		{ &Z_Construct_UFunction_AUniversalCamera_GetAlternativeForwardVector, "GetAlternativeForwardVector" }, // 1918419254
		{ &Z_Construct_UFunction_AUniversalCamera_GetAlternativeRightVector, "GetAlternativeRightVector" }, // 3399284213
		{ &Z_Construct_UFunction_AUniversalCamera_GetAlternativeUpVector, "GetAlternativeUpVector" }, // 1476175575
		{ &Z_Construct_UFunction_AUniversalCamera_GetCameraComponent, "GetCameraComponent" }, // 607119079
		{ &Z_Construct_UFunction_AUniversalCamera_GetClampedLocation, "GetClampedLocation" }, // 2512411059
		{ &Z_Construct_UFunction_AUniversalCamera_GetClampedOffset, "GetClampedOffset" }, // 2388039952
		{ &Z_Construct_UFunction_AUniversalCamera_GetClampedPitch, "GetClampedPitch" }, // 1798724846
		{ &Z_Construct_UFunction_AUniversalCamera_GetClampedRoll, "GetClampedRoll" }, // 3022592235
		{ &Z_Construct_UFunction_AUniversalCamera_GetClampedYaw, "GetClampedYaw" }, // 3026789314
		{ &Z_Construct_UFunction_AUniversalCamera_GetClampedZoom, "GetClampedZoom" }, // 2029921641
		{ &Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromOriginCollisions, "GetCorrectedDestinationFromOriginCollisions" }, // 4116151973
		{ &Z_Construct_UFunction_AUniversalCamera_GetCorrectedDestinationFromRestrictions, "GetCorrectedDestinationFromRestrictions" }, // 1887810219
		{ &Z_Construct_UFunction_AUniversalCamera_GetDesiredCameraWorldLocation, "GetDesiredCameraWorldLocation" }, // 972559971
		{ &Z_Construct_UFunction_AUniversalCamera_GetDesiredRotationWithOffset, "GetDesiredRotationWithOffset" }, // 1898212201
		{ &Z_Construct_UFunction_AUniversalCamera_GetDesiredSocketOffsetWorldLocation, "GetDesiredSocketOffsetWorldLocation" }, // 3374602777
		{ &Z_Construct_UFunction_AUniversalCamera_GetDesiredTargetOffsetWorldLocation, "GetDesiredTargetOffsetWorldLocation" }, // 1378915130
		{ &Z_Construct_UFunction_AUniversalCamera_GetImpactPointUnderCursor, "GetImpactPointUnderCursor" }, // 552375217
		{ &Z_Construct_UFunction_AUniversalCamera_GetMousePositionRatio, "GetMousePositionRatio" }, // 2523567509
		{ &Z_Construct_UFunction_AUniversalCamera_GetMovementScaling, "GetMovementScaling" }, // 2915030980
		{ &Z_Construct_UFunction_AUniversalCamera_GetPositionSaveFormat, "GetPositionSaveFormat" }, // 536011950
		{ &Z_Construct_UFunction_AUniversalCamera_GetSettingsSaveFormat, "GetSettingsSaveFormat" }, // 3660172027
		{ &Z_Construct_UFunction_AUniversalCamera_GetSocketOffsetWorldLocation, "GetSocketOffsetWorldLocation" }, // 3044761281
		{ &Z_Construct_UFunction_AUniversalCamera_GetTargetOffsetWorldLocation, "GetTargetOffsetWorldLocation" }, // 1770678400
		{ &Z_Construct_UFunction_AUniversalCamera_GetTerrainHeightAdaptationValue, "GetTerrainHeightAdaptationValue" }, // 2205599021
		{ &Z_Construct_UFunction_AUniversalCamera_GetZoomInScaling, "GetZoomInScaling" }, // 3865511292
		{ &Z_Construct_UFunction_AUniversalCamera_IsFollowingAnyActor, "IsFollowingAnyActor" }, // 1886637251
		{ &Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredHeight, "Lag_GetTickDesiredHeight" }, // 776031922
		{ &Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredLocation, "Lag_GetTickDesiredLocation" }, // 1697709912
		{ &Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredRotation, "Lag_GetTickDesiredRotation" }, // 2619953434
		{ &Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredSocketOffset, "Lag_GetTickDesiredSocketOffset" }, // 3661270379
		{ &Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredTargetOffset, "Lag_GetTickDesiredTargetOffset" }, // 3731237540
		{ &Z_Construct_UFunction_AUniversalCamera_Lag_GetTickDesiredZoom, "Lag_GetTickDesiredZoom" }, // 1491976983
		{ &Z_Construct_UFunction_AUniversalCamera_LoadPositionSaveFormat, "LoadPositionSaveFormat" }, // 2389609162
		{ &Z_Construct_UFunction_AUniversalCamera_LoadSettingsSaveFormat, "LoadSettingsSaveFormat" }, // 2119936720
		{ &Z_Construct_UFunction_AUniversalCamera_Move, "Move" }, // 1504019416
		{ &Z_Construct_UFunction_AUniversalCamera_MoveForward, "MoveForward" }, // 3406165820
		{ &Z_Construct_UFunction_AUniversalCamera_MoveRight, "MoveRight" }, // 2168413342
		{ &Z_Construct_UFunction_AUniversalCamera_MoveUp, "MoveUp" }, // 4271074385
		{ &Z_Construct_UFunction_AUniversalCamera_OnBeginEdgeScrolling, "OnBeginEdgeScrolling" }, // 1086940201
		{ &Z_Construct_UFunction_AUniversalCamera_OnBeginScreenSliding, "OnBeginScreenSliding" }, // 1561261262
		{ &Z_Construct_UFunction_AUniversalCamera_OnEndEdgeScrolling, "OnEndEdgeScrolling" }, // 2628677373
		{ &Z_Construct_UFunction_AUniversalCamera_OnEndScreenSliding, "OnEndScreenSliding" }, // 2813036478
		{ &Z_Construct_UFunction_AUniversalCamera_OnStoppedFollowing, "OnStoppedFollowing" }, // 1759989410
		{ &Z_Construct_UFunction_AUniversalCamera_OnUpdateEdgeScrolling, "OnUpdateEdgeScrolling" }, // 682936481
		{ &Z_Construct_UFunction_AUniversalCamera_OnUpdateScreenSliding, "OnUpdateScreenSliding" }, // 2624233143
		{ &Z_Construct_UFunction_AUniversalCamera_QuickLoadPosition, "QuickLoadPosition" }, // 3322845008
		{ &Z_Construct_UFunction_AUniversalCamera_QuickLoadSettings, "QuickLoadSettings" }, // 1117229038
		{ &Z_Construct_UFunction_AUniversalCamera_QuickSavePosition, "QuickSavePosition" }, // 2600734090
		{ &Z_Construct_UFunction_AUniversalCamera_QuickSaveSettings, "QuickSaveSettings" }, // 1633753744
		{ &Z_Construct_UFunction_AUniversalCamera_ResetRotationOffset, "ResetRotationOffset" }, // 99436248
		{ &Z_Construct_UFunction_AUniversalCamera_ResetSocketOffset, "ResetSocketOffset" }, // 98486981
		{ &Z_Construct_UFunction_AUniversalCamera_ResetTargetOffset, "ResetTargetOffset" }, // 1581397776
		{ &Z_Construct_UFunction_AUniversalCamera_RotatePitch, "RotatePitch" }, // 3445953135
		{ &Z_Construct_UFunction_AUniversalCamera_RotatePitchAroundPivot, "RotatePitchAroundPivot" }, // 4226116990
		{ &Z_Construct_UFunction_AUniversalCamera_RotateRoll, "RotateRoll" }, // 4177656112
		{ &Z_Construct_UFunction_AUniversalCamera_RotateYaw, "RotateYaw" }, // 1846910279
		{ &Z_Construct_UFunction_AUniversalCamera_RotateYawAroundPivot, "RotateYawAroundPivot" }, // 892901615
		{ &Z_Construct_UFunction_AUniversalCamera_SetConstrainDots, "SetConstrainDots" }, // 2700050777
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredLocation, "SetDesiredLocation" }, // 4095874670
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredPitch, "SetDesiredPitch" }, // 3858529385
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredPitchOffset, "SetDesiredPitchOffset" }, // 832565773
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredPosition, "SetDesiredPosition" }, // 37926490
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredRoll, "SetDesiredRoll" }, // 736423444
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredRollOffset, "SetDesiredRollOffset" }, // 4136482618
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredRotation, "SetDesiredRotation" }, // 2696940604
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredRotationOffset, "SetDesiredRotationOffset" }, // 2235781371
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredSocketOffset, "SetDesiredSocketOffset" }, // 2017172293
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredTargetOffset, "SetDesiredTargetOffset" }, // 2963742307
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredYaw, "SetDesiredYaw" }, // 2519785451
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredYawOffset, "SetDesiredYawOffset" }, // 3570140838
		{ &Z_Construct_UFunction_AUniversalCamera_SetDesiredZoom, "SetDesiredZoom" }, // 680783373
		{ &Z_Construct_UFunction_AUniversalCamera_StartTraveling_Internal, "StartTraveling_Internal" }, // 3060858463
		{ &Z_Construct_UFunction_AUniversalCamera_StopFollowing, "StopFollowing" }, // 3970214728
		{ &Z_Construct_UFunction_AUniversalCamera_ToggleConstrainDots, "ToggleConstrainDots" }, // 2793943619
		{ &Z_Construct_UFunction_AUniversalCamera_TogglePreciseMouseDrag, "TogglePreciseMouseDrag" }, // 846121939
		{ &Z_Construct_UFunction_AUniversalCamera_ToggleScreenSliding, "ToggleScreenSliding" }, // 1070633792
		{ &Z_Construct_UFunction_AUniversalCamera_TravelTaskTick, "TravelTaskTick" }, // 2750524417
		{ &Z_Construct_UFunction_AUniversalCamera_UseActor, "UseActor" }, // 860482858
		{ &Z_Construct_UFunction_AUniversalCamera_UseSceneComponent, "UseSceneComponent" }, // 2920052745
		{ &Z_Construct_UFunction_AUniversalCamera_UseSocket, "UseSocket" }, // 3519402854
		{ &Z_Construct_UFunction_AUniversalCamera_ZoomAtCursor, "ZoomAtCursor" }, // 1718148250
		{ &Z_Construct_UFunction_AUniversalCamera_ZoomAtLocation, "ZoomAtLocation" }, // 1070895649
		{ &Z_Construct_UFunction_AUniversalCamera_ZoomIn, "ZoomIn" }, // 3224138212
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UniversalCamera.h" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "//\x09""COMPONENTS\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "COMPONENTS" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredLocation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "Comment", "//\x09INFO\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "INFO" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000200000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredSocketOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredSocketOffset = { "DesiredSocketOffset", nullptr, (EPropertyFlags)0x0010000200000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DesiredSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredSocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredTargetOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredTargetOffset = { "DesiredTargetOffset", nullptr, (EPropertyFlags)0x0010000200000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DesiredTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredTargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredTargetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0010000200000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotationOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotationOffset = { "DesiredRotationOffset", nullptr, (EPropertyFlags)0x0010000200000035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DesiredRotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotationOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredZoom_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Default" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredZoom = { "DesiredZoom", nullptr, (EPropertyFlags)0x0010000200000035, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DesiredZoom), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CurrentTravelTask_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CurrentTravelTask = { "CurrentTravelTask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, CurrentTravelTask), Z_Construct_UClass_UAsyncNode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CurrentTravelTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CurrentTravelTask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling_MetaData[] = {
		{ "Category", "Universal Camera Plugin|CameraTravel" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->IsTraveling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling = { "IsTraveling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EnabledFeatures_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/UniversalCameraPlugin.EEnabledFeatures" },
		{ "Category", "Universal Camera Plugin|Features" },
		{ "Comment", "//\x09""Features currently enabled\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Features currently enabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EnabledFeatures = { "EnabledFeatures", nullptr, (EPropertyFlags)0x0020080001010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, EnabledFeatures), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EnabledFeatures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EnabledFeatures_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "Comment", "//\x09STARTING POSITION\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "STARTING POSITION" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->OverrideStartingLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation = { "OverrideStartingLocation", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingLocation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "EditCondition", "OverrideStartingLocation" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingLocation = { "StartingLocation", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, StartingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->OverrideStartingTargetOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset = { "OverrideStartingTargetOffset", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingTargetOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "EditCondition", "OverrideStartingTargetOffset" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingTargetOffset = { "StartingTargetOffset", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, StartingTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingTargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingTargetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->OverrideStartingSocketOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset = { "OverrideStartingSocketOffset", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingSocketOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "EditCondition", "OverrideStartingSocketOffset" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingSocketOffset = { "StartingSocketOffset", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, StartingSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingSocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->OverrideStartingYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw = { "OverrideStartingYaw", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingYaw_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "EditCondition", "OverrideStartingYaw" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingYaw = { "StartingYaw", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, StartingYaw), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->OverrideStartingPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch = { "OverrideStartingPitch", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingPitch_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "EditCondition", "OverrideStartingPitch" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingPitch = { "StartingPitch", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, StartingPitch), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->OverrideStartingZoom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom = { "OverrideStartingZoom", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingZoom_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Starting Position" },
		{ "EditCondition", "OverrideStartingZoom" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingZoom = { "StartingZoom", nullptr, (EPropertyFlags)0x0020080001000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, StartingZoom), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// MovementSpeed is used with MoveForward(), MoveRight(), ScreenSliding(), EdgeScrolling().\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "MovementSpeed is used with MoveForward(), MoveRight(), ScreenSliding(), EdgeScrolling()." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "Comment", "// If true, MoveForward() will ignore the Pitch to take the forward vector.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If true, MoveForward() will ignore the Pitch to take the forward vector." },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->UseAlternativeForwardVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector = { "UseAlternativeForwardVector", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "Comment", "// If true, MoveRight() will ignore the Roll to take the right vector.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If true, MoveRight() will ignore the Roll to take the right vector." },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->UseAlternativeRightVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector = { "UseAlternativeRightVector", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "Comment", "// If true, MoveUp() will always move along the Z axis.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If true, MoveUp() will always move along the Z axis." },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->UseAlternativeUpVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector = { "UseAlternativeUpVector", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09OffsetSpeed is used with MoveForward(), MoveRight(), ScreenSliding, EdgeScrolling when Offset is checked.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "OffsetSpeed is used with MoveForward(), MoveRight(), ScreenSliding, EdgeScrolling when Offset is checked." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetSpeed = { "OffsetSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OffsetSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09RotateSpeed is used with RotateYaw(), RotatePitch(), and ScreenSliding when Yaw or Pitch is used.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "RotateSpeed is used with RotateYaw(), RotatePitch(), and ScreenSliding when Yaw or Pitch is used." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotateSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09ZoomSpeed is used with ZoomIn().\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "ZoomSpeed is used with ZoomIn()." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomSpeed = { "ZoomSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Ignore the current TimeDilation value\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Ignore the current TimeDilation value" },
		{ "UIMin", "0.0" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->IgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation = { "IgnoreTimeDilation", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "Comment", "// Adapt the Movement Speed depending on the distance from the ground.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Adapt the Movement Speed depending on the distance from the ground." },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ApplyMovementScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling = { "ApplyMovementScaling", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ApplyOffsetScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling = { "ApplyOffsetScaling", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ApplyMoveUpScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling = { "ApplyMoveUpScaling", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "Comment", "//\x09If true, the Movement Scaling will use the Camera Height instead of the Origin.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If true, the Movement Scaling will use the Camera Height instead of the Origin." },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->UseZoomLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel = { "UseZoomLevel", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumMovementSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "ClampMin", "0.00001" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumMovementSpeed = { "MinimumMovementSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumMovementSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Set it to 0 to ignore this setting.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Set it to 0 to ignore this setting." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumMovementSpeed = { "MaximumMovementSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingDistanceReference_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "//\x09""Distance from the ground at which the camera will move at the default speed.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Distance from the ground at which the camera will move at the default speed." },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingDistanceReference = { "ScalingDistanceReference", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ScalingDistanceReference), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingDistanceReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingDistanceReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_GroundLevel_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "Comment", "//\x09If your ground level never changes in the level, set its Z location here.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If your ground level never changes in the level, set its Z location here." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_GroundLevel = { "GroundLevel", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, GroundLevel), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_GroundLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_GroundLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "Comment", "//\x09If true, will trace down the Z Axis to find the nearest ground and override GroundLevel.\n//\x09If you're working with great distances, consider increasing \"TraceDistance\" inside your PlayerController.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If true, will trace down the Z Axis to find the nearest ground and override GroundLevel.\nIf you're working with great distances, consider increasing \"TraceDistance\" inside your PlayerController." },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ScalingTraceToGround = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround = { "ScalingTraceToGround", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels_Inner = { "ScalingTraceChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Movement Scaling" },
		{ "Comment", "//\x09""Channels to trace to the ground. \n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Channels to trace to the ground." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels = { "ScalingTraceChannels", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ScalingTraceChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Zoom Scaling" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "UIMin", "0.0" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->UseZoomScaling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling = { "UseZoomScaling", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoomSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Zoom Scaling" },
		{ "ClampMin", "0.00001" },
		{ "EditCondition", "UseZoomScaling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoomSpeed = { "MinimumZoomSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoomSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Zoom Scaling" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Set it to 0 to ignore this setting\n" },
		{ "EditCondition", "UseZoomScaling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Set it to 0 to ignore this setting" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoomSpeed = { "MaximumZoomSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumZoomSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoomSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoomSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomReference_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Zoom Scaling" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "//\x09Sets the scaling of your Zoom. The greater the distances you're working with are, the greater this value must be.\n" },
		{ "EditCondition", "UseZoomScaling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Sets the scaling of your Zoom. The greater the distances you're working with are, the greater this value must be." },
		{ "UIMin", "0.00001" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomReference = { "ZoomReference", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ZoomReference), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Origin Collisions" },
		{ "Comment", "//\x09ORIGIN COLLISIONS\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "ORIGIN COLLISIONS" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ApplyOriginCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions = { "ApplyOriginCollisions", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Origin Collisions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ApplyTargetOffsetCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions = { "ApplyTargetOffsetCollisions", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Origin Collisions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ApplySocketOffsetCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions = { "ApplySocketOffsetCollisions", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsChannel_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Origin Collisions" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsChannel = { "OriginCollisionsChannel", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OriginCollisionsChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsProbeSize_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Origin Collisions" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsProbeSize = { "OriginCollisionsProbeSize", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OriginCollisionsProbeSize), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsProbeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsProbeSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsChannel_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Spring Arm Collisions" },
		{ "Comment", "//\x09SPRING ARM COLLISIONS\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "SPRING ARM COLLISIONS" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsChannel = { "SpringArmCollisionsChannel", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, SpringArmCollisionsChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsProbeSize_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Spring Arm Collisions" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsProbeSize = { "SpringArmCollisionsProbeSize", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, SpringArmCollisionsProbeSize), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsProbeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsProbeSize_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels_Inner = { "TerrainHeightAdaptationChannels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "Comment", "//\x09""Collision Channel to test the probe against.\n//\x09Set the camera to react to this type of terrain\n// If you're working with great distances, consider increasing \"TraceDistance\" inside your PlayerController.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Collision Channel to test the probe against.\nSet the camera to react to this type of terrain\nIf you're working with great distances, consider increasing \"TraceDistance\" inside your PlayerController." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels = { "TerrainHeightAdaptationChannels", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, TerrainHeightAdaptationChannels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginDistanceFromGround_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Origin distance from the ground\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Origin distance from the ground" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginDistanceFromGround = { "OriginDistanceFromGround", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OriginDistanceFromGround), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginDistanceFromGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginDistanceFromGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZProbeRadius_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Radius of the probe to see if there's valid ground above or under\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Radius of the probe to see if there's valid ground above or under" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZProbeRadius = { "ZProbeRadius", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ZProbeRadius), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZProbeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZProbeRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "Comment", "//\x09""Enable to use camera height to test for upper ground (will allow you to go below surfaces instead of always looking for the highest ground)\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Enable to use camera height to test for upper ground (will allow you to go below surfaces instead of always looking for the highest ground)" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->CanGoBelowSurfaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces = { "CanGoBelowSurfaces", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "Comment", "//\x09If true, an additional check will make sure that you can always see Origin\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If true, an additional check will make sure that you can always see Origin" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->AlwaysSeeOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin = { "AlwaysSeeOrigin", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_VisibilityProbeRadius_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Radius of the probe to check for Origin visibility\n" },
		{ "EditCondition", "AlwaysSeeOrigin" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Radius of the probe to check for Origin visibility" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_VisibilityProbeRadius = { "VisibilityProbeRadius", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, VisibilityProbeRadius), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_VisibilityProbeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_VisibilityProbeRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "Comment", "//\x09""Allows the camera to ignore TerrainHeightAdaptation while at a certain height from the ground\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Allows the camera to ignore TerrainHeightAdaptation while at a certain height from the ground" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->DistanceAdaptation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation = { "DistanceAdaptation", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceBypassValue_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Terrain Height Adaptation" },
		{ "Comment", "//\x09The height from which the camera will ignore TerrainHeightAdaptation\n" },
		{ "EditCondition", "DistanceAdaptation" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "The height from which the camera will ignore TerrainHeightAdaptation" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceBypassValue = { "DistanceBypassValue", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, DistanceBypassValue), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceBypassValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceBypassValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSensitivity_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Edge Scrolling" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09The distance from the edges of the screen at which your cursor must be to edge scroll\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "The distance from the edges of the screen at which your cursor must be to edge scroll" },
		{ "UIMax", "0.5" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSensitivity = { "EdgeScrollingSensitivity", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, EdgeScrollingSensitivity), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSensitivity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSpeedMultiplier_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Edge Scrolling" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09Speed of the edge scrolling movement\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Speed of the edge scrolling movement" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSpeedMultiplier = { "EdgeScrollingSpeedMultiplier", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, EdgeScrollingSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSpeedMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Edge Scrolling" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09If enabled, the speed of the camera will adapt depending on the distance your cursor is from the border\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If enabled, the speed of the camera will adapt depending on the distance your cursor is from the border" },
		{ "UIMin", "0.0" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->UseEdgeScrollingStrength = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength = { "UseEdgeScrollingStrength", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Edge Scrolling" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "UIMin", "0.0" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->NormalizeEdgeScrollingDirection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection = { "NormalizeEdgeScrollingDirection", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollMode_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Edge Scrolling" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09If enabled, move the SocketOffset instead of the Origin\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "If enabled, move the SocketOffset instead of the Origin" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollMode = { "EdgeScrollMode", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, EdgeScrollMode), Z_Construct_UEnum_UniversalCameraPlugin_EEdgeScrollMode, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollMode_MetaData)) }; // 2646564284
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Edge Scrolling" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->IsEdgeScrolling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling = { "IsEdgeScrolling", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragCollisionChannel_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Precise Mouse Drag" },
		{ "DisplayName", "CollisionChannel" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragCollisionChannel = { "PreciseMouseDragCollisionChannel", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, PreciseMouseDragCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragCollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Precise Mouse Drag" },
		{ "DisplayName", "TraceComplex" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->PreciseMouseDragTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex = { "PreciseMouseDragTraceComplex", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Precise Mouse Drag" },
		{ "DisplayName", "IgnoreMovementLag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->PreciseMouseDragIgnoreMovementLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag = { "PreciseMouseDragIgnoreMovementLag", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Precise Mouse Drag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->IsPreciseMouseDragging = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging = { "IsPreciseMouseDragging", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragOrigin_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Precise Mouse Drag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragOrigin = { "PreciseMouseDragOrigin", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, PreciseMouseDragOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ClampMin", "0.0" },
		{ "Comment", "//\x09The Maximum Speed of the Screen Sliding, reached whenever your cursor distance from its initial position is more than the ScreenSlidingMaxRatio.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "The Maximum Speed of the Screen Sliding, reached whenever your cursor distance from its initial position is more than the ScreenSlidingMaxRatio." },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxSpeed = { "ScreenSlidingMaxSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ScreenSlidingMaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxRatio_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Max effective distance from initial cursor position\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Max effective distance from initial cursor position" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxRatio = { "ScreenSlidingMaxRatio", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ScreenSlidingMaxRatio), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ScreenSlidingInvertXAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis = { "ScreenSlidingInvertXAxis", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ScreenSlidingInvertYAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis = { "ScreenSlidingInvertYAxis", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingType_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingType = { "ScreenSlidingType", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ScreenSlidingType), Z_Construct_UEnum_UniversalCameraPlugin_EScreenSlidingType, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingType_MetaData)) }; // 589189755
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Screen Sliding" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->IsScreenSliding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding = { "IsScreenSliding", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowTargetSettings_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Follow Actor" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowTargetSettings = { "FollowTargetSettings", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, FollowTargetSettings), Z_Construct_UScriptStruct_FTargetSettings_WithTemplates, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowTargetSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowTargetSettings_MetaData)) }; // 2639154408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowedAxis_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Follow Actor" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowedAxis = { "FollowedAxis", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, FollowedAxis), Z_Construct_UScriptStruct_FConstrainVector2, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowedAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowedAxis_MetaData)) }; // 3976140335
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->bIsFollowingAnyActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor = { "bIsFollowingAnyActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->bShouldResetOffsetIfFailed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed = { "bShouldResetOffsetIfFailed", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementLagSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementLagSpeed = { "MovementLagSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MovementLagSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementLagSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetLagSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "EditCondition", "UseOffsetLag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetLagSpeed = { "OffsetLagSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OffsetLagSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetLagSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_HeightLagSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_HeightLagSpeed = { "HeightLagSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, HeightLagSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_HeightLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_HeightLagSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotationLagSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotationLagSpeed = { "RotationLagSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, RotationLagSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotationLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotationLagSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomLagSpeed_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Lag" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomLagSpeed = { "ZoomLagSpeed", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ZoomLagSpeed), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomLagSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomLagSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMinimum_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Raw" },
		{ "Comment", "//\x09Location\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMinimum = { "ConstrainLocationMinimum", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ConstrainLocationMinimum), Z_Construct_UScriptStruct_FConstrainVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMinimum_MetaData)) }; // 711001047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumLocation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Raw" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumLocation = { "MinimumLocation", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMaximum_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Raw" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMaximum = { "ConstrainLocationMaximum", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ConstrainLocationMaximum), Z_Construct_UScriptStruct_FConstrainVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMaximum_MetaData)) }; // 711001047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumLocation_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Raw" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumLocation = { "MaximumLocation", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Dots Shape" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ConstrainLocationToShape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape = { "ConstrainLocationToShape", nullptr, (EPropertyFlags)0x0020080001010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots_Inner = { "ConstrainDots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Location|Dots Shape" },
		{ "Comment", "//\x09The dots are used to draw a 2D shape. The last position of the array will close the shape going back to the first element.\n//\x09If \"ConstrainLocationToShape\" is enabled, the Origin will only be able to move within that shape.\n//\x09You need at least three dots to draw a shape.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "The dots are used to draw a 2D shape. The last position of the array will close the shape going back to the first element.\nIf \"ConstrainLocationToShape\" is enabled, the Origin will only be able to move within that shape.\nYou need at least three dots to draw a shape." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots = { "ConstrainDots", nullptr, (EPropertyFlags)0x0020080001010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ConstrainDots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetConstrainType_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Offset" },
		{ "Comment", "//\x09Offset\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Offset" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetConstrainType = { "OffsetConstrainType", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OffsetConstrainType), Z_Construct_UEnum_UniversalCameraPlugin_EConstrainType, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetConstrainType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetConstrainType_MetaData)) }; // 3831784775
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetMaxDistance_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Offset" },
		{ "Comment", "//\x09Represents the max distance the Offset can be from the Origin.\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Represents the max distance the Offset can be from the Origin." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetMaxDistance = { "OffsetMaxDistance", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, OffsetMaxDistance), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetMaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetMaxDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMinimum_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Offset" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMinimum = { "ConstrainOffsetMinimum", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ConstrainOffsetMinimum), Z_Construct_UScriptStruct_FConstrainVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMinimum_MetaData)) }; // 711001047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Offset" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumOffset = { "MinimumOffset", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMaximum_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Offset" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMaximum = { "ConstrainOffsetMaximum", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, ConstrainOffsetMaximum), Z_Construct_UScriptStruct_FConstrainVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMaximum_MetaData)) }; // 711001047
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumOffset_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Offset" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumOffset = { "MaximumOffset", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Yaw" },
		{ "Comment", "//\x09Yaw\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Yaw" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ConstrainYaw = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw = { "ConstrainYaw", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumYaw_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Yaw" },
		{ "EditCondition", "ConstrainYaw" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumYaw = { "MinimumYaw", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumYaw), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumYaw_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Yaw" },
		{ "EditCondition", "ConstrainYaw" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumYaw = { "MaximumYaw", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumYaw), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumYaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumYaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Pitch" },
		{ "Comment", "//\x09Pitch\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Pitch" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ConstrainPitch = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch = { "ConstrainPitch", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumPitch_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Pitch" },
		{ "EditCondition", "ConstrainPitch" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumPitch = { "MinimumPitch", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumPitch), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumPitch_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Pitch" },
		{ "EditCondition", "ConstrainPitch" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumPitch = { "MaximumPitch", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumPitch), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Roll" },
		{ "Comment", "//\x09Roll\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Roll" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ConstrainRoll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll = { "ConstrainRoll", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumRoll_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Roll" },
		{ "EditCondition", "ConstrainPitch" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumRoll = { "MinimumRoll", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumRoll), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumRoll_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Roll" },
		{ "EditCondition", "ConstrainPitch" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumRoll = { "MaximumRoll", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumRoll), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Zoom" },
		{ "Comment", "//\x09Zoom\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "Zoom" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ConstrainZoomMinimum = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum = { "ConstrainZoomMinimum", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoom_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Zoom" },
		{ "EditCondition", "ConstrainZoomMinimum" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoom = { "MinimumZoom", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MinimumZoom), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Zoom" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->ConstrainZoomMaximum = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum = { "ConstrainZoomMaximum", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoom_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Movement & Zoom|Restrictions|Zoom" },
		{ "EditCondition", "ConstrainZoomMaximum" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoom = { "MaximumZoom", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUniversalCamera, MaximumZoom), METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Debug" },
		{ "Comment", "//\x09""DEBUG\n" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
		{ "ToolTip", "DEBUG" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->DrawDebugSpheres = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres = { "DrawDebugSpheres", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Debug" },
		{ "ModuleRelativePath", "Public/UniversalCamera.h" },
	};
#endif
	void Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition_SetBit(void* Obj)
	{
		((AUniversalCamera*)Obj)->DebugPrintDesiredPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition = { "DebugPrintDesiredPosition", nullptr, (EPropertyFlags)0x0020080001010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AUniversalCamera), &Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUniversalCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredRotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DesiredZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CurrentTravelTask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsTraveling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EnabledFeatures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OverrideStartingZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_StartingZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeForwardVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeRightVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseAlternativeUpVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotateSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IgnoreTimeDilation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMovementScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOffsetScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyMoveUpScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingDistanceReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_GroundLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScalingTraceChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseZoomScaling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoomSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyOriginCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplyTargetOffsetCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ApplySocketOffsetCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginCollisionsProbeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_SpringArmCollisionsProbeSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_TerrainHeightAdaptationChannels,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OriginDistanceFromGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZProbeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_CanGoBelowSurfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_AlwaysSeeOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_VisibilityProbeRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceAdaptation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DistanceBypassValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollingSpeedMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_UseEdgeScrollingStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_NormalizeEdgeScrollingDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_EdgeScrollMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsEdgeScrolling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragCollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragIgnoreMovementLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsPreciseMouseDragging,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_PreciseMouseDragOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingMaxRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertXAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingInvertYAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ScreenSlidingType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_IsScreenSliding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowTargetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_FollowedAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bIsFollowingAnyActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_bShouldResetOffsetIfFailed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MovementLagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetLagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_HeightLagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_RotationLagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ZoomLagSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainLocationToShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainDots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetConstrainType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_OffsetMaxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainOffsetMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumYaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumPitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMinimum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MinimumZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_ConstrainZoomMaximum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_MaximumZoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DrawDebugSpheres,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUniversalCamera_Statics::NewProp_DebugPrintDesiredPosition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUniversalCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUniversalCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUniversalCamera_Statics::ClassParams = {
		&AUniversalCamera::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUniversalCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUniversalCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUniversalCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUniversalCamera()
	{
		if (!Z_Registration_Info_UClass_AUniversalCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUniversalCamera.OuterSingleton, Z_Construct_UClass_AUniversalCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUniversalCamera.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UClass* StaticClass<AUniversalCamera>()
	{
		return AUniversalCamera::StaticClass();
	}

	void AUniversalCamera::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_DesiredLocation(TEXT("DesiredLocation"));
		static const FName Name_DesiredSocketOffset(TEXT("DesiredSocketOffset"));
		static const FName Name_DesiredTargetOffset(TEXT("DesiredTargetOffset"));
		static const FName Name_DesiredRotation(TEXT("DesiredRotation"));
		static const FName Name_DesiredRotationOffset(TEXT("DesiredRotationOffset"));
		static const FName Name_DesiredZoom(TEXT("DesiredZoom"));

		const bool bIsValid = true
			&& Name_DesiredLocation == ClassReps[(int32)ENetFields_Private::DesiredLocation].Property->GetFName()
			&& Name_DesiredSocketOffset == ClassReps[(int32)ENetFields_Private::DesiredSocketOffset].Property->GetFName()
			&& Name_DesiredTargetOffset == ClassReps[(int32)ENetFields_Private::DesiredTargetOffset].Property->GetFName()
			&& Name_DesiredRotation == ClassReps[(int32)ENetFields_Private::DesiredRotation].Property->GetFName()
			&& Name_DesiredRotationOffset == ClassReps[(int32)ENetFields_Private::DesiredRotationOffset].Property->GetFName()
			&& Name_DesiredZoom == ClassReps[(int32)ENetFields_Private::DesiredZoom].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AUniversalCamera"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUniversalCamera);
	AUniversalCamera::~AUniversalCamera() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::EnumInfo[] = {
		{ EEdgeScrollMode_StaticEnum, TEXT("EEdgeScrollMode"), &Z_Registration_Info_UEnum_EEdgeScrollMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2646564284U) },
		{ ESimplifiedMovementDirection_StaticEnum, TEXT("ESimplifiedMovementDirection"), &Z_Registration_Info_UEnum_ESimplifiedMovementDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2722778552U) },
		{ EScreenSlidingType_StaticEnum, TEXT("EScreenSlidingType"), &Z_Registration_Info_UEnum_EScreenSlidingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 589189755U) },
		{ EConstrainType_StaticEnum, TEXT("EConstrainType"), &Z_Registration_Info_UEnum_EConstrainType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3831784775U) },
		{ EStopFollowingReason_StaticEnum, TEXT("EStopFollowingReason"), &Z_Registration_Info_UEnum_EStopFollowingReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1868544836U) },
		{ EEnabledFeatures_StaticEnum, TEXT("EEnabledFeatures"), &Z_Registration_Info_UEnum_EEnabledFeatures, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2491898309U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::ScriptStructInfo[] = {
		{ FConstrainVector::StaticStruct, Z_Construct_UScriptStruct_FConstrainVector_Statics::NewStructOps, TEXT("ConstrainVector"), &Z_Registration_Info_UScriptStruct_ConstrainVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstrainVector), 711001047U) },
		{ FConstrainVector2::StaticStruct, Z_Construct_UScriptStruct_FConstrainVector2_Statics::NewStructOps, TEXT("ConstrainVector2"), &Z_Registration_Info_UScriptStruct_ConstrainVector2, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstrainVector2), 3976140335U) },
		{ FBoolRotation::StaticStruct, Z_Construct_UScriptStruct_FBoolRotation_Statics::NewStructOps, TEXT("BoolRotation"), &Z_Registration_Info_UScriptStruct_BoolRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoolRotation), 2897540821U) },
		{ FTargetSettings_WithTemplates::StaticStruct, Z_Construct_UScriptStruct_FTargetSettings_WithTemplates_Statics::NewStructOps, TEXT("TargetSettings_WithTemplates"), &Z_Registration_Info_UScriptStruct_TargetSettings_WithTemplates, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetSettings_WithTemplates), 2639154408U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUniversalCamera, AUniversalCamera::StaticClass, TEXT("AUniversalCamera"), &Z_Registration_Info_UClass_AUniversalCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUniversalCamera), 962951677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_879093661(TEXT("/Script/UniversalCameraPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCamera_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
