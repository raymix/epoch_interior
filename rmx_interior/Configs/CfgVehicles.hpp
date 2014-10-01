class CfgVehicles {
	class All;

	class HouseBase;
	class Ruins: HouseBase {};
	class NonStrategic;
	class BuiltItems: NonStrategic{};
#include "CfgVehicles\craftables_models.hpp"
#include "CfgVehicles\ruins.hpp"
#include "CfgVehicles\interior_models.hpp"

	class testL_DZ: BuiltItems
	{
		scope = 2;
		destrType = "DestructTree";
		cost = 100;
		offset[] = {0,1,0};
		model = "\rmx_interior\models\testL.p3d";
		icon = "\ca\data\data\Unknown_object.paa";
		mapSize = 2;
		armor = 4000;
		displayName = "Test Length";
		vehicleClass = "DZE_Interior";
		constructioncount = 1;
		removeoutput[] = {{"testL_kit",1}};
	};

};