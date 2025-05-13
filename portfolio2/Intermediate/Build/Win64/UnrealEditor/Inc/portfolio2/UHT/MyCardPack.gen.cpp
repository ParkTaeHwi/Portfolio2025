// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyCardPack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCardPack() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyCardPack
void AMyCardPack::StaticRegisterNativesAMyCardPack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCardPack);
UClass* Z_Construct_UClass_AMyCardPack_NoRegister()
{
	return AMyCardPack::StaticClass();
}
struct Z_Construct_UClass_AMyCardPack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCardPack.h" },
		{ "ModuleRelativePath", "MyCardPack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCardPack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCardPack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCardPack_Statics::ClassParams = {
	&AMyCardPack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPack_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCardPack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCardPack()
{
	if (!Z_Registration_Info_UClass_AMyCardPack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCardPack.OuterSingleton, Z_Construct_UClass_AMyCardPack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCardPack.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyCardPack>()
{
	return AMyCardPack::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCardPack);
AMyCardPack::~AMyCardPack() {}
// End Class AMyCardPack

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCardPack, AMyCardPack::StaticClass, TEXT("AMyCardPack"), &Z_Registration_Info_UClass_AMyCardPack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCardPack), 391371529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_1419593959(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
