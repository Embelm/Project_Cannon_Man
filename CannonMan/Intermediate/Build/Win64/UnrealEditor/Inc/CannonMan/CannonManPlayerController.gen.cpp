// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/CannonManPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonManPlayerController() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManPlayerController_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
// End Cross Module References
	void ACannonManPlayerController::StaticRegisterNativesACannonManPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonManPlayerController);
	UClass* Z_Construct_UClass_ACannonManPlayerController_NoRegister()
	{
		return ACannonManPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACannonManPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannonManPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CannonManPlayerController.h" },
		{ "ModuleRelativePath", "CannonManPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannonManPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonManPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonManPlayerController_Statics::ClassParams = {
		&ACannonManPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACannonManPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannonManPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACannonManPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonManPlayerController.OuterSingleton, Z_Construct_UClass_ACannonManPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannonManPlayerController.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<ACannonManPlayerController>()
	{
		return ACannonManPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonManPlayerController);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannonManPlayerController, ACannonManPlayerController::StaticClass, TEXT("ACannonManPlayerController"), &Z_Registration_Info_UClass_ACannonManPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonManPlayerController), 2099494274U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManPlayerController_h_4150467137(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
