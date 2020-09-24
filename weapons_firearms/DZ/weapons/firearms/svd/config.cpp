////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\svd\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:36 2019 : 'file' last modified on Mon Dec 12 08:48:31 2016
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
	class DZ_Weapons_Firearms_SVD
	{
		units[] = {"SVD"};
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
	class svdBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\svd.rtm"};
		lootTag[] = {"Military_east"};
		weight = 3700;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberedRound = "";
		chamberSize = 1;
		camberableFrom[] = {"Ammo_762"};
		magazines[] = {"M_svd_10Rnd"};
		magazineSwitchTime = 0.25;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 5, 2]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerPro_SoundSet","SVD_silencerTail_SoundSet","SVD_silencerInteriorTail_SoundSet"},{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class SVD: svdBase
	{
		scope = 2;
		displayName = "SVD";
		descriptionShort = "The Dragunov sniper rifle, officially Sniper Rifle, System of Dragunov, is a semi-automatic sniper/designated marksman rifle developed in the Soviet Union. The Dragunov was designed as a squad support weapon since, according to Soviet and Soviet-derived military doctrines, the long-range engagement ability was lost to ordinary troops when submachine guns and assault rifles were adopted.";
		model = "\dz\weapons\firearms\svd\svd.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsAK"};
		baseAttachments[] = {"Att_Optic_PSO1"};
		randomAttachments[] = {{"Att_Optic_Kashtan","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1","Att_Optic_PSO1"},{"M_svd_10Rnd","","","","","","","","",""}};
		dexterity = 2.3;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\svd\Data\SVD.rvmat","DZ\weapons\firearms\svd\Data\SVD_damage.rvmat","DZ\weapons\firearms\svd\Data\SVD_destruct.rvmat"};
		};
	};
	class EN5C_SVD_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\svd.rtm"};
		lootTag[] = {"Military_east"};
		weight = 3700;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberedRound = "";
		chamberSize = 1;
		camberableFrom[] = {"EN5C_Ammo_762x54"};
		magazines[] = {"EN5C_Mag_SVD_10Rnd"};
		magazineSwitchTime = 0.25;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 5, 2]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\svd\svd_reload",1,1,30};
		reloadAction = "ReloadSVD";
		modes[] = {"SemiAuto"};
		class SemiAuto: Mode_SemiAuto
		{
			soundSetShot[] = {"SVD_Shot_SoundSet","SVD_Tail_SoundSet","SVD_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"SVD_silencerPro_SoundSet","SVD_silencerTail_SoundSet","SVD_silencerInteriorTail_SoundSet"},{"SVD_silencerHomeMade_SoundSet","SVD_silencerHomeMadeTail_SoundSet","SVD_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\svd\svd_single_0",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\svd\svd_single_1",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\svd\svd_single_2",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.1;
			recoil = "recoil_svd";
			recoilProne = "recoil_svd_prone";
			dispersion = 0.00075;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class EN5C_SVD: EN5C_SVD_Base
	{
		scope = 2;
		displayName = "EN5C_SVD";
		descriptionShort = "EN5C_The Dragunov sniper rifle, officially Sniper Rifle, System of Dragunov, is a semi-automatic sniper/designated marksman rifle developed in the Soviet Union. The Dragunov was designed as a squad support weapon since, according to Soviet and Soviet-derived military doctrines, the long-range engagement ability was lost to ordinary troops when submachine guns and assault rifles were adopted.";
		model = "\dz\weapons\firearms\svd\svd.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsAK"};
		baseAttachments[] = {"EN5C_PSO1Optic"};
		randomAttachments[] = {{"EN5C_KashtanOptic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic","EN5C_PSO1Optic"},{"EN5C_Mag_SVD_10Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.3;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\svd\Data\SVD.rvmat","DZ\weapons\firearms\svd\Data\SVD_damage.rvmat","DZ\weapons\firearms\svd\Data\SVD_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_svd[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_svd_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
