// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSCameraPlugin/Public/UniversalCameraSaveGame.h"
#include "RTSCameraPlugin/Public/SharedStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalCameraSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_UUniversalCameraSaveGame();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_UUniversalCameraSaveGame_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat();
	UPackage* Z_Construct_UPackage__Script_UniversalCameraPlugin();
// End Cross Module References
	void UUniversalCameraSaveGame::StaticRegisterNativesUUniversalCameraSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUniversalCameraSaveGame);
	UClass* Z_Construct_UClass_UUniversalCameraSaveGame_NoRegister()
	{
		return UUniversalCameraSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UUniversalCameraSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidSavePosition_MetaData[];
#endif
		static void NewProp_bIsValidSavePosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidSavePosition;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SavedSettings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedSettings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SavedSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValidSaveSettings_MetaData[];
#endif
		static void NewProp_bIsValidSaveSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValidSaveSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUniversalCameraSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalCameraSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UniversalCameraSaveGame.h" },
		{ "ModuleRelativePath", "Public/UniversalCameraSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedPosition = { "SavedPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUniversalCameraSaveGame, SavedPosition), Z_Construct_UScriptStruct_FUniversalCameraPositionSaveFormat, METADATA_PARAMS(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedPosition_MetaData)) }; // 1458947203
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition_SetBit(void* Obj)
	{
		((UUniversalCameraSaveGame*)Obj)->bIsValidSavePosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition = { "bIsValidSavePosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUniversalCameraSaveGame), &Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings_Inner = { "SavedSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCameraSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings = { "SavedSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUniversalCameraSaveGame, SavedSettings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UniversalCameraSaveGame.h" },
	};
#endif
	void Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings_SetBit(void* Obj)
	{
		((UUniversalCameraSaveGame*)Obj)->bIsValidSaveSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings = { "bIsValidSaveSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUniversalCameraSaveGame), &Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUniversalCameraSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSavePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_SavedSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUniversalCameraSaveGame_Statics::NewProp_bIsValidSaveSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUniversalCameraSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUniversalCameraSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUniversalCameraSaveGame_Statics::ClassParams = {
		&UUniversalCameraSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUniversalCameraSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUniversalCameraSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUniversalCameraSaveGame()
	{
		if (!Z_Registration_Info_UClass_UUniversalCameraSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUniversalCameraSaveGame.OuterSingleton, Z_Construct_UClass_UUniversalCameraSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUniversalCameraSaveGame.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UClass* StaticClass<UUniversalCameraSaveGame>()
	{
		return UUniversalCameraSaveGame::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUniversalCameraSaveGame);
	UUniversalCameraSaveGame::~UUniversalCameraSaveGame() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCameraSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCameraSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUniversalCameraSaveGame, UUniversalCameraSaveGame::StaticClass, TEXT("UUniversalCameraSaveGame"), &Z_Registration_Info_UClass_UUniversalCameraSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUniversalCameraSaveGame), 1952693924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCameraSaveGame_h_3912345599(TEXT("/Script/UniversalCameraPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCameraSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_UniversalCameraSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
