// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef CANNONMAN_CannonBase_generated_h
#error "CannonBase.generated.h already included, missing '#pragma once' in CannonBase.h"
#endif
#define CANNONMAN_CannonBase_generated_h

#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_SPARSE_DATA
#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGunTrace); \
	DECLARE_FUNCTION(execPullTrigger);


#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGunTrace); \
	DECLARE_FUNCTION(execPullTrigger);


#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACannonBase(); \
	friend struct Z_Construct_UClass_ACannonBase_Statics; \
public: \
	DECLARE_CLASS(ACannonBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CannonMan"), NO_API) \
	DECLARE_SERIALIZER(ACannonBase)


#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACannonBase(); \
	friend struct Z_Construct_UClass_ACannonBase_Statics; \
public: \
	DECLARE_CLASS(ACannonBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CannonMan"), NO_API) \
	DECLARE_SERIALIZER(ACannonBase)


#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACannonBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACannonBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannonBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannonBase(ACannonBase&&); \
	NO_API ACannonBase(const ACannonBase&); \
public:


#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannonBase(ACannonBase&&); \
	NO_API ACannonBase(const ACannonBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannonBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannonBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACannonBase)


#define FID_CannonMan_Source_CannonMan_CannonBase_h_9_PROLOG
#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_SPARSE_DATA \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_RPC_WRAPPERS \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_INCLASS \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CannonMan_Source_CannonMan_CannonBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_SPARSE_DATA \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_INCLASS_NO_PURE_DECLS \
	FID_CannonMan_Source_CannonMan_CannonBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CANNONMAN_API UClass* StaticClass<class ACannonBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CannonMan_Source_CannonMan_CannonBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
