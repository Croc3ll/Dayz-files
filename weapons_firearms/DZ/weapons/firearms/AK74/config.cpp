////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\AK74\config.bin
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
	class DZ_Weapons_Firearms_AK74
	{
		units[] = {"AK74","AK74_Black","AK74_Green","AKS74U","AKS74U_Black","AKS74U_Green"};
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
	class AK74Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"};
		lootTag[] = {"Military_east"};
		weight = 1990;
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
		camberableFrom[] = {"Ammo_545"};
		magazines[] = {"M_ak74_30Rnd","M_ak74_30Rnd_Black","M_ak74_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 2.8, 1.85]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
	};
	class AK74: AK74Base
	{
		scope = 2;
		displayName = "AK74";
		descriptionShort = "AK74, a successor of AK47.";
		model = "\dz\weapons\firearms\AK101\ak101.p3d";
		attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponMuzzleAK","suppressorImpro","weaponBayonetAK"};
		baseAttachments[] = {"Att_Buttstock_AK74","Att_Handguard_AK74"};
		randomAttachments[] = {{"Att_Buttstock_AK_Folding","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Wood","Att_Buttstock_AK74","Att_Buttstock_AK74","Att_Buttstock_AK74","Att_Buttstock_AK74","Att_Buttstock_AK74","Att_Buttstock_AK74"},{"Att_Handguard_AK_Rail","Att_Handguard_AK_Plastic","Att_Handguard_AK74","Att_Handguard_AK74","Att_Handguard_AK74","Att_Handguard_AK74"},{"Att_Optic_Kashtan","Att_Optic_PSO11","","","","","","","","","","","","","","","","","",""},{"Att_Suppressor_AK","","","","","","","","",""},{"M_ak74_30Rnd","","","","","","","","",""}};
		dexterity = 2.75;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK101\data\ak101_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK101\data\ak101.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK101\Data\ak101.rvmat","DZ\weapons\firearms\AK101\Data\ak101_damage.rvmat","DZ\weapons\firearms\AK101\Data\ak101_destruct.rvmat"};
		};
	};
	class AK74_Black: AK74
	{
		scope = 2;
		descriptionShort = "AK74, a successor of AK47. This one has been spraypainted black.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class AK74_Green: AK74
	{
		scope = 2;
		descriptionShort = "AK74, a successor of AK47. This one has been spraypainted green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class AKS74U: AK74Base
	{
		scope = 2;
		displayName = "AKS-74U";
		descriptionShort = "Compact version of AK74, with folding buttstock and short barrel.";
		model = "\dz\weapons\firearms\AK74\aks74u.p3d";
		attachments[] = {"weaponButtstockAK","weaponWrap","weaponMuzzleAK","suppressorImpro"};
		baseAttachments[] = {"Att_Buttstock_AKS74U"};
		randomAttachments[] = {{"Att_Buttstock_AK_Folding","Att_Buttstock_AK_Plastic","Att_Buttstock_AK_Wood","Att_Buttstock_AKS74U","Att_Buttstock_AKS74U","Att_Buttstock_AKS74U","Att_Buttstock_AKS74U","Att_Buttstock_AKS74U","Att_Buttstock_AKS74U"},{"Att_Suppressor_AK","","","","","","","","",""},{"M_ak74_30Rnd","","","","","","","","",""}};
		itemSize[] = {4,3};
		dexterity = 3.2;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK74\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK74\data\aks74u.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK74\Data\aks74u.rvmat","DZ\weapons\firearms\AK74\Data\aks74u_damage.rvmat","DZ\weapons\firearms\AK74\Data\aks74u_destruct.rvmat"};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class AKS74U_Black: AKS74U
	{
		scope = 2;
		descriptionShort = "Compact version of AK74, with folding buttstock and short barrel. This one has been painted black.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class AKS74U_Green: AKS74U
	{
		scope = 2;
		descriptionShort = "Compact version of AK74, with folding buttstock and short barrel. This one has been painted green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"};
	};
	class EN5C_AK74_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\akm.rtm"};
		lootTag[] = {"Military_east"};
		weight = 1990;
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
		camberableFrom[] = {"EN5C_Ammo_545x39"};
		magazines[] = {"EN5C_Mag_AK74_30Rnd","EN5C_Mag_AK74_30Rnd_Black","EN5C_Mag_AK74_30Rnd_Green"};
		magazineSwitchTime = 0.2;
		barrelArmor = 3000;
		ejectType = 1;
		recoilModifier = "[1, 2.8, 1.85]";
		drySound[] = {"dz\sounds\weapons\firearms\SKS\SKS_dry",0.5,1,20};
		reloadAction = "ReloadAKM";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\AK74\ak74_reload",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_2",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_0",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.002;
			magazineSlot = "magazine";
		};
	};
	class EN5C_AK74: EN5C_AK74_Base
	{
		scope = 2;
		displayName = "EN5C_AK74";
		descriptionShort = "EN5C_AK74, a successor of AK47.";
		model = "\dz\weapons\firearms\AK101\ak101.p3d";
		attachments[] = {"weaponButtstockAK","WeaponHandguardAK","weaponOpticsAK","weaponFlashlight","weaponBipod","weaponWrap","weaponMuzzleAK","suppressorImpro","weaponBayonetAK"};
		baseAttachments[] = {"EN5C_AK74_WoodBttstck","EN5C_AK74_Hndgrd"};
		randomAttachments[] = {{"EN5C_AK_FoldingBttstck","EN5C_AK_PlasticBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck","EN5C_AK_WoodBttstck"},{"EN5C_AK_RailHndgrd","EN5C_AK_PlasticHndgrd","EN5C_AK74_Hndgrd","EN5C_AK74_Hndgrd","EN5C_AK74_Hndgrd","EN5C_AK74_Hndgrd"},{"EN5C_KashtanOptic","EN5C_PSO11Optic","","","","","","","","","","","","","","","","","",""},{"EN5C_AK_Suppressor","","","","","","","","",""},{"EN5C_Mag_AK74_30Rnd","","","","","","","","",""}};
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
	class EN5C_AK74_Black: EN5C_AK74
	{
		scope = 2;
		descriptionShort = "EN5C_AK74, a successor of AK47. This one has been spraypainted black.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class EN5C_AK74_Green: EN5C_AK74
	{
		scope = 2;
		descriptionShort = "EN5C_AK74, a successor of AK47. This one has been spraypainted green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class EN5C_AKS74U: EN5C_AK74_Base
	{
		scope = 2;
		displayName = "EN5C_AKS-74U";
		descriptionShort = "EN5C_Compact version of AK74, with folding buttstock and short barrel.";
		model = "\dz\weapons\firearms\AK74\aks74u.p3d";
		attachments[] = {"weaponButtstockAK","weaponWrap","weaponMuzzleAK","suppressorImpro"};
		baseAttachments[] = {"EN5C_AKS74U_Bttstck"};
		randomAttachments[] = {{"EN5C_AK_FoldingBttstck","EN5C_AK_PlasticBttstck","EN5C_AK_WoodBttstck","EN5C_AKS74U_Bttstck","EN5C_AKS74U_Bttstck","EN5C_AKS74U_Bttstck","EN5C_AKS74U_Bttstck","EN5C_AKS74U_Bttstck","EN5C_AKS74U_Bttstck"},{"EN5C_AK_Suppressor","","","","","","","","",""},{"EN5C_Mag_AK74_30Rnd","","","","","","","","",""}};
		itemSize[] = {7,5};
		dexterity = 3.2;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\AK74\data\aks74u_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\AK74\data\aks74u.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\AK74\Data\aks74u.rvmat","DZ\weapons\firearms\AK74\Data\aks74u_damage.rvmat","DZ\weapons\firearms\AK74\Data\aks74u_destruct.rvmat"};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"AK_Shot_SoundSet","AK_Tail_SoundSet","AK_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"AK_silencer_SoundSet","AK_silencerTail_SoundSet","AK_silencerInteriorTail_SoundSet"},{"AK_silencerHomeMade_SoundSet","AK_silencerHomeMadeTail_SoundSet","AK_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			begin3[] = {"dz\sounds\weapons\firearms\AK74\ak74_single_1",1,1,800};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
			reloadTime = 0.1;
			recoil = "recoil_AK74";
			recoilProne = "recoil_AK74_prone";
			dispersion = 0.003;
			magazineSlot = "magazine";
		};
	};
	class EN5C_AKS74U_Black: EN5C_AKS74U
	{
		scope = 2;
		descriptionShort = "EN5C_Compact version of AK74, with folding buttstock and short barrel. This one has been painted black.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class EN5C_AKS74U_Green: EN5C_AKS74U
	{
		scope = 2;
		descriptionShort = "EN5C_Compact version of AK74, with folding buttstock and short barrel. This one has been painted green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.37,0.28,1.0,CO)"};
	};
};
class cfgRecoils
{
	recoil_AK74[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_AK74_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
