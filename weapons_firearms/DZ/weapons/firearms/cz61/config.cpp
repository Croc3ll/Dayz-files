////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\cz61\config.bin
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
	class DZ_Weapons_Firearms_cz61
	{
		units[] = {"cz61"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Weapons_Firearms"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class MilitaryRifle;
	class CZ61_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\CZ61.rtm"};
		lootTag[] = {"Police","Military_east"};
		itemSize[] = {3,2};
		weight = 1280;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_380"};
		magazines[] = {"M_CZ61_20Rnd"};
		magazineSwitchTime = 0.3;
		barrelArmor = 800;
		ejectType = 1;
		recoilModifier = "[1, 2.25, 1.2]";
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadCZ61";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CZ61_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ61_silencerPro_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.092;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class CZ61: CZ61_Base
	{
		scope = 2;
		displayName = "CZ61 Skorpion";
		descriptionShort = "Skorpion is Czechoslovak submachine gun produced under the official designation - submachine gun model 1961. It was developed for use with security forces and special forces, the weapon was also accepted into service with the Czechoslovak Army.";
		model = "\dz\weapons\firearms\cz61\CZ61.p3d";
		attachments[] = {"suppressorImpro","weaponMuzzleAK"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Suppressor_AK","","","","","","","","",""},{"M_CZ61_20Rnd","","","","","","","","",""}};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz61\data\cz61_main_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz61\data\cz61.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\cz61\data\cz61.rvmat","DZ\weapons\firearms\cz61\data\cz61_damage.rvmat","DZ\weapons\firearms\cz61\data\cz61_destruct.rvmat"};
		};
	};
	class EN5C_CZ61_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\CZ61.rtm"};
		lootTag[] = {"Police","Military_east"};
		weight = 1280;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"EN5C_Ammo_380"};
		magazines[] = {"EN5C_Mag_CZ61_20Rnd"};
		magazineSwitchTime = 0.3;
		barrelArmor = 800;
		ejectType = 1;
		recoilModifier = "[1, 2.25, 1.2]";
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadCZ61";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_reload_0mod",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"CZ61_Shot_SoundSet","CZ61_Tail_SoundSet","CZ61_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CZ61_silencerPro_SoundSet","CZ61_silencerTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"},{"CZ61_silencerHomeMade_SoundSet","CZ61_silencerHomeMadeTail_SoundSet","CZ61_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_0",0.7,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\pm63rak\pm63rak_single_1",0.7,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,200};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.092;
			recoil = "recoil_cz61";
			recoilProne = "recoil_cz61_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class EN5C_CZ61: EN5C_CZ61_Base
	{
		scope = 2;
		displayName = "EN5C_CZ61 Skorpion";
		descriptionShort = "EN5C_Skorpion is Czechoslovak submachine gun produced under the official designation - submachine gun model 1961. It was developed for use with security forces and special forces, the weapon was also accepted into service with the Czechoslovak Army.";
		model = "\dz\weapons\firearms\cz61\CZ61.p3d";
		attachments[] = {"suppressorImpro","weaponMuzzleAK"};
		baseAttachments[] = {};
		randomAttachments[] = {{"EN5C_AK_Suppressor","","","","","","","","",""},{"EN5C_Mag_CZ61_20Rnd","","","","","","","","",""}};
		itemSize[] = {5,4};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz61\data\cz61_main_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz61\data\cz61.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\cz61\data\cz61.rvmat","DZ\weapons\firearms\cz61\data\cz61_damage.rvmat","DZ\weapons\firearms\cz61\data\cz61_destruct.rvmat"};
		};
	};
};
class cfgRecoils
{
	recoil_cz61[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_cz61_prone[] = {0,0,0,0.004,"0.036943*(0.02)","0.0134348*(0.1)",0.008,"0.019755*(0.02)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.02)","-0.0005*(0.1)",0.008,"-0.001177*(0.02)","-0.000188*(0.1)",0.012,0,0};
};
