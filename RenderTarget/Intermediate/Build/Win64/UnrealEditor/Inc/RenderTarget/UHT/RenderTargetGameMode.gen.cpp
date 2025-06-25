// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderTarget/RenderTargetGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderTargetGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
RENDERTARGET_API UClass* Z_Construct_UClass_ARenderTargetGameMode();
RENDERTARGET_API UClass* Z_Construct_UClass_ARenderTargetGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_RenderTarget();
// End Cross Module References

// Begin Class ARenderTargetGameMode
void ARenderTargetGameMode::StaticRegisterNativesARenderTargetGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARenderTargetGameMode);
UClass* Z_Construct_UClass_ARenderTargetGameMode_NoRegister()
{
	return ARenderTargetGameMode::StaticClass();
}
struct Z_Construct_UClass_ARenderTargetGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RenderTargetGameMode.h" },
		{ "ModuleRelativePath", "RenderTargetGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARenderTargetGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ARenderTargetGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RenderTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARenderTargetGameMode_Statics::ClassParams = {
	&ARenderTargetGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARenderTargetGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ARenderTargetGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARenderTargetGameMode()
{
	if (!Z_Registration_Info_UClass_ARenderTargetGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARenderTargetGameMode.OuterSingleton, Z_Construct_UClass_ARenderTargetGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARenderTargetGameMode.OuterSingleton;
}
template<> RENDERTARGET_API UClass* StaticClass<ARenderTargetGameMode>()
{
	return ARenderTargetGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARenderTargetGameMode);
ARenderTargetGameMode::~ARenderTargetGameMode() {}
// End Class ARenderTargetGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_RenderTarget_Source_RenderTarget_RenderTargetGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARenderTargetGameMode, ARenderTargetGameMode::StaticClass, TEXT("ARenderTargetGameMode"), &Z_Registration_Info_UClass_ARenderTargetGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARenderTargetGameMode), 3455099545U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_RenderTarget_Source_RenderTarget_RenderTargetGameMode_h_3983755768(TEXT("/Script/RenderTarget"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_RenderTarget_Source_RenderTarget_RenderTargetGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_RenderTarget_Source_RenderTarget_RenderTargetGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
