/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
	
	Copyright infiSTAR - 2011 - 2016. All rights reserved.
	Christian (Chris) L. (infiSTAR23@gmail.com) Developer of infiSTAR
	
	Description:
	Arma AntiHack & AdminTools - infiSTAR.de
	
	UPDATEEMAIL for http://update.infiSTAR.de is:
	'crftgaming@gmail.com'
	
	Last download was on:
	'15022016';
*/
class Cfg_infiSTAR_settings {
/*
	"serverCommandPassword" is serverCommandPassword - in your servers config.cfg, needed for servercommands from client
	
	This is   VERY IMPORTANT   as it is needed to KICK & BAN people.
	
	It will try to get this password from "@ExileServer\addons\exile_server_config" first. If you did not set a password there (config.cpp),
	then it will take what you put here.
	
	
	Since many people don't read the readme file..
	ON gtxgaming YOU NEED TO GO TO YOUR
	1. "Configuration Files" http://img.infistar.eu/14_01_2016__00-52-56.png
	2. EDIT "START_SERVER.bat" with -> "[ Configuration Editor ]" http://img.infistar.eu/14_01_2016__00-52-34.png
	3. SET "Infistar Version Installed: infiSTAR NOT INSTALLED" (they are not allowed to use my program anyways and their setup is broken..)
	   http://img.infistar.eu/14_01_2016__00-44-41.png
	   http://img.infistar.eu/14_01_2016__00-51-45.png
	   
		Also instead of starting @infiSTAR_Exile as servermod, you can just pull the "a3_infiSTAR_Exile.pbo" into
		"@ExileServer" -> "addons" so it is next to "exile_server.pbo" and "exile_server_config.pbo"
		like this:
		http://img.infistar.eu/14_01_2016__00-56-39.png
*/
serverCommandPassword = "changeme";

/*
	"passwordAdmin" is passwordAdmin - in your servers config.cfg, needed for servercommands from client
	
	This is used to be able to use the "login" function ingame. Will log you in as Arma "Admin".
*/
passwordAdmin = "changeme";
/* serverCommandPassword and passwordAdmin should always be different passwords or it could cause problems! */


/* "_OPEN_ADMIN_MENU_KEY": Key to open the menu (google DIK_KeyCodes (0x3B is F1))   */
OPEN_ADMIN_MENU_KEY = 0x3B;
HIDE_FROM_PLAYERS = false;				/* So no normal can see it :)! */
WRITE_TXT_LOG_FILES = true;				/* (DEFAULT VALUE: TRUE, has always been true) uses ARMA_LOG.dll */
announce_adminstate_changed = false;	/* whenever you type !admin as an admin it will announce that you logged out or in to all players on the server! */
use_html_load_on_adminmenu = true;		/* default and recommended is TRUE. infiSTAR updates and news are announced in the top right corner when you open the AdminMenu if this is true! */

/* "LogAdminActions": Sends actions done by each admin to the server to log it to the .txt file (if infiSTAR dlls are used) and .rpt file + sends it back to all other admins. */
LogAdminActions = true;
enableIngameLogs = true;

/* 
	if you set "needAdminNameTag" to true, this string needs to be a part of the admins name, or he can't use infiSTAR Admin Menu!
	example names: "[Admin] infiSTAR" or "infiSTAR [Admin]"
	note: this is case sensitive as well, meaning "infiSTAR [admin]" would not work as we set it in our example to "[Admin]"
*/
needAdminNameTag = false;
AdminNameTag = "[Admin]";


/* "startAsNormal": if you add admin UIDs in here as well, they will start as almost "normal" player instead of with admin menu and such. */
startAsNormal[] =
{
	"UID1","UID2","UID3","..."
};

adminUIDandAccess[] =
{
	{
		{"76561198134898961","76561198032047520","76561198054879039","76561198001066704"},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target","Teleport In Facing Direction (10m steps)",
			"spectating","AdminConsole","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze Target","UnFreeze Target","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","==== WeatherLord ====","Items spawn menu",
			"Remove Gear","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Eject","Eject Crew",
			"Kill","Explode","Force Disconnect","Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)",
			"infiSTAR Player ESP","infiSTAR Dead ESP","infiSTAR AI ESP",
			"infiSTAR MapIcons","Vehicle Marker","Flag Marker (with radius)","DeadPlayer Marker",
			"God Mode","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","ChangeTime","Spawn Support-Boxes","Change Viewdistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo","Add / Remove Money","Add / Remove Respect",
			"UnlockLockVehicle",
			"Spawn Vehicles","Spawn Persistent Vehicles"
		}
	},
	{
		{"UID1","UID2","UID3","..."},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target","Teleport In Facing Direction (10m steps)",
			"spectating","AdminConsole","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze Target","UnFreeze Target","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","==== WeatherLord ====","Items spawn menu",
			"Remove Gear","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Eject","Eject Crew",
			"Kill","Explode","Force Disconnect","Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)",
			"infiSTAR Player ESP","infiSTAR Dead ESP","infiSTAR AI ESP",
			"infiSTAR MapIcons","Vehicle Marker","Flag Marker (with radius)","DeadPlayer Marker",
			"God Mode","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","ChangeTime","Spawn Support-Boxes","Change Viewdistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo","Add / Remove Money","Add / Remove Respect",
			"UnlockLockVehicle",
			"Spawn Vehicles","Spawn Persistent Vehicles"
		}
	},
	{
		{"UID1","UID2","UID3","..."},	/* Admins with UIDs in this Array have their Access defined in the array below. */
		{
			"Teleport On Map Click","Teleport - Target To Me","Teleport - Me To Target","Teleport In Facing Direction (10m steps)",
			"spectating","AdminConsole","Delete Vehicle","FlyUp","ShowGear","Show Server Information",
			"HealSelf","HealRepairNear","AdminLog","Freeze Target","UnFreeze Target","Restrain","UnRestrain",
			"==== Loadouts ====","==== Base Deleter ====","==== WeatherLord ====","Items spawn menu",
			"Remove Gear","Heal","Restore","Flip Vehicle","Move In My Vehicle","Move In Target Vehicle","Eject","Eject Crew",
			"Kill","Explode","Force Disconnect","Kick (Silent)","Kick (Announce)","Ban (Silent)","Ban (Announce)",
			"infiSTAR Player ESP","infiSTAR Dead ESP","infiSTAR AI ESP",
			"infiSTAR MapIcons","Vehicle Marker","Flag Marker (with radius)","DeadPlayer Marker",
			"God Mode","Vehicle God Mode","Lower Terrain","Vehboost","UnlimAmmo","noRecoil","FastFire","Stealth / Invisible",
			"Disable Announces","Mass Message","ChangeTime","Spawn Support-Boxes","Change Viewdistance",
			"Spawn Ammo","Login as Arma Admin","BIS FreeRoam Cam (works with ESP)","FreeRoam Cam (does not work with ESP)",
			"Request Steam Name","showinfo","Add / Remove Money","Add / Remove Respect",
			"UnlockLockVehicle",
			"Spawn Vehicles","Spawn Persistent Vehicles"
		}
	}
};

