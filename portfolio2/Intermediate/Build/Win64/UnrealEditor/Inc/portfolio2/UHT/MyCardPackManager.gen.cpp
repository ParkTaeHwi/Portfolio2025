// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyCardPackManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCardPackManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPackManager();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPackManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyCardPackManager
void AMyCardPackManager::StaticRegisterNativesAMyCardPackManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCardPackManager);
UClass* Z_Construct_UClass_AMyCardPackManager_NoRegister()
{
	return AMyCardPackManager::StaticClass();
}
struct Z_Construct_UClass_AMyCardPackManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCardPackManager.h" },
		{ "ModuleRelativePath", "MyCardPackManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPackClass_MetaData[] = {
		{ "Category", "CardPack Settings" },
		{ "ModuleRelativePath", "MyCardPackManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowCount_MetaData[] = {
		{ "Category", "CardPack Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd BP\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCardPackManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd BP\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColumnCount_MetaData[] = {
		{ "Category", "CardPack Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCardPackManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSpacing_MetaData[] = {
		{ "Category", "CardPack Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCardPackManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardPackClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ColumnCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCardPackManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackClass = { "CardPackClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, CardPackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCardPack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPackClass_MetaData), NewProp_CardPackClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_RowCount = { "RowCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, RowCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowCount_MetaData), NewProp_RowCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_ColumnCount = { "ColumnCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, ColumnCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColumnCount_MetaData), NewProp_ColumnCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_TileSpacing = { "TileSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, TileSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSpacing_MetaData), NewProp_TileSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_RowCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_ColumnCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_TileSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCardPackManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCardPackManager_Statics::ClassParams = {
	&AMyCardPackManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCardPackManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCardPackManager()
{
	if (!Z_Registration_Info_UClass_AMyCardPackManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCardPackManager.OuterSingleton, Z_Construct_UClass_AMyCardPackManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCardPackManager.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyCardPackManager>()
{
	return AMyCardPackManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCardPackManager);
AMyCardPackManager::~AMyCardPackManager() {}
// End Class AMyCardPackManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCardPackManager, AMyCardPackManager::StaticClass, TEXT("AMyCardPackManager"), &Z_Registration_Info_UClass_AMyCardPackManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCardPackManager), 2205487447U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_3270587138(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
