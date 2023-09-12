// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSCameraPlugin/Public/SharedStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedStructs() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UEnum* Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FTargetSettings();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat();
	UPackage* Z_Construct_UPackage__Script_UniversalCameraPlugin();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetMod;
	static UEnum* ETargetMod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetMod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetMod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("ETargetMod"));
		}
		return Z_Registration_Info_UEnum_ETargetMod.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UEnum* StaticEnum<ETargetMod>()
	{
		return ETargetMod_StaticEnum();
	}
	struct Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::Enumerators[] = {
		{ "TargetMod_None", (int64)TargetMod_None },
		{ "TargetMod_CustomValue", (int64)TargetMod_CustomValue },
		{ "TargetMod_Actor", (int64)TargetMod_Actor },
		{ "TargetMod_Socket", (int64)TargetMod_Socket },
		{ "TargetMod_SceneComponent", (int64)TargetMod_SceneComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
		{ "TargetMod_Actor.DisplayName", "Actor" },
		{ "TargetMod_Actor.Name", "TargetMod_Actor" },
		{ "TargetMod_CustomValue.DisplayName", "CustomValue" },
		{ "TargetMod_CustomValue.Name", "TargetMod_CustomValue" },
		{ "TargetMod_None.DisplayName", "None" },
		{ "TargetMod_None.Name", "TargetMod_None" },
		{ "TargetMod_SceneComponent.DisplayName", "SceneComponent" },
		{ "TargetMod_SceneComponent.Name", "TargetMod_SceneComponent" },
		{ "TargetMod_Socket.DisplayName", "Socket" },
		{ "TargetMod_Socket.Name", "TargetMod_Socket" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		"ETargetMod",
		"ETargetMod",
		Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod()
	{
		if (!Z_Registration_Info_UEnum_ETargetMod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetMod.InnerSingleton, Z_Construct_UEnum_UniversalCameraPlugin_ETargetMod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetMod.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat;
class UScriptStruct* FUniversalCameraPositionSaveFormat::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("UniversalCameraPositionSaveFormat"));
	}
	return Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FUniversalCameraPositionSaveFormat>()
{
	return FUniversalCameraPositionSaveFormat::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredZoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredZoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUniversalCameraPositionSaveFormat>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredLocation = { "DesiredLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniversalCameraPositionSaveFormat, DesiredLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredSocketOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredSocketOffset = { "DesiredSocketOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniversalCameraPositionSaveFormat, DesiredSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredSocketOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredSocketOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredTargetOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredTargetOffset = { "DesiredTargetOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniversalCameraPositionSaveFormat, DesiredTargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredTargetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredTargetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniversalCameraPositionSaveFormat, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredZoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredZoom = { "DesiredZoom", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUniversalCameraPositionSaveFormat, DesiredZoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredZoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredSocketOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredTargetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewProp_DesiredZoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"UniversalCameraPositionSaveFormat",
		sizeof(FUniversalCameraPositionSaveFormat),
		alignof(FUniversalCameraPositionSaveFormat),
		Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat()
	{
		if (!Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat.InnerSingleton, Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TargetSettings;
class UScriptStruct* FTargetSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TargetSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TargetSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTargetSettings, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("TargetSettings"));
	}
	return Z_Registration_Info_UScriptStruct_TargetSettings.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FTargetSettings>()
{
	return FTargetSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTargetSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Socket;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTargetSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTargetSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetSettings, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetSettings, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetSettings, Mesh), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "Universal Camera Plugin|Restrictions" },
		{ "ModuleRelativePath", "Public/SharedStructs.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTargetSettings, Socket), METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Socket_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTargetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTargetSettings_Statics::NewProp_Socket,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTargetSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"TargetSettings",
		sizeof(FTargetSettings),
		alignof(FTargetSettings),
		Z_Construct_UScriptStruct_FTargetSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTargetSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTargetSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTargetSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_TargetSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TargetSettings.InnerSingleton, Z_Construct_UScriptStruct_FTargetSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TargetSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics::EnumInfo[] = {
		{ ETargetMod_StaticEnum, TEXT("ETargetMod"), &Z_Registration_Info_UEnum_ETargetMod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 400465198U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics::ScriptStructInfo[] = {
		{ FUniversalCameraPositionSaveFormat::StaticStruct, Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat_Statics::NewStructOps, TEXT("UniversalCameraPositionSaveFormat"), &Z_Registration_Info_UScriptStruct_UniversalCameraPositionSaveFormat, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUniversalCameraPositionSaveFormat), 1458947203U) },
		{ FTargetSettings::StaticStruct, Z_Construct_UScriptStruct_FTargetSettings_Statics::NewStructOps, TEXT("TargetSettings"), &Z_Registration_Info_UScriptStruct_TargetSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTargetSettings), 2280014271U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_2771890983(TEXT("/Script/UniversalCameraPlugin"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_SharedStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
