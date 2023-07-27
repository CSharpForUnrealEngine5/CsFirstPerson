// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game.Generated/CSharpPickupComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACSharpCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FIRSTPERSON_CSharpPickupComponent_generated_h
#error "CSharpPickupComponent.generated.h already included, missing '#pragma once' in CSharpPickupComponent.h"
#endif
#define FIRSTPERSON_CSharpPickupComponent_generated_h

#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_8_DELEGATE \
FIRSTPERSON_API void FCSharpOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& CSharpOnPickUp, ACSharpCharacter* PickUpCharacter);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_SPARSE_DATA
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap); \
	DECLARE_FUNCTION(execBeginPlay);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSphereBeginOverlap); \
	DECLARE_FUNCTION(execBeginPlay);


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_ACCESSORS
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCSharpPickupComponent(); \
	friend struct Z_Construct_UClass_UCSharpPickupComponent_Statics; \
public: \
	DECLARE_CLASS(UCSharpPickupComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(UCSharpPickupComponent)


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCSharpPickupComponent(); \
	friend struct Z_Construct_UClass_UCSharpPickupComponent_Statics; \
public: \
	DECLARE_CLASS(UCSharpPickupComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FirstPerson"), NO_API) \
	DECLARE_SERIALIZER(UCSharpPickupComponent)


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCSharpPickupComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCSharpPickupComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSharpPickupComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSharpPickupComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSharpPickupComponent(UCSharpPickupComponent&&); \
	NO_API UCSharpPickupComponent(const UCSharpPickupComponent&); \
public: \
	NO_API virtual ~UCSharpPickupComponent();


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCSharpPickupComponent(UCSharpPickupComponent&&); \
	NO_API UCSharpPickupComponent(const UCSharpPickupComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCSharpPickupComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCSharpPickupComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCSharpPickupComponent) \
	NO_API virtual ~UCSharpPickupComponent();


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_9_PROLOG
#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_SPARSE_DATA \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_RPC_WRAPPERS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_ACCESSORS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_INCLASS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_SPARSE_DATA \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_ACCESSORS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_INCLASS_NO_PURE_DECLS \
	FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRSTPERSON_API UClass* StaticClass<class UCSharpPickupComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CSharpForUnrealEngine5_CsFirstPerson_Source_FirstPerson_Game_Generated_CSharpPickupComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
