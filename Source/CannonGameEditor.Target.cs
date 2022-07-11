// All rights reserved for CDStudio.

using UnrealBuildTool;
using System.Collections.Generic;

public class CannonGameEditorTarget : TargetRules
{
	public CannonGameEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "CannonGame" } );
	}
}
