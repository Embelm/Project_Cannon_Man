// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/CannonManGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonManGameModeBase() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManGameModeBase_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
// End Cross Module References
	void ACannonManGameModeBase::StaticRegisterNativesACannonManGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonManGameModeBase);
	UClass* Z_Construct_UClass_ACannonManGameModeBase_NoRegister()
	{
		return ACannonManGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACannonManGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannonManGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CannonManGameModeBase.h" },
		{ "ModuleRelativePath", "CannonManGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannonManGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonManGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonManGameModeBase_Statics::ClassParams = {
		&ACannonManGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACannonManGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannonManGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACannonManGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonManGameModeBase.OuterSingleton, Z_Construct_UClass_ACannonManGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannonManGameModeBase.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<ACannonManGameModeBase>()
	{
		return ACannonManGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonManGameModeBase);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannonManGameModeBase, ACannonManGameModeBase::StaticClass, TEXT("ACannonManGameModeBase"), &Z_Registration_Info_UClass_ACannonManGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonManGameModeBase), 1511712286U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManGameModeBase_h_1133421204(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
