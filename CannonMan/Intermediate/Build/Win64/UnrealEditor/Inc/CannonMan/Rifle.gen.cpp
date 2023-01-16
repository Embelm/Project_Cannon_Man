// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/Rifle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRifle() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_ARifle_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ARifle();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonBase();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
// End Cross Module References
	void ARifle::StaticRegisterNativesARifle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARifle);
	UClass* Z_Construct_UClass_ARifle_NoRegister()
	{
		return ARifle::StaticClass();
	}
	struct Z_Construct_UClass_ARifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACannonBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Rifle.h" },
		{ "ModuleRelativePath", "Rifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARifle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARifle_Statics::ClassParams = {
		&ARifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARifle()
	{
		if (!Z_Registration_Info_UClass_ARifle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARifle.OuterSingleton, Z_Construct_UClass_ARifle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARifle.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<ARifle>()
	{
		return ARifle::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARifle);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_Rifle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_Rifle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARifle, ARifle::StaticClass, TEXT("ARifle"), &Z_Registration_Info_UClass_ARifle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARifle), 1560076129U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_Rifle_h_3611892023(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_Rifle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_Rifle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
