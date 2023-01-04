// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/CannonManCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannonManCharacter() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManCharacter_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonManCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CANNONMAN_API UClass* Z_Construct_UClass_ACannonBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACannonManCharacter::execDashRefresh)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DashRefresh(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execDashAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DashAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execJumpAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execLookRightRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookRightRate(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execLookUpRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LookUpRate(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execMoveRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveRight(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACannonManCharacter::execMoveForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForward(Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	void ACannonManCharacter::StaticRegisterNativesACannonManCharacter()
	{
		UClass* Class = ACannonManCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DashAction", &ACannonManCharacter::execDashAction },
			{ "DashRefresh", &ACannonManCharacter::execDashRefresh },
			{ "Fire", &ACannonManCharacter::execFire },
			{ "JumpAction", &ACannonManCharacter::execJumpAction },
			{ "LookRightRate", &ACannonManCharacter::execLookRightRate },
			{ "LookUpRate", &ACannonManCharacter::execLookUpRate },
			{ "MoveForward", &ACannonManCharacter::execMoveForward },
			{ "MoveRight", &ACannonManCharacter::execMoveRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACannonManCharacter_DashAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_DashAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_DashAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "DashAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_DashAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_DashAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_DashAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_DashAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics
	{
		struct CannonManCharacter_eventDashRefresh_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonManCharacter_eventDashRefresh_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "DashRefresh", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::CannonManCharacter_eventDashRefresh_Parms), Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_DashRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_DashRefresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_JumpAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_JumpAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_JumpAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "JumpAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_JumpAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_JumpAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_JumpAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_JumpAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics
	{
		struct CannonManCharacter_eventLookRightRate_Parms
		{
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonManCharacter_eventLookRightRate_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "LookRightRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::CannonManCharacter_eventLookRightRate_Parms), Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_LookRightRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_LookRightRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics
	{
		struct CannonManCharacter_eventLookUpRate_Parms
		{
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonManCharacter_eventLookUpRate_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "LookUpRate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::CannonManCharacter_eventLookUpRate_Parms), Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_LookUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_LookUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics
	{
		struct CannonManCharacter_eventMoveForward_Parms
		{
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonManCharacter_eventMoveForward_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "MoveForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::CannonManCharacter_eventMoveForward_Parms), Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_MoveForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_MoveForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics
	{
		struct CannonManCharacter_eventMoveRight_Parms
		{
			float ScaleValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CannonManCharacter_eventMoveRight_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACannonManCharacter, nullptr, "MoveRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::CannonManCharacter_eventMoveRight_Parms), Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACannonManCharacter_MoveRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACannonManCharacter_MoveRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannonManCharacter);
	UClass* Z_Construct_UClass_ACannonManCharacter_NoRegister()
	{
		return ACannonManCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACannonManCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DashCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDashing_MetaData[];
#endif
		static void NewProp_IsDashing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDashing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDashCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDashCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCounterRefreshSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCounterRefreshSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannonManCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACannonManCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACannonManCharacter_DashAction, "DashAction" }, // 2286096076
		{ &Z_Construct_UFunction_ACannonManCharacter_DashRefresh, "DashRefresh" }, // 3453580569
		{ &Z_Construct_UFunction_ACannonManCharacter_Fire, "Fire" }, // 2587889395
		{ &Z_Construct_UFunction_ACannonManCharacter_JumpAction, "JumpAction" }, // 1900308511
		{ &Z_Construct_UFunction_ACannonManCharacter_LookRightRate, "LookRightRate" }, // 3264203226
		{ &Z_Construct_UFunction_ACannonManCharacter_LookUpRate, "LookUpRate" }, // 3191109441
		{ &Z_Construct_UFunction_ACannonManCharacter_MoveForward, "MoveForward" }, // 3800008180
		{ &Z_Construct_UFunction_ACannonManCharacter_MoveRight, "MoveRight" }, // 1417674571
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CannonManCharacter.h" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_RotationRate_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, RotationRate), METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_RotationRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_RotationRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashLength_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashLength = { "DashLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, DashLength), METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashSpeed = { "DashSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, DashSpeed), METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounter_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounter = { "DashCounter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, DashCounter), METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_SpringArmComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "CannonManCharacter" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, WeaponClass), Z_Construct_UClass_ACannonBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing_MetaData[] = {
		{ "Category", "CannonManCharacter" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing_SetBit(void* Obj)
	{
		((ACannonManCharacter*)Obj)->IsDashing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing = { "IsDashing", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ACannonManCharacter), &Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_MaxDashCounter_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_MaxDashCounter = { "MaxDashCounter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, MaxDashCounter), METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_MaxDashCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_MaxDashCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounterRefreshSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "CannonManCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounterRefreshSpeed = { "DashCounterRefreshSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannonManCharacter, DashCounterRefreshSpeed), METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounterRefreshSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounterRefreshSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannonManCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_RotationRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_SpringArmComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_CameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_WeaponClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_IsDashing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_MaxDashCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannonManCharacter_Statics::NewProp_DashCounterRefreshSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannonManCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannonManCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannonManCharacter_Statics::ClassParams = {
		&ACannonManCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACannonManCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACannonManCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannonManCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannonManCharacter()
	{
		if (!Z_Registration_Info_UClass_ACannonManCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannonManCharacter.OuterSingleton, Z_Construct_UClass_ACannonManCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannonManCharacter.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<ACannonManCharacter>()
	{
		return ACannonManCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannonManCharacter);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannonManCharacter, ACannonManCharacter::StaticClass, TEXT("ACannonManCharacter"), &Z_Registration_Info_UClass_ACannonManCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannonManCharacter), 3110343882U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManCharacter_h_3931987290(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_CannonManCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
