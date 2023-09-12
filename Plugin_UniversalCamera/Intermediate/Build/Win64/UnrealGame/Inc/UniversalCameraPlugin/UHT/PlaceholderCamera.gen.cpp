// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSCameraPlugin/Public/PlaceholderCamera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceholderCamera() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_APlaceholderCamera();
	UNIVERSALCAMERAPLUGIN_API UClass* Z_Construct_UClass_APlaceholderCamera_NoRegister();
	UNIVERSALCAMERAPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FPlaceholderCameraInfos();
	UPackage* Z_Construct_UPackage__Script_UniversalCameraPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos;
class UScriptStruct* FPlaceholderCameraInfos::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaceholderCameraInfos, Z_Construct_UPackage__Script_UniversalCameraPlugin(), TEXT("PlaceholderCameraInfos"));
	}
	return Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos.OuterSingleton;
}
template<> UNIVERSALCAMERAPLUGIN_API UScriptStruct* StaticStruct<FPlaceholderCameraInfos>()
{
	return FPlaceholderCameraInfos::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yaw_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaceholderCameraInfos>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "PlaceholderCameraInfos" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaceholderCameraInfos, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Yaw_MetaData[] = {
		{ "Category", "PlaceholderCameraInfos" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaceholderCameraInfos, Yaw), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Yaw_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Yaw_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Pitch_MetaData[] = {
		{ "Category", "PlaceholderCameraInfos" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaceholderCameraInfos, Pitch), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Pitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Pitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Zoom_MetaData[] = {
		{ "Category", "PlaceholderCameraInfos" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPlaceholderCameraInfos, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Zoom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Yaw,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Pitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewProp_Zoom,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
		nullptr,
		&NewStructOps,
		"PlaceholderCameraInfos",
		sizeof(FPlaceholderCameraInfos),
		alignof(FPlaceholderCameraInfos),
		Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaceholderCameraInfos()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos.InnerSingleton, Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos.InnerSingleton;
	}
	DEFINE_FUNCTION(APlaceholderCamera::execGetInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPlaceholderCameraInfos*)Z_Param__Result=P_THIS->GetInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlaceholderCamera::execGetZoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetZoom();
		P_NATIVE_END;
	}
	void APlaceholderCamera::StaticRegisterNativesAPlaceholderCamera()
	{
		UClass* Class = APlaceholderCamera::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInfos", &APlaceholderCamera::execGetInfos },
			{ "GetZoom", &APlaceholderCamera::execGetZoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics
	{
		struct PlaceholderCamera_eventGetInfos_Parms
		{
			FPlaceholderCameraInfos ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlaceholderCamera_eventGetInfos_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlaceholderCameraInfos, METADATA_PARAMS(nullptr, 0) }; // 2131482877
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlaceholderCameraInfos" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceholderCamera, nullptr, "GetInfos", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::PlaceholderCamera_eventGetInfos_Parms), Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceholderCamera_GetInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlaceholderCamera_GetInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics
	{
		struct PlaceholderCamera_eventGetZoom_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PlaceholderCamera_eventGetZoom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlaceholderCameraInfos" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceholderCamera, nullptr, "GetZoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::PlaceholderCamera_eventGetZoom_Parms), Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceholderCamera_GetZoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlaceholderCamera_GetZoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaceholderCamera);
	UClass* Z_Construct_UClass_APlaceholderCamera_NoRegister()
	{
		return APlaceholderCamera::StaticClass();
	}
	struct Z_Construct_UClass_APlaceholderCamera_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaceholderCamera_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UniversalCameraPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlaceholderCamera_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlaceholderCamera_GetInfos, "GetInfos" }, // 557163188
		{ &Z_Construct_UFunction_APlaceholderCamera_GetZoom, "GetZoom" }, // 2161504805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceholderCamera_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PlaceholderCamera.h" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlaceholderCamera, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlaceholderCamera.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlaceholderCamera, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_CameraComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaceholderCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceholderCamera_Statics::NewProp_CameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaceholderCamera_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceholderCamera>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaceholderCamera_Statics::ClassParams = {
		&APlaceholderCamera::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlaceholderCamera_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlaceholderCamera_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlaceholderCamera_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceholderCamera_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaceholderCamera()
	{
		if (!Z_Registration_Info_UClass_APlaceholderCamera.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaceholderCamera.OuterSingleton, Z_Construct_UClass_APlaceholderCamera_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlaceholderCamera.OuterSingleton;
	}
	template<> UNIVERSALCAMERAPLUGIN_API UClass* StaticClass<APlaceholderCamera>()
	{
		return APlaceholderCamera::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceholderCamera);
	APlaceholderCamera::~APlaceholderCamera() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics::ScriptStructInfo[] = {
		{ FPlaceholderCameraInfos::StaticStruct, Z_Construct_UScriptStruct_FPlaceholderCameraInfos_Statics::NewStructOps, TEXT("PlaceholderCameraInfos"), &Z_Registration_Info_UScriptStruct_PlaceholderCameraInfos, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaceholderCameraInfos), 2131482877U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlaceholderCamera, APlaceholderCamera::StaticClass, TEXT("APlaceholderCamera"), &Z_Registration_Info_UClass_APlaceholderCamera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaceholderCamera), 2651687201U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_946917710(TEXT("/Script/UniversalCameraPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_UniversalCameraPlugin_Source_RTSCameraPlugin_Public_PlaceholderCamera_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
