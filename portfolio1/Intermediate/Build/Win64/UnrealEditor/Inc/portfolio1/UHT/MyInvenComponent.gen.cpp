// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyInvenComponent.h"
#include "portfolio1/MyItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyInvenComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenComponent();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenComponent_NoRegister();
PORTFOLIO1_API UScriptStruct* Z_Construct_UScriptStruct_FMyItemInfo();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class UMyInvenComponent
void UMyInvenComponent::StaticRegisterNativesUMyInvenComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyInvenComponent);
UClass* Z_Construct_UClass_UMyInvenComponent_NoRegister()
{
	return UMyInvenComponent::StaticClass();
}
struct Z_Construct_UClass_UMyInvenComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyInvenComponent.h" },
		{ "ModuleRelativePath", "MyInvenComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__items_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "ModuleRelativePath", "MyInvenComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp__items_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp__items;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyInvenComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items_Inner = { "_items", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMyItemInfo, METADATA_PARAMS(0, nullptr) }; // 4188129642
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items = { "_items", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyInvenComponent, _items), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__items_MetaData), NewProp__items_MetaData) }; // 4188129642
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyInvenComponent_Statics::NewProp__items,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyInvenComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyInvenComponent_Statics::ClassParams = {
	&UMyInvenComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyInvenComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyInvenComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyInvenComponent()
{
	if (!Z_Registration_Info_UClass_UMyInvenComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyInvenComponent.OuterSingleton, Z_Construct_UClass_UMyInvenComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyInvenComponent.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UMyInvenComponent>()
{
	return UMyInvenComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyInvenComponent);
UMyInvenComponent::~UMyInvenComponent() {}
// End Class UMyInvenComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyInvenComponent, UMyInvenComponent::StaticClass, TEXT("UMyInvenComponent"), &Z_Registration_Info_UClass_UMyInvenComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyInvenComponent), 1477015649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenComponent_h_2532281145(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyInvenComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
