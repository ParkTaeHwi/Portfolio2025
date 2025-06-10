// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/PartyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyGameMode() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
PORTFOLIO2_API UClass* Z_Construct_UClass_APartyGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_APartyGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class APartyGameMode
void APartyGameMode::StaticRegisterNativesAPartyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartyGameMode);
UClass* Z_Construct_UClass_APartyGameMode_NoRegister()
{
	return APartyGameMode::StaticClass();
}
struct Z_Construct_UClass_APartyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PartyGameMode.h" },
		{ "ModuleRelativePath", "PartyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APartyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APartyGameMode_Statics::ClassParams = {
	&APartyGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APartyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APartyGameMode()
{
	if (!Z_Registration_Info_UClass_APartyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartyGameMode.OuterSingleton, Z_Construct_UClass_APartyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APartyGameMode.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<APartyGameMode>()
{
	return APartyGameMode::StaticClass();
}
APartyGameMode::APartyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APartyGameMode);
APartyGameMode::~APartyGameMode() {}
// End Class APartyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APartyGameMode, APartyGameMode::StaticClass, TEXT("APartyGameMode"), &Z_Registration_Info_UClass_APartyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartyGameMode), 73707124U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_3280817495(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