/*
	Use UID WhiteList?
	if "USE_UID_WHITELIST = true;", UIDs that are not in "UID_WHITELIST" array, will be kicked on connect.
	This even counts for Admins!
*/
USE_UID_WHITELIST = false;
UID_WHITELIST[] =
{
	"UID1","UID2","UID3","..."
};


/* What ESCAPE Menu shows */
ESCMNUTOP = "AntiHack & AdminTools";
ESCMNUBOT = "by infiSTAR.de";
BRIEFING_MSG = false;	/* use mission briefing message: if   "BRIEFING_MSG = false;"   then the message will be replaced by infiSTAR */
HTML_LOAD_URL = "";	/* HTML_LOAD_URL = ""; == disabled and if you set a url it will be shown in ESCAPE menu. HTML in Arma/this is limited. Try it :) example: "http://goo.gl/gb0o7b" */


/* shows RESTART IN X MINS */
USE_RESTART_TIMER = false;			/* show time left to next restart */
RESTART_TIME_IN_M = 180;			/* restart time in minutes (default: 180min == 3 hours) */
SHOW_TIMER_IN_MIN[] = {1,2,3,5,10};	/* minutes before restart, when message is shown */
USE_RESTART_TIMER_SHUTDOWN = false;	/* #shutdown the server after RESTART_TIME_IN_M minutes */

