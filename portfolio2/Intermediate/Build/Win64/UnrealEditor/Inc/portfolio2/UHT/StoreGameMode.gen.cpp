// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/StoreGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPackManager_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
PORTFOLIO2_API UClass* Z_Construct_UClass_AStoreGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_AStoreGameMode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AStoreGameMode
void AStoreGameMode::StaticRegisterNativesAStoreGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStoreGameMode);
UClass* Z_Construct_UClass_AStoreGameMode_NoRegister()
{
	return AStoreGameMode::StaticClass();
}
struct Z_Construct_UClass_AStoreGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "StoreGameMode.h" },
		{ "ModuleRelativePath", "StoreGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "StoreGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyCardPackManagerClass_MetaData[] = {
		{ "Category", "CardPack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "StoreGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JewelUIClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "StoreGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc5\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StoreUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StoreGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StoreUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MyCardPackManagerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_JewelUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StoreUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStoreGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStoreGameMode_Statics::NewProp_StoreUIClass = { "StoreUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStoreGameMode, StoreUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreUIClass_MetaData), NewProp_StoreUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStoreGameMode_Statics::NewProp_MyCardPackManagerClass = { "MyCardPackManagerClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStoreGameMode, MyCardPackManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCardPackManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyCardPackManagerClass_MetaData), NewProp_MyCardPackManagerClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AStoreGameMode_Statics::NewProp_JewelUIClass = { "JewelUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStoreGameMode, JewelUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JewelUIClass_MetaData), NewProp_JewelUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStoreGameMode_Statics::NewProp_StoreUI = { "StoreUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AStoreGameMode, StoreUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StoreUI_MetaData), NewProp_StoreUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStoreGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoreGameMode_Statics::NewProp_StoreUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoreGameMode_Statics::NewProp_MyCardPackManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoreGameMode_Statics::NewProp_JewelUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStoreGameMode_Statics::NewProp_StoreUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStoreGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AStoreGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AStoreGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AStoreGameMode_Statics::ClassParams = {
	&AStoreGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AStoreGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AStoreGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AStoreGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AStoreGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AStoreGameMode()
{
	if (!Z_Registration_Info_UClass_AStoreGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStoreGameMode.OuterSingleton, Z_Construct_UClass_AStoreGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AStoreGameMode.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AStoreGameMode>()
{
	return AStoreGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AStoreGameMode);
AStoreGameMode::~AStoreGameMode() {}
// End Class AStoreGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_StoreGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AStoreGameMode, AStoreGameMode::StaticClass, TEXT("AStoreGameMode"), &Z_Registration_Info_UClass_AStoreGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStoreGameMode), 2238723210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_StoreGameMode_h_1253871363(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_StoreGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_StoreGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
