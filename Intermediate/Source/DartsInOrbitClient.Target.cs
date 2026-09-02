using UnrealBuildTool;

public class DartsInOrbitClientTarget : TargetRules
{
	public DartsInOrbitClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("DartsInOrbit");
	}
}
