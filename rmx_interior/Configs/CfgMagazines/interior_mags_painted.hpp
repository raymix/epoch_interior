//RMX
// Black, Green, Pink, Blue, red, yellow, white

//Spray cans
class ItemAerosolcanBlack: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can black";
	descriptionShort = "Black spray paint";
	model = "\rmx_interior\models\aerosolcan_black.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_black.paa";
	weight = 2;
	class ItemActions
	{
		class Build
		{
			text = "Paint Helipad";
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_heliExtra";
		};
	};
};

class ItemAerosolcanGreen: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can green";
	descriptionShort = "Green spray paint";
	model = "\rmx_interior\models\aerosolcan_green.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_green.paa";
	weight = 2;
};

class ItemAerosolcanPink: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can pink";
	descriptionShort = "Pink spray paint";
	model = "\rmx_interior\models\aerosolcan_pink.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_pink.paa";
	weight = 2;
};

class ItemAerosolcanBlue: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can blue";
	descriptionShort = "Blue spray paint";
	model = "\rmx_interior\models\aerosolcan_blue.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_blue.paa";
	weight = 2;
	class ItemActions
	{
		class Build
		{
			text = "Paint Hero Helipad";
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_heliHero";
		};
	};
};

class ItemAerosolcanRed: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can red";
	descriptionShort = "Red spray paint";
	model = "\rmx_interior\models\aerosolcan_red.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_red.paa";
	weight = 2;
	class ItemActions
	{
		class Build
		{
			text = "Paint Bandit Helipad";
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_heliBandit";
		};
	};
};

class ItemAerosolcanYellow: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can yellow";
	descriptionShort = "Yellow spray paint";
	model = "\rmx_interior\models\aerosolcan_yellow.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_yellow.paa";
	weight = 2;
	class ItemActions
	{
		class Build
		{
			text = "Paint Bandit Helipad";
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_heliStop";
		};
	};
};

class ItemAerosolcanWhite: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Aerosol can white";
	descriptionShort = "White spray paint";
	model = "\rmx_interior\models\aerosolcan_white.p3d";
	picture = "\rmx_interior\icons\rmx_aerosol_mag_white.paa";
	weight = 2;
	class ItemActions
	{
		class Build
		{
			text = "Paint Hero Helipad";
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_heliHero";
		};
	};
};

//Painted magazines
//Armchairs
class ca_armchair_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Arm Chair";
	descriptionShort = "Arm chair";
	model = "\Ca\buildings\furniture\armchair.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair";
		};
		class Crafting {
			text = "Paint Black";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_black_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanBlack",2}};
		};
		class Crafting1 {
			text = "Paint Blue";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_blue_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanBlue",2}};
		};
		class Crafting2 {
			text = "Paint Green";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_green_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanGreen",2}};
		};
		class Crafting3 {
			text = "Paint Pink";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_pink_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanPink",2}};
		};
		class Crafting4 {
			text = "Paint Red";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_red_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanRed",2}};
		};
		class Crafting5 {
			text = "Paint White";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_white_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanWhite",2}};
		};
		class Crafting6 {
			text = "Paint Yellow";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_armchair_yellow_DZE",1}};
			input[] = {{"ca_armchair_DZE",1},{"ItemAerosolcanYellow",2}};
		};
	};
};

class ca_armchair_black_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Black Arm Chair";
	descriptionShort = "Black Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_black";
		};
	};
};

class ca_armchair_blue_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Blue Arm Chair";
	descriptionShort = "Blue Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_blue";
		};
	};
};

class ca_armchair_green_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Green Arm Chair";
	descriptionShort = "Green Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_green";
		};
	};
};

class ca_armchair_pink_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Pink Arm Chair";
	descriptionShort = "Pink Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_pink";
		};
	};
};

class ca_armchair_red_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Red Arm Chair";
	descriptionShort = "Red Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_red";
		};
	};
};

class ca_armchair_white_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "White Arm Chair";
	descriptionShort = "White Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_white";
		};
	};
};

class ca_armchair_yellow_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Yellow Arm Chair";
	descriptionShort = "Yellow Arm chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_armchair_yellow";
		};
	};
};

//ch_mod chairs
class ca_ch_mod_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Chair";
	descriptionShort = "Chair";
	model = "\Ca\buildings\furniture\ch_mod_c.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod";
		};
		class Crafting {
			text = "Paint Black";
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_black_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanBlack",2}};
		};
		class Crafting1 {
			text = "Paint Blue";
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_blue_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanBlue",2}};
		};
		class Crafting2 {
			text = "Paint Green";
			script = ";['Crafting2','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_green_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanGreen",2}};
		};
		class Crafting3 {
			text = "Paint Pink";
			script = ";['Crafting3','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_pink_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanPink",2}};
		};
		class Crafting4 {
			text = "Paint Red";
			script = ";['Crafting4','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_red_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanRed",2}};
		};
		class Crafting5 {
			text = "Paint White";
			script = ";['Crafting5','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_white_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanWhite",2}};
		};
		class Crafting6 {
			text = "Paint Yellow";
			script = ";['Crafting6','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ca_ch_mod_yellow_DZE",1}};
			input[] = {{"ca_ch_mod_DZE",1},{"ItemAerosolcanYellow",2}};
		};
	};
};

class ca_ch_mod_black_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Black Chair";
	descriptionShort = "Black Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_black";
		};
	};
};

class ca_ch_mod_blue_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Blue Chair";
	descriptionShort = "Blue Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_blue";
		};
	};
};

class ca_ch_mod_green_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Green Chair";
	descriptionShort = "Green Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_green";
		};
	};
};

class ca_ch_mod_pink_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Pink Chair";
	descriptionShort = "Pink Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_pink";
		};
	};
};

class ca_ch_mod_red_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Red Chair";
	descriptionShort = "Red Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_red";
		};
	};
};

class ca_ch_mod_white_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "White Chair";
	descriptionShort = "White Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_white";
		};
	};
};

class ca_ch_mod_yellow_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Yellow Chair";
	descriptionShort = "Yellow Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_ch_mod_yellow";
		};
	};
};