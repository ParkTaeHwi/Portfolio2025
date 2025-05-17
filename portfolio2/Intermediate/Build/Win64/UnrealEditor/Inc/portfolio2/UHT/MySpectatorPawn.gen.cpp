// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MySpectatorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMySpectatorPawn() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMySpectatorPawn();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMySpectatorPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMySpectatorPawn
void AMySpectatorPawn::StaticRegisterNativesAMySpectatorPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMySpectatorPawn);
UClass* Z_Construct_UClass_AMySpectatorPawn_NoRegister()
{
	return AMySpectatorPawn::StaticClass();
}
struct Z_Construct_UClass_AMySpectatorPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MySpectatorPawn.h" },
		{ "ModuleRelativePath", "MySpectatorPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraLocation_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "MySpectatorPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraRotation_MetaData[] = {
		{ "Category", "Camera Settings" },
		{ "ModuleRelativePath", "MySpectatorPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCameraLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCameraRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMySpectatorPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMySpectatorPawn_Statics::NewProp_DefaultCameraLocation = { "DefaultCameraLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySpectatorPawn, DefaultCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraLocation_MetaData), NewProp_DefaultCameraLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMySpectatorPawn_Statics::NewProp_DefaultCameraRotation = { "DefaultCameraRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMySpectatorPawn, DefaultCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraRotation_MetaData), NewProp_DefaultCameraRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMySpectatorPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySpectatorPawn_Statics::NewProp_DefaultCameraLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMySpectatorPawn_Statics::NewProp_DefaultCameraRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMySpectatorPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASpectatorPawn,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMySpectatorPawn_Statics::ClassParams = {
	&AMySpectatorPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMySpectatorPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMySpectatorPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMySpectatorPawn()
{
	if (!Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton, Z_Construct_UClass_AMySpectatorPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMySpectatorPawn.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMySpectatorPawn>()
{
	return AMySpectatorPawn::StaticClass();
}
AMySpectatorPawn::AMySpectatorPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMySpectatorPawn);
AMySpectatorPawn::~AMySpectatorPawn() {}
// End Class AMySpectatorPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMySpectatorPawn, AMySpectatorPawn::StaticClass, TEXT("AMySpectatorPawn"), &Z_Registration_Info_UClass_AMySpectatorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMySpectatorPawn), 352073718U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_3831786767(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MySpectatorPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
