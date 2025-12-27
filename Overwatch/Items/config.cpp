class CfgPatches
{
    class OEC_Extension_Overwatch_Items
    {
        addonRootClass = "OEC_Extension_Overwatch";
        requiredAddons[] = 
        {
            "ace_medical"
        };
        units[] = {};
        weapons[] = 
        {
            "ACE_plasmaIV",
            "ACE_plasmaIV_500",
            "ACE_plasmaIV_250"
        };
    };
};

class CfgWeapons
{
	class ItemCore;
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class InventoryFirstAidKitItem_Base_F;
	class MedikitItem;
    class ACE_plasmaIV: ACE_ItemCore
	{
        author = "OEC Extension";
        displayName = "[OEC] Transfusion Vial - 1000ml";
		scopeArsenal = 2;
		scope = 2;
		descriptionShort = "Combine fluid vial. Contains chemical solution compatible with transhuman blood.";
        picture = "\OECExtension\Overwatch\Weapons\data\Medkit.paa";
		model = "\A3\Weapons_F\Items\Medikit";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		descriptionUse = "$STR_ace_medical_treatment_Plasma_IV_Desc_Use";
		ACE_isMedicalItem = 1;
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 10;
		};
	};

    class ACE_plasmaIV_500: ACE_plasmaIV
	{
		displayName = "[OEC] Transfusion Vial - 500ml";
		picture = "\OECExtension\Overwatch\Weapons\data\MedVial.paa";
		model = "\A3\Weapons_F\Items\Medikit";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 5;
		};
	};

    class ACE_plasmaIV_250: ACE_plasmaIV
	{
		displayName = "[OEC] Transfusion Vial - 250ml";
		picture = "\OECExtension\Overwatch\Weapons\data\MedVial.paa";
		model = "\A3\Weapons_F\Items\Medikit";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 2.5;
		};
	};

};