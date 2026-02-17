// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Assessment_StateTree : ModuleRules
{
	public Assessment_StateTree(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
