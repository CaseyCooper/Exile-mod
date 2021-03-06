/*
	Author: Chris(tian) "infiSTAR" Lorenzen
	Contact: infiSTAR23@gmail.com // www.infiSTAR.de
	
	Copyright infiSTAR - 2011 - 2016. All rights reserved.
	Christian (Chris) L. (infiSTAR23@gmail.com) Developer of infiSTAR
	
	Description:
	Arma AntiHack & AdminTools - infiSTAR.de
*/
#include "EXILE_AHAT_CONFIG.hpp"
class CfgPatches
{
	class a3_infiSTAR_Exile
	{
		requiredVersion = 0.1790;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		a3_infiSTAR_Exile_version = 0.1790;
		author[]= {"Chris(tian) 'infiSTAR' Lorenzen"};
	};
};
class CfgFunctions
{
	class a3_infiSTAR_Exile
	{
		class main
		{
			file = "a3_infiSTAR_Exile";
			class preInit { preInit = 1; };
		};
	};
};
#include "CUSTOM_FUNCTIONS.hpp"