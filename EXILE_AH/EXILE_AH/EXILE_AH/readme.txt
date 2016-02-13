
Installation-Guide (How to install):
===================
SERVER:
	01. Open the .zip file you have gotten from the store and go into the subfolder "SERVER_ARMA3_FOLDER"
	02. Copy & Paste the folder "@infiSTAR_servermod" (and all the DLL files) into your Arma3 server folder (not in any sub folder of the Arma3 server folder)
	03. Go into "SERVER_ARMA3_FOLDER\@infiSTAR_servermod\addons\a3_infiSTAR" and modify the "EXILE_AHAT_CONFIG.sqf" to your needs.
	04. Once you are done, make a PBO file out of the "a3_infiSTAR" folder (You can use PBO Manager or similar tools) and remove the Folder after doing that (so only the pbo is left here: "@infiSTAR_servermod\addons")
	05. Modify your start .bat file or server init line so it has this "-servermod=@infiSTAR_servermod;"
		Example from my test-server:
		-enableHT -autoinit "-servermod=@ExileServer;@infiSTAR_servermod" "-mod=@Exile"
	06. Open the "EXILE_AHAT_CONFIG.sqf" and add your AdminUID(s), then check if the different settings are fine for you :) - do not edit the other files.
		It is the most important thing that you read carefully through the "EXILE_AHAT_CONFIG.sqf" and set all settings correctly for your server.
	07. Default Open Menu Key is F1


MPMission - the hpp file (adminmenu):
	To use the adminmenu Dialog you will need to edit your current MPMission.
	Go into your servers MPMissions folder and unpack the mission pbo file you want to run.
	Now open the "description.ext" and add this (I did it at the very top):
	#include "adminmenu.hpp"
	Now you need to copy the "adminmenu.hpp" file from "MPMission Addition(s)" into the MPMission (so it is right next to your "description.ext").
	Repack the mission to a pbo again.
	You have to do this, or you will not be able to open the AdminMenu..!



Good to know - Keybinds:
1. You can spectate by double clicking the name of a player in the admin menu.
2. Keybinds:
	F1 - Default AdminMenu Key
	F6 - Heal Yourself
	F7 - Heal & Repair withing 15m
	F10 - Stop Spectating
	F11 - Add Ammo for current weapon
	SHIFT & 4 - Fly Up
	SHIFT & 5 - Teleport in looking direction (if enabled)
	SHIFT & 6 - Eject CursorTarget
	SHIFT & F2 - Adminconsole
	SHIFT & TAB - Open Map
	SHIFT & I - Show Info
	DELETE - Delete CursorTarget
3. If the map is opened and you hold LEFT-ALT key, you can click on the map and teleport there!
4. If you are added in the EXILE_AHAT_CONFIG.sqf as an admin, you are able to change from admin to a normal player and back by typing !admin in the chat.