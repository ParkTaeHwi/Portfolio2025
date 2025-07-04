// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyPlayableSummon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayableSummon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyPlayableSummon();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyPlayableSummon_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyPlayableSummon
void AMyPlayableSummon::StaticRegisterNativesAMyPlayableSummon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayableSummon);
UClass* Z_Construct_UClass_AMyPlayableSummon_NoRegister()
{
	return AMyPlayableSummon::StaticClass();
}
struct Z_Construct_UClass_AMyPlayableSummon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayableSummon.h" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayableSummon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPlayableSummon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayableSummon_Statics::ClassParams = {
	&AMyPlayableSummon::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayableSummon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayableSummon()
{
	if (!Z_Registration_Info_UClass_AMyPlayableSummon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayableSummon.OuterSingleton, Z_Construct_UClass_AMyPlayableSummon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayableSummon.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyPlayableSummon>()
{
	return AMyPlayableSummon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayableSummon);
AMyPlayableSummon::~AMyPlayableSummon() {}
// End Class AMyPlayableSummon

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayableSummon, AMyPlayableSummon::StaticClass, TEXT("AMyPlayableSummon"), &Z_Registration_Info_UClass_AMyPlayableSummon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayableSummon), 2753844093U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_2759546327(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
