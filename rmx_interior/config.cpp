#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define EAST 0 // (Russian)

#include "Configs\basicdefines.hpp"

class CfgPatches 		{
	class interior {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

#include "Configs\CfgVehicles.hpp"
#include "Configs\CfgMagazines.hpp"