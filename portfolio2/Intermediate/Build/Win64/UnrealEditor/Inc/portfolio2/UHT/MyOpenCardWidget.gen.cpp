// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyOpenCardWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyOpenCardWidget() {}

// Begin Cross Module References
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyCardPack_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyOpenCardWidget();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyOpenCardWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class UMyOpenCardWidget Function CardOpen
struct Z_Construct_UFunction_UMyOpenCardWidget_CardOpen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyOpenCardWidget_CardOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyOpenCardWidget, nullptr, "CardOpen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_CardOpen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyOpenCardWidget_CardOpen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyOpenCardWidget_CardOpen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyOpenCardWidget_CardOpen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyOpenCardWidget::execCardOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CardOpen();
	P_NATIVE_END;
}
// End Class UMyOpenCardWidget Function CardOpen

// Begin Class UMyOpenCardWidget Function CloseWidget
struct Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xb0 \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xc5\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc8\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xb0 \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xc5\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyOpenCardWidget, nullptr, "CloseWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyOpenCardWidget::execCloseWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseWidget();
	P_NATIVE_END;
}
// End Class UMyOpenCardWidget Function CloseWidget

// Begin Class UMyOpenCardWidget Function InitCardInfo
struct Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics
{
	struct MyOpenCardWidget_eventInitCardInfo_Parms
	{
		TArray<FString> Cards;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc4\xab\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xc6\xbc\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xc6\xbc\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyOpenCardWidget_eventInitCardInfo_Parms, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::NewProp_Cards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyOpenCardWidget, nullptr, "InitCardInfo", nullptr, nullptr, Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::MyOpenCardWidget_eventInitCardInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::MyOpenCardWidget_eventInitCardInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyOpenCardWidget::execInitCardInfo)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_Cards);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitCardInfo(Z_Param_Out_Cards);
	P_NATIVE_END;
}
// End Class UMyOpenCardWidget Function InitCardInfo

// Begin Class UMyOpenCardWidget Function IsJewelEnough
struct Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics
{
	struct MyOpenCardWidget_eventIsJewelEnough_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Jewel" },
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MyOpenCardWidget_eventIsJewelEnough_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MyOpenCardWidget_eventIsJewelEnough_Parms), &Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyOpenCardWidget, nullptr, "IsJewelEnough", nullptr, nullptr, Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::MyOpenCardWidget_eventIsJewelEnough_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::MyOpenCardWidget_eventIsJewelEnough_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyOpenCardWidget::execIsJewelEnough)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsJewelEnough();
	P_NATIVE_END;
}
// End Class UMyOpenCardWidget Function IsJewelEnough

// Begin Class UMyOpenCardWidget Function spendJewel
struct Z_Construct_UFunction_UMyOpenCardWidget_spendJewel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyOpenCardWidget_spendJewel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyOpenCardWidget, nullptr, "spendJewel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_spendJewel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyOpenCardWidget_spendJewel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyOpenCardWidget_spendJewel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyOpenCardWidget_spendJewel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyOpenCardWidget::execspendJewel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->spendJewel();
	P_NATIVE_END;
}
// End Class UMyOpenCardWidget Function spendJewel

// Begin Class UMyOpenCardWidget Function UpdateJewelText
struct MyOpenCardWidget_eventUpdateJewelText_Parms
{
	int32 NewJewel;
};
static FName NAME_UMyOpenCardWidget_UpdateJewelText = FName(TEXT("UpdateJewelText"));
void UMyOpenCardWidget::UpdateJewelText(int32 NewJewel)
{
	MyOpenCardWidget_eventUpdateJewelText_Parms Parms;
	Parms.NewJewel=NewJewel;
	ProcessEvent(FindFunctionChecked(NAME_UMyOpenCardWidget_UpdateJewelText),&Parms);
}
struct Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewJewel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::NewProp_NewJewel = { "NewJewel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyOpenCardWidget_eventUpdateJewelText_Parms, NewJewel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::NewProp_NewJewel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyOpenCardWidget, nullptr, "UpdateJewelText", nullptr, nullptr, Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::PropPointers), sizeof(MyOpenCardWidget_eventUpdateJewelText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::Function_MetaDataParams) };
static_assert(sizeof(MyOpenCardWidget_eventUpdateJewelText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMyOpenCardWidget Function UpdateJewelText

// Begin Class UMyOpenCardWidget
void UMyOpenCardWidget::StaticRegisterNativesUMyOpenCardWidget()
{
	UClass* Class = UMyOpenCardWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CardOpen", &UMyOpenCardWidget::execCardOpen },
		{ "CloseWidget", &UMyOpenCardWidget::execCloseWidget },
		{ "InitCardInfo", &UMyOpenCardWidget::execInitCardInfo },
		{ "IsJewelEnough", &UMyOpenCardWidget::execIsJewelEnough },
		{ "spendJewel", &UMyOpenCardWidget::execspendJewel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyOpenCardWidget);
UClass* Z_Construct_UClass_UMyOpenCardWidget_NoRegister()
{
	return UMyOpenCardWidget::StaticClass();
}
struct Z_Construct_UClass_UMyOpenCardWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n */" },
#endif
		{ "IncludePath", "MyOpenCardWidget.h" },
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xab\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCardPack_MetaData[] = {
		{ "ModuleRelativePath", "MyOpenCardWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCardPack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyOpenCardWidget_CardOpen, "CardOpen" }, // 3044969769
		{ &Z_Construct_UFunction_UMyOpenCardWidget_CloseWidget, "CloseWidget" }, // 1039650597
		{ &Z_Construct_UFunction_UMyOpenCardWidget_InitCardInfo, "InitCardInfo" }, // 2319869796
		{ &Z_Construct_UFunction_UMyOpenCardWidget_IsJewelEnough, "IsJewelEnough" }, // 4067111282
		{ &Z_Construct_UFunction_UMyOpenCardWidget_spendJewel, "spendJewel" }, // 4203260385
		{ &Z_Construct_UFunction_UMyOpenCardWidget_UpdateJewelText, "UpdateJewelText" }, // 40222885
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyOpenCardWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyOpenCardWidget_Statics::NewProp_OwnerCardPack = { "OwnerCardPack", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyOpenCardWidget, OwnerCardPack), Z_Construct_UClass_AMyCardPack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerCardPack_MetaData), NewProp_OwnerCardPack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyOpenCardWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyOpenCardWidget_Statics::NewProp_OwnerCardPack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOpenCardWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyOpenCardWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOpenCardWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyOpenCardWidget_Statics::ClassParams = {
	&UMyOpenCardWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyOpenCardWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyOpenCardWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyOpenCardWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyOpenCardWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyOpenCardWidget()
{
	if (!Z_Registration_Info_UClass_UMyOpenCardWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyOpenCardWidget.OuterSingleton, Z_Construct_UClass_UMyOpenCardWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyOpenCardWidget.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<UMyOpenCardWidget>()
{
	return UMyOpenCardWidget::StaticClass();
}
UMyOpenCardWidget::UMyOpenCardWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyOpenCardWidget);
UMyOpenCardWidget::~UMyOpenCardWidget() {}
// End Class UMyOpenCardWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyOpenCardWidget, UMyOpenCardWidget::StaticClass, TEXT("UMyOpenCardWidget"), &Z_Registration_Info_UClass_UMyOpenCardWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyOpenCardWidget), 2571446009U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_2888257167(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyOpenCardWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
