// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyCardPackManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCardPackManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPackManager();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPackManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyCardPackManager
void AMyCardPackManager::StaticRegisterNativesAMyCardPackManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyCardPackManager);
UClass* Z_Construct_UClass_AMyCardPackManager_NoRegister()
{
	return AMyCardPackManager::StaticClass();
}
struct Z_Construct_UClass_AMyCardPackManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCardPackManager.h" },
		{ "ModuleRelativePath", "MyCardPackManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPackClass_MetaData[] = {
		{ "Category", "CardPack Settings" },
		{ "ModuleRelativePath", "MyCardPackManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPackCount_MetaData[] = {
		{ "Category", "CardPack Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BP\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCardPackManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd BP\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardPackSpacing_MetaData[] = {
		{ "Category", "CardPack Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyCardPackManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardPackClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardPackCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CardPackSpacing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCardPackManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackClass = { "CardPackClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, CardPackClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyCardPack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPackClass_MetaData), NewProp_CardPackClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackCount = { "CardPackCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, CardPackCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPackCount_MetaData), NewProp_CardPackCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackSpacing = { "CardPackSpacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCardPackManager, CardPackSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardPackSpacing_MetaData), NewProp_CardPackSpacing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCardPackManager_Statics::NewProp_CardPackSpacing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyCardPackManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCardPackManager_Statics::ClassParams = {
	&AMyCardPackManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCardPackManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCardPackManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCardPackManager()
{
	if (!Z_Registration_Info_UClass_AMyCardPackManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCardPackManager.OuterSingleton, Z_Construct_UClass_AMyCardPackManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCardPackManager.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyCardPackManager>()
{
	return AMyCardPackManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCardPackManager);
AMyCardPackManager::~AMyCardPackManager() {}
// End Class AMyCardPackManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCardPackManager, AMyCardPackManager::StaticClass, TEXT("AMyCardPackManager"), &Z_Registration_Info_UClass_AMyCardPackManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCardPackManager), 4077477795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_2190211338(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyCardPackManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