/* The following 3 options can be disabled by putting the value to -1. For example "TGV = -1;" */
/* Terrain Grid Value   */ TGV = 40;	/* 50, 25, 12.5  */	/* if set to 50 grass will be very low for better client FPS.. default is 25 ~35 is good performance and grass :) */
/* ViewDistance Value   */ VDV = 1000;
/* ObjectViewDistance   */ VOV = 800;
/* ShadowViewDistance   */ SVD = 50;

/* ********************************************************************************* */
/*            many checks should be set to true instead of false.                    */
/* ********************************************************************************* */
VDN = true;		/* Allow Player to vote Day/Night by typing vote day / vote night in Chat*/
URC = true;		/* Check unitRecoilCoefficient and reset default unitRecoilCoefficient */
LVC = true;		/* Local Vehicle Check */
CMC = true;		/* Check for custom CommandingMenus */
KCM = true;		/* Just close ALL CommandingMenus */
CAP = false;	/* Check Actions Plr - "Actions: xxx/xxx possible scroll menu hack (or you added custom actions..)" */
ESP = false;	/* check if a player has modified or added a custom Draw3D MissionEventHandler */

RHS_CUP_MOD_ENABLED = false;			/* You need to set this option to true if you run RHS OR CUP mod */
disconnect_dupe_check = false;		/* checks if player tries to dupe using the "disconnect trick" -> sends a ping to the server whenever a player opens the escape menu */
wall_look = false;					/* checks if a players tries to look through a wall (if player is allowed to build in that territory, it will not be logged.) */
wall_glitch_object = false;			/* checks if a players tries to glitch through a wall (if player is allowed to build in that territory, it will not be logged.) */
wall_glitch_vehicle = false;		/* stops players from glitching into bases using "eject" or "getout" of a vehicle.. */
forceWalk_near_enemyBase = false;	/* forcing players to walk when near an enemy base */

stopSafeGlitch = true;				/* re-assigning "InventoryOpened" eventhandler to stop glitch open a locked safe */

SpeedHackCheck = false;				/* Use SpeedHackCheck? */
TimeToKickForSpeedHack = 30;		/* Only if SpeedHackCheck = true; some people tried using speedHacks to travel faster, instead of teleporting.. */

checkPopTabIncrease = true;
LogPopTabIncrease = 50000;			/* Only if checkPopTabIncrease = true; logs if poptabs increased by x within ~10 seconds */

checkRespectIncrease = true;
LogRespectIncrease = 5000;			/* Only if checkRespectIncrease = true; logs if respect increased by x within ~10 seconds */

uniform_and_vest_check = true;		/* In the current version of Arma3 it may happen that the uniform or vest you wear is not shown to other players due to a bug, this will log & fix that issue! */
log_uniform_and_vest_check_actions = false;


/* Check for Map Menu & Map Sub-Menu */
CMM = true;
maxMapMenuEntries = 6;	/* "Map Menu has been changed x entries found - Texts: y" incase you want to add some briefing to your map menu. Only matters if you have CMM = true; */

/* if steam api.steampowered.com is working, this might be a nice feature */
check_steam_ban = false;	/* will announce and log steambanned players - using GetPlayerBans v1 */
ban_for_steam_ban = false;	/* if "check_steam_ban = true;" then steambanned players will get banned from your Arma server! */



/*
	Anti Teleport
	UAT = false; To disable Anti Teleport
	Arrays below show position & radius where Teleporting is allowed.
	Mainly for the Traders (because when you purchase a vehicle, it teleports you into the vehicle)
	use_custom = 0; means it will try to get the array by the worldNames below
	use_custom = 1; means, YOU have to define positions and radius below..
*/
UAT = true;	
class allowTP {
	use_custom = 0;
	custom[] = {
		{{0,0,0},1},
		{{1,1,1},1},
		{{2,2,2},1}
	};
	Altis[] = {
		{{14599.966,16797.193,0},325},
		{{23334.605,24188.938,0},325},
		{{2998.0603,18175.479,0},325}
	};
	Esseker[] = {
		{{3943,9284,0},325},
		{{10810,4765,0},325},
		{{4739,4671,0},325}
	};
	Bornholm[] = {
		{{3092.2,5468.97,0},325},
		{{12737.6,8757.8,0},325},
		{{6420.46,17217.2,0},325}
	};
	pja310[] = {
		{{1599.4,8260.6,0},325},
		{{6609.4,17282.3,0},325},
		{{19628.4,19227.7,0},325},
		{{13965.6,12502,0},325},
		{{17800.5,2185.05,0},325}
	};
};


