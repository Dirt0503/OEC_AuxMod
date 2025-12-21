class CfgPatches
{
	class OEC_Extension_Overwatch_Units_Voices
    {
		addonRootClass = "OEC_Extension";
        requiredAddons[] = 
        {
            "OEC_Extension"
        };
        units[] = {};
        weapons[] = {};
	};
};

class CfgVoice
{
	voices[] += {"OEC_Voice_NoVoice"};
	class OEC_Voice_NoVoice
	{
		scope = 2;
		author = "OEC Extension";
		displayName = "[OEC] No Voice";
		protocol = "RadioProtocolENG";
		directories[] = {"",""};
		identityTypes[] = {"OEC_Transhumans"};
		variants[] = {0.95,1,1.05};
		icon = "OECExtension\OEClogo1.paa";
		voiceType = "";
	};
};
