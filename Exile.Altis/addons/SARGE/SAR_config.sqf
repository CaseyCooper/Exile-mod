/*
	# Original #
	Sarge AI System 1.5
	Created for Arma 2: DayZ Mod
	Author: Sarge
	https://github.com/Swiss-Sarge

	# Fork #
	Sarge AI System 2.0+
	Modded for Arma 3: Exile Mod
	Changes: Dango
	http://www.hod-servers.com

*/

SAR_version = "2.0.5";

/* Debug & RPT Settings */
SAR_DEBUG 			= false; // Set to true for RPT info on AI
SAR_EXTREME_DEBUG 	= false; // Set to true for RPT info on damn near everything
SAR_HITKILL_DEBUG 	= false; // Set to true for RPT info on AI shooting and killing
SAR_DEBUGMONITOR 	= false; // This has been hardcoded to be disabled
SAR_log_AI_kills 	= false; // Set to true for kill logging by variable. *These variables do not save to the database currently*
SAR_KILL_MSG 		= false; // Set to true for announcing AI kills to the server *This is still in development*

KRON_UPS_Debug 		= 0; // Set to true for RPT info on KRON activites
KRON_UPS_WP_Debug 	= 0; // Set to true for AI waypoint markers *This may not work currently*
KRON_UPS_AI_Debug 	= 0; // Set to true for RPT info on ai groups and members


/* Dynamic AI Settings */
SAR_dynamic_spawning 				= true;	// Turn dynamic grid spawns on or off
SAR_Base_Gaurds 					= true;	// Turn AI territory gurads on or off
SAR_dynamic_group_respawn 			= true;	// Turn dynamic grid AI respawn on or off
SAR_AI_STEAL_VEHICLE 				= true;// Turn the option for AI using vehicles to reach their destination on or off
SAR_respawn_waittime 				= 300;	// How long to wait before dynamic IA respawns
SAR_DESPAWN_TIMEOUT 				= 120;	// How long to wait before despawning dynamic AI
SAR_DELETE_TIMEOUT 					= 300;	// How long to wait before deleting dead AI
SAR_surv_kill_value 				= 250;	// How much respect players lose if killing friendly AI
SAR_band_kill_value 				= 50;	// How much respect players lose if killing hostile AI
SAR_RESPECT_HOSTILE_LIMIT 			= -2500;// Friendly AI will shoot at players with respect below this number
SAR_REAMMO_INTERVAL					= 30;	// How often AI will replenish their ammo count
SAR_DETECT_HOSTILE 					= 200;	// How far away AI can detect hostile AI & players
SAR_DETECT_INTERVAL 				= 15;	// How often AI can detect AI & players
SAR_DETECT_HOSTILE_FROM_VEHICLE 	= 500;	// How far AI can detect hostile AI & players while in a vehicle
SAR_DETECT_FROM_VEHICLE_INTERVAL 	= 5;	// How often AI can detect hostile AI & players while in a vehicle

KRON_UPS_ambushdist 				= 100;	// Efective distance for doing perfect ambush (max distance is this x2)
KRON_UPS_Cycle 						= 10;	// Frequency for doing calculations for each squad.
KRON_UPS_react 						= 60;	// Time that leader waits until doing another movement, this time reduced dynamically under fire, and on new targets
KRON_UPS_minreact 					= 30;	// Min time to wait for doing another reaction
KRON_UPS_maxwaiting 				= 60;	// Max waiting is the maximum time patrol groups will wait when arrived to target for doing another target.
KRON_UPS_wp_maxwaiting 				= 120;	// Max waiting is the maximum time infantry patrol groups will wait when arrived at a waypoint before moving to the next waypoint. Air and land vehicles will move instantly to a new one.
KRON_UPS_alerttime 					= 90;	// How long AI units should be in alert mode after initially spotting an enemy
KRON_UPS_closeenough 				= 100;	// How close unit has to be to target to generate a new one target or to enter stealth mode
KRON_UPS_sharedist 					= 200;	// If you are spotted by AI group, how close the other AI group have to be to You , to be informed about your present position. over this, will lose target
KRON_UPS_searchVehicledist 			= 600;	// If your destination point is further than KRON_UPS_searchVehicledist, AI will try to find a vehicle to go there.

