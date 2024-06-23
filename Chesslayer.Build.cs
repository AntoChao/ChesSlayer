// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Chesslayer : ModuleRules
{
	public Chesslayer(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", 
			"HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "UMG", "Slate", 
			"SlateCore", "AIModule", "GameplayTasks", "MediaAssets"});
    }
}
