////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\repeater\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:33 2019 : 'file' last modified on Mon Dec 12 08:48:31 2016
////////////////////////////////////////////////////////////////////

#define _ARMA_

//(12 Enums)
enum {
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	destructno = 0,
	stabilizedinaxesboth = 3,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};

class CfgPatches
{
	class DZ_Weapons_Firearms_Repeater
	{
		units[] = {"Repeater"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle;
	class RepeaterBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\repeater.rtm"};
		animName = "Repeater";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2720;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 7;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_357"};
		magazines[] = {};
		barrelArmor = 260;
		ejectType = 0;
		recoilModifier = "[1, 3, 2.5]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_cycle_0",0.8,1,20};
		reloadSkips[] = {0.21,0.35,0.48,0.59,0.69,0.78};
		reloadAction = "ReloadRepeater";
		shotAction = "ReloadRepeaterShot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_single_0",3.981072,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\rossim92\rossim92_single_1",3.981072,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_repeater";
			recoilProne = "recoil_repeater_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class Repeater: RepeaterBase
	{
		scope = 2;
		displayName = "Repeater";
		descriptionShort = "Legendary lever action rifle, a true cowboy's best companion. Uses .357 caliber ammunition.";
		model = "\dz\weapons\firearms\repeater\repeater.p3d";
		attachments[] = {"weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		dexterity = 2.8;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\repeater\data\repeater_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\repeater\data\repeater.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\repeater\data\repeater.rvmat","DZ\weapons\firearms\repeater\data\repeater_damage.rvmat","DZ\weapons\firearms\repeater\data\repeater_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_repeater[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_repeater_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
