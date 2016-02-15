if (isServer) then {fn_crashdrop = compile preprocessFile "fn_crashdrop.sqf";};
player addAction ["Drop", "[2] call fn_crashdrop"];
player addAction ["Move in cargo", "if !(isNil 'veh') then {player allowDamage false;player moveInCargo (veh select 0);} else {hint 'There is no active drop/crash'};"];
player addAction ["Teleport to cargo", "if !(isNil 'cargo') then {player allowDamage false;player setPos position cargo;} else {hint 'There is no active cargo'};"];

// bAdmin Exile by Daz & Biabock

#define DEBUG false

[DEBUG] call compile preprocessFileLineNumbers "badmin\globalCompile.sqf";

if (!isDedicated) then
{
	if (hasInterface) then // Normal player
	{
		execVM "badmin\client\init.sqf";
	}
};

if (isServer) then
{
	diag_log "bAdmin - Initializing";
	[] execVM "badmin\server\init.sqf";
};

OPEN_bADMIN_FNC = {
	switch (_this) do {
		//Key U
		case 22: {
			nul = [] execVM "badmin\client\systems\adminPanel\checkAdmin.sqf";
		};
	};
};

waituntil {!isnull (finddisplay 46)};
(findDisplay 46) displayAddEventHandler ["KeyDown","_this select 1 call OPEN_bADMIN_FNC;false;"];

//color correction
[] execVM "effect.sqf";