// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "portfolio2/MyPlayableSummon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPlayableSummon() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyPlayableSummon();
PORTFOLIO2_API UClass* Z_Construct_UClass_AMyPlayableSummon_NoRegister();
PORTFOLIO2_API UClass* Z_Construct_UClass_UMyBattleFieldWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_portfolio2();
// End Cross Module References

// Begin Class AMyPlayableSummon Function GetControl1
struct Z_Construct_UFunction_AMyPlayableSummon_GetControl1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayableSummon_GetControl1_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayableSummon, nullptr, "GetControl1", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayableSummon_GetControl1_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayableSummon_GetControl1_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPlayableSummon_GetControl1()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayableSummon_GetControl1_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayableSummon::execGetControl1)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetControl1();
	P_NATIVE_END;
}
// End Class AMyPlayableSummon Function GetControl1

// Begin Class AMyPlayableSummon Function GetControl2
struct Z_Construct_UFunction_AMyPlayableSummon_GetControl2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayableSummon_GetControl2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayableSummon, nullptr, "GetControl2", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayableSummon_GetControl2_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayableSummon_GetControl2_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPlayableSummon_GetControl2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayableSummon_GetControl2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayableSummon::execGetControl2)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetControl2();
	P_NATIVE_END;
}
// End Class AMyPlayableSummon Function GetControl2

// Begin Class AMyPlayableSummon Function GetControl3
struct Z_Construct_UFunction_AMyPlayableSummon_GetControl3_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayableSummon_GetControl3_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPlayableSummon, nullptr, "GetControl3", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayableSummon_GetControl3_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayableSummon_GetControl3_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AMyPlayableSummon_GetControl3()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayableSummon_GetControl3_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayableSummon::execGetControl3)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetControl3();
	P_NATIVE_END;
}
// End Class AMyPlayableSummon Function GetControl3

