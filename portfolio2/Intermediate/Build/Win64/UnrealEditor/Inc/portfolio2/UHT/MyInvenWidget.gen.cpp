// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyInvenWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInvenWidget() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyInvenWidget();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyInvenWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyInvenWidget
void UMyInvenWidget::StaticRegisterNativesUMyInvenWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInvenWidget);
UClass* Z_Construct_UClass_UMyInvenWidget_NoRegister()
{
	return UMyInvenWidget::StaticClass();
}
struct Z_Construct_UClass_UMyInvenWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyInvenWidget.h" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvenImage0_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvenImage1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvenImage2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvenImage0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvenImage1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvenImage2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_InvenImage0 = { "InvenImage0", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenWidget, InvenImage0), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvenImage0_MetaData), NewProp_InvenImage0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_InvenImage1 = { "InvenImage1", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenWidget, InvenImage1), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvenImage1_MetaData), NewProp_InvenImage1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_InvenImage2 = { "InvenImage2", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenWidget, InvenImage2), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvenImage2_MetaData), NewProp_InvenImage2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_InvenImage0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_InvenImage1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenWidget_Statics::NewProp_InvenImage2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInvenWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInvenWidget_Statics::ClassParams = {
	&UMyInvenWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInvenWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInvenWidget()
{
	if (!Z_Registration_Info_UClass_UMyInvenWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInvenWidget.OuterSingleton, Z_Construct_UClass_UMyInvenWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInvenWidget.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyInvenWidget>()
{
	return UMyInvenWidget::StaticClass();
}
UMyInvenWidget::UMyInvenWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInvenWidget);
UMyInvenWidget::~UMyInvenWidget() {}
// End Class UMyInvenWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyInvenWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInvenWidget, UMyInvenWidget::StaticClass, TEXT("UMyInvenWidget"), &Z_Registration_Info_UClass_UMyInvenWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenWidget), 151569199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyInvenWidget_h_3067665219(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyInvenWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyInvenWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
