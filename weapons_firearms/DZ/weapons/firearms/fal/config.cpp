////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\fal\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:30 2019 : 'file' last modified on Mon Dec 12 08:48:02 2016
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
	class DZ_Weapons_Firearms_FAL
	{
		units[] = {"FAL"};
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
	class FalBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\fn_fal.rtm"};
		weight = 3700;
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
		magazines[] = {"M_Fal_20Rnd"};
		magazineSwitchTime = 0.45;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 5, 2]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
		reloadAction = "ReloadFal";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerPro_SoundSet","FNFAL_silencerTail_SoundSet","FNFAL_silencerInteriorTail_SoundSet"},{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class Fal: FalBase
	{
		scope = 2;
		displayName = "FAL";
		descriptionShort = "The right arm of the free world.";
		model = "\dz\weapons\firearms\fal\fal_rifle.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponButtstockFal","weaponOptics"};
		baseAttachments[] = {"Att_Buttstock_FalOe"};
		randomAttachments[] = {{"Att_Optic_BUIS","Att_Optic_M68","Att_Optic_M4T3NRDS","Att_Optic_Reflex","Att_Optic_ACOG","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Att_Buttstock_FalFolding","Att_Buttstock_FalOe","Att_Buttstock_FalOe","Att_Buttstock_FalOe"},{"M_Fal_20Rnd","","","","","","","","",""}};
		dexterity = 2.3;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\fal\data\fal.rvmat","DZ\weapons\firearms\fal\data\fal_damage.rvmat","DZ\weapons\firearms\fal\data\fal_destruct.rvmat"};
		};
	};
	class EN5C_FAL_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\fn_fal.rtm"};
		weight = 3700;
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
		camberableFrom[] = {"EN5C_Ammo_308Win"};
		magazines[] = {"EN5C_Mag_FAL_20Rnd"};
		magazineSwitchTime = 0.45;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 5, 2]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
		reloadAction = "ReloadFal";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"FNFAL_Shot_SoundSet","FNFAL_Tail_SoundSet","FNFAL_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"FNFAL_silencerPro_SoundSet","FNFAL_silencerTail_SoundSet","FNFAL_silencerInteriorTail_SoundSet"},{"FNFAL_silencerHomeMade_SoundSet","FNFAL_silencerHomeMadeTail_SoundSet","FNFAL_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_fal";
			recoilProne = "recoil_fal_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class EN5C_FAL: EN5C_FAL_Base
	{
		scope = 2;
		displayName = "EN5C_FAL";
		descriptionShort = "EN5C_The right arm of the free world.";
		model = "\dz\weapons\firearms\fal\fal_rifle.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponButtstockFal","weaponOptics"};
		baseAttachments[] = {"EN5C_Fal_OeBttstck"};
		randomAttachments[] = {{"EN5C_BUISOptic","EN5C_M68Optic","EN5C_M4_T3NRDSOptic","EN5C_ReflexOptic","EN5C_ACOGOptic","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"EN5C_Fal_FoldingBttstck","EN5C_Fal_OeBttstck","EN5C_Fal_OeBttstck","EN5C_Fal_OeBttstck"},{"EN5C_Mag_FAL_20Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.3;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\fal\data\fal.rvmat","DZ\weapons\firearms\fal\data\fal_damage.rvmat","DZ\weapons\firearms\fal\data\fal_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_fal[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_fal_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
