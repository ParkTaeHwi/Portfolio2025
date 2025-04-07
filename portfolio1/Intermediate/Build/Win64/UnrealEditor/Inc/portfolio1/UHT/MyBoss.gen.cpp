// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBoss() {}

// Begin Cross Module References
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyBoss();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyBoss_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyEnemy();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class AMyBoss
void AMyBoss::StaticRegisterNativesAMyBoss()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyBoss);
UClass* Z_Construct_UClass_AMyBoss_NoRegister()
{
	return AMyBoss::StaticClass();
}
struct Z_Construct_UClass_AMyBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyBoss.h" },
		{ "ModuleRelativePath", "MyBoss.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyEnemy,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyBoss_Statics::ClassParams = {
	&AMyBoss::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyBoss()
{
	if (!Z_Registration_Info_UClass_AMyBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyBoss.OuterSingleton, Z_Construct_UClass_AMyBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyBoss.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<AMyBoss>()
{
	return AMyBoss::StaticClass();
}
AMyBoss::AMyBoss() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyBoss);
AMyBoss::~AMyBoss() {}
// End Class AMyBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyBoss, AMyBoss::StaticClass, TEXT("AMyBoss"), &Z_Registration_Info_UClass_AMyBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyBoss), 1499916132U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_2241532310(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
