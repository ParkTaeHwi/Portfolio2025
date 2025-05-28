// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyJewelWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyJewelWidget() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyJewelWidget();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyJewelWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyJewelWidget Function addJewel
struct Z_Construct_UFunction_UMyJewelWidget_addJewel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// gameinstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb0\xdc\xbc\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd beginplay\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb1\xef\xbf\xbd?\n" },
#endif
		{ "ModuleRelativePath", "MyJewelWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "gameinstance\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb0\xdc\xbc\xef\xbf\xbd \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd beginplay\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb1\xef\xbf\xbd?" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJewelWidget_addJewel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJewelWidget, nullptr, "addJewel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJewelWidget_addJewel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyJewelWidget_addJewel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyJewelWidget_addJewel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJewelWidget_addJewel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyJewelWidget::execaddJewel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->addJewel();
	P_NATIVE_END;
}
// End Class UMyJewelWidget Function addJewel

// Begin Class UMyJewelWidget Function spendJewel
struct Z_Construct_UFunction_UMyJewelWidget_spendJewel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyJewelWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJewelWidget_spendJewel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJewelWidget, nullptr, "spendJewel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJewelWidget_spendJewel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyJewelWidget_spendJewel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyJewelWidget_spendJewel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJewelWidget_spendJewel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyJewelWidget::execspendJewel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->spendJewel();
	P_NATIVE_END;
}
// End Class UMyJewelWidget Function spendJewel

// Begin Class UMyJewelWidget Function UpdateJewelText
struct MyJewelWidget_eventUpdateJewelText_Parms
{
	int32 NewJewel;
};
static FName NAME_UMyJewelWidget_UpdateJewelText = FName(TEXT("UpdateJewelText"));
void UMyJewelWidget::UpdateJewelText(int32 NewJewel)
{
	MyJewelWidget_eventUpdateJewelText_Parms Parms;
	Parms.NewJewel=NewJewel;
	ProcessEvent(FindFunctionChecked(NAME_UMyJewelWidget_UpdateJewelText),&Parms);
}
struct Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyJewelWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewJewel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::NewProp_NewJewel = { "NewJewel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyJewelWidget_eventUpdateJewelText_Parms, NewJewel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::NewProp_NewJewel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyJewelWidget, nullptr, "UpdateJewelText", nullptr, nullptr, Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::PropPointers), sizeof(MyJewelWidget_eventUpdateJewelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyJewelWidget_eventUpdateJewelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMyJewelWidget Function UpdateJewelText

// Begin Class UMyJewelWidget
void UMyJewelWidget::StaticRegisterNativesUMyJewelWidget()
{
	UClass* Class = UMyJewelWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "addJewel", &UMyJewelWidget::execaddJewel },
		{ "spendJewel", &UMyJewelWidget::execspendJewel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyJewelWidget);
UClass* Z_Construct_UClass_UMyJewelWidget_NoRegister()
{
	return UMyJewelWidget::StaticClass();
}
struct Z_Construct_UClass_UMyJewelWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyJewelWidget.h" },
		{ "ModuleRelativePath", "MyJewelWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyJewelWidget_addJewel, "addJewel" }, // 1076742252
		{ &Z_Construct_UFunction_UMyJewelWidget_spendJewel, "spendJewel" }, // 887412482
		{ &Z_Construct_UFunction_UMyJewelWidget_UpdateJewelText, "UpdateJewelText" }, // 3570337002
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyJewelWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyJewelWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyJewelWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyJewelWidget_Statics::ClassParams = {
	&UMyJewelWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyJewelWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyJewelWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyJewelWidget()
{
	if (!Z_Registration_Info_UClass_UMyJewelWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyJewelWidget.OuterSingleton, Z_Construct_UClass_UMyJewelWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyJewelWidget.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyJewelWidget>()
{
	return UMyJewelWidget::StaticClass();
}
UMyJewelWidget::UMyJewelWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyJewelWidget);
UMyJewelWidget::~UMyJewelWidget() {}
// End Class UMyJewelWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyJewelWidget, UMyJewelWidget::StaticClass, TEXT("UMyJewelWidget"), &Z_Registration_Info_UClass_UMyJewelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyJewelWidget), 2566936935U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_707931327(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyJewelWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
