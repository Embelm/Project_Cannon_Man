// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/CannonManHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonManHUD() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManHUD_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
// End Cross Module References
	void ACannonManHUD::StaticRegisterNativesACannonManHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonManHUD);
	UClass* Z_Construct_UClass_ACannonManHUD_NoRegister()
	{
		return ACannonManHUD::StaticClass();
	}
	struct Z_Construct_UClass_ACannonManHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannonManHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "CannonManHUD.h" },
		{ "ModuleRelativePath", "CannonManHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannonManHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonManHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonManHUD_Statics::ClassParams = {
		&ACannonManHUD::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACannonManHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannonManHUD()
	{
		if (!Z_Registration_Info_UClass_ACannonManHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonManHUD.OuterSingleton, Z_Construct_UClass_ACannonManHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannonManHUD.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<ACannonManHUD>()
	{
		return ACannonManHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonManHUD);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannonManHUD, ACannonManHUD::StaticClass, TEXT("ACannonManHUD"), &Z_Registration_Info_UClass_ACannonManHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonManHUD), 4171079547U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManHUD_h_1057568710(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
