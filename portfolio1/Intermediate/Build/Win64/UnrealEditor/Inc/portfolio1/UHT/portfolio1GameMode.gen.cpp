// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/portfolio1GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeportfolio1GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFOLIO1_API UClass* Z_Construct_UClass_Aportfolio1GameMode();
PORTFOLIO1_API UClass* Z_Construct_UClass_Aportfolio1GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class Aportfolio1GameMode
void Aportfolio1GameMode::StaticRegisterNativesAportfolio1GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aportfolio1GameMode);
UClass* Z_Construct_UClass_Aportfolio1GameMode_NoRegister()
{
	return Aportfolio1GameMode::StaticClass();
}
struct Z_Construct_UClass_Aportfolio1GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "portfolio1GameMode.h" },
		{ "ModuleRelativePath", "portfolio1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aportfolio1GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aportfolio1GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aportfolio1GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aportfolio1GameMode_Statics::ClassParams = {
	&Aportfolio1GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aportfolio1GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aportfolio1GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aportfolio1GameMode()
{
	if (!Z_Registration_Info_UClass_Aportfolio1GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aportfolio1GameMode.OuterSingleton, Z_Construct_UClass_Aportfolio1GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aportfolio1GameMode.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<Aportfolio1GameMode>()
{
	return Aportfolio1GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aportfolio1GameMode);
Aportfolio1GameMode::~Aportfolio1GameMode() {}
// End Class Aportfolio1GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_portfolio1GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aportfolio1GameMode, Aportfolio1GameMode::StaticClass, TEXT("Aportfolio1GameMode"), &Z_Registration_Info_UClass_Aportfolio1GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aportfolio1GameMode), 482367430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_portfolio1GameMode_h_3200777608(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_portfolio1GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_portfolio1GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
