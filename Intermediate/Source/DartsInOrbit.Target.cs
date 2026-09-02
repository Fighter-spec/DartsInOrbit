using UnrealBuildTool;

public class DartsInOrbitTarget : TargetRules
{
	public DartsInOrbitTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("DartsInOrbit");
	}
}
