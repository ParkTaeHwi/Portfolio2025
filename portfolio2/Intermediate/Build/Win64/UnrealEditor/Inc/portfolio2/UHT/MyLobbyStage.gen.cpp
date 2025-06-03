// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyLobbyStage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLobbyStage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyStage();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyStage_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyLobbyStage Function LogCubeIndex
struct Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xca\xb1\xe2\xb0\xaa\n" },
#endif
		{ "ModuleRelativePath", "MyLobbyStage.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xca\xb1\xe2\xb0\xaa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLobbyStage, nullptr, "LogCubeIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyLobbyStage::execLogCubeIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogCubeIndex();
	P_NATIVE_END;
}
// End Class AMyLobbyStage Function LogCubeIndex

// Begin Class AMyLobbyStage Function SetCubeIndex
struct Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics
{
	struct MyLobbyStage_eventSetCubeIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyLobbyStage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyLobbyStage_eventSetCubeIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLobbyStage, nullptr, "SetCubeIndex", nullptr, nullptr, Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::MyLobbyStage_eventSetCubeIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::MyLobbyStage_eventSetCubeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyLobbyStage::execSetCubeIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetCubeIndex();
	P_NATIVE_END;
}
// End Class AMyLobbyStage Function SetCubeIndex

// Begin Class AMyLobbyStage
void AMyLobbyStage::StaticRegisterNativesAMyLobbyStage()
{
	UClass* Class = AMyLobbyStage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LogCubeIndex", &AMyLobbyStage::execLogCubeIndex },
		{ "SetCubeIndex", &AMyLobbyStage::execSetCubeIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyLobbyStage);
UClass* Z_Construct_UClass_AMyLobbyStage_NoRegister()
{
	return AMyLobbyStage::StaticClass();
}
struct Z_Construct_UClass_AMyLobbyStage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyLobbyStage.h" },
		{ "ModuleRelativePath", "MyLobbyStage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCubeIndex_MetaData[] = {
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "MyLobbyStage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCubeIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyLobbyStage_LogCubeIndex, "LogCubeIndex" }, // 349172690
		{ &Z_Construct_UFunction_AMyLobbyStage_SetCubeIndex, "SetCubeIndex" }, // 3917306722
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLobbyStage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLobbyStage_Statics::NewProp_CurrentCubeIndex = { "CurrentCubeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyLobbyStage, CurrentCubeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCubeIndex_MetaData), NewProp_CurrentCubeIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyLobbyStage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLobbyStage_Statics::NewProp_CurrentCubeIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyStage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyLobbyStage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyStage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyLobbyStage_Statics::ClassParams = {
	&AMyLobbyStage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyLobbyStage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyStage_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyStage_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyLobbyStage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyLobbyStage()
{
	if (!Z_Registration_Info_UClass_AMyLobbyStage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyLobbyStage.OuterSingleton, Z_Construct_UClass_AMyLobbyStage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyLobbyStage.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyLobbyStage>()
{
	return AMyLobbyStage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLobbyStage);
AMyLobbyStage::~AMyLobbyStage() {}
// End Class AMyLobbyStage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyLobbyStage, AMyLobbyStage::StaticClass, TEXT("AMyLobbyStage"), &Z_Registration_Info_UClass_AMyLobbyStage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyLobbyStage), 1390548060U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_329103604(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
