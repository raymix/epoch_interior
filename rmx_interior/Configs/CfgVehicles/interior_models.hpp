//RMX
#include "interior_models_painted.hpp"


//CA - misc
class ca_concreteBlock: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.25};
	model = "\Ca\misc\Betonovy_blok.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 2000;
	displayName = "Concrete Block";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_concreteBlock_DZE",1}};
};

class ca_concreteBlockSide: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.26};
	model = "\Ca\misc\Betonovy_blok_zacatek.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 2000;
	displayName = "Concrete Block Side";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_concreteBlockSide_DZE",1}};
};

class ca_concreteBlockPanel: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.8};
	model = "\Ca\misc\Ohrada_popelnice.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 2000;
	displayName = "Concrete Block Panel";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_concreteBlockPanel_DZE",1}};
};

class ca_concreteBlockPanelCorner: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.8};
	model = "\Ca\misc\Ohrada_popelnice_roh.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 2000;
	displayName = "Concrete Block Panel Corner";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_concreteBlockPanelCorner_DZE",1}};
};

class ca_milRadio: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1,1.1};
	model = "\Ca\misc\mutt_vysilacka.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 50;
	displayName = "Military radio";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_milRadio_DZE",1}};
};

class ca_civRadio: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1,0.1};
	model = "\Ca\misc\radio.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 50;
	displayName = "Radio";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_civRadio_DZE",1}};
};

class ca_woodPallet: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.1};
	model = "\Ca\misc\paletaA.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wood Pallet";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_woodPallet_DZE",1}};
};

class ca_woodPallets1: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.32};
	model = "\Ca\misc\paletyC.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wood Pallets";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_woodPallets1_DZE",1}};
};

class ca_woodPallets2: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.42};
	model = "\Ca\misc\paletyD.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wood Pallets High";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_woodPallets2_DZE",1}};
};

class ca_woodPalletsColumn: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0};
	model = "\Ca\misc\Pallets_Column.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wood Pallets Pile";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_woodPalletsColumn_DZE",1}};
};

class ca_trainingWirefence: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,4,0.61};
	model = "\Ca\misc\podlejzacka.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Training Razor wire";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_trainingWirefence_DZE",1}};
};

class ca_trashcan: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.52};
	model = "\Ca\misc\popelnice.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Trash can";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_trashcan_DZE",1}};
};

class ca_trainingBridge: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,4,0.78};
	model = "\Ca\misc\prebehlavka.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 400;
	displayName = "Training Bridge";
	vehicleClass = "RMX_Interior";
	constructioncount = 3;
	removeoutput[] = {{"ca_trainingBridge_DZE",1}};
};

class ca_logHatchet: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0.35};
	model = "\Ca\misc\sekyraspalek.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 400;
	displayName = "Wooden Log";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_logHatchet_DZE",1}};
};

class ca_bale: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,2,0.75};
	model = "\Ca\misc\seno_balik.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Grass Bale";
	vehicleClass = "RMX_Interior";
	constructioncount = 1;
	removeoutput[] = {{"ca_bale_DZE",1}};
};

class ca_redWhiteTape: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0.42};
	model = "\Ca\misc\tape_redwhite.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Red White Tape";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_redWhiteTape_DZE",1}};
};

//CA - Buildings/furniture
class ca_bath: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\Ca\buildings\furniture\bath.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Bathtub";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_bath_DZE",1}};
};

class ca_bedHusbands: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,0.66};
	model = "\Ca\buildings\furniture\bed_husbands.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "King size bed";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_bedHusbands_DZE",1}};
};

class ca_bedroomCase: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\Ca\buildings\furniture\case_bedroom_b.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Bedroom case";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_bedroomCase_DZE",1}};
};

class ca_wallCase1: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\Ca\buildings\furniture\case_wall_unit_part_c.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wall case";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_wallCase1_DZE",1}};
};

class ca_wallCase2: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {0,1.5,0};
	model = "\Ca\buildings\furniture\case_wall_unit_part_d.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wall shelf";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_wallCase2_DZE",1}};
};

class ca_wallCase3: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\case_wooden_b.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Wooden shelf";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_wallCase3_DZE",1}};
};

// adjust offsets
class ca_conferenceTable: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\conference_table_a.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Conference Table";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_conferenceTable_DZE",1}};
};

class ca_shelfBrown: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\Dhangar_brownskrin.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Brown Shelf";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_shelfBrown_DZE",1}};
};

class ca_bookShelf: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\Dhangar_knihovna.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "BookShelf";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_bookShelf_DZE",1}};
};

class ca_shelfTable: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\Dhangar_psacistul.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Table w/ shelves";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_shelfTable_DZE",1}};
};

class ca_smallFurnace: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\Dkamna_bila.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Small furnace";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_smallFurnace_DZE",1}};
};

class ca_smallRustyFurnace: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\Dkamna_uhli.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Small rusty furnace";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_smallRustyFurnace_DZE",1}};
};

class ca_kitchenTable: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\kitchen_table_a.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Kitchen table";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_kitchenTable_DZE",1}};
};

class ca_metalBed: BuiltItems
{
	scope = 2;
	destrType = "DestructTree";
	cost = 100;
	offset[] = {-0.5,1.5,1.25};
	model = "\Ca\buildings\furniture\postel_manz_kov.p3d";
	icon = "\rmx_interior\textures\placeholder_ca.paa";
	mapSize = 2;
	armor = 200;
	displayName = "Metal bed";
	vehicleClass = "RMX_Interior";
	constructioncount = 2;
	removeoutput[] = {{"ca_metalBed_DZE",1}};
};