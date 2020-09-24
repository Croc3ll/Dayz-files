////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\cz527\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:30 2019 : 'file' last modified on Mon Dec 12 08:47:43 2016
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
	class DZ_Weapons_Firearms_CZ527
	{
		units[] = {"cz527","cz527_Black","cz527_Green","cz527_Green_Black","cz527_Black_Green"};
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
	class cz527Base: Rifle
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
		camberableFrom[] = {"Ammo_762x39"};
		magazines[] = {"M_cz527_5rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		ejectType = 0;
		recoilModifier = "[1, 5, 2.25]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencer_SoundSet","CR527_silencerTail_SoundSet","CR527_silencerInteriorTail_SoundSet"},{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class cz527: cz527Base
	{
		scope = 2;
		displayName = "CR527 Carbine";
		descriptionShort = "The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'.";
		model = "\dz\weapons\firearms\cz527\cz527.p3d";
		attachments[] = {"weaponBipod","weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Optic_Hunting","","","","","",""},{"M_cz527_5rnd","","","","","",""}};
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz527\data\cz527_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz527\data\cz527.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\cz527\data\cz527.rvmat","DZ\weapons\firearms\cz527\data\cz527_damage.rvmat","DZ\weapons\firearms\cz527\data\cz527_destruct.rvmat"};
		};
	};
	class cz527_Black: cz527
	{
		scope = 2;
		descriptionShort = "The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'. This one has been spraypainted black.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class cz527_Green: cz527
	{
		scope = 2;
		descriptionShort = "The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'. This one has been spraypainted green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class cz527_Green_Black: cz527
	{
		scope = 2;
		descriptionShort = "The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'. This one has been spraypainted camo.";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz527\data\cz527_camo_co.paa"};
	};
	class cz527_Black_Green: cz527_Green_Black{};
	class EN5C_CZ527_Base: Rifle
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
		camberableFrom[] = {"EN5C_Ammo_762x39"};
		magazines[] = {"EN5C_Mag_CZ527_5rnd"};
		magazineSwitchTime = 0.38;
		barrelArmor = 900;
		ejectType = 0;
		recoilModifier = "[1, 5, 2.25]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_reload_0",1,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\CR527\cz527_cycling_0",1,1,20};
		reloadAction = "Reloadcz527";
		shotAction = "Reloadcz527Shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"CR527_Shot_SoundSet","CR527_Tail_SoundSet","CR527_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"CR527_silencer_SoundSet","CR527_silencerTail_SoundSet","CR527_silencerInteriorTail_SoundSet"},{"CR527_silencerHomeMade_SoundSet","CR527_silencerHomeMadeTail_SoundSet","CR527_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\cz527\cz527_single_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_cz527";
			recoilProne = "recoil_cz527_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class EN5C_CZ527: EN5C_CZ527_Base
	{
		scope = 2;
		displayName = "EN5C_CR527 Carbine";
		descriptionShort = "EN5C_The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'.";
		model = "\dz\weapons\firearms\cz527\cz527.p3d";
		attachments[] = {"weaponBipod","weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"EN5C_HuntingOptic","","","","","",""},{"EN5C_Mag_CZ527_5rnd","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz527\data\cz527_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\cz527\data\cz527.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\cz527\data\cz527.rvmat","DZ\weapons\firearms\cz527\data\cz527_damage.rvmat","DZ\weapons\firearms\cz527\data\cz527_destruct.rvmat"};
		};
	};
	class EN5C_CZ527_Black: EN5C_CZ527
	{
		scope = 2;
		descriptionShort = "EN5C_The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'. This one has been spraypainted black.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class EN5C_CZ527_Green: EN5C_CZ527
	{
		scope = 2;
		descriptionShort = "EN5C_The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'. This one has been spraypainted green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class EN5C_CZ527_Camo: EN5C_CZ527
	{
		scope = 2;
		descriptionShort = "EN5C_The CR527 carbine is a bolt-action, magazine-fed, light weight, intermediate range ‘brush gun'. This one has been spraypainted camo.";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\cz527\data\cz527_camo_co.paa"};
	};
};
class cfgRecoils
{
	recoil_cz527[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(2)",0.08,"0.019755*(0.5)","0.003056*(2)",0.09,0,0,0.14,"-0.003138*(0.5)","-0.0005*(2)",0.08,"-0.001177*(0.5)","-0.000188*(2)",0.12,0,0};
	recoil_cz527_prone[] = {0,0,0,0.04,"0.036943*(0.3)","0.0134348*(1)",0.08,"0.019755*(0.3)","0.003056*(1)",0.09,0,0,0.14,"-0.003138*(0.3)","-0.0005*(1)",0.08,"-0.001177*(0.3)","-0.000188*(1)",0.12,0,0};
};
