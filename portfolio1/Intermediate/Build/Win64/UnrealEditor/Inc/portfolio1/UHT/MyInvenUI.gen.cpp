// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyInvenUI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInvenUI() {}

// Begin Cross Module References
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenUI();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class UMyInvenUI
void UMyInvenUI::StaticRegisterNativesUMyInvenUI()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInvenUI);
UClass* Z_Construct_UClass_UMyInvenUI_NoRegister()
{
	return UMyInvenUI::StaticClass();
}
struct Z_Construct_UClass_UMyInvenUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyInvenUI.h" },
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Grid_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyInvenUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__slotImages_MetaData[] = {
		{ "Category", "MyInvenUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__slotImages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__slotImages;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, Grid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages_Inner = { "_slotImages", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages = { "_slotImages", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, _slotImages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__slotImages_MetaData), NewProp__slotImages_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInvenUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInvenUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInvenUI_Statics::ClassParams = {
	&UMyInvenUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyInvenUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInvenUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInvenUI()
{
	if (!Z_Registration_Info_UClass_UMyInvenUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInvenUI.OuterSingleton, Z_Construct_UClass_UMyInvenUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInvenUI.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UMyInvenUI>()
{
	return UMyInvenUI::StaticClass();
}
UMyInvenUI::UMyInvenUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInvenUI);
UMyInvenUI::~UMyInvenUI() {}
// End Class UMyInvenUI

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInvenUI, UMyInvenUI::StaticClass, TEXT("UMyInvenUI"), &Z_Registration_Info_UClass_UMyInvenUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenUI), 1058816142U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_1929171420(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
