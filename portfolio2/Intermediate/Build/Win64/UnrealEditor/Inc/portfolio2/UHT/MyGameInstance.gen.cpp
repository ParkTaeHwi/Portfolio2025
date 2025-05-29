// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyGameInstance.h"
#include "portfolio2/MyCardPackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyGameInstance();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
PORTFOLIO2_API UScriptStruct* Z_Construct_UScriptStruct_FCardPackData();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyGameInstance Function AddJewel
struct Z_Construct_UFunction_UMyGameInstance_AddJewel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd '0'\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd \xef\xbf\xbd\xe2\xba\xbb \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd '0'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_AddJewel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "AddJewel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddJewel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_AddJewel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyGameInstance_AddJewel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_AddJewel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execAddJewel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddJewel();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function AddJewel

// Begin Class UMyGameInstance Function GetJewel
struct Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics
{
	struct MyGameInstance_eventGetJewel_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Jewel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventGetJewel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GetJewel", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::MyGameInstance_eventGetJewel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::MyGameInstance_eventGetJewel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_GetJewel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GetJewel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execGetJewel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetJewel();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function GetJewel

// Begin Class UMyGameInstance Function IsJewelEnough
struct Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics
{
	struct MyGameInstance_eventIsJewelEnough_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Jewel" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyGameInstance_eventIsJewelEnough_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameInstance_eventIsJewelEnough_Parms), &Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "IsJewelEnough", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::MyGameInstance_eventIsJewelEnough_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::MyGameInstance_eventIsJewelEnough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_IsJewelEnough()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_IsJewelEnough_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execIsJewelEnough)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsJewelEnough();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function IsJewelEnough

// Begin Class UMyGameInstance Function SpendJewel
struct Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics
{
	struct MyGameInstance_eventSpendJewel_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyGameInstance_eventSpendJewel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyGameInstance_eventSpendJewel_Parms), &Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SpendJewel", nullptr, nullptr, Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::MyGameInstance_eventSpendJewel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::MyGameInstance_eventSpendJewel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_SpendJewel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SpendJewel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSpendJewel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SpendJewel();
	P_NATIVE_END;
}
// End Class UMyGameInstance Function SpendJewel

// Begin Class UMyGameInstance
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
	UClass* Class = UMyGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddJewel", &UMyGameInstance::execAddJewel },
		{ "GetJewel", &UMyGameInstance::execGetJewel },
		{ "IsJewelEnough", &UMyGameInstance::execIsJewelEnough },
		{ "SpendJewel", &UMyGameInstance::execSpendJewel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyGameInstance);
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::StaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPackDataList_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Jewel_MetaData[] = {
		{ "Category", "Jewel" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddJ_MetaData[] = {
		{ "Category", "Jewel" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpendJ_MetaData[] = {
		{ "Category", "Jewel" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CardPackDataList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CardPackDataList;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Jewel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddJ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpendJ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_AddJewel, "AddJewel" }, // 2172964508
		{ &Z_Construct_UFunction_UMyGameInstance_GetJewel, "GetJewel" }, // 4230412838
		{ &Z_Construct_UFunction_UMyGameInstance_IsJewelEnough, "IsJewelEnough" }, // 511661553
		{ &Z_Construct_UFunction_UMyGameInstance_SpendJewel, "SpendJewel" }, // 3225170082
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CardPackDataList_Inner = { "CardPackDataList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCardPackData, METADATA_PARAMS(0, nullptr) }; // 2731966007
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CardPackDataList = { "CardPackDataList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, CardPackDataList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPackDataList_MetaData), NewProp_CardPackDataList_MetaData) }; // 2731966007
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Jewel = { "Jewel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, Jewel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Jewel_MetaData), NewProp_Jewel_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_AddJ = { "AddJ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, AddJ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddJ_MetaData), NewProp_AddJ_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SpendJ = { "SpendJ", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, SpendJ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpendJ_MetaData), NewProp_SpendJ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CardPackDataList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_CardPackDataList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Jewel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_AddJ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_SpendJ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyGameInstance>()
{
	return UMyGameInstance::StaticClass();
}
UMyGameInstance::UMyGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// End Class UMyGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyGameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 1022435215U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyGameInstance_h_2046395921(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyGameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
