// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/BattleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattleGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PORTFOLIO2_API UClass* Z_Construct_UClass_ABattleGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_ABattleGameMode_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_ABoardManager_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class ABattleGameMode
void ABattleGameMode::StaticRegisterNativesABattleGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABattleGameMode);
UClass* Z_Construct_UClass_ABattleGameMode_NoRegister()
{
	return ABattleGameMode::StaticClass();
}
struct Z_Construct_UClass_ABattleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BattleGameMode.h" },
		{ "ModuleRelativePath", "BattleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattleUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "BattleGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoardManagerClass_MetaData[] = {
		{ "Category", "Board" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "BattleGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattleUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BattleGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BattleUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BoardManagerClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BattleUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_BattleUIClass = { "BattleUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, BattleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattleUIClass_MetaData), NewProp_BattleUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_BoardManagerClass = { "BoardManagerClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, BoardManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABoardManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoardManagerClass_MetaData), NewProp_BoardManagerClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattleGameMode_Statics::NewProp_BattleUI = { "BattleUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABattleGameMode, BattleUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattleUI_MetaData), NewProp_BattleUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattleGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_BattleUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_BoardManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattleGameMode_Statics::NewProp_BattleUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABattleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABattleGameMode_Statics::ClassParams = {
	&ABattleGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABattleGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABattleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABattleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABattleGameMode()
{
	if (!Z_Registration_Info_UClass_ABattleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABattleGameMode.OuterSingleton, Z_Construct_UClass_ABattleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABattleGameMode.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<ABattleGameMode>()
{
	return ABattleGameMode::StaticClass();
}
ABattleGameMode::ABattleGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleGameMode);
ABattleGameMode::~ABattleGameMode() {}
// End Class ABattleGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABattleGameMode, ABattleGameMode::StaticClass, TEXT("ABattleGameMode"), &Z_Registration_Info_UClass_ABattleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleGameMode), 751369140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_4212154930(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
