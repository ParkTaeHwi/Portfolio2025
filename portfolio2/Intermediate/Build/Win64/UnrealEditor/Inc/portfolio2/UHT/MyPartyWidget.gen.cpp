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

// Begin Class UMyPartyWidget Function BtoB
struct Z_Construct_UFunction_UMyPartyWidget_BtoB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_BtoB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "BtoB", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_BtoB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_BtoB_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_BtoB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_BtoB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execBtoB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BtoB();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function BtoB

// Begin Class UMyPartyWidget Function BtoW
struct Z_Construct_UFunction_UMyPartyWidget_BtoW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_BtoW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "BtoW", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_BtoW_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_BtoW_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_BtoW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_BtoW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execBtoW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BtoW();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function BtoW

// Begin Class UMyPartyWidget Function BtoY
struct Z_Construct_UFunction_UMyPartyWidget_BtoY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_BtoY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "BtoY", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_BtoY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_BtoY_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_BtoY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_BtoY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execBtoY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BtoY();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function BtoY

// Begin Class UMyPartyWidget Function MtoB
struct Z_Construct_UFunction_UMyPartyWidget_MtoB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_MtoB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "MtoB", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_MtoB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_MtoB_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_MtoB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_MtoB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execMtoB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MtoB();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function MtoB

// Begin Class UMyPartyWidget Function MtoW
struct Z_Construct_UFunction_UMyPartyWidget_MtoW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_MtoW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "MtoW", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_MtoW_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_MtoW_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_MtoW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_MtoW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execMtoW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MtoW();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function MtoW

// Begin Class UMyPartyWidget Function MtoY
struct Z_Construct_UFunction_UMyPartyWidget_MtoY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_MtoY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "MtoY", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_MtoY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_MtoY_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_MtoY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_MtoY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execMtoY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MtoY();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function MtoY

// Begin Class UMyPartyWidget Function TtoB
struct Z_Construct_UFunction_UMyPartyWidget_TtoB_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_TtoB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "TtoB", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_TtoB_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_TtoB_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_TtoB()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_TtoB_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execTtoB)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TtoB();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function TtoB

// Begin Class UMyPartyWidget Function TtoW
struct Z_Construct_UFunction_UMyPartyWidget_TtoW_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_TtoW_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "TtoW", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_TtoW_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_TtoW_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_TtoW()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_TtoW_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execTtoW)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TtoW();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function TtoW

// Begin Class UMyPartyWidget Function TtoY
struct Z_Construct_UFunction_UMyPartyWidget_TtoY_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_TtoY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "TtoY", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_TtoY_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_TtoY_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_TtoY()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_TtoY_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execTtoY)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TtoY();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function TtoY

