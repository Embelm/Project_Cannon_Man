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
	CANNONMAN_API UEnum* Z_Construct_UEnum_CannonMan_GunType();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonBase_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_GunType;
	static UEnum* GunType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_GunType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_GunType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CannonMan_GunType, Z_Construct_UPackage__Script_CannonMan(), TEXT("GunType"));
		}
		return Z_Registration_Info_UEnum_GunType.OuterSingleton;
	}
	template<> CANNONMAN_API UEnum* StaticEnum<GunType>()
	{
		return GunType_StaticEnum();
	}
	struct Z_Construct_UEnum_CannonMan_GunType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CannonMan_GunType_Statics::Enumerators[] = {
		{ "GunType::HitScan", (int64)GunType::HitScan },
		{ "GunType::Projectile", (int64)GunType::Projectile },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CannonMan_GunType_Statics::Enum_MetaDataParams[] = {
		{ "HitScan.Name", "GunType::HitScan" },
		{ "ModuleRelativePath", "CannonBase.h" },
		{ "Projectile.Name", "GunType::Projectile" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CannonMan_GunType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CannonMan,
		nullptr,
		"GunType",
		"GunType",
		Z_Construct_UEnum_CannonMan_GunType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CannonMan_GunType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CannonMan_GunType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CannonMan_GunType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CannonMan_GunType()
	{
		if (!Z_Registration_Info_UEnum_GunType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_GunType.InnerSingleton, Z_Construct_UEnum_CannonMan_GunType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_GunType.InnerSingleton;
	}
	DEFINE_FUNCTION(ACannonBase::execGunTrace)
	{
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ShotDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GunTrace(Z_Param_Out_HitResult,Z_Param_Out_ShotDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonBase::execReloadGun)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReloadGun();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonBase::execPullTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PullTrigger();
		P_NATIVE_END;
	}
	void ACannonBase::StaticRegisterNativesACannonBase()
	{
		UClass* Class = ACannonBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GunTrace", &ACannonBase::execGunTrace },
			{ "PullTrigger", &ACannonBase::execPullTrigger },
			{ "ReloadGun", &ACannonBase::execReloadGun },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACannonBase_GunTrace_Statics
	{
		struct CannonBase_eventGunTrace_Parms
		{
			FHitResult HitResult;
			FVector ShotDirection;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShotDirection;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonBase_eventGunTrace_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1416937132
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_ShotDirection = { "ShotDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonBase_eventGunTrace_Parms, ShotDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CannonBase_eventGunTrace_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CannonBase_eventGunTrace_Parms), &Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonBase_GunTrace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_HitResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_ShotDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonBase_GunTrace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonBase_GunTrace_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonBase_GunTrace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonBase, nullptr, "GunTrace", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACannonBase_GunTrace_Statics::CannonBase_eventGunTrace_Parms), Z_Construct_UFunction_ACannonBase_GunTrace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonBase_GunTrace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonBase_GunTrace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonBase_GunTrace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonBase_GunTrace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonBase_GunTrace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonBase_PullTrigger_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonBase_PullTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonBase_PullTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonBase, nullptr, "PullTrigger", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonBase_PullTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonBase_PullTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonBase_PullTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonBase_PullTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonBase_ReloadGun_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonBase_ReloadGun_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonBase_ReloadGun_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonBase, nullptr, "ReloadGun", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonBase_ReloadGun_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonBase_ReloadGun_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonBase_ReloadGun()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonBase_ReloadGun_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonBase);
	UClass* Z_Construct_UClass_ACannonBase_NoRegister()
	{
		return ACannonBase::StaticClass();
	}
	struct Z_Construct_UClass_ACannonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ammo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Ammo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitParticle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitParticle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitSoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSoundEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSoundEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSoundEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MyGunType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyGunType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MyGunType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACannonBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACannonBase_GunTrace, "GunTrace" }, // 4058219424
		{ &Z_Construct_UFunction_ACannonBase_PullTrigger, "PullTrigger" }, // 3237969326
		{ &Z_Construct_UFunction_ACannonBase_ReloadGun, "ReloadGun" }, // 2306569316
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CannonBase.h" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, MeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, MaxRange), METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, Damage), METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_Ammo_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, Ammo), METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_Ammo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_Ammo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxAmmo_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxAmmo = { "MaxAmmo", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, MaxAmmo), METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_MuzzleParticle_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MuzzleParticle = { "MuzzleParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, MuzzleParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_MuzzleParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_MuzzleParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_HitParticle_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_HitParticle = { "HitParticle", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, HitParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_HitParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_HitParticle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_HitSoundEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_HitSoundEffect = { "HitSoundEffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, HitSoundEffect), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_HitSoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_HitSoundEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_FireSoundEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_FireSoundEffect = { "FireSoundEffect", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, FireSoundEffect), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_FireSoundEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_FireSoundEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_Root_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType_MetaData[] = {
		{ "Category", "CannonBase" },
		{ "ModuleRelativePath", "CannonBase.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType = { "MyGunType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonBase, MyGunType), Z_Construct_UEnum_CannonMan_GunType, METADATA_PARAMS(Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType_MetaData)) }; // 1882610222
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannonBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_Ammo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MaxAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MuzzleParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_HitParticle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_HitSoundEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_FireSoundEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonBase_Statics::NewProp_MyGunType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonBase_Statics::ClassParams = {
		&ACannonBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACannonBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::EnumInfo[] = {
		{ GunType_StaticEnum, TEXT("GunType"), &Z_Registration_Info_UEnum_GunType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1882610222U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannonBase, ACannonBase::StaticClass, TEXT("ACannonBase"), &Z_Registration_Info_UClass_ACannonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonBase), 1989635765U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_1983369933(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
