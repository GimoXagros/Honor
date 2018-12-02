// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Honor : ModuleRules
{
  public Honor(ReadOnlyTargetRules Target) : base(Target)
  {
    PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

    PublicDependencyModuleNames.AddRange(
      new string[] {
        "Core",
        "CoreUObject",
        "Engine",
        "InputCore",
        "HeadMountedDisplay"
      }
    );

    PublicIncludePaths.AddRange(
      new string[]
      {
        "Honor/Common/Utils",
      }
    );
  }
}
