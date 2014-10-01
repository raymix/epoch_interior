//RMX

/*
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\placeholder_ca.paa"};
*/

//Helipads
class ca_heliBandit: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1,0};
	model = "\rmx_interior\models\ca\Heli_Custom.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Bandit HeliPad";
	vehicleClass = "RMX_Interior";
	constructioncount = 3;
	removeoutput[] = {{"ItemAerosolcanRed",2}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\helipad_bandit_ca.paa"};
};

class ca_heliHero: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1,0};
	model = "\rmx_interior\models\ca\Heli_Custom.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Hero HeliPad";
	vehicleClass = "RMX_Interior";
	constructioncount = 3;
	removeoutput[] = {{"ItemAerosolcanBlue",1},{"ItemAerosolcanWhite",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\helipad_hero_ca.paa"};
};

class ca_heliStop: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1,0};
	model = "\rmx_interior\models\ca\Heli_Custom.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Stop HeliPad";
	vehicleClass = "RMX_Interior";
	constructioncount = 3;
	removeoutput[] = {{"ItemAerosolcanRed",1},{"ItemAerosolcanYellow",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\helipad_stop_ca.paa"};
};

class ca_heliExtra: BuiltItems //extra custom model for mission file .paa
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1,0};
	model = "\rmx_interior\models\ca\Heli_Custom.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Custom HeliPad";
	vehicleClass = "RMX_Interior";
	constructioncount = 3;
	removeoutput[] = {{"ItemAerosolcanBlack",2}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\placeholder_ca.paa"};
};

//Armchairs
class ca_armchair: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\Ca\buildings\furniture\armchair.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_DZE",1}};
};

class ca_armchair_black: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Black Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_black_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_black_co.paa"};
};

class ca_armchair_blue: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Blue Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_blue_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_blue_co.paa"};
};

class ca_armchair_green: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Green Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_green_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_green_co.paa"};
};

class ca_armchair_pink: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Pink Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_pink_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_pink_co.paa"};
};

class ca_armchair_red: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Red Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_red_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_red_co.paa"};
};

class ca_armchair_white: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "White Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_white_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_white_co.paa"};
};

class ca_armchair_yellow: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\armchair_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Yellow Arm Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_armchair_yellow_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\armchair_yellow_co.paa"};
};

//ch_mod chairs
class ca_ch_mod: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\Ca\buildings\furniture\ch_mod_c.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_DZE",1}};
};

class ca_ch_mod_black: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Black Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_black_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_black_co.paa"};
};

class ca_ch_mod_blue: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Blue Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_blue_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_blue_co.paa"};
};

class ca_ch_mod_green: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Green Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_green_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_green_co.paa"};
};

class ca_ch_mod_pink: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Pink Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_pink_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_pink_co.paa"};
};

class ca_ch_mod_red: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Red Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_red_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_red_co.paa"};
};

class ca_ch_mod_white: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "White Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_white_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_white_co.paa"};
};

class ca_ch_mod_yellow: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\rmx_interior\models\ca\ch_mod_c_dze.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Yellow Chair";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_ch_mod_yellow_DZE",1}};
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\rmx_interior\textures\ca\ca_ch_mod_yellow_co.paa"};
};