/*  Check Global Markers */
CGM = false;	/* you may need to disable this check for A.I. Missions - or whitelist the used Markers in the aLocalM Array beneath */

/*  Check Local Markers  */
CLM = false;	/* false if you do not want LocalMarker to be checked. */

/*  Use aLocalM array    */
UMW = false;	/* use allowed marker array from below (for example AltisLife uses house_ and others in there) or A.I. Missions */
/* aLocalM: if "CLM" && UMW - this array of names will be allowed */
aLocalM[] = {"MissionMarker"};


/* Not allowed Chat words on server. Example: badChat[] = {"BLUE"}; would freeze all players that write "BLUE GOAT" or "BLUES" in the chat (not case sensitive) */
/* 2016 we don't want so much hate in our sidechats! */
badChat[] = {"nigger","get cancer"};

/* Not allowed Names on server. Example: badNames[] = {"THE"}; would kick all players with names like "the car" as it includes "THE" (not case sensitive) */
badNames[] = {"admin","thirtysix","adolf","le hippo"};

/* Not allowed Group Names on server. Example: badGroupNames[] = {"THE"}; would rename all groups with names like "the car" as it includes "THE" (not case sensitive) */
badGroupNames[] = {"admin"};



/* badIDDsToKick will be checked before badIDDsToClose, badIDDsToClose will be checked before allowedIDDs */
/* badIDDsToKick: Forbidden Idds that will get you Kicked by the AH */
badIDDsToKick[] = {-1337,133,167,1340,1341,1342,1343,1344,1345,1346,1347};

/* badIDDsToClose: Forbidden Idds that will get closed by the AH */
badIDDsToClose[] =
{
	2,3,7,17,19,25,26,27,28,29,30,31,32,37,40,41,43,44,45,51,52,53,56,74,85,
	106,126,127,132,146,147,150,151,152,153,154,155,159,162,164,262,
	314,632,1320,2121,148,163,129,169,157,131,69
};

/* Use IDD White-List ? */ UDW = true;
/* allowedIDDs: Insert IDDs here to prevent them from being closed! */
allowedIDDs[] =
{
	8457,	// http://www.exilemod.com/topic/9040-xm8-apps/
	0,4,5,6,8,12,18,24,46,49,54,55,63,70,160,174,602,999,
	20023,24001,24002,24004,24005,24006,24007,24008,24009,24010,24011,24012,
	24013,24014,24015,20016,20017,20018,20019,20020,20021,24025,
	/* R3F ?! */
	/*
	65430,65431,65432,65433,65434,65435,65436,65437,65438,65439,65440,66361,66362,66363,66364,66461,66462,66463,66464,
	66465,66466,66467,66468,66469,66470,66471,66472,66473,66474,66475,66476,66477,66478
	*/
};




/* blacklistedVariables: The AntiHack will check if one of these variables is existing for the client */
blacklistedVariables[] =
{
	"arsenalOpened","BIS_fnc_arsenal_fullArsenal","bis_fnc_camera_target"
};


