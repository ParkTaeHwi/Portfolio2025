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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonName_MetaData[] = {
		{ "Category", "Summon Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SummonName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayableSummon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SummonName = { "SummonName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, SummonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonName_MetaData), NewProp_SummonName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SummonName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers),
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
		{ Z_Construct_UClass_AMyPlayableSummon, AMyPlayableSummon::StaticClass, TEXT("AMyPlayableSummon"), &Z_Registration_Info_UClass_AMyPlayableSummon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayableSummon), 1951241784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_149565333(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
