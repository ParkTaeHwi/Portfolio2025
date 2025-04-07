// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyBossAnim.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyBossAnim() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyBossAnim();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyBossAnim_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class UMyBossAnim
void UMyBossAnim::StaticRegisterNativesUMyBossAnim()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyBossAnim);
UClass* Z_Construct_UClass_UMyBossAnim_NoRegister()
{
	return UMyBossAnim::StaticClass();
}
struct Z_Construct_UClass_UMyBossAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MyBossAnim.h" },
		{ "ModuleRelativePath", "MyBossAnim.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBossAnim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBossAnim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBossAnim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBossAnim_Statics::ClassParams = {
	&UMyBossAnim::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBossAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBossAnim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBossAnim()
{
	if (!Z_Registration_Info_UClass_UMyBossAnim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBossAnim.OuterSingleton, Z_Construct_UClass_UMyBossAnim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBossAnim.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UMyBossAnim>()
{
	return UMyBossAnim::StaticClass();
}
UMyBossAnim::UMyBossAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBossAnim);
UMyBossAnim::~UMyBossAnim() {}
// End Class UMyBossAnim

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBossAnim_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBossAnim, UMyBossAnim::StaticClass, TEXT("UMyBossAnim"), &Z_Registration_Info_UClass_UMyBossAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBossAnim), 730898670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBossAnim_h_3910346147(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBossAnim_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyBossAnim_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
