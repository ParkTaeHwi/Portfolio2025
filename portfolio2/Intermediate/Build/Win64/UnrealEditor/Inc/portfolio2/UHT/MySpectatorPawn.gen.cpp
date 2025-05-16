// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MySpectatorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySpectatorPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMySpectatorPawn();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMySpectatorPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMySpectatorPawn
void AMySpectatorPawn::StaticRegisterNativesAMySpectatorPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySpectatorPawn);
UClass* Z_Construct_UClass_AMySpectatorPawn_NoRegister()
{
	return AMySpectatorPawn::StaticClass();
}
struct Z_Construct_UClass_AMySpectatorPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MySpectatorPawn.h" },
		{ "ModuleRelativePath", "MySpectatorPawn.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySpectatorPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMySpectatorPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySpectatorPawn_Statics::ClassParams = {
	&AMySpectatorPawn::StaticClass,
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
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMySpectatorPawn()
{
	if (!Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton, Z_Construct_UClass_AMySpectatorPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMySpectatorPawn>()
{
	return AMySpectatorPawn::StaticClass();
}
AMySpectatorPawn::AMySpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMySpectatorPawn);
AMySpectatorPawn::~AMySpectatorPawn() {}
// End Class AMySpectatorPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMySpectatorPawn, AMySpectatorPawn::StaticClass, TEXT("AMySpectatorPawn"), &Z_Registration_Info_UClass_AMySpectatorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySpectatorPawn), 3193888138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_2462553088(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
