class CfgPatches
{
    class OEC_Extension_Overwatch_Airwatch_Transport
    {
        addonRootClass = "OEC_Extension_Overwatch_Airwatch";
        requiredAddons[] = 
        {
            "OEC_Extension_Overwatch_Airwatch"
        };
        units[] = {"OEC_Vehicle_Air_Ghosthawk_Unarmed", "OEC_Vehicle_Air_Transport_Pod"};
        weapons[] = {};
    };
};

class CfgVehicles
{
	/*class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Components;
	};
	class Heli_Transport_01_base_F: Helicopter_Base_H
    {
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitAvionics;
			class HitMissiles;
			class HitEngine;
			class HitHRotor;
			class HitVRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class Components;
	};
    class B_Heli_Transport_01_F: Heli_Transport_01_base_F {};*/

    class B_Heli_Transport_01_F;
    class OEC_Vehicle_Air_Ghosthawk_Unarmed: B_Heli_Transport_01_F
	{
		displayName = "[OEC] UH-80 Ghosthawk";
		slingLoadMaxCargoMass = 13500;
        faction = "OEC_Faction_Combine";
		factionClass = "OEC_Faction_Class_Combine";
        editorCategory = "OEC_EdCat_Combine";
        editorSubCategory = "OEC_EdSubCat_Air";
	};

    class Land_Pod_Heli_Transport_04_covered_F;
    class OEC_Vehicle_Air_Transport_Pod: Land_Pod_Heli_Transport_04_covered_F
	{
		displayName = "[OEC] Infantry Transport Pod";
		scope = 2;
		scopeCurator = 2;
        editorCategory = "OEC_EdCat_Supply";
		editorSubcategory = "OEC_EdSubCat_resup";
	};
};