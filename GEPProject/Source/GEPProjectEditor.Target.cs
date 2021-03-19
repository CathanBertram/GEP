// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GEPProjectEditorTarget : TargetRules
{
	public GEPProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GEPProject");
	}
}
