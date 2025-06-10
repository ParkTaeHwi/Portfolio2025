// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyPartyWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPartyWidget() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyPartyWidget();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyPartyWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyPartyWidget Function bBWorNot
struct Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics
{
	struct MyPartyWidget_eventbBWorNot_Parms
	{
		UImage* TargetImage;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetImage_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetImage;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::NewProp_TargetImage = { "TargetImage", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPartyWidget_eventbBWorNot_Parms, TargetImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetImage_MetaData), NewProp_TargetImage_MetaData) };
void Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyPartyWidget_eventbBWorNot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyPartyWidget_eventbBWorNot_Parms), &Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::NewProp_TargetImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "bBWorNot", nullptr, nullptr, Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::MyPartyWidget_eventbBWorNot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::MyPartyWidget_eventbBWorNot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyPartyWidget_bBWorNot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_bBWorNot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execbBWorNot)
{
	P_GET_OBJECT(UImage,Z_Param_TargetImage);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->bBWorNot(Z_Param_TargetImage);
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function bBWorNot

// Begin Class UMyPartyWidget
void UMyPartyWidget::StaticRegisterNativesUMyPartyWidget()
{
	UClass* Class = UMyPartyWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "bBWorNot", &UMyPartyWidget::execbBWorNot },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPartyWidget);
UClass* Z_Construct_UClass_UMyPartyWidget_NoRegister()
{
	return UMyPartyWidget::StaticClass();
}
struct Z_Construct_UClass_UMyPartyWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyPartyWidget.h" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyImage0_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyPartyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyImage1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyPartyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartyImage2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyPartyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyImage0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyImage1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyImage2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyPartyWidget_bBWorNot, "bBWorNot" }, // 269442510
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPartyWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage0 = { "PartyImage0", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, PartyImage0), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyImage0_MetaData), NewProp_PartyImage0_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage1 = { "PartyImage1", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, PartyImage1), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyImage1_MetaData), NewProp_PartyImage1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage2 = { "PartyImage2", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, PartyImage2), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartyImage2_MetaData), NewProp_PartyImage2_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPartyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPartyWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyPartyWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPartyWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPartyWidget_Statics::ClassParams = {
	&UMyPartyWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyPartyWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyPartyWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyPartyWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyPartyWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyPartyWidget()
{
	if (!Z_Registration_Info_UClass_UMyPartyWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPartyWidget.OuterSingleton, Z_Construct_UClass_UMyPartyWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyPartyWidget.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyPartyWidget>()
{
	return UMyPartyWidget::StaticClass();
}
UMyPartyWidget::UMyPartyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPartyWidget);
UMyPartyWidget::~UMyPartyWidget() {}
// End Class UMyPartyWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyPartyWidget, UMyPartyWidget::StaticClass, TEXT("UMyPartyWidget"), &Z_Registration_Info_UClass_UMyPartyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPartyWidget), 2996693181U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_3424936488(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
