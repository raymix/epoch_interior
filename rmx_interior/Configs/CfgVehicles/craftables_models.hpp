class CraftableInterior: NonStrategic{
	placement = "vertical";
	class DestructionEffects {
		class Sound {
			simulation = "sound";
			type = "DestrHouse";
			position = "destructionEffect1";
			intensity = 1;
			interval = 1;
			lifeTime = 0.05;
		};
		class DestroyPhase1 {
			simulation = "destroy";
			type = "DelayedDestruction";
			lifeTime = 2.5;
			position = "";
			intensity = 1;
			interval = 1;
		};
		class DamageAround1 {
			simulation = "damageAround";
			type = "DamageAroundHouse";
			position = "";
			intensity = 0.1;
			interval = 1;
			lifeTime = 1;
		};
	};
};
class WoodenChair_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_chair.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Fine Chair";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenChair_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenTable_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_table.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 500;
	displayName = "Fine Table";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenTable_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenShelf_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_shelf.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Fine Shelf";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenShelf_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenBalcony_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_balcony.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Balcony";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenBalcony_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_balcony_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class CeilingLamp_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_cLamp.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Ceiling Lamp";
	vehicleClass = "DZE_Interior";
	GhostPreview = "CeilingLamp_Preview_DZ";
};

class WoodenDoorRoof_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_doorRoof.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Door Roof";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenDoorRoof_Preview_DZ";
};

class WoodenDrawingBoard_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_drawingboard.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 100;
	displayName = "Drawing Board";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenDrawingBoard_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_drawingboard_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class MetalGlassRailing_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsGlass.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Metal Glass Railing";
	vehicleClass = "DZE_Interior";
	GhostPreview = "MetalGlassRailing_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_railingsGlass_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class MetalGlassRailingCorner_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsGlassCorner.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Metal Glass Railing Corner";
	vehicleClass = "DZE_Interior";
	GhostPreview = "MetalGlassRailingCorner_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_railingsGlassCorner_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRailings_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsWood.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Railings";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRailings_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_railingsWood_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRailingsCorner_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsWoodCorner.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Railings Corner";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRailingsCorner_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_railingsWoodCorner_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRoof_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roof.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRoof_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_roof_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRoofSide_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofSide.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Side";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRoofSide_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_roofSide_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRoofSideOpen_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofSideOpen.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Side Open";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRoofSideOpen_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_roofSideOpen_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRoofWindow_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofWindow.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Window";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRoofWindow_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_roof_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

class WoodenRoofWindowGlass_DZ: CraftableInterior {
	scope = 2;
	destrType = "DestructBuilding";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofWindowGlass.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Window Glass";
	vehicleClass = "DZE_Interior";
	GhostPreview = "WoodenRoofWindowGlass_Preview_DZ";
	class DestructionEffects : DestructionEffects {
		class Ruin1 {
		simulation = "ruin";
		type = "\rmx_interior\models\dzei_roof_wreck.p3d";
		position = "";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
		};
	};
};

// ghost models

class WoodenChair_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_chair_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Chair Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenTable_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_table_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Table Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenShelf_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_shelf_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Shelf Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenBalcony_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_balcony_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Balcony Preview";
	vehicleClass = "DZE_Interior";
};

class CeilingLamp_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_cLamp_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "CeilingLamp Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenDoorRoof_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_doorRoof_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Door Roof Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenDrawingBoard_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_drawingboard_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Drawing Board Preview";
	vehicleClass = "DZE_Interior";
};

class MetalGlassRailing_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsGlass_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Glass Railing Preview";
	vehicleClass = "DZE_Interior";
};

class MetalGlassRailingCorner_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsGlassCorner_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Glass Railing Corner Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRailings_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsWood_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Railings Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRailingsCorner_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_railingsWoodCorner_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Railings Corner Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRoof_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roof_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRoofSide_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofSide_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Side Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRoofSideOpen_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofSideOpen_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Side Open Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRoofWindow_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofWindow_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Window Preview";
	vehicleClass = "DZE_Interior";
};

class WoodenRoofWindowGlass_Preview_DZ: NonStrategic {
	scope = 2;
	destrType = "DestructNo";
	cost = 100;
	offset[] = {0,1.5,0};
	model="\rmx_interior\models\dzei_roofWindowGlass_ghost.p3d";
	icon = "\ca\data\data\Unknown_object.paa";
	mapSize = 2;
	armor = 1000;
	displayName = "Wooden Roof Window Glass Preview";
	vehicleClass = "DZE_Interior";
};