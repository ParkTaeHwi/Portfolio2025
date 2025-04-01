// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/BT_Deco_CanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBT_Deco_CanAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
PORTFOLIO1_API UClass* Z_Construct_UClass_UBT_Deco_CanAttack();
PORTFOLIO1_API UClass* Z_Construct_UClass_UBT_Deco_CanAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class UBT_Deco_CanAttack
void UBT_Deco_CanAttack::StaticRegisterNativesUBT_Deco_CanAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBT_Deco_CanAttack);
UClass* Z_Construct_UClass_UBT_Deco_CanAttack_NoRegister()
{
	return UBT_Deco_CanAttack::StaticClass();
}
struct Z_Construct_UClass_UBT_Deco_CanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_Deco_CanAttack.h" },
		{ "ModuleRelativePath", "BT_Deco_CanAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_Deco_CanAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_Deco_CanAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTDecorator,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Deco_CanAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_Deco_CanAttack_Statics::ClassParams = {
	&UBT_Deco_CanAttack::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Deco_CanAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_Deco_CanAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_Deco_CanAttack()
{
	if (!Z_Registration_Info_UClass_UBT_Deco_CanAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_Deco_CanAttack.OuterSingleton, Z_Construct_UClass_UBT_Deco_CanAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_Deco_CanAttack.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UBT_Deco_CanAttack>()
{
	return UBT_Deco_CanAttack::StaticClass();
}
UBT_Deco_CanAttack::UBT_Deco_CanAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_Deco_CanAttack);
UBT_Deco_CanAttack::~UBT_Deco_CanAttack() {}
// End Class UBT_Deco_CanAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_BT_Deco_CanAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_Deco_CanAttack, UBT_Deco_CanAttack::StaticClass, TEXT("UBT_Deco_CanAttack"), &Z_Registration_Info_UClass_UBT_Deco_CanAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_Deco_CanAttack), 2064140099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_BT_Deco_CanAttack_h_2848033179(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_BT_Deco_CanAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_BT_Deco_CanAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
