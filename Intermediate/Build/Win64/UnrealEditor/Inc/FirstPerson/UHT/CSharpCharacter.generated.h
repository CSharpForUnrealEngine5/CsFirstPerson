// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game.Generated/CSharpCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UInputComponent;
class USkeletalMeshComponent;
struct FInputActionValue;
#ifdef FIRSTPERSON_CSharpCharacter_generated_h
#error "CSharpCharacter.generated.h already included, missing '#pragma once' in CSharpCharacter.h"
#endif
#define FIRSTPERSON_CSharpCharacter_generated_h

#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_SPARSE_DATA
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent); \
	DECLARE_FUNCTION(execGetMesh1P);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHasRifle); \
	DECLARE_FUNCTION(execSetHasRifle); \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove); \
	DECLARE_FUNCTION(execSetupPlayerInputComponent); \
	DECLARE_FUNCTION(execBeginPlay); \
	DECLARE_FUNCTION(execGetFirstPersonCameraComponent); \
	DECLARE_FUNCTION(execGetMesh1P);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_ACCESSORS
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSharpCharacter(); \
	friend struct Z_Construct_UClass_ACSharpCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSharpCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(ACSharpCharacter)


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACSharpCharacter(); \
	friend struct Z_Construct_UClass_ACSharpCharacter_Statics; \
public: \
	DECLARE_CLASS(ACSharpCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(ACSharpCharacter)


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSharpCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSharpCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSharpCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSharpCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSharpCharacter(ACSharpCharacter&&); \
	NO_API ACSharpCharacter(const ACSharpCharacter&); \
public: \
	NO_API virtual ~ACSharpCharacter();


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSharpCharacter(ACSharpCharacter&&); \
	NO_API ACSharpCharacter(const ACSharpCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSharpCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSharpCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSharpCharacter) \
	NO_API virtual ~ACSharpCharacter();


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_16_PROLOG
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_SPARSE_DATA \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_RPC_WRAPPERS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_ACCESSORS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_INCLASS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_SPARSE_DATA \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_ACCESSORS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON_API UClass* StaticClass<class ACSharpCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
