/* Again your very own basic definition*/
class DZE_Base_Object : All {
	scope = 0;
	side = 3;
	icon = "\ca\data\data\Unknown_object.paa";
	nameSound = "object";
	simulation = "house";
	picture = "pictureStaticObject";
	model="";
	sound = "Building";
	placement = "vertical";
	ladders[] = {};
	vehicleClass =  "";
	displayName = "";
	mapSize = 7.5;
	animated = true;
	armor = 2200;
	destrType = "DestructBuilding";
	damageResistance = 0.004;
	// static 
	reversed = 0;
	hasDriver = 0;
	accuracy = 0.1;
	cost = 1000;
	weapons[] = {};
	magazines[] = {};
	irTarget = 0;
	type = 1;
	threat[] = {0,0,0};
	maxSpeed = 0;
	
	//coefInside = 4;
	//coefInsideHeur = 4;

	// test settings from h barrier to see if this prevents glitching though a door
	coefInside = 0.5;
	coefInsideHeur = 0.8;

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
			intensity = 1;
			interval = 1;
			lifeTime = 1;
		};
	};
};

/* Your very own base class for buildings*/
class DZE_Housebase : DZE_Base_Object {
	scope = 1;
	model = "";
	icon = "";
	displayName = "";
	animated = true;
	vehicleClass = "Fortifications";
	nameSound = "house";
	accuracy = 0.2;
	typicalCargo[] = {};
	transportAmmo = 0;
	transportRepair = 0;
	transportFuel = 0;
	mapSize = 11;
	cost = 0;
	armor = 2200;
	reversed = 0;
	/*extern*/ class DestructionEffects;
};

/*  Same name as stated in the Class DestructionEffects, but an "Land_" added infront*/

//wood
class Land_dzei_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_wreck.p3d";
	displayName = "Wood Interior ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_balcony_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_balcony_wreck.p3d";
	displayName = "Wood Balcony ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_drawingboard_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_drawingboard_wreck.p3d";
	displayName = "Wood Drawing Board ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_railingsWood_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_railingsWood_wreck.p3d";
	displayName = "Wood railings ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_railingsWoodCorner_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_railingsWoodCorner_wreck.p3d";
	displayName = "Wood railings corner ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_roof_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_roof_wreck.p3d";
	displayName = "Wood roof ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_roofSide_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_roofSide_wreck.p3d";
	displayName = "Wood roof side ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

class Land_dzei_roofSideOpen_wreck : ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_roofSideOpen_wreck.p3d";
	displayName = "Wood roof side open ruins";
	removeoutput[] = {{"PartWoodPlywood",{0,3}},{"PartWoodLumber",{0,3}}};
};

//metal
class Land_dzei_railingsGlass_wreck: ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_railingsGlass_wreck.p3d";
	displayName = "Metal Railings ruins";
	removeoutput[] = {{"ItemPole",{0,2}},{"ItemTankTrap",{0,2}}};
};

class Land_dzei_railingsGlassCorner_wreck: ruins	{
	scope = 1;
	model = "\rmx_interior\models\dzei_railingsGlassCorner_wreck.p3d";
	displayName = "Metal Railings Corner ruins";
	removeoutput[] = {{"ItemPole",{0,2}},{"ItemTankTrap",{0,2}}};
};