// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyCardPackData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCardPackData() {}

// Begin Cross Module References
PORTFOLIO2_API UScriptStruct* Z_Construct_UScriptStruct_FCardPackData();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin ScriptStruct FCardPackData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardPackData;
class UScriptStruct* FCardPackData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardPackData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardPackData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardPackData, (UObject*)Z_Construct_UPackage__Script_portfolio2(), TEXT("CardPackData"));
	}
	return Z_Registration_Info_UScriptStruct_CardPackData.OuterSingleton;
}
template<> PORTFOLIO2_API UScriptStruct* StaticStruct<FCardPackData>()
{
	return FCardPackData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCardPackData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyCardPackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "ModuleRelativePath", "MyCardPackData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOpened_MetaData[] = {
		{ "ModuleRelativePath", "MyCardPackData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static void NewProp_bOpened_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpened;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardPackData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardPackData, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) };
void Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_bOpened_SetBit(void* Obj)
{
	((FCardPackData*)Obj)->bOpened = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_bOpened = { "bOpened", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCardPackData), &Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_bOpened_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOpened_MetaData), NewProp_bOpened_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardPackData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_Cards,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardPackData_Statics::NewProp_bOpened,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardPackData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
	nullptr,
	&NewStructOps,
	"CardPackData",
	Z_Construct_UScriptStruct_FCardPackData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackData_Statics::PropPointers),
	sizeof(FCardPackData),
	alignof(FCardPackData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardPackData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardPackData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCardPackData()
{
	if (!Z_Registration_Info_UScriptStruct_CardPackData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardPackData.InnerSingleton, Z_Construct_UScriptStruct_FCardPackData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CardPackData.InnerSingleton;
}
// End ScriptStruct FCardPackData

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCardPackData::StaticStruct, Z_Construct_UScriptStruct_FCardPackData_Statics::NewStructOps, TEXT("CardPackData"), &Z_Registration_Info_UScriptStruct_CardPackData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardPackData), 2731966007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackData_h_2776066130(TEXT("/Script/portfolio2"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
