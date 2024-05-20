// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class STU_Project : ModuleRules
{
	public STU_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", 
			"CoreUObject",
			"Engine",
			"InputCore",
			"Niagara",
			"PhysicsCore",
			"GameplayTasks",
			"NavigationSystem"
		});

		PrivateDependencyModuleNames.AddRange(new string[] {  });

		PublicIncludePaths.AddRange(new string[]
		{ 
		"STU_Project/Public/Player",
        "STU_Project/Public/Components",
        "STU_Project/Public/Dev",
        "STU_Project/Public/UI",
        "STU_Project/Public/Weapons",
        "STU_Project/Public/Animations",
        "STU_Project/Public/Pickups",
        "STU_Project/Public/Weapons/Components",
        "STU_Project/Public/AI",
        "STU_Project/Public/AI/Tasks",
        "STU_Project/Public/AI/Services",
        "STU_Project/Public/AI/EQS",
        "STU_Project/Public/AI/Decorators",
        "STU_Project/Public/Menu",
        "STU_Project/Public/Menu/UI"
        });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
