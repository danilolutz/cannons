// All rights reserved for CDStudio.

using UnrealBuildTool;
using System.Collections.Generic;

public class CannonGameTarget : TargetRules
{
	public CannonGameTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "CannonGame" } );
	}
}
