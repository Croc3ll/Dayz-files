////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\AK101\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:29 2019 : 'file' last modified on Mon Dec 12 08:45:14 2016
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
	class DZ_Weapons_Firearms_AK101
	{
		units[] = {"AK101"};
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
	class Rifle;
	class AK101Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"};
		lootTag[] = {"Military_west"};
		weight = 3077;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		barrelArmor = 2560;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_556"};
		magazines[] = {"M_ak101_30Rnd","M_ak101_30Rnd_Black","M_ak101_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		ejectType = 1;
		recoilModifier = "[1, 3.8, 1.9]";
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK101";
			recoilProne = "recoil_AK101_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class AK101: AK101Base
	{
		scope = 2;
		displayName = "AK101";
		descriptionShort = "An assault rifle of the Kalashnikov series designed for the world export market. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		model = "\dz\weapons\firearms\AK101\ak101.p3d";
		baseAttachments[] = {"Att_Buttstock_AK_Plastic","Att_Handguard_AK_Plastic"};
		attachments[] = {"weaponButtstockAK","weaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponMuzzleAK","weaponBayonetAK","suppressorImpro"};
		randomAttachments[] = {{"Att_Buttstock_AK_Folding","Att_Buttstock_AK_Wood","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Plastic"},{"Att_Handguard_AK_Rail","Att_Handguard_AK_Wood","Att_Handguard_AK_Plastic","Att_Handguard_AK_Plastic","Att_Handguard_AK_Plastic","Att_Handguard_AK_Plastic"},{"Att_Optic_Kashtan","Att_Optic_PSO11","","","","","","","","","","","","","","","","","",""},{"Att_Suppressor_AK","","","","","","","","",""},{"M_ak101_30Rnd","","","","","","","","",""}};
		dexterity = 2.75;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK101\Data\ak101.rvmat","DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat","DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"};
		};
	};
	class AK101_Black: AK101
	{
		scope = 2;
		descriptionShort = "An assault black painted rifle of the Kalashnikov series designed for the world export market. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)"};
	};
	class AK101_Green: AK101
	{
		scope = 2;
		descriptionShort = "An assault green painted rifle of the Kalashnikov series designed for the world export market. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class EN5C_AK101_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"};
		lootTag[] = {"Military_west"};
		weight = 3077;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		barrelArmor = 2560;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"EN5C_Ammo_556x45"};
		magazines[] = {"EN5C_Mag_AK101_30Rnd","EN5C_Mag_AK101_30Rnd_Black","EN5C_Mag_AK101_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		ejectType = 1;
		recoilModifier = "[1, 3.8, 1.9]";
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\akm\Akm_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK101\ak101_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK101";
			recoilProne = "recoil_AK101_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class EN5C_AK101: EN5C_AK101_Base
	{
		scope = 2;
		displayName = "EN5C_AK101";
		descriptionShort = "EN5C_An assault rifle of the Kalashnikov series designed for the world export market. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		model = "\dz\weapons\firearms\AK101\ak101.p3d";
		baseAttachments[] = {"EN5C_AK_PlasticBttstck","EN5C_AK_PlasticHndgrd"};
		attachments[] = {"weaponButtstockAK","weaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponMuzzleAK","weaponBayonetAK","suppressorImpro"};
		randomAttachments[] = {{"EN5C_AK_FoldingBttstck","Att_Buttstock_AK_Wood","EN5C_AK_WoodBttstck","EN5C_AK_PlasticBttstck","EN5C_AK_PlasticBttstck","EN5C_AK_PlasticBttstck","EN5C_AK_PlasticBttstck","EN5C_AK_PlasticBttstck"},{"EN5C_AK_PlasticBttstck","EN5C_AK_WoodHndgrd","EN5C_AK_PlasticHndgrd","EN5C_AK_PlasticHndgrd","EN5C_AK_PlasticHndgrd","EN5C_AK_PlasticHndgrd"},{"EN5C_KashtanOptic","EN5C_PSO11Optic","","","","","","","","","","","","","","","","","",""},{"EN5C_AK_Suppressor","","","","","","","","",""},{"EN5C_Mag_AK101_30Rnd","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 2.75;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK101\Data\ak101.rvmat","DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat","DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"};
		};
	};
	class EN5C_AK101_Black: EN5C_AK101
	{
		scope = 2;
		descriptionShort = "EN5C_An assault black painted rifle of the Kalashnikov series designed for the world export market. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.12,0.12,0.12,1.0,CO)"};
	};
	class EN5C_AK101_Green: EN5C_AK101
	{
		scope = 2;
		descriptionShort = "EN5C_An assault green painted rifle of the Kalashnikov series designed for the world export market. It is designed with modern and composite materials, including plastics that reduce weight and improve accuracy. The disassembly procedure for the AK-101 is identical to that of the AK-74. The AK-101 has an attachment rail installed on the side of the receiver for mounting scopes and other optical sights, which will accept most types of Russian and European AK optics. The AK-101 has a 415 mm (16.3 in) barrel with an AK-74 style muzzle brake attached to the barrel to control muzzle climb.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
};
class cfgRecoils
{
	recoil_AK101[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_AK101_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
