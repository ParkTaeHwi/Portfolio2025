// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/InvenGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PORTFOLIO2_API UClass* Z_Construct_UClass_AInvenGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_AInvenGameMode_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AInvenGameMode
void AInvenGameMode::StaticRegisterNativesAInvenGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInvenGameMode);
UClass* Z_Construct_UClass_AInvenGameMode_NoRegister()
{
	return AInvenGameMode::StaticClass();
}
struct Z_Construct_UClass_AInvenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InvenGameMode.h" },
		{ "ModuleRelativePath", "InvenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvenUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "InvenGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JewelUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "InvenGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvenUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_InvenUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_JewelUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InvenUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInvenGameMode_Statics::NewProp_InvenUIClass = { "InvenUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInvenGameMode, InvenUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvenUIClass_MetaData), NewProp_InvenUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AInvenGameMode_Statics::NewProp_JewelUIClass = { "JewelUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInvenGameMode, JewelUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JewelUIClass_MetaData), NewProp_JewelUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvenGameMode_Statics::NewProp_InvenUI = { "InvenUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInvenGameMode, InvenUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvenUI_MetaData), NewProp_InvenUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvenGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenGameMode_Statics::NewProp_InvenUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenGameMode_Statics::NewProp_JewelUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvenGameMode_Statics::NewProp_InvenUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInvenGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInvenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInvenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInvenGameMode_Statics::ClassParams = {
	&AInvenGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInvenGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInvenGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInvenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInvenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInvenGameMode()
{
	if (!Z_Registration_Info_UClass_AInvenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInvenGameMode.OuterSingleton, Z_Construct_UClass_AInvenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInvenGameMode.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AInvenGameMode>()
{
	return AInvenGameMode::StaticClass();
}
AInvenGameMode::AInvenGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInvenGameMode);
AInvenGameMode::~AInvenGameMode() {}
// End Class AInvenGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInvenGameMode, AInvenGameMode::StaticClass, TEXT("AInvenGameMode"), &Z_Registration_Info_UClass_AInvenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInvenGameMode), 3593164987U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_2834638039(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_InvenGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
