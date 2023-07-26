// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPerson/Game.Generated/CSharpPickupComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSharpPickupComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FIRSTPERSON_API UClass* Z_Construct_UClass_ACSharpCharacter_NoRegister();
	FIRSTPERSON_API UClass* Z_Construct_UClass_UCSharpPickupComponent();
	FIRSTPERSON_API UClass* Z_Construct_UClass_UCSharpPickupComponent_NoRegister();
	FIRSTPERSON_API UFunction* Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_FirstPerson();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics
	{
		struct _Script_FirstPerson_eventCSharpOnPickUp_Parms
		{
			ACSharpCharacter* PickUpCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::NewProp_PickUpCharacter = { "PickUpCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_FirstPerson_eventCSharpOnPickUp_Parms, PickUpCharacter), Z_Construct_UClass_ACSharpCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::NewProp_PickUpCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPickupComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_FirstPerson, nullptr, "CSharpOnPickUp__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::_Script_FirstPerson_eventCSharpOnPickUp_Parms), Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FCSharpOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& CSharpOnPickUp, ACSharpCharacter* PickUpCharacter)
{
	struct _Script_FirstPerson_eventCSharpOnPickUp_Parms
	{
		ACSharpCharacter* PickUpCharacter;
	};
	_Script_FirstPerson_eventCSharpOnPickUp_Parms Parms;
	Parms.PickUpCharacter=PickUpCharacter;
	CSharpOnPickUp.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCSharpPickupComponent::execOnSphereBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSphereBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCSharpPickupComponent::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	void UCSharpPickupComponent::StaticRegisterNativesUCSharpPickupComponent()
	{
		UClass* Class = UCSharpPickupComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &UCSharpPickupComponent::execBeginPlay },
			{ "OnSphereBeginOverlap", &UCSharpPickupComponent::execOnSphereBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPickupComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSharpPickupComponent, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics
	{
		struct CSharpPickupComponent_eventOnSphereBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpPickupComponent_eventOnSphereBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpPickupComponent_eventOnSphereBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpPickupComponent_eventOnSphereBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpPickupComponent_eventOnSphereBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CSharpPickupComponent_eventOnSphereBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CSharpPickupComponent_eventOnSphereBeginOverlap_Parms), &Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpPickupComponent_eventOnSphereBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpPickupComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCSharpPickupComponent, nullptr, "OnSphereBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::CSharpPickupComponent_eventOnSphereBeginOverlap_Parms), Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCSharpPickupComponent);
	UClass* Z_Construct_UClass_UCSharpPickupComponent_NoRegister()
	{
		return UCSharpPickupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCSharpPickupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPickUp_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPickUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCSharpPickupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USphereComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPerson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCSharpPickupComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCSharpPickupComponent_BeginPlay, "BeginPlay" }, // 953733358
		{ &Z_Construct_UFunction_UCSharpPickupComponent_OnSphereBeginOverlap, "OnSphereBeginOverlap" }, // 2311907577
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpPickupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger VirtualTexture" },
		{ "IncludePath", "Game.Generated/CSharpPickupComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPickupComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCSharpPickupComponent_Statics::NewProp_OnPickUp_MetaData[] = {
		{ "Category", "CSharpPickupComponent" },
		{ "ModuleRelativePath", "Game.Generated/CSharpPickupComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCSharpPickupComponent_Statics::NewProp_OnPickUp = { "OnPickUp", nullptr, (EPropertyFlags)0x0010000000080005, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCSharpPickupComponent, OnPickUp), Z_Construct_UDelegateFunction_FirstPerson_CSharpOnPickUp__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCSharpPickupComponent_Statics::NewProp_OnPickUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpPickupComponent_Statics::NewProp_OnPickUp_MetaData)) }; // 1680322202
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCSharpPickupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCSharpPickupComponent_Statics::NewProp_OnPickUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCSharpPickupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCSharpPickupComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCSharpPickupComponent_Statics::ClassParams = {
		&UCSharpPickupComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCSharpPickupComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpPickupComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCSharpPickupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCSharpPickupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCSharpPickupComponent()
	{
		if (!Z_Registration_Info_UClass_UCSharpPickupComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCSharpPickupComponent.OuterSingleton, Z_Construct_UClass_UCSharpPickupComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCSharpPickupComponent.OuterSingleton;
	}
	template<> FIRSTPERSON_API UClass* StaticClass<UCSharpPickupComponent>()
	{
		return UCSharpPickupComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCSharpPickupComponent);
	UCSharpPickupComponent::~UCSharpPickupComponent() {}
	struct Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCSharpPickupComponent, UCSharpPickupComponent::StaticClass, TEXT("UCSharpPickupComponent"), &Z_Registration_Info_UClass_UCSharpPickupComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCSharpPickupComponent), 1728979538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_1689439283(TEXT("/Script/FirstPerson"),
		Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
