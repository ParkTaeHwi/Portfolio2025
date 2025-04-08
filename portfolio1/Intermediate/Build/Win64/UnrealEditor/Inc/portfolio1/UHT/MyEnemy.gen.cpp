// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyEnemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyCharacter();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyEnemy();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_AMyItem_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class AMyEnemy
void AMyEnemy::StaticRegisterNativesAMyEnemy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyEnemy);
UClass* Z_Construct_UClass_AMyEnemy_NoRegister()
{
	return AMyEnemy::StaticClass();
}
struct Z_Construct_UClass_AMyEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyEnemy.h" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemToDrop_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__hpBarWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp__expToGive_MetaData[] = {
		{ "Category", "Reward" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemToDrop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp__hpBarWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp__expToGive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEnemy, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTreeAsset_MetaData), NewProp_BehaviorTreeAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp_ItemToDrop = { "ItemToDrop", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEnemy, ItemToDrop), Z_Construct_UClass_UClass, Z_Construct_UClass_AMyItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemToDrop_MetaData), NewProp_ItemToDrop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp__hpBarWidget = { "_hpBarWidget", nullptr, (EPropertyFlags)0x004000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEnemy, _hpBarWidget), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__hpBarWidget_MetaData), NewProp__hpBarWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp__expToGive = { "_expToGive", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyEnemy, _expToGive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp__expToGive_MetaData), NewProp__expToGive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp_BehaviorTreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp_ItemToDrop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp__hpBarWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp__expToGive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AMyCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemy_Statics::ClassParams = {
	&AMyEnemy::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyEnemy()
{
	if (!Z_Registration_Info_UClass_AMyEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyEnemy.OuterSingleton, Z_Construct_UClass_AMyEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyEnemy.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<AMyEnemy>()
{
	return AMyEnemy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemy);
AMyEnemy::~AMyEnemy() {}
// End Class AMyEnemy

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyEnemy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyEnemy, AMyEnemy::StaticClass, TEXT("AMyEnemy"), &Z_Registration_Info_UClass_AMyEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyEnemy), 4069507804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyEnemy_h_1738970585(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyEnemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyEnemy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
