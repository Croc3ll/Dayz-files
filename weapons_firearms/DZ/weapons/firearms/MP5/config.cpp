////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\MP5\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:31 2019 : 'file' last modified on Mon Dec 12 08:45:58 2016
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
	class DZ_Weapons_Firearms_MP5
	{
		units[] = {"MP5K"};
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
	class MilitaryRifle;
	class MP5_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\mp5k.rtm"};
		lootTag[] = {"Police"};
		weight = 1840;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_9mm"};
		magazines[] = {"M_MP5_15Rnd","M_MP5_30Rnd"};
		magazineSwitchTime = 0.5;
		ejectType = 1;
		recoilModifier = "[1, 3.25, 1.7]";
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_reload",0.8,1,20};
		reloadAction = "ReloadMP5";
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"MP5K_Shot_SoundSet","MP5K_Tail_SoundSet","MP5K_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"MP5K_silencerPro_SoundSet","MP5K_silencerTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"},{"MP5K_silencerHomeMade_SoundSet","MP5K_silencerHomeMadeTail_SoundSet","MP5K_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\mp5k\mp5k_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.067;
			recoil = "recoil_mp5";
			recoilProne = "recoil_mp5_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class MP5K: MP5_Base
	{
		scope = 2;
		displayName = "MP5-K";
		descriptionShort = "The MP5 is one of the most widely used submachine guns in the world, it uses slightly curved, steel magazines with a 15-round capacity or a 30-round capacity. It has a hammer firing mechanism. The trigger group is housed inside an interchangeable polymer trigger module (with an integrated pistol grip).";
		model = "\dz\weapons\firearms\MP5\MP5K.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","weaponButtstockMP5","weaponMuzzleMP5","WeaponHandguardMP5","pistolMuzzle"};
		baseAttachments[] = {"Att_Handguard_MP5_Plastic"};
		randomAttachments[] = {{"Att_Optic_BUIS","Att_Optic_M68","Att_Optic_M4T3NRDS","Att_Optic_Reflex","Att_Optic_ACOG","","","","","","","","",""},{"Att_Handguard_MP5_Rail","Att_Handguard_MP5_Plastic","Att_Handguard_MP5_Plastic"},{"Att_Buttstock_MP5_Stock","",""},{"Att_Compensator_MP5","Att_Suppressor_Pistol","","","","",""},{"M_MP5_15Rnd","M_MP5_30Rnd","","",""}};
		dexterity = 3.2;
		itemSize[] = {4,3};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\MP5\data\mp5k_body_CO.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\MP5\data\mp5k_body.rvmat","DZ\weapons\firearms\MP5\data\mp5k_body_damage.rvmat","DZ\weapons\firearms\MP5\data\mp5k_body_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_mp5[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_mp5_prone[] = {0,0,0,0.004,"0.036943*(0.02)","0.0134348*(0.1)",0.008,"0.019755*(0.02)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.02)","-0.0005*(0.1)",0.008,"-0.001177*(0.02)","-0.000188*(0.1)",0.012,0,0};
};
