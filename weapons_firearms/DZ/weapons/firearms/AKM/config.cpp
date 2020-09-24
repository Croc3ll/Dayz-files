////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\AKM\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:29 2019 : 'file' last modified on Mon Dec 12 08:45:15 2016
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
	class DZ_Weapons_Firearms_AKM
	{
		units[] = {"AKM"};
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
	class AKMBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"};
		lootTag[] = {"Military_east"};
		itemSize[] = {6,3};
		weight = 2140;
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
		camberableFrom[] = {"Ammo_762x39"};
		magazines[] = {"M_akm_30Rnd","M_akm_palm30","M_akm_palm30_green","M_akm_palm30_black","M_akm_drum","M_akm_drum_Green","M_akm_drum_Black"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 4, 1.9]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class AKM: AKMBase
	{
		scope = 2;
		displayName = "AKM";
		descriptionShort = "AKM stands for Kalashnikov modernized automatic rifle. It is a common modernized variant of the AK-47 rifle. It is gas operated with a rotating bolt. It has a lot of compatible attachments.";
		model = "\dz\weapons\firearms\AKM\AKM.p3d";
		attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponBayonetAK","suppressorImpro","weaponMuzzleAK"};
		baseAttachments[] = {"Att_Buttstock_AK_Wood","Att_Handguard_AK_Wood"};
		randomAttachments[] = {{"Att_Buttstock_AK74","Att_Buttstock_AK_Folding","Att_Buttstock_AK_Plastic","Att_Buttstock_AKS74U","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Wood"},{"Att_Handguard_AK74","Att_Handguard_AK_Rail","Att_Handguard_AK_Plastic","Att_Handguard_AK_Wood","Att_Handguard_AK_Wood","Att_Handguard_AK_Wood","Att_Handguard_AK_Wood","Att_Handguard_AK_Wood","Att_Handguard_AK_Wood"},{"Att_Optic_Kashtan","Att_Optic_PSO11","","","","","","","","","","","","","","","","","",""},{"Att_Suppressor_AK","","","","","","","","",""},{"M_akm_30Rnd","","","","","","","","",""}};
		dexterity = 2.75;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AKM\Data\AKM.rvmat","DZ\weapons\firearms\AKM\Data\AKM_damage.rvmat","DZ\weapons\firearms\AKM\Data\AKM_destruct.rvmat"};
		};
	};
	class EN5C_AKM_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"};
		lootTag[] = {"Military_east"};
		weight = 2140;
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
		camberableFrom[] = {"EN5C_Ammo_762x39"};
		magazines[] = {"EN5C_Mag_AKM_30Rnd","EN5C_Mag_AKM_Palm30Rnd","EN5C_Mag_AKM_Palm30Rnd_Black","EN5C_Mag_AKM_Palm30Rnd_Green","EN5C_Mag_AKM_Drum75Rnd","EN5C_Mag_AKM_Drum75Rnd_Green","EN5C_Mag_AKM_Drum75Rnd_Black"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 4, 1.9]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\akm\Akm_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\akm\Akm_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\akm\Akm_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_AKM";
			recoilProne = "recoil_AKM_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class EN5C_AKM: EN5C_AKM_Base
	{
		scope = 2;
		displayName = "EN5C_AKM";
		descriptionShort = "EN5C_AKM stands for Kalashnikov modernized automatic rifle. It is a common modernized variant of the AK-47 rifle. It is gas operated with a rotating bolt. It has a lot of compatible attachments.";
		model = "\dz\weapons\firearms\AKM\AKM.p3d";
		attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponBayonetAK","suppressorImpro","weaponMuzzleAK"};
		baseAttachments[] = {"EN5C_AK_WoodBttstck","EN5C_AK_WoodHndgrd"};
		randomAttachments[] = {{"EN5C_AK74_WoodBttstck","EN5C_AK_FoldingBttstck","EN5C_AK_PlasticBttstck","EN5C_AKS74U_Bttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck"},{"EN5C_AK74_Hndgrd","EN5C_AK_RailHndgrd","EN5C_AK_PlasticHndgrd","EN5C_AK_WoodHndgrd","EN5C_AK_WoodHndgrd","EN5C_AK_WoodHndgrd","EN5C_AK_WoodHndgrd","EN5C_AK_WoodHndgrd","EN5C_AK_WoodHndgrd"},{"EN5C_KashtanOptic","EN5C_PSO11Optic","","","","","","","","","","","","","","","","","",""},{"EN5C_AK_Suppressor","","","","","","","","",""},{"EN5C_Mag_AKM_30Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.75;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AKM\Data\AKM.rvmat","DZ\weapons\firearms\AKM\Data\AKM_damage.rvmat","DZ\weapons\firearms\AKM\Data\AKM_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_AKM[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_AKM_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
