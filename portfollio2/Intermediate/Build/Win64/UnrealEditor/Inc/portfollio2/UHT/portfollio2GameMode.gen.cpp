// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfollio2/portfollio2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeportfollio2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PORTFOLLIO2_API UClass* Z_Construct_UClass_Aportfollio2GameMode();
PORTFOLLIO2_API UClass* Z_Construct_UClass_Aportfollio2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfollio2();
// End Cross Module References

// Begin Class Aportfollio2GameMode
void Aportfollio2GameMode::StaticRegisterNativesAportfollio2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aportfollio2GameMode);
UClass* Z_Construct_UClass_Aportfollio2GameMode_NoRegister()
{
	return Aportfollio2GameMode::StaticClass();
}
struct Z_Construct_UClass_Aportfollio2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "portfollio2GameMode.h" },
		{ "ModuleRelativePath", "portfollio2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aportfollio2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_Aportfollio2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfollio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aportfollio2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_Aportfollio2GameMode_Statics::ClassParams = {
	&Aportfollio2GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aportfollio2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aportfollio2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_Aportfollio2GameMode()
{
	if (!Z_Registration_Info_UClass_Aportfollio2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aportfollio2GameMode.OuterSingleton, Z_Construct_UClass_Aportfollio2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_Aportfollio2GameMode.OuterSingleton;
}
template<> PORTFOLLIO2_API UClass* StaticClass<Aportfollio2GameMode>()
{
	return Aportfollio2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(Aportfollio2GameMode);
Aportfollio2GameMode::~Aportfollio2GameMode() {}
// End Class Aportfollio2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfollio2_Source_portfollio2_portfollio2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_Aportfollio2GameMode, Aportfollio2GameMode::StaticClass, TEXT("Aportfollio2GameMode"), &Z_Registration_Info_UClass_Aportfollio2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aportfollio2GameMode), 1041835299U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfollio2_Source_portfollio2_portfollio2GameMode_h_2564204338(TEXT("/Script/portfollio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfollio2_Source_portfollio2_portfollio2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfollio2_Source_portfollio2_portfollio2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
