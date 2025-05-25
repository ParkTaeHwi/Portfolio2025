// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyOpenCardWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyOpenCardWidget() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyOpenCardWidget();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyOpenCardWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyOpenCardWidget
void UMyOpenCardWidget::StaticRegisterNativesUMyOpenCardWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyOpenCardWidget);
UClass* Z_Construct_UClass_UMyOpenCardWidget_NoRegister()
{
	return UMyOpenCardWidget::StaticClass();
}
struct Z_Construct_UClass_UMyOpenCardWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyOpenCardWidget.h" },
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyOpenCardWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyOpenCardWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOpenCardWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyOpenCardWidget_Statics::ClassParams = {
	&UMyOpenCardWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOpenCardWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyOpenCardWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyOpenCardWidget()
{
	if (!Z_Registration_Info_UClass_UMyOpenCardWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyOpenCardWidget.OuterSingleton, Z_Construct_UClass_UMyOpenCardWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyOpenCardWidget.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyOpenCardWidget>()
{
	return UMyOpenCardWidget::StaticClass();
}
UMyOpenCardWidget::UMyOpenCardWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyOpenCardWidget);
UMyOpenCardWidget::~UMyOpenCardWidget() {}
// End Class UMyOpenCardWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyOpenCardWidget, UMyOpenCardWidget::StaticClass, TEXT("UMyOpenCardWidget"), &Z_Registration_Info_UClass_UMyOpenCardWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyOpenCardWidget), 2750231788U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_2293325965(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
