////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\mosin9130\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:30 2019 : 'file' last modified on Mon Dec 12 08:48:05 2016
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
	class DZ_Weapons_Firearms_MosinNagant
	{
		units[] = {"Mosin9130","Mosin9130_Black","Mosin9130_Green","Mosin9130_Green_Black","Mosin9130_Black_Green"};
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
	class Mosin9130Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\mosin9130.rtm"};
		animName = "Mosin9130";
		lootTag[] = {"Civilian","Hunting"};
		weight = 4000;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		camberableFrom[] = {"Ammo_762","Ammo_762_tracer","CLIP_762_5Rnd"};
		barrelArmor = 400;
		ejectType = 0;
		recoilModifier = "[1, 6, 2]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
		reloadSound[] = {"DZ\sounds\weapons\firearms\mosin9130\mosin_cycling",0.8,1,20};
		reloadAction = "ReloadMosinFull";
		shotAction = "ReloadMosinShort";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class Mosin9130_SawedoffBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\mosin9130.rtm"};
		animName = "Mosin9130";
		itemSize[] = {4,1};
		weight = 3000;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		discreteDistance[] = {50};
		discreteDistanceInitIndex = 1;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 5;
		chamberedRound = "";
		magazines[] = {};
		camberableFrom[] = {"Ammo_762","Ammo_762_tracer","CLIP_762_5Rnd"};
		cursor = "aimBowGhost";
		barrelArmor = 300;
		ejectType = 0;
		recoilModifier = "[1, 7, 2]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1};
		reloadSkips[] = {0.32,0.41,0.5,0.59,0.69,0.77};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_reloading",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_cycling",0.8,1,20};
		reloadAction = "ReloadMosinFull";
		shotAction = "ReloadMosinShort";
		soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_1",1,1,1000};
			begin3[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_close_2",1,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			soundSetShot[] = {"Mosin_Shot_SoundSet","Mosin_Tail_SoundSet","Mosin_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Mosin_silencerHomeMade_SoundSet","Mosin_silencerHomeMadeTail_SoundSet","Mosin_silencerInteriorTail_SoundSet"}};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_mosin";
			recoilProne = "recoil_mosin_prone";
			dispersion = 0.003;
		};
	};
	class Mosin9130: Mosin9130Base
	{
		scope = 2;
		displayName = "Mosin 9130";
		descriptionShort = "The Mosin-Nagant is a bolt-action, internal magazine-fed, military rifle, developed by the Imperial Russian Army in 90s, and used by the armed forces of the Russian Empire, the Soviet Union and various other nations.";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Compensator_Mosin","","","","","","","","",""},{"Att_Optic_PUScope","","","","","","","","",""}};
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_9130.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_destruct.rvmat"};
		};
	};
	class Mosin9130_Black: Mosin9130Base
	{
		scope = 2;
		displayName = "Mosin 9130";
		descriptionShort = "The Mosin-Nagant is a bolt-action, internal magazine-fed, military rifle, developed by the Imperial Russian Army in 90s, and used by the armed forces of the Russian Empire, the Soviet Union and various other nations. This is black painted.";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		color = "Black";
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Compensator_Mosin","","","","","","","","",""},{"Att_Optic_PUScope","","","","","","","","",""}};
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_9130_bk.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_9130.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_destruct.rvmat"};
		};
	};
	class Mosin9130_Green: Mosin9130Base
	{
		scope = 2;
		displayName = "Mosin 9130";
		descriptionShort = "The Mosin-Nagant is a bolt-action, internal magazine-fed, military rifle, developed by the Imperial Russian Army in 90s, and used by the armed forces of the Russian Empire, the Soviet Union and various other nations. This is green painted.";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		color = "Green";
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Compensator_Mosin","","","","","","","","",""},{"Att_Optic_PUScope","","","","","","","","",""}};
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_9130.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_destruct.rvmat"};
		};
	};
	class Mosin9130_Green_Black: Mosin9130Base
	{
		scope = 2;
		displayName = "Mosin 9130";
		descriptionShort = "The Mosin-Nagant is a bolt-action, internal magazine-fed, military rifle, developed by the Imperial Russian Army in 90s, and used by the armed forces of the Russian Empire, the Soviet Union and various other nations. This is camo painted.";
		model = "\dz\weapons\firearms\mosin9130\mosin9130.p3d";
		color = "Green_Black";
		dexterity = 2.3;
		attachments[] = {"weaponMuzzleMosin","weaponBayonetMosin","weaponOpticsMosin","weaponBipod","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Compensator_Mosin","","","","","","","","",""},{"Att_Optic_PUScope","","","","","","","","",""}};
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_nagant_camo_co.paa"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_9130.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_9130_destruct.rvmat"};
		};
	};
	class Mosin9130_Black_Green: Mosin9130_Green_Black{};
	class Mosin9130_Sawedoff: Mosin9130_SawedoffBase
	{
		scope = 2;
		displayName = "Sawed-off Mosin 9130";
		descriptionShort = "Sawed-off Mosin-Nagant military rifle.";
		model = "\dz\weapons\firearms\mosin9130\mosin_sawn.p3d";
		attachments[] = {};
		baseAttachments[] = {};
		lootCategory = "Crafted";
		dexterity = 2.7;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_sawn_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_sawn.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\mosin9130\data\mosin_sawn.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_sawn_damage.rvmat","DZ\weapons\firearms\mosin9130\data\mosin_sawn_destruct.rvmat"};
		};
	};
	class Mosin9130_Sawedoff_Black: Mosin9130_Sawedoff
	{
		scope = 2;
		descriptionShort = "Black painted Sawed-off Mosin-Nagant military rifle.";
		color = "Black";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\mosin9130\data\mosin_sawn_bk.rvmat"};
	};
	class Mosin9130_Sawedoff_Green: Mosin9130_Sawedoff
	{
		scope = 2;
		descriptionShort = "Green painted Sawed-off Mosin-Nagant military rifle.";
		color = "Green";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class Mosin9130_Sawedoff_Green_Black: Mosin9130_Sawedoff
	{
		scope = 2;
		descriptionShort = "Camo painted Sawed-off Mosin-Nagant military rifle.";
		color = "Camo";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\mosin9130\data\mosin_nagant_camo_co.paa"};
	};
	class Mosin9130_Sawedoff_Black_Green: Mosin9130_Sawedoff_Green_Black{};
};
class cfgRecoils
{
	recoil_mosin[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_mosin_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
