// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyCardPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCardPack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyCardPack Function SetCards
struct Z_Construct_UFunction_AMyCardPack_SetCards_Statics
{
	struct MyCardPack_eventSetCards_Parms
	{
		TArray<FString> InCards;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyCardPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InCards_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InCards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InCards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMyCardPack_SetCards_Statics::NewProp_InCards_Inner = { "InCards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMyCardPack_SetCards_Statics::NewProp_InCards = { "InCards", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCardPack_eventSetCards_Parms, InCards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InCards_MetaData), NewProp_InCards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCardPack_SetCards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCardPack_SetCards_Statics::NewProp_InCards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCardPack_SetCards_Statics::NewProp_InCards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCardPack_SetCards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCardPack_SetCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyCardPack, nullptr, "SetCards", nullptr, nullptr, Z_Construct_UFunction_AMyCardPack_SetCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCardPack_SetCards_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCardPack_SetCards_Statics::MyCardPack_eventSetCards_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCardPack_SetCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCardPack_SetCards_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyCardPack_SetCards_Statics::MyCardPack_eventSetCards_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCardPack_SetCards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCardPack_SetCards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCardPack::execSetCards)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_InCards);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCards(Z_Param_Out_InCards);
	P_NATIVE_END;
}
// End Class AMyCardPack Function SetCards

// Begin Class AMyCardPack
void AMyCardPack::StaticRegisterNativesAMyCardPack()
{
	UClass* Class = AMyCardPack::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCards", &AMyCardPack::execSetCards },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCardPack);
UClass* Z_Construct_UClass_AMyCardPack_NoRegister()
{
	return AMyCardPack::StaticClass();
}
struct Z_Construct_UClass_AMyCardPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCardPack.h" },
		{ "ModuleRelativePath", "MyCardPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "MyCardPack" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCardPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "Category", "MyCardPack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid coordinate\n" },
#endif
		{ "ModuleRelativePath", "MyCardPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid coordinate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[] = {
		{ "Category", "MyCardPack" },
		{ "ModuleRelativePath", "MyCardPack.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocked_MetaData[] = {
		{ "Category", "MyCardPack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile state (for gameplay logic)\n" },
#endif
		{ "ModuleRelativePath", "MyCardPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile state (for gameplay logic)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardList_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCardPack.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
	static void NewProp_bIsBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CardList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CardList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCardPack_SetCards, "SetCards" }, // 2100594127
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCardPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCardPack_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPack, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCardPack_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPack, Row), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCardPack_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPack, Column), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Column_MetaData), NewProp_Column_MetaData) };
void Z_Construct_UClass_AMyCardPack_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
{
	((AMyCardPack*)Obj)->bIsBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyCardPack_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMyCardPack), &Z_Construct_UClass_AMyCardPack_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocked_MetaData), NewProp_bIsBlocked_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyCardPack_Statics::NewProp_CardList_Inner = { "CardList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCardPack_Statics::NewProp_CardList = { "CardList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPack, CardList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardList_MetaData), NewProp_CardList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCardPack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPack_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPack_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPack_Statics::NewProp_Column,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPack_Statics::NewProp_bIsBlocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPack_Statics::NewProp_CardList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPack_Statics::NewProp_CardList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPack_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCardPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCardPack_Statics::ClassParams = {
	&AMyCardPack::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyCardPack_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPack_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPack_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCardPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCardPack()
{
	if (!Z_Registration_Info_UClass_AMyCardPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCardPack.OuterSingleton, Z_Construct_UClass_AMyCardPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCardPack.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyCardPack>()
{
	return AMyCardPack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCardPack);
AMyCardPack::~AMyCardPack() {}
// End Class AMyCardPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCardPack, AMyCardPack::StaticClass, TEXT("AMyCardPack"), &Z_Registration_Info_UClass_AMyCardPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCardPack), 901157352U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_3505234266(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
