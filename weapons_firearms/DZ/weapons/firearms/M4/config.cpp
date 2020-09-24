////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\M4\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:30 2019 : 'file' last modified on Mon Dec 12 08:45:36 2016
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
	class DZ_Weapons_Firearms_M4
	{
		units[] = {"M4A1","M4A1_Green","M4A1_Black"};
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
	class M4_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\m4a1.rtm"};
		lootTag[] = {"Military_west"};
		weight = 1746;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		forceOptics = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_556"};
		magazines[] = {"M_STANAG_30Rnd","M_STANAG_30Rnd_Coupled","M_CMAG_10Rnd","M_CMAG_20Rnd","M_CMAG_30Rnd","M_CMAG_40Rnd","M_CMAG_10Rnd_Green","M_CMAG_20Rnd_Green","M_CMAG_30Rnd_Green","M_CMAG_40Rnd_Green","M_CMAG_10Rnd_Black","M_CMAG_20Rnd_Black","M_CMAG_30Rnd_Black","M_CMAG_40Rnd_Black"};
		magazineSwitchTime = 0.5;
		barrelArmor = 2400;
		ejectType = 1;
		recoilModifier = "[1, 3, 1.8]";
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.09;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"ddz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
	};
	class M4A1: M4_Base
	{
		scope = 2;
		displayName = "M4A1";
		descriptionShort = "The M4 carbine is a family of firearms that was derived from earlier carbine versions of the M16 rifle. The M4 is a shorter and lighter variant of the M16A2 assault rifle, with 80% parts commonality.";
		model = "\dz\weapons\firearms\m4\m4a1.p3d";
		attachments[] = {"weaponMuzzleM4","weaponBayonet","weaponFlashlight","weaponBipod","weaponOptics","weaponButtstockM4","WeaponHandguardM4","weaponWrap","suppressorImpro"};
		baseAttachments[] = {"Att_Buttstock_M4OE","Att_Optic_M4CarryHandle","Att_Handguard_M4Plastic"};
		randomAttachments[] = {{"Att_Suppressor_M4","","",""},{"Att_Optic_BUIS","Att_Optic_M68","Att_Optic_M4T3NRDS","Att_Optic_Reflex","Att_Optic_ACOG","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle","Att_Optic_M4CarryHandle"},{"Att_Handguard_M4RIS","Att_Handguard_M4MP","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic","Att_Handguard_M4Plastic"},{"Att_Buttstock_M4MP","Att_Buttstock_M4CQB","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE","Att_Buttstock_M4OE"},{"M_STANAG_30Rnd","M_CMAG_10Rnd","M_CMAG_20Rnd","M_CMAG_30Rnd","M_CMAG_40Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		spawnDamageMax = 0.6;
		dexterity = 3.0;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\M4\data\m4_body.rvmat","DZ\weapons\firearms\M4\data\m4_body_damage.rvmat","DZ\weapons\firearms\M4\data\m4_body_destruct.rvmat"};
		};
	};
	class M4A1_Green: M4A1
	{
		scope = 2;
		descriptionShort = "The M4 carbine is a family of firearms that was derived from earlier carbine versions of the M16 rifle. The M4 is a shorter and lighter variant of the M16A2 assault rifle, with 80% parts commonality. This variant is painted to green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_green_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body_camo.rvmat"};
	};
	class M4A1_Black: M4A1
	{
		scope = 2;
		descriptionShort = "The M4 carbine is a family of firearms that was derived from earlier carbine versions of the M16 rifle. The M4 is a shorter and lighter variant of the M16A2 assault rifle, with 80% parts commonality. This variant is painted to black.";
		color = "Black";
		lootCategory = "Crafted";
	};
	class EN5C_M4A1_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\m4a1.rtm"};
		lootTag[] = {"Military_west"};
		weight = 1746;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		forceOptics = 1;
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"EN5C_Ammo_556x45"};
		magazines[] = {"EN5C_Mag_STANAG_30Rnd","EN5C_Mag_STANAGCoupled_30Rnd","EN5C_Mag_CMAG_10Rnd","EN5C_Mag_CMAG_20Rnd","EN5C_Mag_CMAG_30Rnd","EN5C_Mag_CMAG_40Rnd","EN5C_Mag_CMAG_10Rnd_Green","EN5C_Mag_CMAG_20Rnd_Black","EN5C_Mag_CMAG_30Rnd_Green","EN5C_Mag_CMAG_40Rnd_Green","EN5C_Mag_CMAG_10Rnd_Black","EN5C_Mag_CMAG_20Rnd_Black","EN5C_Mag_CMAG_30Rnd_Black","EN5C_Mag_CMAG_40Rnd_Black"};
		magazineSwitchTime = 0.5;
		barrelArmor = 2400;
		ejectType = 1;
		recoilModifier = "[1, 3, 1.8]";
		drySound[] = {"dz\sounds\weapons\firearms\m4a1\m4_dry",0.5,1,20};
		reloadAction = "ReloadM4";
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\m4a1\m4_reload_0",0.8,1,20};
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto","Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.085;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"M4_Shot_SoundSet","M4_Tail_SoundSet","M4_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"M4_silencer_SoundSet","M4_silencerTail_SoundSet","M4_silencerInteriorTail_SoundSet"},{"M4_silencerHomeMade_SoundSet","M4_silencerHomeMadeTail_SoundSet","M4_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_1",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_2",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\m4a1\m4_single_3",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.09;
			recoil = "recoil_m4";
			recoilProne = "recoil_m4_prone";
			dispersion = 0.0015;
			magazineSlot = "magazine";
			beginSilenced_Pro1[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,75};
			beginSilenced_Pro2[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced2",1,1,75};
			beginSilenced_HomeMade[] = {"ddz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_Pro1",0.5,"beginSilenced_Pro2",0.5},{"beginSilenced_HomeMade",1}};
		};
	};
	class EN5C_M4A1: EN5C_M4A1_Base
	{
		scope = 2;
		displayName = "EN5C_M4A1";
		descriptionShort = "EN5C_The M4 carbine is a family of firearms that was derived from earlier carbine versions of the M16 rifle. The M4 is a shorter and lighter variant of the M16A2 assault rifle, with 80% parts commonality.";
		model = "\dz\weapons\firearms\m4\m4a1.p3d";
		attachments[] = {"weaponMuzzleM4","weaponBayonet","weaponFlashlight","weaponBipod","weaponOptics","weaponButtstockM4","WeaponHandguardM4","weaponWrap","suppressorImpro"};
		baseAttachments[] = {"EN5C_M4_OEBttstck","EN5C_M4_CarryHandleOptic","EN5C_M4_PlasticHndgrd"};
		randomAttachments[] = {{"EN5C_M4_Suppressor","","","","","","","","",""},{"EN5C_BUISOptic","EN5C_M68Optic","EN5C_M4_T3NRDSOptic","EN5C_ReflexOptic","EN5C_ACOGOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic","EN5C_M4_CarryHandleOptic"},{"EN5C_M4_RISHndgrd","EN5C_M4_MPHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd","EN5C_M4_PlasticHndgrd"},{"EN5C_M4_MPBttstck","EN5C_M4_CQBBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck","EN5C_M4_OEBttstck"},{"EN5C_Mag_STANAG_30Rnd","EN5C_Mag_CMAG_10Rnd","EN5C_Mag_CMAG_20Rnd","EN5C_Mag_CMAG_30Rnd","EN5C_Mag_CMAG_40Rnd","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""}};
		itemSize[] = {9,6};
		spawnDamageMax = 0.6;
		dexterity = 3.0;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\M4\data\m4_body.rvmat","DZ\weapons\firearms\M4\data\m4_body_damage.rvmat","DZ\weapons\firearms\M4\data\m4_body_destruct.rvmat"};
		};
	};
	class EN5C_M4A1_Green: EN5C_M4A1
	{
		scope = 2;
		descriptionShort = "EN5C_The M4 carbine is a family of firearms that was derived from earlier carbine versions of the M16 rifle. The M4 is a shorter and lighter variant of the M16A2 assault rifle, with 80% parts commonality. This variant is painted to green.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\m4\data\m4_body_green_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\m4\data\m4_body_camo.rvmat"};
	};
	class EN5C_M4A1_Black: EN5C_M4A1
	{
		scope = 2;
		descriptionShort = "EN5C_The M4 carbine is a family of firearms that was derived from earlier carbine versions of the M16 rifle. The M4 is a shorter and lighter variant of the M16A2 assault rifle, with 80% parts commonality. This variant is painted to black.";
		color = "Black";
		lootCategory = "Crafted";
	};
};
class cfgRecoils
{
	recoil_m4[] = {0,0,0,0.04,"0.036943*(0.4)","0.0134348*(1.2)",0.08,"0.019755*(0.4)","0.003056*(1.2)",0.09,0,0,0.14,"-0.003138*(0.4)","-0.0005*(1.2)",0.08,"-0.001177*(0.4)","-0.000188*(1.2)",0.12,0,0};
	recoil_m4_prone[] = {0,0,0,0.04,"0.036943*(0.2)","0.0134348*(0.6)",0.08,"0.019755*(0.2)","0.003056*(0.6)",0.09,0,0,0.14,"-0.003138*(0.2)","-0.0005*(0.6)",0.08,"-0.001177*(0.2)","-0.000188*(0.6)",0.12,0,0};
};
