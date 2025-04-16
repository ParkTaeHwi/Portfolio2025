// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class portfollio2 : ModuleRules
{
	public portfollio2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
