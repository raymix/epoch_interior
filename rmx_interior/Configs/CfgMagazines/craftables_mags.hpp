class ItemWoodenChair_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Chair";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden chair for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenChair_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenChair_DZ",1}};
			input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",2}};

		};
	};
};

class ItemWoodenTable_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Table";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Table for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenTable_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenTable_DZ",1}};
			input[] = {{"PartWoodPlywood",1},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenShelf_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Shelf";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Shelf for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenShelf_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenShelf_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenBalcony_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Balcony";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Balcony for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenBalcony_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenBalcony_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemCeilingLamp_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Rusty Ceiling Lamp";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Rusty Ceiling Lamp for interior decoration.";
	weight = 5;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "CeilingLamp_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemCeilingLamp_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenDoorRoof_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Door Roof";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Door Roof for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenDoorRoof_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenDoorRoof_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenDrawingBoard_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Drawing Board";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Drawing Board for interior decoration.";
	weight = 5;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenDrawingBoard_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenDrawingBoard_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemMetalGlassRailing_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Metal Glass Railing";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Metal Glass Railing for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalGlassRailing_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemMetalGlassRailing_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemMetalGlassRailingCorner_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Metal Glass Railing Corner";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Metal Glass Railing Corner for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "MetalGlassRailingCorner_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemMetalGlassRailingCorner_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRailings_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Railings";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Railings for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRailings_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRailings_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRailingsCorner_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Railings Corner";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Railings Corner for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRailingsCorner_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRailingsCorner_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRoof_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Roof";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Roof for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRoof_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRoof_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRoofSide_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Roof Side";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Roof Side for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRoofSide_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRoofSide_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRoofSideOpen_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Roof Side Open";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Roof Side Open for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRoofSideOpen_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRoofSideOpen_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRoofWindow_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Roof Window";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Roof Window for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRoofWindow_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRoofWindow_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};

class ItemWoodenRoofWindowGlass_DZ: CA_Magazine {
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Fine Wooden Roof Window Glass";
	model = "\z\addons\dayz_epoch\models\supply_crate.p3d";
	picture = "\z\addons\dayz_epoch\pictures\equip_wooden_crate_ca.paa";
	descriptionShort = "Wooden Roof Window Glass for interior decoration.";
	weight = 15;
	class ItemActions {
		class Build {
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "WoodenRoofWindowGlass_DZ";
		};
		class Crafting {
			text = $STR_EPOCH_PLAYER_232;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {"workshop"};
			requiretools[] = {"ItemToolbox"};
			output[] = {{"ItemWoodenRoofWindowGlass_DZ",1}};
			input[] = {{"PartWoodPlywood",4},{"PartWoodLumber",4}};

		};
	};
};