// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio1/MyButton.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyButton() {}

// Begin Cross Module References
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyButton();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyButton_NoRegister();
PORTFOLIO1_API UClass* Z_Construct_UClass_UMyInvenUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton();
UPackage* Z_Construct_UPackage__Script_portfolio1();
// End Cross Module References

// Begin Class UMyButton Function SetCurIndex
struct Z_Construct_UFunction_UMyButton_SetCurIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyButton_SetCurIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyButton, nullptr, "SetCurIndex", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyButton_SetCurIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyButton_SetCurIndex_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyButton_SetCurIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyButton_SetCurIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyButton::execSetCurIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurIndex();
	P_NATIVE_END;
}
// End Class UMyButton Function SetCurIndex

// Begin Class UMyButton
void UMyButton::StaticRegisterNativesUMyButton()
{
	UClass* Class = UMyButton::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCurIndex", &UMyButton::execSetCurIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyButton);
UClass* Z_Construct_UClass_UMyButton_NoRegister()
{
	return UMyButton::StaticClass();
}
struct Z_Construct_UClass_UMyButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyButton.h" },
		{ "ModuleRelativePath", "MyButton.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "Category", "MyButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyButton.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyButton_SetCurIndex, "SetCurIndex" }, // 2730070815
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyButton>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyButton_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyButton, widget), Z_Construct_UClass_UMyInvenUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyButton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyButton_Statics::NewProp_widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyButton_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyButton_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UButton,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyButton_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyButton_Statics::ClassParams = {
	&UMyButton::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyButton_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyButton_Statics::PropPointers),
	0,
	0x00B000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyButton_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyButton_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyButton()
{
	if (!Z_Registration_Info_UClass_UMyButton.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyButton.OuterSingleton, Z_Construct_UClass_UMyButton_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyButton.OuterSingleton;
}
template<> PORTFOLIO1_API UClass* StaticClass<UMyButton>()
{
	return UMyButton::StaticClass();
}
UMyButton::UMyButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyButton);
UMyButton::~UMyButton() {}
// End Class UMyButton

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyButton, UMyButton::StaticClass, TEXT("UMyButton"), &Z_Registration_Info_UClass_UMyButton, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyButton), 4276988983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_3407675734(TEXT("/Script/portfolio1"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio1_Source_portfolio1_MyButton_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
