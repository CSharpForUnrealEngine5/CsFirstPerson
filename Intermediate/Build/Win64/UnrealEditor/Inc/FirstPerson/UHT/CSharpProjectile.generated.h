// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game.Generated/CSharpProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSON_CSharpProjectile_generated_h
#error "CSharpProjectile.generated.h already included, missing '#pragma once' in CSharpProjectile.h"
#endif
#define FIRSTPERSON_CSharpProjectile_generated_h

#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_SPARSE_DATA
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_ACCESSORS
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACSharpProjectile(); \
	friend struct Z_Construct_UClass_ACSharpProjectile_Statics; \
public: \
	DECLARE_CLASS(ACSharpProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(ACSharpProjectile)


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_INCLASS \
private: \
	static void StaticRegisterNativesACSharpProjectile(); \
	friend struct Z_Construct_UClass_ACSharpProjectile_Statics; \
public: \
	DECLARE_CLASS(ACSharpProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(ACSharpProjectile)


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACSharpProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACSharpProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSharpProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSharpProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSharpProjectile(ACSharpProjectile&&); \
	NO_API ACSharpProjectile(const ACSharpProjectile&); \
public: \
	NO_API virtual ~ACSharpProjectile();


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACSharpProjectile(ACSharpProjectile&&); \
	NO_API ACSharpProjectile(const ACSharpProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACSharpProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACSharpProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACSharpProjectile) \
	NO_API virtual ~ACSharpProjectile();


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_8_PROLOG
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_SPARSE_DATA \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_RPC_WRAPPERS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_ACCESSORS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_INCLASS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_SPARSE_DATA \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_ACCESSORS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_INCLASS_NO_PURE_DECLS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON_API UClass* StaticClass<class ACSharpProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
