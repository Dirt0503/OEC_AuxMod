class CfgPatches
{
    class OEC_Extension
    {
        name = "OEC Extension";
        author = "Dirt & Petee";
        requiredAddons[] = 
        {
            "A3_data_F",
            "A3_anims_F",
            "A3_weapons_F",
            "A3_characters_F",
            "A3_Soft_F",
            "A3_CargoPoses_F",
            "WBK_Combinus",
            "rhs_c_weapons",
            "rhs_c_heavyweapons",
            "A3_Data_F_Oldman_Loadorder",
            "A3_Armor_F",
            "cup_weapons_grenadelaunchers",
            "A3_Characters_F_Enoch_Vests",
            "a3_sounds_f_exp",
            "CUP_Weapons_XM29",
            "HL_CMB_Weapons"
        };
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods
{
    class Mod_Base;
    class OEC_Extension_Base: Mod_Base
    {
        dir = "@OECExtension";
        name = "OEC Extension";
        picture = "\OECExtension\OEClogo1.paa";
        logo = "\OECExtension\OEClogo1.paa";
        logoSmall = "\OECExtension\OEClogo1.paa";
        logoOver = "\OECExtension\OEClogo1.paa";
        tooltip = "OEC Extension";
        tooltipOwned = "OEC Extension";
    };
};

class Extended_PostInit_EventHandlers
{
    class Dirts_Visor_Extension
    {
        init = "call compile preprocessFileLineNumbers '\OECExtension\Scripts\OEC_patchHelmets.sqf'";
    };
};