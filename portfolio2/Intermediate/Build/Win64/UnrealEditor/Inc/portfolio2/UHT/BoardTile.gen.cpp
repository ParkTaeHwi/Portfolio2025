// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/BoardTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoardTile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_ABoardTile();
PORTFOLIO2_API UClass* Z_Construct_UClass_ABoardTile_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class ABoardTile
void ABoardTile::StaticRegisterNativesABoardTile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABoardTile);
UClass* Z_Construct_UClass_ABoardTile_NoRegister()
{
	return ABoardTile::StaticClass();
}
struct Z_Construct_UClass_ABoardTile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BoardTile.h" },
		{ "ModuleRelativePath", "BoardTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileMesh_MetaData[] = {
		{ "Category", "BoardTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoardTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "Category", "BoardTile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Grid coordinate\n" },
#endif
		{ "ModuleRelativePath", "BoardTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid coordinate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Column_MetaData[] = {
		{ "Category", "BoardTile" },
		{ "ModuleRelativePath", "BoardTile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlocked_MetaData[] = {
		{ "Category", "BoardTile" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tile state (for gameplay logic)\n" },
#endif
		{ "ModuleRelativePath", "BoardTile.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tile state (for gameplay logic)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TileMesh;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Row;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Column;
	static void NewProp_bIsBlocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlocked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoardTile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoardTile_Statics::NewProp_TileMesh = { "TileMesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardTile, TileMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileMesh_MetaData), NewProp_TileMesh_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardTile_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardTile, Row), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABoardTile_Statics::NewProp_Column = { "Column", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABoardTile, Column), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Column_MetaData), NewProp_Column_MetaData) };
void Z_Construct_UClass_ABoardTile_Statics::NewProp_bIsBlocked_SetBit(void* Obj)
{
	((ABoardTile*)Obj)->bIsBlocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABoardTile_Statics::NewProp_bIsBlocked = { "bIsBlocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABoardTile), &Z_Construct_UClass_ABoardTile_Statics::NewProp_bIsBlocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlocked_MetaData), NewProp_bIsBlocked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoardTile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardTile_Statics::NewProp_TileMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardTile_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardTile_Statics::NewProp_Column,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoardTile_Statics::NewProp_bIsBlocked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABoardTile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABoardTile_Statics::ClassParams = {
	&ABoardTile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABoardTile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABoardTile_Statics::Class_MetaDataParams), Z_Construct_UClass_ABoardTile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABoardTile()
{
	if (!Z_Registration_Info_UClass_ABoardTile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABoardTile.OuterSingleton, Z_Construct_UClass_ABoardTile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABoardTile.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<ABoardTile>()
{
	return ABoardTile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABoardTile);
ABoardTile::~ABoardTile() {}
// End Class ABoardTile

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BoardTile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABoardTile, ABoardTile::StaticClass, TEXT("ABoardTile"), &Z_Registration_Info_UClass_ABoardTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABoardTile), 3836517034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BoardTile_h_384694507(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BoardTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BoardTile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
