// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CannonMan/DashComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDashComponent() {}
// Cross Module References
	CANNONMAN_API UClass* Z_Construct_UClass_UDashComponent_NoRegister();
	CANNONMAN_API UClass* Z_Construct_UClass_UDashComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CannonMan();
// End Cross Module References
	DEFINE_FUNCTION(UDashComponent::execDashRefresh)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DashRefresh(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDashComponent::execDashAction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DashAction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDashComponent::execGetDashCooldownPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetDashCooldownPercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDashComponent::execGetDashAmount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetDashAmount();
		P_NATIVE_END;
	}
	void UDashComponent::StaticRegisterNativesUDashComponent()
	{
		UClass* Class = UDashComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DashAction", &UDashComponent::execDashAction },
			{ "DashRefresh", &UDashComponent::execDashRefresh },
			{ "GetDashAmount", &UDashComponent::execGetDashAmount },
			{ "GetDashCooldownPercent", &UDashComponent::execGetDashCooldownPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDashComponent_DashAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDashComponent_DashAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashComponent_DashAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashComponent, nullptr, "DashAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDashComponent_DashAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_DashAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDashComponent_DashAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDashComponent_DashAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDashComponent_DashRefresh_Statics
	{
		struct DashComponent_eventDashRefresh_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DashComponent_eventDashRefresh_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashComponent, nullptr, "DashRefresh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::DashComponent_eventDashRefresh_Parms), Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDashComponent_DashRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDashComponent_DashRefresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics
	{
		struct DashComponent_eventGetDashAmount_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DashComponent_eventGetDashAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashComponent, nullptr, "GetDashAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::DashComponent_eventGetDashAmount_Parms), Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDashComponent_GetDashAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDashComponent_GetDashAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics
	{
		struct DashComponent_eventGetDashCooldownPercent_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DashComponent_eventGetDashCooldownPercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDashComponent, nullptr, "GetDashCooldownPercent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::DashComponent_eventGetDashCooldownPercent_Parms), Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDashComponent);
	UClass* Z_Construct_UClass_UDashComponent_NoRegister()
	{
		return UDashComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDashComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDashCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDashCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DashCounterRefreshSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DashCounterRefreshSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsDashing_MetaData[];
#endif
		static void NewProp_IsDashing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDashing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDash_MetaData[];
#endif
		static void NewProp_DebugDash_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DebugDash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDashComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CannonMan,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDashComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDashComponent_DashAction, "DashAction" }, // 3823878847
		{ &Z_Construct_UFunction_UDashComponent_DashRefresh, "DashRefresh" }, // 2963271910
		{ &Z_Construct_UFunction_UDashComponent_GetDashAmount, "GetDashAmount" }, // 793646099
		{ &Z_Construct_UFunction_UDashComponent_GetDashCooldownPercent, "GetDashCooldownPercent" }, // 2347298862
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DashComponent.h" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_DashLength_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_DashLength = { "DashLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDashComponent, DashLength), METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_DashSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_DashSpeed = { "DashSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDashComponent, DashSpeed), METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounter_MetaData[] = {
		{ "Category", "DashComponent" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounter = { "DashCounter", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDashComponent, DashCounter), METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_MaxDashCounter_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_MaxDashCounter = { "MaxDashCounter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDashComponent, MaxDashCounter), METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_MaxDashCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_MaxDashCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounterRefreshSpeed_MetaData[] = {
		{ "Category", "Locomotion" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounterRefreshSpeed = { "DashCounterRefreshSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDashComponent, DashCounterRefreshSpeed), METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounterRefreshSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounterRefreshSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing_MetaData[] = {
		{ "Category", "DashComponent" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing_SetBit(void* Obj)
	{
		((UDashComponent*)Obj)->IsDashing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing = { "IsDashing", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDashComponent), &Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash_MetaData[] = {
		{ "Category", "DashComponent" },
		{ "ModuleRelativePath", "DashComponent.h" },
	};
#endif
	void Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash_SetBit(void* Obj)
	{
		((UDashComponent*)Obj)->DebugDash = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash = { "DebugDash", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDashComponent), &Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDashComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_DashLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_DashSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_MaxDashCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_DashCounterRefreshSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_IsDashing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDashComponent_Statics::NewProp_DebugDash,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDashComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDashComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDashComponent_Statics::ClassParams = {
		&UDashComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDashComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDashComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDashComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDashComponent()
	{
		if (!Z_Registration_Info_UClass_UDashComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDashComponent.OuterSingleton, Z_Construct_UClass_UDashComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDashComponent.OuterSingleton;
	}
	template<> CANNONMAN_API UClass* StaticClass<UDashComponent>()
	{
		return UDashComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDashComponent);
	struct Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_DashComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_DashComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDashComponent, UDashComponent::StaticClass, TEXT("UDashComponent"), &Z_Registration_Info_UClass_UDashComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDashComponent), 1073904426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_DashComponent_h_3178061720(TEXT("/Script/CannonMan"),
		Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_DashComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CannonMan_Source_CannonMan_DashComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
