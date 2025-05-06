// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyStatComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyStatComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyStatComponent();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyStatComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyStatComponent
void UMyStatComponent::StaticRegisterNativesUMyStatComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyStatComponent);
UClass* Z_Construct_UClass_UMyStatComponent_NoRegister()
{
	return UMyStatComponent::StaticClass();
}
struct Z_Construct_UClass_UMyStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MyStatComponent.h" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__curHp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__maxHp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__atk_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "MyStatComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
	static const UECodeGen_Private::FIntPropertyParams NewProp__level;
	static const UECodeGen_Private::FIntPropertyParams NewProp__curHp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__maxHp;
	static const UECodeGen_Private::FIntPropertyParams NewProp__atk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__speed_MetaData), NewProp__speed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__level = { "_level", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__level_MetaData), NewProp__level_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__curHp = { "_curHp", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _curHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__curHp_MetaData), NewProp__curHp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__maxHp = { "_maxHp", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _maxHp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__maxHp_MetaData), NewProp__maxHp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyStatComponent_Statics::NewProp__atk = { "_atk", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyStatComponent, _atk), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__atk_MetaData), NewProp__atk_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__curHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__maxHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyStatComponent_Statics::NewProp__atk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyStatComponent_Statics::ClassParams = {
	&UMyStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMyStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyStatComponent()
{
	if (!Z_Registration_Info_UClass_UMyStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyStatComponent.OuterSingleton, Z_Construct_UClass_UMyStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyStatComponent.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyStatComponent>()
{
	return UMyStatComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyStatComponent);
UMyStatComponent::~UMyStatComponent() {}
// End Class UMyStatComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyStatComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyStatComponent, UMyStatComponent::StaticClass, TEXT("UMyStatComponent"), &Z_Registration_Info_UClass_UMyStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyStatComponent), 1690280787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyStatComponent_h_253898834(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyStatComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyStatComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
