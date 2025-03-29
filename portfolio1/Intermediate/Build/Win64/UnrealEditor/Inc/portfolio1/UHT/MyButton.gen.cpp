// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyButton() {}

// Begin Cross Module References
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyButton();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class UMyButton
void UMyButton::StaticRegisterNativesUMyButton()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyButton);
UClass* Z_Construct_UClass_UMyButton_NoRegister()
{
	return UMyButton::StaticClass();
}
struct Z_Construct_UClass_UMyButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyButton.h" },
		{ "ModuleRelativePath", "MyButton.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyButton_Statics::ClassParams = {
	&UMyButton::StaticClass,
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
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyButton()
{
	if (!Z_Registration_Info_UClass_UMyButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyButton.OuterSingleton, Z_Construct_UClass_UMyButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyButton.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UMyButton>()
{
	return UMyButton::StaticClass();
}
UMyButton::UMyButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyButton);
UMyButton::~UMyButton() {}
// End Class UMyButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyButton, UMyButton::StaticClass, TEXT("UMyButton"), &Z_Registration_Info_UClass_UMyButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyButton), 1287060798U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_2304721719(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
