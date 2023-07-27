// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPerson/Game.Generated/CSharpWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSharpWeaponComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	FIRSTPERSON_API UClass* Z_Construct_UClass_ACSharpCharacter_NoRegister();
	FIRSTPERSON_API UClass* Z_Construct_UClass_UCSharpWeaponComponent();
	FIRSTPERSON_API UClass* Z_Construct_UClass_UCSharpWeaponComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPerson();
// End Cross Module References
	DEFINE_FUNCTION(UCSharpWeaponComponent::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSharpWeaponComponent::execAttachWeapon)
	{
		P_GET_OBJECT(ACSharpCharacter,Z_Param_TargetCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachWeapon(Z_Param_TargetCharacter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSharpWeaponComponent::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSharpWeaponComponent::execTest)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Test();
		P_NATIVE_END;
	}
	void UCSharpWeaponComponent::StaticRegisterNativesUCSharpWeaponComponent()
	{
		UClass* Class = UCSharpWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachWeapon", &UCSharpWeaponComponent::execAttachWeapon },
			{ "EndPlay", &UCSharpWeaponComponent::execEndPlay },
			{ "Fire", &UCSharpWeaponComponent::execFire },
			{ "Test", &UCSharpWeaponComponent::execTest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics
	{
		struct CSharpWeaponComponent_eventAttachWeapon_Parms
		{
			ACSharpCharacter* TargetCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpWeaponComponent_eventAttachWeapon_Parms, TargetCharacter), Z_Construct_UClass_ACSharpCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::NewProp_TargetCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSharpWeaponComponent, nullptr, "AttachWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::CSharpWeaponComponent_eventAttachWeapon_Parms), Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics
	{
		struct CSharpWeaponComponent_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpWeaponComponent_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSharpWeaponComponent, nullptr, "EndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::CSharpWeaponComponent_eventEndPlay_Parms), Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSharpWeaponComponent_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpWeaponComponent_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSharpWeaponComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSharpWeaponComponent, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSharpWeaponComponent_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpWeaponComponent_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSharpWeaponComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSharpWeaponComponent_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSharpWeaponComponent_Test_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpWeaponComponent_Test_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSharpWeaponComponent_Test_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSharpWeaponComponent, nullptr, "Test", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSharpWeaponComponent_Test_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpWeaponComponent_Test_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSharpWeaponComponent_Test()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSharpWeaponComponent_Test_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSharpWeaponComponent);
	UClass* Z_Construct_UClass_UCSharpWeaponComponent_NoRegister()
	{
		return UCSharpWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSharpWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSharpWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPerson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSharpWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSharpWeaponComponent_AttachWeapon, "AttachWeapon" }, // 2743954996
		{ &Z_Construct_UFunction_UCSharpWeaponComponent_EndPlay, "EndPlay" }, // 3768872643
		{ &Z_Construct_UFunction_UCSharpWeaponComponent_Fire, "Fire" }, // 3105778996
		{ &Z_Construct_UFunction_UCSharpWeaponComponent_Test, "Test" }, // 2144020665
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "Game.Generated/CSharpWeaponComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, ProjectileClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireMappingContext_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireMappingContext = { "FireMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, FireMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAction_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAction = { "FireAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, FireAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "CSharpWeaponComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpWeaponComponent, Character), Z_Construct_UClass_ACSharpCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSharpWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_FireAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpWeaponComponent_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSharpWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSharpWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSharpWeaponComponent_Statics::ClassParams = {
		&UCSharpWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSharpWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSharpWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSharpWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UCSharpWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSharpWeaponComponent.OuterSingleton, Z_Construct_UClass_UCSharpWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSharpWeaponComponent.OuterSingleton;
	}
	template<> FIRSTPERSON_API UClass* StaticClass<UCSharpWeaponComponent>()
	{
		return UCSharpWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSharpWeaponComponent);
	UCSharpWeaponComponent::~UCSharpWeaponComponent() {}
	struct Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSharpWeaponComponent, UCSharpWeaponComponent::StaticClass, TEXT("UCSharpWeaponComponent"), &Z_Registration_Info_UClass_UCSharpWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSharpWeaponComponent), 3271054129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpWeaponComponent_h_701693165(TEXT("/Script/FirstPerson"),
		Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
