////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\Ruger1022\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:34 2019 : 'file' last modified on Mon Dec 12 08:45:59 2016
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
	class DZ_Weapons_Firearms_Ruger1022
	{
		units[] = {"Ruger1022","Ruger1022_Black","Ruger1022_Green"};
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
	class Ruger1022Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\ruger1022.rtm"};
		lootTag[] = {"Civilian","Hunting"};
		weight = 2300;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 1;
		useModelOptics = 0;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_22"};
		magazines[] = {"M_22_Ruger_30Rnd","M_22_Ruger_10Rnd"};
		magazineSwitchTime = 0.4;
		barrelArmor = 300;
		ejectType = 1;
		recoilModifier = "[1, 2, 1.5]";
		drySound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",0.8,1,20};
		reloadAction = "ReloadRuger1022";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Ruger1022_Shot_SoundSet","Ruger1022_Tail_SoundSet","Ruger1022_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Ruger1022_silencer_SoundSet","Ruger1022_silencerTail_SoundSet","Ruger1022_silencerInteriorTail_SoundSet"},{"Ruger1022_silencerHomeMade_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",1,1,300};
			begin2[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_1auth",1,1,300};
			begin3[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_2",1,1,300};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",0.1,1,50};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_1outof10";
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
	};
	class Ruger1022: Ruger1022Base
	{
		scope = 2;
		displayName = "Sporter 22";
		descriptionShort = "A popular rifle its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		model = "\dz\weapons\firearms\Ruger1022\Ruger1022.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Optic_Hunting","","","","","","","","","",""},{"M_22_Ruger_30Rnd","M_22_Ruger_10Rnd","","","","","","","","","","","","","","","","","",""}};
		dexterity = 3.15;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Ruger1022\Data\ruger1022.rvmat","DZ\weapons\firearms\Ruger1022\Data\ruger1022_damage.rvmat","DZ\weapons\firearms\Ruger1022\Data\ruger1022_destruct.rvmat"};
		};
	};
	class Ruger1022_Black: Ruger1022
	{
		scope = 2;
		descriptionShort = "A popular black painted rifle its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_black_co.paa"};
	};
	class Ruger1022_Green: Ruger1022
	{
		scope = 2;
		descriptionShort = "A popular green painted rifle its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_green_co.paa"};
	};
	class EN5C_Ruger1022_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\ruger1022.rtm"};
		lootTag[] = {"Civilian","Hunting"};
		weight = 2300;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 50;
		distanceZoomMax = 50;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 1;
		useModelOptics = 0;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"EN5C_Ammo_22"};
		magazines[] = {"EN5C_Mag_Ruger1022_30Rnd","EN5C_Mag_Ruger1022_10Rnd"};
		magazineSwitchTime = 0.4;
		barrelArmor = 300;
		ejectType = 1;
		recoilModifier = "[1, 2, 1.5]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_reload",0.8,1,20};
		reloadAction = "ReloadRuger1022";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Ruger1022_Shot_SoundSet","Ruger1022_Tail_SoundSet","Ruger1022_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Ruger1022_silencer_SoundSet","Ruger1022_silencerTail_SoundSet","Ruger1022_silencerInteriorTail_SoundSet"},{"Ruger1022_silencerHomeMade_SoundSet","Ruger1022_silencerHomeMadeTail_SoundSet","Ruger1022_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",1,1,300};
			begin2[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_1auth",1,1,300};
			begin3[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_2",1,1,300};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\Ruger1022\Ruger1022_close_0auth",0.1,1,50};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_1outof10";
			dispersion = 0.0025;
			magazineSlot = "magazine";
		};
	};
	class EN5C_Ruger1022: EN5C_Ruger1022_Base
	{
		scope = 2;
		displayName = "EN5C_Sporter 22";
		descriptionShort = "EN5C_A popular rifle its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		model = "\dz\weapons\firearms\Ruger1022\Ruger1022.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"EN5C_HuntingOptic","","","","","","","","","",""},{"EN5C_Mag_Ruger1022_30Rnd","EN5C_Mag_Ruger1022_10Rnd","","","","","","","","","","","","","","","","","",""}};
		dexterity = 3.15;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Ruger1022\Data\ruger1022.rvmat","DZ\weapons\firearms\Ruger1022\Data\ruger1022_damage.rvmat","DZ\weapons\firearms\Ruger1022\Data\ruger1022_destruct.rvmat"};
		};
	};
	class EN5C_Ruger1022_Black: EN5C_Ruger1022
	{
		scope = 2;
		descriptionShort = "EN5C_A popular black painted rifle its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_black_co.paa"};
	};
	class EN5C_Ruger1022_Green: EN5C_Ruger1022
	{
		scope = 2;
		descriptionShort = "EN5C_A popular green painted rifle its low cost, slight recoil, and small noise signature makes it a great choice for firearms training, small-game hunting, and recreational shooting.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Ruger1022\data\ruger1022_green_co.paa"};
	};
};
