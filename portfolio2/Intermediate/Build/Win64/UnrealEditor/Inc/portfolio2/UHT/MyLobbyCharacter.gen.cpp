// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyLobbyCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyLobbyCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyCharacter();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyLobbyCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyLobbyCharacter
void AMyLobbyCharacter::StaticRegisterNativesAMyLobbyCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyLobbyCharacter);
UClass* Z_Construct_UClass_AMyLobbyCharacter_NoRegister()
{
	return AMyLobbyCharacter::StaticClass();
}
struct Z_Construct_UClass_AMyLobbyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyLobbyCharacter.h" },
		{ "ModuleRelativePath", "MyLobbyCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyLobbyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyLobbyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyLobbyCharacter_Statics::ClassParams = {
	&AMyLobbyCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyLobbyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyLobbyCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyLobbyCharacter()
{
	if (!Z_Registration_Info_UClass_AMyLobbyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyLobbyCharacter.OuterSingleton, Z_Construct_UClass_AMyLobbyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyLobbyCharacter.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyLobbyCharacter>()
{
	return AMyLobbyCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyLobbyCharacter);
AMyLobbyCharacter::~AMyLobbyCharacter() {}
// End Class AMyLobbyCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyLobbyCharacter, AMyLobbyCharacter::StaticClass, TEXT("AMyLobbyCharacter"), &Z_Registration_Info_UClass_AMyLobbyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyLobbyCharacter), 611666876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_320059885(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyLobbyCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