UVC = false;	/* Use Vehicle Check(s) - default "EXILE" vehicles are white-listed by default! */
VehicleWhiteList[] =
{
	"B_Parachute","B_Parachute_02_F","O_Parachute_02_F","Steerable_Parachute_F",
	"I_UAV_01_F","B_HMG_01_high_F","O_HMG_01_F","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","O_MRAP_02_gmg_F","O_static_AT_F","Land_Camping_Light_F"
};
ForbiddenVehicles[] =
{
	"B_Heli_Light_01_armed_F","B_Heli_Attack_01_F","B_Plane_CAS_01_F","B_APC_Tracked_01_rcws_F","B_APC_Tracked_01_CRV_F","B_APC_Tracked_01_AA_F","B_MBT_01_cannon_F",
	"B_MBT_01_arty_F","B_MBT_01_mlrs_F","B_Boat_Armed_01_minigun_F","B_UAV_02_F","B_UAV_02_CAS_F","B_MRAP_01_gmg_F","B_MRAP_01_hmg_F","B_G_Offroad_01_armed_F",
	"B_APC_Wheeled_01_cannon_F","B_MBT_01_TUSK_F","O_Heli_Light_02_F","O_Heli_Attack_02_F","O_Heli_Attack_02_black_F","O_Plane_CAS_02_F","O_APC_Tracked_02_cannon_F",
	"O_APC_Tracked_02_AA_F","O_MBT_02_cannon_F","O_MBT_02_arty_F","O_Boat_Armed_01_hmg_F","O_UAV_02_CAS_F","O_UAV_02_F","O_MRAP_02_hmg_F","O_G_Offroad_01_armed_F",
	"O_APC_Wheeled_02_rcws_F","O_UGV_01_rcws_F","B_UGV_01_rcws_F","I_UGV_01_rcws_F","I_APC_Wheeled_03_cannon_F","I_MRAP_03_gmg_F","I_MRAP_03_hmg_F","I_G_Offroad_01_armed_F",
	"I_UAV_02_CAS_F","I_UAV_02_F","I_Boat_Armed_01_minigun_F","I_MBT_03_cannon_F","I_APC_tracked_03_cannon_F","I_Plane_Fighter_03_AA_F","I_Plane_Fighter_03_CAS_F","I_Heli_light_03_F",
	"B_HMG_01_F","I_HMG_01_F","O_HMG_01_high_F","I_HMG_01_high_F","B_HMG_01_A_F","O_HMG_01_A_F","I_HMG_01_A_F","B_Mortar_01_F","O_Mortar_01_F","I_Mortar_01_F","I_G_Mortar_01_F",
	"B_G_Mortar_01_F","O_G_Mortar_01_F","B_GMG_01_F","O_GMG_01_F","I_GMG_01_F","O_GMG_01_high_F","I_GMG_01_high_F","B_GMG_01_A_F","O_GMG_01_A_F","I_GMG_01_A_F",
	"B_static_AA_F","O_static_AA_F","I_static_AA_F","B_static_AT_F","I_static_AT_F","B_GMG_01_high_F"
};


UFI = false;	/* Use "ForbiddenItems"/Item Check(s) */
UIW = false;	/* if "UIW = true;" then it checks if the items the individual player has are in "ItemWhiteList" */
ItemWhiteList[] =
{
	"AllowThisItem1","AllowThisItem2"
};
ForbiddenItems[] =
{
	"autocannon_Base_F","autocannon_30mm","autocannon_35mm","autocannon_40mm_CTWS","autocannon_30mm_CTWS","Bomb_04_Plane_CAS_01_F",
	"Bomb_03_Plane_CAS_02_F","cannon_105mm","cannon_120mm","cannon_120mm_long","cannon_125mm","Cannon_30mm_Plane_CAS_02_F","gatling_20mm",
	"gatling_25mm","gatling_30mm","Gatling_30mm_Plane_CAS_01_F","GBU12BombLauncher","GMG_20mm","GMG_40mm","GMG_UGV_40mm","HMG_127_MBT",
	"HMG_127","HMG_127_APC","HMG_01","HMG_M2","HMG_NSVT","LMG_Minigun2","LMG_RCWS","LMG_M200","LMG_Minigun","LMG_Minigun_heli","LMG_coax",
	"Missile_AGM_02_Plane_CAS_01_F","Missile_AA_04_Plane_CAS_01_F","Missile_AA_03_Plane_CAS_02_F","Missile_AGM_01_Plane_CAS_02_F","missiles_DAGR",
	"missiles_DAR","missiles_ASRAAM","missiles_SCALPEL","missiles_titan","missiles_titan_static","missiles_Zephyr","Mk82BombLauncher","mortar_82mm",
	"mortar_155mm_AMOS","rockets_Skyfire","rockets_230mm_GAT","Rocket_04_HE_Plane_CAS_01_F","Rocket_04_AP_Plane_CAS_01_F","Rocket_03_HE_Plane_CAS_02_F",
	"Rocket_03_AP_Plane_CAS_02_F","Twin_Cannon_20mm"
};



