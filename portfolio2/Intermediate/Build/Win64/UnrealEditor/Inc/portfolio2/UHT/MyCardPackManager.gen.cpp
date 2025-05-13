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
ENGINE_API UClass* Z_Construct_UClass_AActor();
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCardPackManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AMyCardPackManager, AMyCardPackManager::StaticClass, TEXT("AMyCardPackManager"), &Z_Registration_Info_UClass_AMyCardPackManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCardPackManager), 811535199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_3926593942(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
