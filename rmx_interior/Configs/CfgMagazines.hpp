class CfgMagazines {
class CA_Magazine;	// External class reference

#include "CfgMagazines\craftables_mags.hpp"
#include "CfgMagazines\interior_mags.hpp"


	class testL_kit: CA_Magazine
	{
		scope = 2;
		count = 1;
		type = 256;
		displayName = "Test Length";
		descriptionShort = "300 250 200 150 100 50";
		model = "\rmx_interior\models\testL.p3d";
		picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
		weight = 10;
		class ItemActions
		{
			class Build
			{
				text = $STR_ACTIONS_BUILD;
				script = "spawn player_build;";
				require[] = {"ItemToolbox"};
				create = "testL_DZ";
			};
		};
	};

};