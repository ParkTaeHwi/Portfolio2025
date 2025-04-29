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
PORTFOLIO2_API UClass* Z_Construct_UClass_ABattleGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_ABattleGameMode_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BattleGameMode.h" },
		{ "ModuleRelativePath", "BattleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ABattleGameMode, ABattleGameMode::StaticClass, TEXT("ABattleGameMode"), &Z_Registration_Info_UClass_ABattleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABattleGameMode), 3164740076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_960430305(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_BattleGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
