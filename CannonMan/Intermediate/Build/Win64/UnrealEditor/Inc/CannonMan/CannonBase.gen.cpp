// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/CannonBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonBase() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonBase_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	void ACannonBase::StaticRegisterNativesACannonBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonBase);
	UClass* Z_Construct_UClass_ACannonBase_NoRegister()
	{
		return ACannonBase::StaticClass();
	}
	struct Z_Construct_UClass_ACannonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CannonBase.h" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_ArrowComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_ArrowComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonBase_Statics::ClassParams = {
		&ACannonBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACannonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannonBase()
	{
		if (!Z_Registration_Info_UClass_ACannonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonBase.OuterSingleton, Z_Construct_UClass_ACannonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannonBase.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<ACannonBase>()
	{
		return ACannonBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonBase);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannonBase, ACannonBase::StaticClass, TEXT("ACannonBase"), &Z_Registration_Info_UClass_ACannonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonBase), 3991211563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_2476984855(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
