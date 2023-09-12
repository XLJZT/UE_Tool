// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSCameraPlugin/Public/AsyncNode.h"
#include "RTSCameraPlugin/Public/SharedStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncNode() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_AUniversalCamera_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_UAsyncNode();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_UAsyncNode_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod();
	UNIVERSALCAMERAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOffsetSettings();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTargetFloat();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTargetSettings();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTargetVector();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTravelSpeedSettings();
	UPackage* Z_Construct_UPackage__Script_UniversalCameraPlugin();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin, nullptr, "OnReachedDestination__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TravelSpeedSettings;
class UScriptStruct* FTravelSpeedSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TravelSpeedSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TravelSpeedSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTravelSpeedSettings, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("TravelSpeedSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TravelSpeedSettings.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FTravelSpeedSettings>()
{
	return FTravelSpeedSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSpeed_MetaData[];
#endif
		static void NewProp_UseSpeed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTravelSpeedSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed_SetBit(void* Obj)
	{
		((FTravelSpeedSettings*)Obj)->UseSpeed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed = { "UseSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FTravelSpeedSettings), &Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Speed_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTravelSpeedSettings, Speed), METADATA_PARAMS(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Duration_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTravelSpeedSettings, Duration), METADATA_PARAMS(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_UseSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewProp_Duration,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"TravelSpeedSettings",
		sizeof(FTravelSpeedSettings),
		alignof(FTravelSpeedSettings),
		Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTravelSpeedSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TravelSpeedSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TravelSpeedSettings.InnerSingleton, Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TravelSpeedSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetVector;
class UScriptStruct* FTargetVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetVector, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("TargetVector"));
	}
	return Z_Registration_Info_UScriptStruct_TargetVector.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FTargetVector>()
{
	return FTargetVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_TargetMod_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_TargetMod = { "TargetMod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetVector, TargetMod), Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_TargetMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_TargetMod_MetaData)) }; // 400465198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_VectorValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetVector, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_VectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_VectorValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_TargetMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetVector_Statics::NewProp_VectorValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"TargetVector",
		sizeof(FTargetVector),
		alignof(FTargetVector),
		Z_Construct_UScriptStruct_FTargetVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetVector()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetVector.InnerSingleton, Z_Construct_UScriptStruct_FTargetVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OffsetSettings;
class UScriptStruct* FOffsetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OffsetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OffsetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOffsetSettings, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("OffsetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_OffsetSettings.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FOffsetSettings>()
{
	return FOffsetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOffsetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetMod_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OffsetMod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffsetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOffsetSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetMod_MetaData[] = {
		{ "Comment", "//\x09""0 - None\n//\x09""1 - Target Offset\n//\x09""2 - Socket Offset\n" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
		{ "ToolTip", "0 - None\n1 - Target Offset\n2 - Socket Offset" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetMod = { "OffsetMod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOffsetSettings, OffsetMod), METADATA_PARAMS(Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetMod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetValue = { "OffsetValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOffsetSettings, OffsetValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOffsetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewProp_OffsetValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOffsetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"OffsetSettings",
		sizeof(FOffsetSettings),
		alignof(FOffsetSettings),
		Z_Construct_UScriptStruct_FOffsetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffsetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOffsetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOffsetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOffsetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_OffsetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OffsetSettings.InnerSingleton, Z_Construct_UScriptStruct_FOffsetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OffsetSettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetFloat;
class UScriptStruct* FTargetFloat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetFloat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetFloat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetFloat, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("TargetFloat"));
	}
	return Z_Registration_Info_UScriptStruct_TargetFloat.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FTargetFloat>()
{
	return FTargetFloat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetFloat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetMod_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TargetMod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFloat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetFloat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetFloat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_TargetMod_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_TargetMod = { "TargetMod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetFloat, TargetMod), Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_TargetMod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_TargetMod_MetaData)) }; // 400465198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_FloatValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetFloat, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_FloatValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_TargetMod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetFloat_Statics::NewProp_FloatValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetFloat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"TargetFloat",
		sizeof(FTargetFloat),
		alignof(FTargetFloat),
		Z_Construct_UScriptStruct_FTargetFloat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFloat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetFloat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetFloat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetFloat()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetFloat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetFloat.InnerSingleton, Z_Construct_UScriptStruct_FTargetFloat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetFloat.InnerSingleton;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseSocketOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_SocketOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOffsetSettings*)Z_Param__Result=UAsyncNode::UseSocketOffset(Z_Param_SocketOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseTargetOffset)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOffsetSettings*)Z_Param__Result=UAsyncNode::UseTargetOffset(Z_Param_TargetOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseDuration)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTravelSpeedSettings*)Z_Param__Result=UAsyncNode::UseDuration(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTravelSpeedSettings*)Z_Param__Result=UAsyncNode::UseSpeed(Z_Param_Speed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseSceneComponentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetFloat*)Z_Param__Result=UAsyncNode::UseSceneComponentValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseSocketValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetFloat*)Z_Param__Result=UAsyncNode::UseSocketValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseActorValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetFloat*)Z_Param__Result=UAsyncNode::UseActorValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseCustomValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetFloat*)Z_Param__Result=UAsyncNode::UseCustomValue(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseSceneComponentLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetVector*)Z_Param__Result=UAsyncNode::UseSceneComponentLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseSocketLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetVector*)Z_Param__Result=UAsyncNode::UseSocketLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseActorLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetVector*)Z_Param__Result=UAsyncNode::UseActorLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execUseCustomLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTargetVector*)Z_Param__Result=UAsyncNode::UseCustomLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncNode::execCameraTravel)
	{
		P_GET_OBJECT(AUniversalCamera,Z_Param_UniversalCamera);
		P_GET_STRUCT(FTargetSettings,Z_Param_TargetSettings);
		P_GET_STRUCT(FTargetVector,Z_Param_LocationSettings);
		P_GET_STRUCT(FOffsetSettings,Z_Param_OffsetSettings);
		P_GET_STRUCT(FTargetFloat,Z_Param_YawSettings);
		P_GET_STRUCT(FTargetFloat,Z_Param_PitchSettings);
		P_GET_STRUCT(FTargetFloat,Z_Param_RollSettings);
		P_GET_STRUCT(FTargetFloat,Z_Param_ZoomSettings);
		P_GET_OBJECT(UCurveFloat,Z_Param_Curve);
		P_GET_STRUCT(FTravelSpeedSettings,Z_Param_SpeedSettings);
		P_GET_UBOOL(Z_Param_LockAllMovement);
		P_GET_UBOOL(Z_Param_IgnoreLag);
		P_GET_UBOOL(Z_Param_IgnoreRestrictions);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncNode**)Z_Param__Result=UAsyncNode::CameraTravel(Z_Param_UniversalCamera,Z_Param_TargetSettings,Z_Param_LocationSettings,Z_Param_OffsetSettings,Z_Param_YawSettings,Z_Param_PitchSettings,Z_Param_RollSettings,Z_Param_ZoomSettings,Z_Param_Curve,Z_Param_SpeedSettings,Z_Param_LockAllMovement,Z_Param_IgnoreLag,Z_Param_IgnoreRestrictions);
		P_NATIVE_END;
	}
	void UAsyncNode::StaticRegisterNativesUAsyncNode()
	{
		UClass* Class = UAsyncNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CameraTravel", &UAsyncNode::execCameraTravel },
			{ "UseActorLocation", &UAsyncNode::execUseActorLocation },
			{ "UseActorValue", &UAsyncNode::execUseActorValue },
			{ "UseCustomLocation", &UAsyncNode::execUseCustomLocation },
			{ "UseCustomValue", &UAsyncNode::execUseCustomValue },
			{ "UseDuration", &UAsyncNode::execUseDuration },
			{ "UseSceneComponentLocation", &UAsyncNode::execUseSceneComponentLocation },
			{ "UseSceneComponentValue", &UAsyncNode::execUseSceneComponentValue },
			{ "UseSocketLocation", &UAsyncNode::execUseSocketLocation },
			{ "UseSocketOffset", &UAsyncNode::execUseSocketOffset },
			{ "UseSocketValue", &UAsyncNode::execUseSocketValue },
			{ "UseSpeed", &UAsyncNode::execUseSpeed },
			{ "UseTargetOffset", &UAsyncNode::execUseTargetOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics
	{
		struct AsyncNode_eventCameraTravel_Parms
		{
			AUniversalCamera* UniversalCamera;
			FTargetSettings TargetSettings;
			FTargetVector LocationSettings;
			FOffsetSettings OffsetSettings;
			FTargetFloat YawSettings;
			FTargetFloat PitchSettings;
			FTargetFloat RollSettings;
			FTargetFloat ZoomSettings;
			UCurveFloat* Curve;
			FTravelSpeedSettings SpeedSettings;
			bool LockAllMovement;
			bool IgnoreLag;
			bool IgnoreRestrictions;
			UAsyncNode* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UniversalCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_YawSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollSettings;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ZoomSettings;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpeedSettings;
		static void NewProp_LockAllMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockAllMovement;
		static void NewProp_IgnoreLag_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreLag;
		static void NewProp_IgnoreRestrictions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreRestrictions;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_UniversalCamera = { "UniversalCamera", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, UniversalCamera), Z_Construct_UClass_AUniversalCamera_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_TargetSettings = { "TargetSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, TargetSettings), Z_Construct_UScriptStruct_FTargetSettings, METADATA_PARAMS(nullptr, 0) }; // 2280014271
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_LocationSettings = { "LocationSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, LocationSettings), Z_Construct_UScriptStruct_FTargetVector, METADATA_PARAMS(nullptr, 0) }; // 368227951
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_OffsetSettings = { "OffsetSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, OffsetSettings), Z_Construct_UScriptStruct_FOffsetSettings, METADATA_PARAMS(nullptr, 0) }; // 3970985112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_YawSettings = { "YawSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, YawSettings), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_PitchSettings = { "PitchSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, PitchSettings), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_RollSettings = { "RollSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, RollSettings), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_ZoomSettings = { "ZoomSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, ZoomSettings), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_SpeedSettings = { "SpeedSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, SpeedSettings), Z_Construct_UScriptStruct_FTravelSpeedSettings, METADATA_PARAMS(nullptr, 0) }; // 3928219553
	void Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_LockAllMovement_SetBit(void* Obj)
	{
		((AsyncNode_eventCameraTravel_Parms*)Obj)->LockAllMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_LockAllMovement = { "LockAllMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncNode_eventCameraTravel_Parms), &Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_LockAllMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreLag_SetBit(void* Obj)
	{
		((AsyncNode_eventCameraTravel_Parms*)Obj)->IgnoreLag = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreLag = { "IgnoreLag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncNode_eventCameraTravel_Parms), &Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreLag_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreRestrictions_SetBit(void* Obj)
	{
		((AsyncNode_eventCameraTravel_Parms*)Obj)->IgnoreRestrictions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreRestrictions = { "IgnoreRestrictions", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AsyncNode_eventCameraTravel_Parms), &Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreRestrictions_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventCameraTravel_Parms, ReturnValue), Z_Construct_UClass_UAsyncNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_UniversalCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_TargetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_LocationSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_OffsetSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_YawSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_PitchSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_RollSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_ZoomSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_Curve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_SpeedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_LockAllMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreLag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_IgnoreRestrictions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Comment", "//\x09""CameraTravel to the specified Location.\n//\x09""Drag any pin and type in \"Use\" with Context Sensitive enabled to see the different options.\n//\x09Use the \"AbortTravelTask()\" function to abort.\n// \x09""All of the settings are optional, but at least one must be valid.\n//\x09@Param TargetSettings Set the Target References that can be used by other settings.\n//\x09@Param Curve Must go from (0;0) to (1;1).\n//\x09@Param LockAllMovement If true, Movement, Rotation and Zoom will be locked during the traveling. If false, only valid settings will be locked.\n//\x09@Param IgnoreRestrictions Ignore Restrictions and Collisions \n" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
		{ "ToolTip", "CameraTravel to the specified Location.\nDrag any pin and type in \"Use\" with Context Sensitive enabled to see the different options.\nUse the \"AbortTravelTask()\" function to abort.\nAll of the settings are optional, but at least one must be valid.\n@Param TargetSettings Set the Target References that can be used by other settings.\n@Param Curve Must go from (0;0) to (1;1).\n@Param LockAllMovement If true, Movement, Rotation and Zoom will be locked during the traveling. If false, only valid settings will be locked.\n@Param IgnoreRestrictions Ignore Restrictions and Collisions" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "CameraTravel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::AsyncNode_eventCameraTravel_Parms), Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_CameraTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_CameraTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics
	{
		struct AsyncNode_eventUseActorLocation_Parms
		{
			FTargetVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseActorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetVector, METADATA_PARAMS(nullptr, 0) }; // 368227951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseActorLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::AsyncNode_eventUseActorLocation_Parms), Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseActorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseActorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics
	{
		struct AsyncNode_eventUseActorValue_Parms
		{
			FTargetFloat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseActorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseActorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::AsyncNode_eventUseActorValue_Parms), Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseActorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseActorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics
	{
		struct AsyncNode_eventUseCustomLocation_Parms
		{
			FVector Location;
			FTargetVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseCustomLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_Location_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseCustomLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetVector, METADATA_PARAMS(nullptr, 0) }; // 368227951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Comment", "//\x09MAKE BP SETTINGS (USER FRIENDLY)\n" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
		{ "ToolTip", "MAKE BP SETTINGS (USER FRIENDLY)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseCustomLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::AsyncNode_eventUseCustomLocation_Parms), Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseCustomLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseCustomLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics
	{
		struct AsyncNode_eventUseCustomValue_Parms
		{
			float Value;
			FTargetFloat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseCustomValue_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseCustomValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "CPP_Default_Value", "0.000000" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseCustomValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::AsyncNode_eventUseCustomValue_Parms), Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseCustomValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseCustomValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseDuration_Statics
	{
		struct AsyncNode_eventUseDuration_Parms
		{
			float Duration;
			FTravelSpeedSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseDuration_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_Duration_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_Duration_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTravelSpeedSettings, METADATA_PARAMS(nullptr, 0) }; // 3928219553
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_Duration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "CPP_Default_Duration", "2.000000" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::AsyncNode_eventUseDuration_Parms), Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics
	{
		struct AsyncNode_eventUseSceneComponentLocation_Parms
		{
			FTargetVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSceneComponentLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetVector, METADATA_PARAMS(nullptr, 0) }; // 368227951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseSceneComponentLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::AsyncNode_eventUseSceneComponentLocation_Parms), Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics
	{
		struct AsyncNode_eventUseSceneComponentValue_Parms
		{
			FTargetFloat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSceneComponentValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseSceneComponentValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::AsyncNode_eventUseSceneComponentValue_Parms), Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics
	{
		struct AsyncNode_eventUseSocketLocation_Parms
		{
			FTargetVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSocketLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetVector, METADATA_PARAMS(nullptr, 0) }; // 368227951
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseSocketLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::AsyncNode_eventUseSocketLocation_Parms), Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseSocketLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseSocketLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics
	{
		struct AsyncNode_eventUseSocketOffset_Parms
		{
			FVector SocketOffset;
			FOffsetSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_SocketOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_SocketOffset = { "SocketOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSocketOffset_Parms, SocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_SocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_SocketOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSocketOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FOffsetSettings, METADATA_PARAMS(nullptr, 0) }; // 3970985112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_SocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseSocketOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::AsyncNode_eventUseSocketOffset_Parms), Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseSocketOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseSocketOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics
	{
		struct AsyncNode_eventUseSocketValue_Parms
		{
			FTargetFloat ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSocketValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FTargetFloat, METADATA_PARAMS(nullptr, 0) }; // 1917561277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseSocketValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::AsyncNode_eventUseSocketValue_Parms), Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseSocketValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseSocketValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics
	{
		struct AsyncNode_eventUseSpeed_Parms
		{
			float Speed;
			FTravelSpeedSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSpeed_Parms, Speed), METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_Speed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseSpeed_Parms, ReturnValue), Z_Construct_UScriptStruct_FTravelSpeedSettings, METADATA_PARAMS(nullptr, 0) }; // 3928219553
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "CPP_Default_Speed", "1000.000000" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::AsyncNode_eventUseSpeed_Parms), Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14082401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics
	{
		struct AsyncNode_eventUseTargetOffset_Parms
		{
			FVector TargetOffset;
			FOffsetSettings ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_TargetOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseTargetOffset_Parms, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_TargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_TargetOffset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AsyncNode_eventUseTargetOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FOffsetSettings, METADATA_PARAMS(nullptr, 0) }; // 3970985112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_TargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AsyncNode|Settings" },
		{ "Keywords", "Make" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncNode, nullptr, "UseTargetOffset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::AsyncNode_eventUseTargetOffset_Parms), Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14882401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncNode_UseTargetOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAsyncNode_UseTargetOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAsyncNode);
	UClass* Z_Construct_UClass_UAsyncNode_NoRegister()
	{
		return UAsyncNode::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReachedDestination_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReachedDestination;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnAborted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAborted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncNode_CameraTravel, "CameraTravel" }, // 316409916
		{ &Z_Construct_UFunction_UAsyncNode_UseActorLocation, "UseActorLocation" }, // 623075391
		{ &Z_Construct_UFunction_UAsyncNode_UseActorValue, "UseActorValue" }, // 102501061
		{ &Z_Construct_UFunction_UAsyncNode_UseCustomLocation, "UseCustomLocation" }, // 3177294144
		{ &Z_Construct_UFunction_UAsyncNode_UseCustomValue, "UseCustomValue" }, // 1066200029
		{ &Z_Construct_UFunction_UAsyncNode_UseDuration, "UseDuration" }, // 2758673614
		{ &Z_Construct_UFunction_UAsyncNode_UseSceneComponentLocation, "UseSceneComponentLocation" }, // 2499334954
		{ &Z_Construct_UFunction_UAsyncNode_UseSceneComponentValue, "UseSceneComponentValue" }, // 2819911484
		{ &Z_Construct_UFunction_UAsyncNode_UseSocketLocation, "UseSocketLocation" }, // 2156232521
		{ &Z_Construct_UFunction_UAsyncNode_UseSocketOffset, "UseSocketOffset" }, // 1486005277
		{ &Z_Construct_UFunction_UAsyncNode_UseSocketValue, "UseSocketValue" }, // 92992984
		{ &Z_Construct_UFunction_UAsyncNode_UseSpeed, "UseSpeed" }, // 3716847415
		{ &Z_Construct_UFunction_UAsyncNode_UseTargetOffset, "UseTargetOffset" }, // 620593207
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AsyncNode.h" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnReachedDestination_MetaData[] = {
		{ "Comment", "//\x09""Called if the task ended and the camera successfully reached the destination\n" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
		{ "ToolTip", "Called if the task ended and the camera successfully reached the destination" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnReachedDestination = { "OnReachedDestination", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncNode, OnReachedDestination), Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnReachedDestination_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnReachedDestination_MetaData)) }; // 1894107512
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnAborted_MetaData[] = {
		{ "Comment", "//\x09""Called if the task ended prematurely\n" },
		{ "ModuleRelativePath", "Public/AsyncNode.h" },
		{ "ToolTip", "Called if the task ended prematurely" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnAborted = { "OnAborted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAsyncNode, OnAborted), Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnAborted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnAborted_MetaData)) }; // 1894107512
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnReachedDestination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncNode_Statics::NewProp_OnAborted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAsyncNode_Statics::ClassParams = {
		&UAsyncNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNode_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncNode()
	{
		if (!Z_Registration_Info_UClass_UAsyncNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAsyncNode.OuterSingleton, Z_Construct_UClass_UAsyncNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAsyncNode.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UClass* StaticClass<UAsyncNode>()
	{
		return UAsyncNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncNode);
	UAsyncNode::~UAsyncNode() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics::ScriptStructInfo[] = {
		{ FTravelSpeedSettings::StaticStruct, Z_Construct_UScriptStruct_FTravelSpeedSettings_Statics::NewStructOps, TEXT("TravelSpeedSettings"), &Z_Registration_Info_UScriptStruct_TravelSpeedSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTravelSpeedSettings), 3928219553U) },
		{ FTargetVector::StaticStruct, Z_Construct_UScriptStruct_FTargetVector_Statics::NewStructOps, TEXT("TargetVector"), &Z_Registration_Info_UScriptStruct_TargetVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetVector), 368227951U) },
		{ FOffsetSettings::StaticStruct, Z_Construct_UScriptStruct_FOffsetSettings_Statics::NewStructOps, TEXT("OffsetSettings"), &Z_Registration_Info_UScriptStruct_OffsetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOffsetSettings), 3970985112U) },
		{ FTargetFloat::StaticStruct, Z_Construct_UScriptStruct_FTargetFloat_Statics::NewStructOps, TEXT("TargetFloat"), &Z_Registration_Info_UScriptStruct_TargetFloat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetFloat), 1917561277U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAsyncNode, UAsyncNode::StaticClass, TEXT("UAsyncNode"), &Z_Registration_Info_UClass_UAsyncNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAsyncNode), 3959496262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_3545963495(TEXT("/Script/UniversalCameraPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_AsyncNode_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
