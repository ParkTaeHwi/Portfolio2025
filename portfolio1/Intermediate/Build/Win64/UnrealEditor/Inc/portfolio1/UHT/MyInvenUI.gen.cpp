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
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenComponent_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenUI();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
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
		{ "Comment", "/**\n *\n */" },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Drop_MetaData[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__slotButtons_MetaData[] = {
		{ "Category", "MyInvenUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__defaultTexture_MetaData[] = {
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__potionTexture_MetaData[] = {
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__invenComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyInvenUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Grid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Drop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__slotImages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__slotImages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__slotButtons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__slotButtons;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__defaultTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__potionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__invenComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp_Grid = { "Grid", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, Grid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Grid_MetaData), NewProp_Grid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp_Drop = { "Drop", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, Drop), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Drop_MetaData), NewProp_Drop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages_Inner = { "_slotImages", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages = { "_slotImages", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, _slotImages), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__slotImages_MetaData), NewProp__slotImages_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotButtons_Inner = { "_slotButtons", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotButtons = { "_slotButtons", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, _slotButtons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__slotButtons_MetaData), NewProp__slotButtons_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__defaultTexture = { "_defaultTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, _defaultTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__defaultTexture_MetaData), NewProp__defaultTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__potionTexture = { "_potionTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, _potionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__potionTexture_MetaData), NewProp__potionTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyInvenUI_Statics::NewProp__invenComponent = { "_invenComponent", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenUI, _invenComponent), Z_Construct_UClass_UMyInvenComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__invenComponent_MetaData), NewProp__invenComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInvenUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp_Grid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp_Drop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotImages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotButtons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__slotButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__defaultTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__potionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenUI_Statics::NewProp__invenComponent,
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
		{ Z_Construct_UClass_UMyInvenUI, UMyInvenUI::StaticClass, TEXT("UMyInvenUI"), &Z_Registration_Info_UClass_UMyInvenUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenUI), 2291745986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_2830580411(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenUI_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
