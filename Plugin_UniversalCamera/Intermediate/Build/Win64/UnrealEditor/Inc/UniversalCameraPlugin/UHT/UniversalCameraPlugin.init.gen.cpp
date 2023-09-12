// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUniversalCameraPlugin_init() {}
	UNIVERSALCAMERAPLUGIN_API UFunction* Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_UniversalCameraPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_UniversalCameraPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_UniversalCameraPlugin.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UniversalCameraPlugin_OnReachedDestination__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/UniversalCameraPlugin",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3BAF4A16,
				0x4CA5FD0D,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_UniversalCameraPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_UniversalCameraPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_UniversalCameraPlugin(Z_Construct_UPackage__Script_UniversalCameraPlugin, TEXT("/Script/UniversalCameraPlugin"), Z_Registration_Info_UPackage__Script_UniversalCameraPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3BAF4A16, 0x4CA5FD0D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
