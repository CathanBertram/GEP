// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GEPProjectTarget : TargetRules
{
	public GEPProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GEPProject");
	}
}
