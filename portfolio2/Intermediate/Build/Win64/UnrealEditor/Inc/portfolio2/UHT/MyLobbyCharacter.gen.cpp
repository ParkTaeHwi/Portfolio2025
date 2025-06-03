// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyLobbyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLobbyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyCharacter();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyLobbyCharacter Function LogCharacterIndex
struct Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xca\xb1\xe2\xb0\xaa\n" },
#endif
		{ "ModuleRelativePath", "MyLobbyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xca\xb1\xe2\xb0\xaa" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLobbyCharacter, nullptr, "LogCharacterIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyLobbyCharacter::execLogCharacterIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LogCharacterIndex();
	P_NATIVE_END;
}
// End Class AMyLobbyCharacter Function LogCharacterIndex

// Begin Class AMyLobbyCharacter Function SetCharacterIndex
struct Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics
{
	struct MyLobbyCharacter_eventSetCharacterIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyLobbyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyLobbyCharacter_eventSetCharacterIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyLobbyCharacter, nullptr, "SetCharacterIndex", nullptr, nullptr, Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::MyLobbyCharacter_eventSetCharacterIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::MyLobbyCharacter_eventSetCharacterIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyLobbyCharacter::execSetCharacterIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->SetCharacterIndex();
	P_NATIVE_END;
}
// End Class AMyLobbyCharacter Function SetCharacterIndex

// Begin Class AMyLobbyCharacter
void AMyLobbyCharacter::StaticRegisterNativesAMyLobbyCharacter()
{
	UClass* Class = AMyLobbyCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LogCharacterIndex", &AMyLobbyCharacter::execLogCharacterIndex },
		{ "SetCharacterIndex", &AMyLobbyCharacter::execSetCharacterIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyLobbyCharacter);
UClass* Z_Construct_UClass_AMyLobbyCharacter_NoRegister()
{
	return AMyLobbyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyLobbyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyLobbyCharacter.h" },
		{ "ModuleRelativePath", "MyLobbyCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCharacterIndex_MetaData[] = {
		{ "Category", "Cube" },
		{ "ModuleRelativePath", "MyLobbyCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCharacterIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyLobbyCharacter_LogCharacterIndex, "LogCharacterIndex" }, // 4194284252
		{ &Z_Construct_UFunction_AMyLobbyCharacter_SetCharacterIndex, "SetCharacterIndex" }, // 1801322376
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLobbyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyLobbyCharacter_Statics::NewProp_CurrentCharacterIndex = { "CurrentCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyLobbyCharacter, CurrentCharacterIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCharacterIndex_MetaData), NewProp_CurrentCharacterIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyLobbyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyLobbyCharacter_Statics::NewProp_CurrentCharacterIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyLobbyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyLobbyCharacter_Statics::ClassParams = {
	&AMyLobbyCharacter::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyLobbyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyLobbyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyLobbyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyLobbyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyLobbyCharacter.OuterSingleton, Z_Construct_UClass_AMyLobbyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyLobbyCharacter.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyLobbyCharacter>()
{
	return AMyLobbyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLobbyCharacter);
AMyLobbyCharacter::~AMyLobbyCharacter() {}
// End Class AMyLobbyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyLobbyCharacter, AMyLobbyCharacter::StaticClass, TEXT("AMyLobbyCharacter"), &Z_Registration_Info_UClass_AMyLobbyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyLobbyCharacter), 927166978U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_4266088638(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
