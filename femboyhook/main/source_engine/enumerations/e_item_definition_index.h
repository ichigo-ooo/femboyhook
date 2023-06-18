#pragma once

enum e_item_definition_index {
	WEAPON_DEAGLE                = 1,
	WEAPON_ELITE                 = 2,
	WEAPON_FIVESEVEN             = 3,
	WEAPON_GLOCK                 = 4,
	WEAPON_AK47                  = 7,
	WEAPON_AUG                   = 8,
	WEAPON_AWP                   = 9,
	WEAPON_FAMAS                 = 10,
	WEAPON_G3SG1                 = 11,
	WEAPON_GALILAR               = 13,
	WEAPON_M249                  = 14,
	WEAPON_M4A1                  = 16,
	WEAPON_MAC10                 = 17,
	WEAPON_P90                   = 19,
	WEAPON_MP5SD                 = 23,
	WEAPON_UMP45                 = 24,
	WEAPON_XM1014                = 25,
	WEAPON_BIZON                 = 26,
	WEAPON_MAG7                  = 27,
	WEAPON_NEGEV                 = 28,
	WEAPON_SAWEDOFF              = 29,
	WEAPON_TEC9                  = 30,
	WEAPON_TASER                 = 31,
	WEAPON_HKP2000               = 32,
	WEAPON_MP7                   = 33,
	WEAPON_MP9                   = 34,
	WEAPON_NOVA                  = 35,
	WEAPON_P250                  = 36,
	WEAPON_SHIELD                = 37,
	WEAPON_SCAR20                = 38,
	WEAPON_SG556                 = 39,
	WEAPON_SSG08                 = 40,
	WEAPON_KNIFEGG               = 41,
	WEAPON_KNIFE                 = 42,
	WEAPON_FLASHBANG             = 43,
	WEAPON_HEGRENADE             = 44,
	WEAPON_SMOKEGRENADE          = 45,
	WEAPON_MOLOTOV               = 46,
	WEAPON_DECOY                 = 47,
	WEAPON_INCGRENADE            = 48,
	WEAPON_C4                    = 49,
	WEAPON_HEALTHSHOT            = 57,
	WEAPON_KNIFE_T               = 59,
	WEAPON_M4A1_SILENCER         = 60,
	WEAPON_USP_SILENCER          = 61,
	WEAPON_CZ75A                 = 63,
	WEAPON_REVOLVER              = 64,
	WEAPON_TAGRENADE             = 68,
	WEAPON_FISTS                 = 69,
	WEAPON_BREACHCHARGE          = 70,
	WEAPON_TABLET                = 72,
	WEAPON_MELEE                 = 74,
	WEAPON_AXE                   = 75,
	WEAPON_HAMMER                = 76,
	WEAPON_SPANNER               = 78,
	WEAPON_KNIFE_GHOST           = 80,
	WEAPON_FIREBOMB              = 81,
	WEAPON_DIVERSION             = 82,
	WEAPON_FRAG_GRENADE          = 83,
	WEAPON_SNOWBALL              = 84,
	WEAPON_BUMPMINE              = 85,
	WEAPON_KNIFE_BAYONET         = 500,
	WEAPON_KNIFE_CSS             = 503,
	WEAPON_KNIFE_FLIP            = 505,
	WEAPON_KNIFE_GUT             = 506,
	WEAPON_KNIFE_KARAMBIT        = 507,
	WEAPON_KNIFE_M9_BAYONET      = 508,
	WEAPON_KNIFE_TACTICAL        = 509,
	WEAPON_KNIFE_FALCHION        = 512,
	WEAPON_KNIFE_SURVIVAL_BOWIE  = 514,
	WEAPON_KNIFE_BUTTERFLY       = 515,
	WEAPON_KNIFE_PUSH            = 516,
	WEAPON_KNIFE_CORD            = 517,
	WEAPON_KNIFE_CANIS           = 518,
	WEAPON_KNIFE_URSUS           = 519,
	WEAPON_KNIFE_GYPSY_JACKKNIFE = 520,
	WEAPON_KNIFE_OUTDOOR         = 521,
	WEAPON_KNIFE_STILETTO        = 522,
	WEAPON_KNIFE_WIDOWMAKER      = 523,
	WEAPON_KNIFE_SKELETON        = 525,
	GLOVE_STUDDED_BLOODHOUND     = 5027,
	GLOVE_T_SIDE                 = 5028,
	GLOVE_CT_SIDE                = 5029,
	GLOVE_SPORTY                 = 5030,
	GLOVE_SLICK                  = 5031,
	GLOVE_LEATHER_WRAP           = 5032,
	GLOVE_MOTORCYCLE             = 5033,
	GLOVE_SPECIALIST             = 5034,
	GLOVE_HYDRA                  = 5035
};

enum e_weapon_type {
	WEAPON_TYPE_INVALID,
	WEAPON_TYPE_KNIFE,
	WEAPON_TYPE_PISTOL,
	WEAPON_TYPE_TASER,
	WEAPON_TYPE_SHOTGUN,
	WEAPON_TYPE_SMG,
	WEAPON_TYPE_RIFLE,
	WEAPON_TYPE_MG,
	WEAPON_TYPE_SNIPER,
	WEAPON_TYPE_GRENADE,
};