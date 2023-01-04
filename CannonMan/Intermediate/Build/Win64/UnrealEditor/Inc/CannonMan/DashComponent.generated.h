// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CANNONMAN_DashComponent_generated_h
#error "DashComponent.generated.h already included, missing '#pragma once' in DashComponent.h"
#endif
#define CANNONMAN_DashComponent_generated_h

#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_SPARSE_DATA
#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDashRefresh); \
	DECLARE_FUNCTION(execDashAction);


#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDashRefresh); \
	DECLARE_FUNCTION(execDashAction);


#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDashComponent(); \
	friend struct Z_Construct_UClass_UDashComponent_Statics; \
public: \
	DECLARE_CLASS(UDashComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CannonMan"), NO_API) \
	DECLARE_SERIALIZER(UDashComponent)


#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDashComponent(); \
	friend struct Z_Construct_UClass_UDashComponent_Statics; \
public: \
	DECLARE_CLASS(UDashComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CannonMan"), NO_API) \
	DECLARE_SERIALIZER(UDashComponent)


#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDashComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDashComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDashComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDashComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDashComponent(UDashComponent&&); \
	NO_API UDashComponent(const UDashComponent&); \
public:


#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDashComponent(UDashComponent&&); \
	NO_API UDashComponent(const UDashComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDashComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDashComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDashComponent)


#define FID_CannonMan_Source_CannonMan_DashComponent_h_10_PROLOG
#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_SPARSE_DATA \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_RPC_WRAPPERS \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_INCLASS \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CannonMan_Source_CannonMan_DashComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_SPARSE_DATA \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_CannonMan_Source_CannonMan_DashComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CANNONMAN_API UClass* StaticClass<class UDashComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CannonMan_Source_CannonMan_DashComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