/*
	custom Box content:
	just an item like it is in the example with   "ItemMap"   will put the item once in the box.
	if an array is used like the   {"ItemGPS",5}   example, well I assume you could guess what it will do.
	
	You can just define as many as you want.
	{
		"BOX NAME",
		{
			"Item1","Item2",	// one per just item in a string
			{"Item1",5},{"Item2",10}	// second entry in each array defiens how many of items of the first entry are wanted.
		}
	}
	
	The last closing bracket in an array can not have a "," afterwards. So make sure to have no syntax errors here.
*/
allSupportBoxes[] =
{
	{
		"Construction Box Large",
		{
			"Exile_Item_Flag",
			{"Exile_Item_WoodDoorKit",15},{"Exile_Item_WoodDoorwayKit",15},{"Exile_Item_WoodDrawBridgeKit",15},
			{"Exile_Item_WoodFloorKit",15},{"Exile_Item_WoodFloorPortKit",15},{"Exile_Item_WoodGateKit",15},
			{"Exile_Item_WoodLog",15},{"Exile_Item_WoodPlank",15},{"Exile_Item_WoodStairsKit",15},
			{"Exile_Item_WoodSupportKit",15},{"Exile_Item_WoodWallHalfKit",15},{"Exile_Item_WoodWallKit",15},
			{"Exile_Item_WoodWindowKit",15},{"Exile_Item_WorkBenchKit",15}
		}
	},
	{
		"Construction Box Medium",
		{
			"Exile_Item_Flag","Exile_Item_CookingPot",
			{"Exile_Item_Codelock",5},{"Exile_Item_DuctTape",10},{"Exile_Item_InstaDoc",10},
			{"Exile_Item_Energydrink",10},{"Exile_Item_ExtensionCord",5},{"Exile_Item_FloodLightKit",5},
			{"Exile_Item_FortificationUpgrade",5},{"Exile_Item_FuelCanisterFull",5},{"Exile_Item_GloriousKnakworst_Cooked",10},
			{"Exile_Item_LightBulb",5},{"Exile_Item_Matches",5},{"Exile_Item_MetalBoard",5},
			{"Exile_Item_MetalPole",5},{"Exile_Item_PlasticBottleFreshWater",10},{"Exile_Item_PortableGeneratorKit",5},
			{"Exile_Item_Rope",15},{"Exile_Item_SafeKit",15},{"Exile_Magazine_Battery",15}
		}
	},
	{
		"Construction Box Small",
		{
			{"Exile_Item_Flag",5},{"Exile_Item_WoodDoorKit",15},{"Exile_Item_WoodWallKit",15},
			{"Exile_Item_WoodWindowKit",15},{"Exile_Item_WoodFloorKit",15},{"Exile_Item_SafeKit",5}
		}
	},
	{
		"Support-Box",
		{
			"ItemMap",{"ItemGPS",5},"ItemWatch"
		}
	},
	{
		"Starter Kit",
		{
			{"Exile_Uniform_Woodland",1},
			{"V_TacVest_camo",1},
			{"H_Cap_grn",1},
			{"B_OutdoorPack_tan",1},
			{"Exile_Item_PlasticBottleCoffee",2},
			{"NVGoggles",1},
			{"Exile_Item_Cheathas",2},
			{"hgun_P07_F",1},
			{"16Rnd_9x21_Mag",2}
		}
	}
};


/* ***DANGER***DANGER***DANGER***DANGER***DANGER***DANGER***DANGER***DANGER***DANGER***DANGER */
/*
	THE KYLE MODE - by enabling it (setting it to true), you disable 99% of the AntiHack features.
	(DEFAULT VALUE: FALSE).
	This is only for those, that want to use the Admin Menu only!
*/
KYLE_MODE = false;
};