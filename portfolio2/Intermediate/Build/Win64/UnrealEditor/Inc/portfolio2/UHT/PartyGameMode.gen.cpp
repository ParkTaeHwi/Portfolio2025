// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/PartyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
PORTFOLIO2_API UClass* Z_Construct_UClass_APartyGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_APartyGameMode_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class APartyGameMode
void APartyGameMode::StaticRegisterNativesAPartyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APartyGameMode);
UClass* Z_Construct_UClass_APartyGameMode_NoRegister()
{
	return APartyGameMode::StaticClass();
}
struct Z_Construct_UClass_APartyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PartyGameMode.h" },
		{ "ModuleRelativePath", "PartyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PartyGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JewelUIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "PartyGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyUI_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PartyGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PartyUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_JewelUIClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APartyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APartyGameMode_Statics::NewProp_PartyUIClass = { "PartyUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyGameMode, PartyUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyUIClass_MetaData), NewProp_PartyUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APartyGameMode_Statics::NewProp_JewelUIClass = { "JewelUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyGameMode, JewelUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JewelUIClass_MetaData), NewProp_JewelUIClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APartyGameMode_Statics::NewProp_PartyUI = { "PartyUI", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APartyGameMode, PartyUI), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyUI_MetaData), NewProp_PartyUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APartyGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyGameMode_Statics::NewProp_PartyUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyGameMode_Statics::NewProp_JewelUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APartyGameMode_Statics::NewProp_PartyUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APartyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APartyGameMode_Statics::ClassParams = {
	&APartyGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APartyGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APartyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APartyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APartyGameMode()
{
	if (!Z_Registration_Info_UClass_APartyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APartyGameMode.OuterSingleton, Z_Construct_UClass_APartyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APartyGameMode.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<APartyGameMode>()
{
	return APartyGameMode::StaticClass();
}
APartyGameMode::APartyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APartyGameMode);
APartyGameMode::~APartyGameMode() {}
// End Class APartyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APartyGameMode, APartyGameMode::StaticClass, TEXT("APartyGameMode"), &Z_Registration_Info_UClass_APartyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APartyGameMode), 3954293710U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_1548584099(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_PartyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
