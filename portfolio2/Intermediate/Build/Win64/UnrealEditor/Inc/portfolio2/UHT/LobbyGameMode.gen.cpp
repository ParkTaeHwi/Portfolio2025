// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/LobbyGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLobbyGameMode() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_ALobbyGameMode();
PORTFOLIO2_API UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyGameModeBase();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class ALobbyGameMode
void ALobbyGameMode::StaticRegisterNativesALobbyGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALobbyGameMode);
UClass* Z_Construct_UClass_ALobbyGameMode_NoRegister()
{
	return ALobbyGameMode::StaticClass();
}
struct Z_Construct_UClass_ALobbyGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LobbyGameMode.h" },
		{ "ModuleRelativePath", "LobbyGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALobbyGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams = {
	&ALobbyGameMode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALobbyGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALobbyGameMode()
{
	if (!Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton, Z_Construct_UClass_ALobbyGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALobbyGameMode.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<ALobbyGameMode>()
{
	return ALobbyGameMode::StaticClass();
}
ALobbyGameMode::ALobbyGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALobbyGameMode);
ALobbyGameMode::~ALobbyGameMode() {}
// End Class ALobbyGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_LobbyGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALobbyGameMode, ALobbyGameMode::StaticClass, TEXT("ALobbyGameMode"), &Z_Registration_Info_UClass_ALobbyGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALobbyGameMode), 784797279U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_LobbyGameMode_h_506626117(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_LobbyGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_LobbyGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
