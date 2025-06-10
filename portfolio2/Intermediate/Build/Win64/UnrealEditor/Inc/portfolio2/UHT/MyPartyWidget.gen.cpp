// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyPartyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPartyWidget() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyPartyWidget();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyPartyWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyPartyWidget
void UMyPartyWidget::StaticRegisterNativesUMyPartyWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPartyWidget);
UClass* Z_Construct_UClass_UMyPartyWidget_NoRegister()
{
	return UMyPartyWidget::StaticClass();
}
struct Z_Construct_UClass_UMyPartyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyPartyWidget.h" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPartyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyPartyWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPartyWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPartyWidget_Statics::ClassParams = {
	&UMyPartyWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPartyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyPartyWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyPartyWidget()
{
	if (!Z_Registration_Info_UClass_UMyPartyWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPartyWidget.OuterSingleton, Z_Construct_UClass_UMyPartyWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyPartyWidget.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyPartyWidget>()
{
	return UMyPartyWidget::StaticClass();
}
UMyPartyWidget::UMyPartyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPartyWidget);
UMyPartyWidget::~UMyPartyWidget() {}
// End Class UMyPartyWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyPartyWidget, UMyPartyWidget::StaticClass, TEXT("UMyPartyWidget"), &Z_Registration_Info_UClass_UMyPartyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPartyWidget), 2451909853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_3038369053(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
