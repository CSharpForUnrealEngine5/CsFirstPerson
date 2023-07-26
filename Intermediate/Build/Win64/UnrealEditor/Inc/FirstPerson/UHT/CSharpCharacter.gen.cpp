// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FirstPerson/Game.Generated/CSharpCharacter.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCSharpCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	FIRSTPERSON_API UClass* Z_Construct_UClass_ACSharpCharacter();
	FIRSTPERSON_API UClass* Z_Construct_UClass_ACSharpCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FirstPerson();
// End Cross Module References
	DEFINE_FUNCTION(ACSharpCharacter::execGetHasRifle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHasRifle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execSetHasRifle)
	{
		P_GET_UBOOL(Z_Param_bNewHasRifle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHasRifle(Z_Param_bNewHasRifle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execLook)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Look(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execMove)
	{
		P_GET_STRUCT(FInputActionValue,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execSetupPlayerInputComponent)
	{
		P_GET_OBJECT(UInputComponent,Z_Param_PlayerInputComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupPlayerInputComponent(Z_Param_PlayerInputComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execBeginPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BeginPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execGetFirstPersonCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCameraComponent**)Z_Param__Result=P_THIS->GetFirstPersonCameraComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACSharpCharacter::execGetMesh1P)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshComponent**)Z_Param__Result=P_THIS->GetMesh1P();
		P_NATIVE_END;
	}
	void ACSharpCharacter::StaticRegisterNativesACSharpCharacter()
	{
		UClass* Class = ACSharpCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BeginPlay", &ACSharpCharacter::execBeginPlay },
			{ "GetFirstPersonCameraComponent", &ACSharpCharacter::execGetFirstPersonCameraComponent },
			{ "GetHasRifle", &ACSharpCharacter::execGetHasRifle },
			{ "GetMesh1P", &ACSharpCharacter::execGetMesh1P },
			{ "Look", &ACSharpCharacter::execLook },
			{ "Move", &ACSharpCharacter::execMove },
			{ "SetHasRifle", &ACSharpCharacter::execSetHasRifle },
			{ "SetupPlayerInputComponent", &ACSharpCharacter::execSetupPlayerInputComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACSharpCharacter_BeginPlay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_BeginPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "BeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_BeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_BeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_BeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_BeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics
	{
		struct CSharpCharacter_eventGetFirstPersonCameraComponent_Parms
		{
			UCameraComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpCharacter_eventGetFirstPersonCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "GetFirstPersonCameraComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::CSharpCharacter_eventGetFirstPersonCameraComponent_Parms), Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics
	{
		struct CSharpCharacter_eventGetHasRifle_Parms
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
	void Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CSharpCharacter_eventGetHasRifle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CSharpCharacter_eventGetHasRifle_Parms), &Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "GetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::CSharpCharacter_eventGetHasRifle_Parms), Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_GetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_GetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics
	{
		struct CSharpCharacter_eventGetMesh1P_Parms
		{
			USkeletalMeshComponent* ReturnValue;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpCharacter_eventGetMesh1P_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "GetMesh1P", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::CSharpCharacter_eventGetMesh1P_Parms), Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_GetMesh1P()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_GetMesh1P_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_Look_Statics
	{
		struct CSharpCharacter_eventLook_Parms
		{
			FInputActionValue Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACSharpCharacter_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpCharacter_eventLook_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_Look_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "Look", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_Look_Statics::CSharpCharacter_eventLook_Parms), Z_Construct_UFunction_ACSharpCharacter_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_Look_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_Move_Statics
	{
		struct CSharpCharacter_eventMove_Parms
		{
			FInputActionValue Value;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACSharpCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(nullptr, 0) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_Move_Statics::CSharpCharacter_eventMove_Parms), Z_Construct_UFunction_ACSharpCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics
	{
		struct CSharpCharacter_eventSetHasRifle_Parms
		{
			bool bNewHasRifle;
		};
		static void NewProp_bNewHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit(void* Obj)
	{
		((CSharpCharacter_eventSetHasRifle_Parms*)Obj)->bNewHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle = { "bNewHasRifle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CSharpCharacter_eventSetHasRifle_Parms), &Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::NewProp_bNewHasRifle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "SetHasRifle", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::CSharpCharacter_eventSetHasRifle_Parms), Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_SetHasRifle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_SetHasRifle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics
	{
		struct CSharpCharacter_eventSetupPlayerInputComponent_Parms
		{
			UInputComponent* PlayerInputComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInputComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent = { "PlayerInputComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CSharpCharacter_eventSetupPlayerInputComponent_Parms, PlayerInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::NewProp_PlayerInputComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACSharpCharacter, nullptr, "SetupPlayerInputComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::CSharpCharacter_eventSetupPlayerInputComponent_Parms), Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACSharpCharacter);
	UClass* Z_Construct_UClass_ACSharpCharacter_NoRegister()
	{
		return ACSharpCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACSharpCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasRifle_MetaData[];
#endif
		static void NewProp_bHasRifle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasRifle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACSharpCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FirstPerson,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACSharpCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACSharpCharacter_BeginPlay, "BeginPlay" }, // 2596806983
		{ &Z_Construct_UFunction_ACSharpCharacter_GetFirstPersonCameraComponent, "GetFirstPersonCameraComponent" }, // 16145226
		{ &Z_Construct_UFunction_ACSharpCharacter_GetHasRifle, "GetHasRifle" }, // 2617025680
		{ &Z_Construct_UFunction_ACSharpCharacter_GetMesh1P, "GetMesh1P" }, // 3397288560
		{ &Z_Construct_UFunction_ACSharpCharacter_Look, "Look" }, // 1975514044
		{ &Z_Construct_UFunction_ACSharpCharacter_Move, "Move" }, // 2404986869
		{ &Z_Construct_UFunction_ACSharpCharacter_SetHasRifle, "SetHasRifle" }, // 838988518
		{ &Z_Construct_UFunction_ACSharpCharacter_SetupPlayerInputComponent, "SetupPlayerInputComponent" }, // 1031928929
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Game.Generated/CSharpCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACSharpCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle_MetaData[] = {
		{ "Category", "CSharpCharacter" },
		{ "ModuleRelativePath", "Game.Generated/CSharpCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle_SetBit(void* Obj)
	{
		((ACSharpCharacter*)Obj)->bHasRifle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle = { "bHasRifle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACSharpCharacter), &Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACSharpCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACSharpCharacter_Statics::NewProp_bHasRifle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACSharpCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACSharpCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACSharpCharacter_Statics::ClassParams = {
		&ACSharpCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACSharpCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACSharpCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACSharpCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACSharpCharacter()
	{
		if (!Z_Registration_Info_UClass_ACSharpCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACSharpCharacter.OuterSingleton, Z_Construct_UClass_ACSharpCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACSharpCharacter.OuterSingleton;
	}
	template<> FIRSTPERSON_API UClass* StaticClass<ACSharpCharacter>()
	{
		return ACSharpCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACSharpCharacter);
	ACSharpCharacter::~ACSharpCharacter() {}
	struct Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACSharpCharacter, ACSharpCharacter::StaticClass, TEXT("ACSharpCharacter"), &Z_Registration_Info_UClass_ACSharpCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACSharpCharacter), 3501893625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_3454043473(TEXT("/Script/FirstPerson"),
		Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Dev_CSharpForUnrealEngine5_CSharpExamples_FirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