SAR_AI_XP_SYSTEM 	= true; // Set to true for AI to level up after gaining enough experience
SAR_SHOW_XP_LVL 	= false;

SAR_AI_XP_LVL_1 	= 0;
SAR_AI_XP_NAME_1 	= "Rookie";
SAR_AI_XP_ARMOR_1 	= 1;

SAR_AI_XP_LVL_2 	= 5;
SAR_AI_XP_NAME_2 	= "Veteran";
SAR_AI_XP_ARMOR_2 	= 0.5;

SAR_AI_XP_LVL_3 	= 20;
SAR_AI_XP_NAME_3 	= "Legendary";
SAR_AI_XP_ARMOR_3 	= 0.3;

// Military AI ----------------------------------------------------------
// ----------------------------------------------------------------------
SAR_leader_sold_skills = [
    ["aimingAccuracy",0.35, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.35, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];
SAR_soldier_sold_skills  = [
    ["aimingAccuracy",0.25, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.25, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.30, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];
SAR_sniper_sold_skills = [
    ["aimingAccuracy",0.35, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.35, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];

SAR_leader_sold_list = ["B_officer_F"];
SAR_sniper_sold_list = ["B_ghillie_lsh_F","B_sniper_F"];
SAR_soldier_sold_list = ["B_G_medic_F","B_G_engineer_F","b_soldier_survival_F","B_G_Soldier_TL_F"];

SAR_sold_leader_weapon_list = ["arifle_Katiba_F","arifle_Mk20_F","arifle_MXC_F","arifle_MX_F","arifle_TRG21_F","arifle_TRG20_F"];
SAR_sold_leader_pistol_list = [];

SAR_sold_leader_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60],["Exile_Item_InstaDoc",100]];
SAR_sold_leader_tools =  [["ItemMap",50],["ItemCompass",30],["NVGoggles",5],["ItemRadio",100]];

SAR_sold_rifleman_weapon_list = ["arifle_Katiba_F","arifle_Mk20_F","arifle_MXC_F","arifle_MX_F","arifle_TRG21_F","arifle_TRG20_F"];
SAR_sold_rifleman_pistol_list = [];

SAR_sold_rifleman_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_sold_rifleman_tools = [["ItemMap",50],["ItemCompass",30]];

SAR_sold_sniper_weapon_list = ["srifle_DMR_02_F","arifle_MXM_F","srifle_DMR_04_F"];
SAR_sold_sniper_pistol_list = [];

SAR_sold_sniper_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_sold_sniper_tools = [["ItemMap",50],["ItemCompass",30]];

// Survivor AI ----------------------------------------------------------
// ---------------------------------------------------------------------
SAR_leader_surv_skills = [
    ["aimingAccuracy",0.35, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.35, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];
SAR_soldier_surv_skills = [
    ["aimingAccuracy",0.15, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.15, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.20, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];
SAR_sniper_surv_skills = [
    ["aimingAccuracy",0.35, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.35, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];

SAR_leader_surv_list = ["B_G_Soldier_A_F"];
SAR_sniper_surv_list = ["B_G_Soldier_LAT_F"];
SAR_soldier_surv_list = ["B_G_Soldier_M_F"];

SAR_surv_leader_weapon_list = ["arifle_Katiba_F","arifle_Mk20_F","arifle_MXC_F","arifle_MX_F","arifle_TRG21_F","arifle_TRG20_F"];
SAR_surv_leader_pistol_list = [];

SAR_surv_leader_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_surv_leader_tools =  [["ItemMap",50],["ItemCompass",30],["NVGoggles",5],["ItemRadio",100]];

SAR_surv_rifleman_weapon_list = ["arifle_Katiba_F","arifle_Mk20_F","arifle_MXC_F","arifle_MX_F","arifle_TRG21_F","arifle_TRG20_F"];
SAR_surv_rifleman_pistol_list = [];

SAR_surv_rifleman_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_surv_rifleman_tools = [["ItemMap",50],["ItemCompass",30]];

SAR_surv_sniper_weapon_list = ["srifle_DMR_02_F","arifle_MXM_F","srifle_DMR_04_F"];
SAR_surv_sniper_pistol_list = [];

SAR_surv_sniper_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_surv_sniper_tools = [["ItemMap",50],["ItemCompass",30]];

// Hostile AI ----------------------------------------------------------
// ---------------------------------------------------------------------
SAR_leader_band_skills = [
    ["aimingAccuracy",0.35, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.35, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];
SAR_soldier_band_skills = [
    ["aimingAccuracy",0.15, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.15, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];
SAR_sniper_band_skills = [
    ["aimingAccuracy",0.35, 0], // skilltype, <min value>, <random value added to min>;
    ["aimingShake",   0.35, 0],
    ["aimingSpeed",   0.35, 0],
    ["spotDistance",  0.35, 0],
    ["spotTime",      0.35, 0],
    ["endurance",     0.35, 0],
    ["courage",       0.35, 0],
    ["reloadSpeed",   0.35, 0],
    ["commanding",    0.35, 0],
    ["general",       0.35, 0]
];

SAR_leader_band_list = ["O_G_Soldier_lite_F"];
SAR_sniper_band_list = ["O_G_Soldier_lite_F"];
SAR_soldier_band_list = ["O_G_Soldier_lite_F"];

SAR_band_leader_weapon_list = ["arifle_Katiba_F","arifle_Mk20_F","arifle_MXC_F","arifle_MX_F","arifle_TRG21_F","arifle_TRG20_F"];
SAR_band_leader_pistol_list = [];

SAR_band_leader_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_band_leader_tools =  [["ItemMap",50],["ItemCompass",30],["NVGoggles",5],["ItemRadio",100]];

SAR_band_rifleman_weapon_list = ["arifle_Katiba_F","arifle_Mk20_F","arifle_MXC_F","arifle_MX_F","arifle_TRG21_F","arifle_TRG20_F"];
SAR_band_rifleman_pistol_list = [];

SAR_band_rifleman_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_band_rifleman_tools = [["ItemMap",50],["ItemCompass",30]];

SAR_band_sniper_weapon_list = ["srifle_DMR_02_F","arifle_MXM_F","srifle_DMR_04_F"];
SAR_band_sniper_pistol_list = [];

SAR_band_sniper_items = [["Exile_Item_PlasticBottleFreshWater",75],["Exile_Item_Catfood_Cooked",60]];
SAR_band_sniper_tools = [["ItemMap",50],["ItemCompass",30]];


/* Helicopter Types */
SAR_heli_type = ["C_Heli_Light_01_civil_F","I_Heli_light_03_unarmed_F","O_Heli_Light_02_unarmed_F","B_Heli_Light_01_stripped_F"];



/* Do Not Edit Below. If you do the AI will not work properly. */
SAR_chance_bandits = 0;
SAR_chance_soldiers = 0;
SAR_chance_survivors = 0;
SAR_max_grps_bandits = 0;
SAR_max_grps_soldiers = 0;
SAR_max_grps_survivors = 0;
SAR_max_grpsize_bandits = 0;
SAR_max_grpsize_soldiers = 0;
SAR_max_grpsize_survivors = 0;

SAR_AI_disable_UPSMON_AI = false;
SAR_FIX_VEHICLE_ISSUE = false;

KRON_UPS_comradio = 0;
R_knowsAboutEnemy = 0.5;
KRON_UPS_Res_enemy = [EAST];

SAR_HC = false;