// Begin Class AMyPlayableSummon
void AMyPlayableSummon::StaticRegisterNativesAMyPlayableSummon()
{
	UClass* Class = AMyPlayableSummon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetControl1", &AMyPlayableSummon::execGetControl1 },
		{ "GetControl2", &AMyPlayableSummon::execGetControl2 },
		{ "GetControl3", &AMyPlayableSummon::execGetControl3 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPlayableSummon);
UClass* Z_Construct_UClass_AMyPlayableSummon_NoRegister()
{
	return AMyPlayableSummon::StaticClass();
}
struct Z_Construct_UClass_AMyPlayableSummon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayableSummon.h" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PS_MetaData[] = {
		{ "Category", "Summon Properties" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SummonName_MetaData[] = {
		{ "Category", "Summon Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)\n" },
#endif
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb8\xef\xbf\xbd (\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb7\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawn1_MetaData[] = {
		{ "Category", "MyPlayableSummon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)\n// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AMyPlayableSummon::SummonBlue \xef\xbf\xbd\xee\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd\n// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbf\xef\xbf\xbd GetControl \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd.\n// AMyPlayableSummon \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd/\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd (\xef\xbf\xbd\xdf\xb0\xef\xbf\xbd)\n\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AMyPlayableSummon::SummonBlue \xef\xbf\xbd\xee\xbf\xa1\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbf\xef\xbf\xbd\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xbf\xef\xbf\xbd GetControl \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd5\xb4\xcf\xb4\xef\xbf\xbd.\nAMyPlayableSummon \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawn2_MetaData[] = {
		{ "Category", "MyPlayableSummon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PS=1 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PS=1 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedPawn3_MetaData[] = {
		{ "Category", "MyPlayableSummon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PS=2 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PS=2 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BluePlayableBPClass_MetaData[] = {
		{ "Category", "Summon Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PS=3 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PS=3 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YellowPlayableBPClass_MetaData[] = {
		{ "Category", "Summon Properties" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhitePlayableBPClass_MetaData[] = {
		{ "Category", "Summon Properties" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyBattleFieldWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_Playable_White_Class_MetaData[] = {
		{ "Category", "Summon Spawns" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_Playable_Yellow_Class_MetaData[] = {
		{ "Category", "Summon Spawns" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BP_Playable_Blue_Class_MetaData[] = {
		{ "Category", "Summon Spawns" },
		{ "ModuleRelativePath", "MyPlayableSummon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PS;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SummonName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawn1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawn2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnedPawn3;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BluePlayableBPClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_YellowPlayableBPClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_WhitePlayableBPClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MyBattleFieldWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BP_Playable_White_Class;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BP_Playable_Yellow_Class;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BP_Playable_Blue_Class;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayableSummon_GetControl1, "GetControl1" }, // 1566621982
		{ &Z_Construct_UFunction_AMyPlayableSummon_GetControl2, "GetControl2" }, // 4238076977
		{ &Z_Construct_UFunction_AMyPlayableSummon_GetControl3, "GetControl3" }, // 3773924709
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayableSummon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_PS = { "PS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, PS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PS_MetaData), NewProp_PS_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SummonName = { "SummonName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, SummonName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SummonName_MetaData), NewProp_SummonName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SpawnedPawn1 = { "SpawnedPawn1", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, SpawnedPawn1), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPawn1_MetaData), NewProp_SpawnedPawn1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SpawnedPawn2 = { "SpawnedPawn2", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, SpawnedPawn2), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPawn2_MetaData), NewProp_SpawnedPawn2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SpawnedPawn3 = { "SpawnedPawn3", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, SpawnedPawn3), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedPawn3_MetaData), NewProp_SpawnedPawn3_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BluePlayableBPClass = { "BluePlayableBPClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, BluePlayableBPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BluePlayableBPClass_MetaData), NewProp_BluePlayableBPClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_YellowPlayableBPClass = { "YellowPlayableBPClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, YellowPlayableBPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YellowPlayableBPClass_MetaData), NewProp_YellowPlayableBPClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_WhitePlayableBPClass = { "WhitePlayableBPClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, WhitePlayableBPClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhitePlayableBPClass_MetaData), NewProp_WhitePlayableBPClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_MyBattleFieldWidgetClass = { "MyBattleFieldWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, MyBattleFieldWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMyBattleFieldWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyBattleFieldWidgetClass_MetaData), NewProp_MyBattleFieldWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BP_Playable_White_Class = { "BP_Playable_White_Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, BP_Playable_White_Class), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_Playable_White_Class_MetaData), NewProp_BP_Playable_White_Class_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BP_Playable_Yellow_Class = { "BP_Playable_Yellow_Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, BP_Playable_Yellow_Class), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_Playable_Yellow_Class_MetaData), NewProp_BP_Playable_Yellow_Class_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BP_Playable_Blue_Class = { "BP_Playable_Blue_Class", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayableSummon, BP_Playable_Blue_Class), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BP_Playable_Blue_Class_MetaData), NewProp_BP_Playable_Blue_Class_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_PS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SummonName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SpawnedPawn1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SpawnedPawn2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_SpawnedPawn3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BluePlayableBPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_YellowPlayableBPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_WhitePlayableBPClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_MyBattleFieldWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BP_Playable_White_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BP_Playable_Yellow_Class,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayableSummon_Statics::NewProp_BP_Playable_Blue_Class,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayableSummon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_portfolio2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayableSummon_Statics::ClassParams = {
	&AMyPlayableSummon::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayableSummon_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayableSummon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayableSummon()
{
	if (!Z_Registration_Info_UClass_AMyPlayableSummon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayableSummon.OuterSingleton, Z_Construct_UClass_AMyPlayableSummon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayableSummon.OuterSingleton;
}
template<> PORTFOLIO2_API UClass* StaticClass<AMyPlayableSummon>()
{
	return AMyPlayableSummon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayableSummon);
AMyPlayableSummon::~AMyPlayableSummon() {}
// End Class AMyPlayableSummon

// Begin Registration
struct Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayableSummon, AMyPlayableSummon::StaticClass, TEXT("AMyPlayableSummon"), &Z_Registration_Info_UClass_AMyPlayableSummon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayableSummon), 1197689756U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_3596447895(TEXT("/Script/portfolio2"),
	Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AUnreal5_Portfolio2025_portfolio2_Source_portfolio2_MyPlayableSummon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
