// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using Internal;

public class ThirdPerson5TestTarget : TargetRules
{
	public ThirdPerson5TestTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("ThirdPerson5");
		ShadowVariableWarningLevel = WarningLevel.Off;
	}
}
