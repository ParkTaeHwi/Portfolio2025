// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// Begin Cross Module References
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyCharacter();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyPlayer();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class AMyPlayer
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayer);
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::StaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "MyPlayer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<AMyPlayer>()
{
	return AMyPlayer::StaticClass();
}
AMyPlayer::AMyPlayer() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// End Class AMyPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 1613442366U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyPlayer_h_3644904538(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
