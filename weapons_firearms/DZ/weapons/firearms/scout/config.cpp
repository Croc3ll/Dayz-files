////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\scout\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:35 2019 : 'file' last modified on Mon Dec 12 08:48:31 2016
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
	class DZ_Weapons_Firearms_Scout
	{
		units[] = {"Scout"};
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
	class ScoutBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\cz527.rtm"};
		animName = "cz527";
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
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_308Win"};
		magazines[] = {"M_Scout_5Rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		ejectType = 0;
		recoilModifier = "[1, 5, 2.25]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\cz527\cz527_reload_0",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\cz527\cz527_cycling_0",0.8,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_scout";
			recoilProne = "recoil_scout_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class Scout: ScoutBase
	{
		scope = 2;
		displayName = "Scout Rifle";
		descriptionShort = "...";
		model = "\dz\weapons\firearms\scout\scout.p3d";
		attachments[] = {"weaponOptics","weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Optic_M68","Att_Optic_ACOG","Att_Optic_ACOG","Att_Optic_ACOG","Att_Optic_ACOG","Att_Optic_ACOG","","","","",""},{"M_Scout_5rnd",""}};
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\scout\data\scout_blk_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\scout\data\scout.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\scout\data\scout.rvmat","DZ\weapons\firearms\scout\data\scout_damage.rvmat","DZ\weapons\firearms\scout\data\scout_destruct.rvmat"};
		};
	};
	class Scout_Black: Scout
	{
		scope = 2;
		descriptionShort = "...";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\scout\data\scout_co.paa"};
	};
	class Scout_Green: Scout
	{
		scope = 2;
		descriptionShort = "...";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\scout\data\scout_grn_co.paa"};
	};
};
class cfgRecoils
{
	recoil_cz527[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_cz527_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
