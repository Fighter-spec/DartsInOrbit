using UnrealBuildTool;

public class DartsInOrbitEditorTarget : TargetRules
{
	public DartsInOrbitEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("DartsInOrbit");
	}
}
