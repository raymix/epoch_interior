//RMX
#include "interior_mags_painted.hpp"

//CA - misc
class ca_concreteBlock_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Concrete Block";
	descriptionShort = "Concrete Block";
	model = "\Ca\misc\Betonovy_blok.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 90;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_concreteBlock";
		};
	};
};

class ca_concreteBlockSide_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Concrete Block Side";
	descriptionShort = "Concrete Block Side";
	model = "\Ca\misc\Betonovy_blok_zacatek.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 90;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_concreteBlockSide";
		};
	};
};

class ca_concreteBlockPanel_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Concrete Block Panel";
	descriptionShort = "Concrete Block Panel";
	model = "\Ca\misc\Ohrada_popelnice.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 45;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_concreteBlockPanel";
		};
	};
};

class ca_concreteBlockPanelCorner_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Concrete Block Panel Corner";
	descriptionShort = "Concrete Block Panel Corner";
	model = "\Ca\misc\Ohrada_popelnice_roh.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 90;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_concreteBlockPanelCorner";
		};
	};
};

class ca_milRadio_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Military radio";
	descriptionShort = "Military radio";
	model = "\Ca\misc\mutt_vysilacka.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_milRadio";
		};
	};
};

class ca_civRadio_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Radio";
	descriptionShort = "Just a normal radio set";
	model = "\Ca\misc\radio.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 3;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_civRadio";
		};
	};
};

class ca_woodPallet_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Pallet";
	descriptionShort = "Wood Pallet";
	model = "\Ca\misc\paletaA.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 25;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_woodPallet";
		};
	};
};

class ca_woodPallets1_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Pallets";
	descriptionShort = "Pile of Wood Pallets";
	model = "\Ca\misc\paletyC.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_woodPallets1";
		};
	};
};

class ca_woodPallets2_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Pallets High";
	descriptionShort = "Pile of Wood Pallets";
	model = "\Ca\misc\paletyD.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_woodPallets2";
		};
	};
};

class ca_woodPalletsColumn_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wood Pallets Pile";
	descriptionShort = "Pile of Wood Pallets";
	model = "\Ca\misc\Pallets_Column.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 200;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_woodPalletsColumn";
		};
	};
};

class ca_trainingWirefence_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Training Razor wire";
	descriptionShort = "Razor wire fence used for military training purposes";
	model = "\Ca\misc\podlejzacka.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 70;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_trainingWirefence";
		};
	};
};

class ca_trashcan_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Trash can";
	descriptionShort = "Trash can";
	model = "\Ca\misc\popelnice.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 10;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_trashcan";
		};
	};
};

class ca_trainingBridge_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Training Bridge";
	descriptionShort = "Training Bridge";
	model = "\Ca\misc\prebehlavka.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 90;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_trainingBridge";
		};
	};
};

class ca_logHatchet_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wooden Log";
	descriptionShort = "Hatchet left in a wooden log";
	model = "\Ca\misc\sekyraspalek.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 70;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_logHatchet";
		};
	};
};

class ca_bale_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Grass Bale";
	descriptionShort = "Just a normal bale";
	model = "\Ca\misc\seno_balik.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 120;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_bale";
		};
	};
};

class ca_redWhiteTape_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Red White Tape";
	descriptionShort = "Red White Tape";
	model = "\Ca\misc\tape_redwhite.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_redWhiteTape";
		};
	};
};

class ca_bath_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Bathtub";
	descriptionShort = "Nice comfy bathtub";
	model = "\Ca\buildings\furniture\bath.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 60;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_bath";
		};
	};
};

class ca_bedHusbands_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "King size bed";
	descriptionShort = "Comfy king size bed";
	model = "\Ca\buildings\furniture\bed_husbands.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 70;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_bedHusbands";
		};
	};
};

class ca_bedroomCase_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Bedroom case";
	descriptionShort = "A small case to keep near your bed";
	model = "\Ca\buildings\furniture\case_bedroom_b.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 40;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_bedroomCase";
		};
	};
};

class ca_wallCase1_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wall case";
	descriptionShort = "Nice looking shelf to hold against the wall";
	model = "\Ca\buildings\furniture\case_wall_unit_part_c.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 80;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_wallCase1";
		};
	};
};

class ca_wallCase2_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wall shelf";
	descriptionShort = "Nice looking shelf to hold against the wall";
	model = "\Ca\buildings\furniture\case_wall_unit_part_d.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 80;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_wallCase2";
		};
	};
};

class ca_wallCase3_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Wooden shelf";
	descriptionShort = "Nice looking shelf to hold against the wall";
	model = "\Ca\buildings\furniture\case_wooden_b.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 80;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_wallCase3";
		};
	};
};

class ca_conferenceTable_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Conference Table";
	descriptionShort = "Wooden table";
	model = "\Ca\buildings\furniture\conference_table_a.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 40;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_conferenceTable";
		};
	};
};

class ca_shelfBrown_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Brown Shelf";
	descriptionShort = "Old brown wooden shelf";
	model = "\Ca\buildings\furniture\Dhangar_brownskrin.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 60;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_shelfBrown";
		};
	};
};

class ca_bookShelf_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "BookShelf";
	descriptionShort = "Old bookshelf";
	model = "\Ca\buildings\furniture\Dhangar_knihovna.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 60;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_bookShelf";
		};
	};
};

class ca_shelfTable_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Table w/ shelves";
	descriptionShort = "Some old table with shelves";
	model = "\Ca\buildings\furniture\Dhangar_psacistul.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 60;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_shelfTable";
		};
	};
};

class ca_smallFurnace_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Small furnace";
	descriptionShort = "Old furnace to keep you warm";
	model = "\Ca\buildings\furniture\Dkamna_bila.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 60;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_smallFurnace";
		};
	};
};

class ca_smallRustyFurnace_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Small rusty furnace";
	descriptionShort = "Old rusty furnace to keep you warm";
	model = "\Ca\buildings\furniture\Dkamna_uhli.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 60;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_smallRustyFurnace";
		};
	};
};

class ca_kitchenTable_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Kitchen table";
	descriptionShort = "Just a generic kitchen table, yay";
	model = "\Ca\buildings\furniture\kitchen_table_a.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 20;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_kitchenTable";
		};
	};
};

class ca_metalBed_DZE: CA_Magazine
{
	scope = 2;
	count = 1;
	type = 256;
	displayName = "Metal bed";
	descriptionShort = "old and probably rusty metal bed";
	model = "\Ca\buildings\furniture\postel_manz_kov.p3d";
	picture = "\rmx_interior\textures\placeholder_ca.paa";
	weight = 50;
	class ItemActions
	{
		class Build
		{
			text = $STR_ACTIONS_BUILD;
			script = "spawn player_build;";
			require[] = {"ItemToolbox"};
			create = "ca_metalBed";
		};
	};
};