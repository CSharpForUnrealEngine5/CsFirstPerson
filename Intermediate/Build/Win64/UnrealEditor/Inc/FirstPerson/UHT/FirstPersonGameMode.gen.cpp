// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPerson/FirstPersonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FIRSTPERSON_API UClass* Z_Construct_UClass_AFirstPersonGameMode();
	FIRSTPERSON_API UClass* Z_Construct_UClass_AFirstPersonGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPerson();
// End Cross Module References
	void AFirstPersonGameMode::StaticRegisterNativesAFirstPersonGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFirstPersonGameMode);
	UClass* Z_Construct_UClass_AFirstPersonGameMode_NoRegister()
	{
		return AFirstPersonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPerson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FirstPersonGameMode.h" },
		{ "ModuleRelativePath", "FirstPersonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonGameMode_Statics::ClassParams = {
		&AFirstPersonGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonGameMode()
	{
		if (!Z_Registration_Info_UClass_AFirstPersonGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFirstPersonGameMode.OuterSingleton, Z_Construct_UClass_AFirstPersonGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFirstPersonGameMode.OuterSingleton;
	}
	template<> FIRSTPERSON_API UClass* StaticClass<AFirstPersonGameMode>()
	{
		return AFirstPersonGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonGameMode);
	AFirstPersonGameMode::~AFirstPersonGameMode() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_FirstPersonGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_FirstPersonGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFirstPersonGameMode, AFirstPersonGameMode::StaticClass, TEXT("AFirstPersonGameMode"), &Z_Registration_Info_UClass_AFirstPersonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFirstPersonGameMode), 1213055607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_FirstPersonGameMode_h_2518611390(TEXT("/Script/FirstPerson"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_FirstPersonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_FirstPersonGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
