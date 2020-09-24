////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\aug\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:29 2019 : 'file' last modified on Mon Dec 12 08:46:40 2016
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
	class DZ_Weapons_Firearms_aug
	{
		units[] = {"AugSteyr"};
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
	class AugSteyr_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\aug.rtm"};
		lootTag[] = {"Military_west"};
		weight = 3600;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		opticsZoomInit = 0.28;
		opticsPPEffects[] = {"-"};
		optics = 1;
		opticsFlare = 1;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_556"};
		magazines[] = {"M_STANAG_30Rnd","M_STANAG_30Rnd_Coupled","M_CMAG_10Rnd","M_CMAG_20Rnd","M_CMAG_30Rnd","M_CMAG_40Rnd","M_CMAG_10Rnd_Green","M_CMAG_20Rnd_Green","M_CMAG_30Rnd_Green","M_CMAG_40Rnd_Green","M_CMAG_10Rnd_Black","M_CMAG_20Rnd_Black","M_CMAG_30Rnd_Black","M_CMAG_40Rnd_Black"};
		magazineSwitchTime = 0.38;
		barrelArmor = 2390;
		ejectType = 1;
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 1;
		reloadAction = "ReloadAug";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_reload",0.8,1,20};
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class AugSteyr: AugSteyr_Base
	{
		scope = 2;
		displayName = "Steyr AUG Automatic Rifle";
		descriptionShort = "The AUG, a bullpup automatic rifle, is a selective fire weapon with a conventional gas piston operated action that fires from a closed bolt. It can be quickly adapted to a wide variety of roles with the change of the barrel to a desired length and profile, the AUG is a modular configuration rifle that employs a high level of polymer and advanced alloy components.";
		model = "\dz\weapons\firearms\aug\aug.p3d";
		attachments[] = {"weaponMuzzleM4","suppressorImpro"};
		randomAttachments[] = {{"Att_Suppressor_M4","","","","","","","","",""},{"M_STANAG_30Rnd","M_CMAG_10Rnd","M_CMAG_20Rnd","M_CMAG_30Rnd","M_CMAG_40Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		dexterity = 3.0;
		spawnDamageMax = 0.6;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\aug\data\aug_barrel_base.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_base_damage.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_base_destruct.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_short.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_short_damage.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_short_destruct.rvmat","DZ\weapons\firearms\aug\data\aug_stock.rvmat","DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat","DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat","DZ\weapons\firearms\aug\data\scope.rvmat","DZ\weapons\firearms\aug\data\scope_damage.rvmat","DZ\weapons\firearms\aug\data\scope_destruct.rvmat"};
		};
	};
	class EN5C_AugSteyr_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\aug.rtm"};
		lootTag[] = {"Military_west"};
		weight = 3600;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		opticsZoomMin = 0.28;
		opticsZoomMax = 0.28;
		opticsZoomInit = 0.28;
		opticsPPEffects[] = {"-"};
		optics = 1;
		opticsFlare = 1;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"EN5C_Ammo_556x45"};
		magazines[] = {"EN5C_Mag_STANAG_30Rnd","EN5C_Mag_STANAGCoupled_30Rnd","EN5C_Mag_CMAG_10Rnd","EN5C_Mag_CMAG_20Rnd","EN5C_Mag_CMAG_30Rnd","EN5C_Mag_CMAG_40Rnd","EN5C_Mag_CMAG_10Rnd_Green","EN5C_Mag_CMAG_20Rnd_Black","EN5C_Mag_CMAG_30Rnd_Green","EN5C_Mag_CMAG_40Rnd_Green","EN5C_Mag_CMAG_10Rnd_Black","EN5C_Mag_CMAG_20Rnd_Black","EN5C_Mag_CMAG_30Rnd_Black","EN5C_Mag_CMAG_40Rnd_Black"};
		magazineSwitchTime = 0.38;
		barrelArmor = 2390;
		ejectType = 1;
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		discreteDistance[] = {300};
		discreteDistanceInitIndex = 1;
		reloadAction = "ReloadAug";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_reload",0.8,1,20};
		hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085;
			recoil = "recoil_single_primary_5outof10";
			recoilProne = "recoil_single_primary_prone_5outof10";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AUG_Shot_SoundSet","AUG_Tail_SoundSet","AUG_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AUG_silencer_SoundSet","AUG_silencerTail_SoundSet","AUG_silencerInteriorTail_SoundSet"},{"AUG_silencerHomeMade_SoundSet","AUG_silencerHomeMadeTail_SoundSet","AUG_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\steyraug\steyraug_shot_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.09;
			recoil = "recoil_auto_primary_5outof10";
			recoilProne = "recoil_auto_primary_prone_5outof10";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class EN5C_AugSteyr: EN5C_AugSteyr_Base
	{
		scope = 2;
		displayName = "EN5C_Steyr AUG Automatic Rifle";
		descriptionShort = "EN5C_The AUG, a bullpup automatic rifle, is a selective fire weapon with a conventional gas piston operated action that fires from a closed bolt. It can be quickly adapted to a wide variety of roles with the change of the barrel to a desired length and profile, the AUG is a modular configuration rifle that employs a high level of polymer and advanced alloy components.";
		model = "\dz\weapons\firearms\aug\aug.p3d";
		attachments[] = {"weaponMuzzleM4","suppressorImpro"};
		randomAttachments[] = {{"EN5C_M4_Suppressor","","","","","","","","",""},{"EN5C_Mag_STANAG_30Rnd","EN5C_Mag_CMAG_10Rnd","EN5C_Mag_CMAG_20Rnd","EN5C_Mag_CMAG_30Rnd","EN5C_Mag_CMAG_40Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 3.0;
		spawnDamageMax = 0.6;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\aug\data\aug_barrel_base.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_base_damage.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_base_destruct.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_short.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_short_damage.rvmat","DZ\weapons\firearms\aug\data\aug_barrel_short_destruct.rvmat","DZ\weapons\firearms\aug\data\aug_stock.rvmat","DZ\weapons\firearms\aug\data\aug_stock_damage.rvmat","DZ\weapons\firearms\aug\data\aug_stock_destruct.rvmat","DZ\weapons\firearms\aug\data\scope.rvmat","DZ\weapons\firearms\aug\data\scope_damage.rvmat","DZ\weapons\firearms\aug\data\scope_destruct.rvmat"};
		};
	};
};