// Begin Class UMyPartyWidget Function XReturn
struct Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics
{
	struct MyPartyWidget_eventXReturn_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPartyWidget_eventXReturn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "XReturn", nullptr, nullptr, Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::MyPartyWidget_eventXReturn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::MyPartyWidget_eventXReturn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyPartyWidget_XReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_XReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execXReturn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->XReturn();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function XReturn

// Begin Class UMyPartyWidget Function XSetTo1
struct Z_Construct_UFunction_UMyPartyWidget_XSetTo1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_XSetTo1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "XSetTo1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_XSetTo1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_XSetTo1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_XSetTo1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_XSetTo1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execXSetTo1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->XSetTo1();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function XSetTo1

// Begin Class UMyPartyWidget Function XSetTo2
struct Z_Construct_UFunction_UMyPartyWidget_XSetTo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_XSetTo2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "XSetTo2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_XSetTo2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_XSetTo2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_XSetTo2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_XSetTo2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execXSetTo2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->XSetTo2();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function XSetTo2

// Begin Class UMyPartyWidget Function XSetTo3
struct Z_Construct_UFunction_UMyPartyWidget_XSetTo3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_XSetTo3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "XSetTo3", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_XSetTo3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_XSetTo3_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_XSetTo3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_XSetTo3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execXSetTo3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->XSetTo3();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function XSetTo3

// Begin Class UMyPartyWidget Function YReturn
struct Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics
{
	struct MyPartyWidget_eventYReturn_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPartyWidget_eventYReturn_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "YReturn", nullptr, nullptr, Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::MyPartyWidget_eventYReturn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::MyPartyWidget_eventYReturn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyPartyWidget_YReturn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_YReturn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execYReturn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->YReturn();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function YReturn

// Begin Class UMyPartyWidget Function YSetTo1
struct Z_Construct_UFunction_UMyPartyWidget_YSetTo1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_YSetTo1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "YSetTo1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_YSetTo1_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_YSetTo1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_YSetTo1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_YSetTo1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execYSetTo1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->YSetTo1();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function YSetTo1

// Begin Class UMyPartyWidget Function YSetTo2
struct Z_Construct_UFunction_UMyPartyWidget_YSetTo2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_YSetTo2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "YSetTo2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_YSetTo2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_YSetTo2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_YSetTo2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_YSetTo2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execYSetTo2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->YSetTo2();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function YSetTo2

// Begin Class UMyPartyWidget Function YSetTo3
struct Z_Construct_UFunction_UMyPartyWidget_YSetTo3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyPartyWidget_YSetTo3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyPartyWidget, nullptr, "YSetTo3", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyPartyWidget_YSetTo3_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyPartyWidget_YSetTo3_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMyPartyWidget_YSetTo3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyPartyWidget_YSetTo3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyPartyWidget::execYSetTo3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->YSetTo3();
	P_NATIVE_END;
}
// End Class UMyPartyWidget Function YSetTo3

// Begin Class UMyPartyWidget
void UMyPartyWidget::StaticRegisterNativesUMyPartyWidget()
{
	UClass* Class = UMyPartyWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "bBWorNot", &UMyPartyWidget::execbBWorNot },
		{ "BtoB", &UMyPartyWidget::execBtoB },
		{ "BtoW", &UMyPartyWidget::execBtoW },
		{ "BtoY", &UMyPartyWidget::execBtoY },
		{ "MtoB", &UMyPartyWidget::execMtoB },
		{ "MtoW", &UMyPartyWidget::execMtoW },
		{ "MtoY", &UMyPartyWidget::execMtoY },
		{ "TtoB", &UMyPartyWidget::execTtoB },
		{ "TtoW", &UMyPartyWidget::execTtoW },
		{ "TtoY", &UMyPartyWidget::execTtoY },
		{ "XReturn", &UMyPartyWidget::execXReturn },
		{ "XSetTo1", &UMyPartyWidget::execXSetTo1 },
		{ "XSetTo2", &UMyPartyWidget::execXSetTo2 },
		{ "XSetTo3", &UMyPartyWidget::execXSetTo3 },
		{ "YReturn", &UMyPartyWidget::execYReturn },
		{ "YSetTo1", &UMyPartyWidget::execYSetTo1 },
		{ "YSetTo2", &UMyPartyWidget::execYSetTo2 },
		{ "YSetTo3", &UMyPartyWidget::execYSetTo3 },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopLane_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyPartyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MidLane_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyPartyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BottomLane_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MyPartyWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "Category", "MyCategory" },
		{ "ModuleRelativePath", "MyPartyWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyImage0;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyImage1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PartyImage2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MidLane;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BottomLane;
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyPartyWidget_bBWorNot, "bBWorNot" }, // 269442510
		{ &Z_Construct_UFunction_UMyPartyWidget_BtoB, "BtoB" }, // 3403215200
		{ &Z_Construct_UFunction_UMyPartyWidget_BtoW, "BtoW" }, // 2264713527
		{ &Z_Construct_UFunction_UMyPartyWidget_BtoY, "BtoY" }, // 2810834805
		{ &Z_Construct_UFunction_UMyPartyWidget_MtoB, "MtoB" }, // 1308685475
		{ &Z_Construct_UFunction_UMyPartyWidget_MtoW, "MtoW" }, // 1288834184
		{ &Z_Construct_UFunction_UMyPartyWidget_MtoY, "MtoY" }, // 531356301
		{ &Z_Construct_UFunction_UMyPartyWidget_TtoB, "TtoB" }, // 747153583
		{ &Z_Construct_UFunction_UMyPartyWidget_TtoW, "TtoW" }, // 1539466664
		{ &Z_Construct_UFunction_UMyPartyWidget_TtoY, "TtoY" }, // 3580053958
		{ &Z_Construct_UFunction_UMyPartyWidget_XReturn, "XReturn" }, // 1447817895
		{ &Z_Construct_UFunction_UMyPartyWidget_XSetTo1, "XSetTo1" }, // 2369751688
		{ &Z_Construct_UFunction_UMyPartyWidget_XSetTo2, "XSetTo2" }, // 2785848935
		{ &Z_Construct_UFunction_UMyPartyWidget_XSetTo3, "XSetTo3" }, // 2150495339
		{ &Z_Construct_UFunction_UMyPartyWidget_YReturn, "YReturn" }, // 13931896
		{ &Z_Construct_UFunction_UMyPartyWidget_YSetTo1, "YSetTo1" }, // 575901362
		{ &Z_Construct_UFunction_UMyPartyWidget_YSetTo2, "YSetTo2" }, // 3528304100
		{ &Z_Construct_UFunction_UMyPartyWidget_YSetTo3, "YSetTo3" }, // 3465534480
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_TopLane = { "TopLane", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, TopLane), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopLane_MetaData), NewProp_TopLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_MidLane = { "MidLane", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, MidLane), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MidLane_MetaData), NewProp_MidLane_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_BottomLane = { "BottomLane", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, BottomLane), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BottomLane_MetaData), NewProp_BottomLane_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyPartyWidget, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPartyWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_PartyImage2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_TopLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_MidLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_BottomLane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPartyWidget_Statics::NewProp_Y,
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
		{ Z_Construct_UClass_UMyPartyWidget, UMyPartyWidget::StaticClass, TEXT("UMyPartyWidget"), &Z_Registration_Info_UClass_UMyPartyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPartyWidget), 2445275828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_3169862520(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPartyWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
