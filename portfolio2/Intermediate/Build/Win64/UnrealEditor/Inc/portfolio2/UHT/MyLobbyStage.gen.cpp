// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyLobbyStage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLobbyStage() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyStage();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyStage_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyLobbyStage
void AMyLobbyStage::StaticRegisterNativesAMyLobbyStage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyLobbyStage);
UClass* Z_Construct_UClass_AMyLobbyStage_NoRegister()
{
	return AMyLobbyStage::StaticClass();
}
struct Z_Construct_UClass_AMyLobbyStage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyLobbyStage.h" },
		{ "ModuleRelativePath", "MyLobbyStage.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLobbyStage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyLobbyStage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyStage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyLobbyStage_Statics::ClassParams = {
	&AMyLobbyStage::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyStage_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyLobbyStage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyLobbyStage()
{
	if (!Z_Registration_Info_UClass_AMyLobbyStage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyLobbyStage.OuterSingleton, Z_Construct_UClass_AMyLobbyStage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyLobbyStage.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyLobbyStage>()
{
	return AMyLobbyStage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLobbyStage);
AMyLobbyStage::~AMyLobbyStage() {}
// End Class AMyLobbyStage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyLobbyStage, AMyLobbyStage::StaticClass, TEXT("AMyLobbyStage"), &Z_Registration_Info_UClass_AMyLobbyStage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyLobbyStage), 807980516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_2045835864(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyStage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
