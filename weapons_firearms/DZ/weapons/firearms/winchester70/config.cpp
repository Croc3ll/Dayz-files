////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\winchester70\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:37 2019 : 'file' last modified on Mon Dec 12 08:48:31 2016
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
	class DZ_Weapons_Firearms_Winchester70
	{
		units[] = {"Winchester70","Winchester70_Black","Winchester70_Green"};
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
	class Winchester70Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\winchester70.rtm"};
		animName = "Winchester70";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2721;
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
		camberableFrom[] = {"Ammo_308Win"};
		magazines[] = {};
		barrelArmor = 1800;
		ejectType = 0;
		recoilModifier = "[1, 5, 1.75]";
		drySound[] = {"DZ\sounds\weapons\firearms\winchester70\Win_dry",0.3,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_reload",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_cycle",0.8,1,20};
		reloadAction = "ReloadWinchester70";
		shotAction = "ReloadWinchester70_shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Win_silencer_SoundSet","Win_silencerTail_SoundSet","Win_silencerInteriorTail_SoundSet"},{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class Winchester70: Winchester70Base
	{
		scope = 2;
		displayName = "Winchester model 70";
		descriptionShort = "Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up.";
		model = "\dz\weapons\firearms\winchester70\winchester70.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Optic_Hunting","","","","","","","","","",""}};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\winchester70\data\winchester70_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\winchester70\data\winchester70.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\winchester70\data\winchester70.rvmat","DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat","DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"};
		};
	};
	class Winchester70_Black: Winchester70
	{
		scope = 2;
		descriptionShort = "Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up. This one is black painted.";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class Winchester70_Green: Winchester70
	{
		scope = 2;
		descriptionShort = "Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up. This one is green painted.";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
	class EN5C_Winchester70_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\winchester70.rtm"};
		animName = "Winchester70";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2721;
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
		camberableFrom[] = {"EN5C_Ammo_308Win"};
		magazines[] = {};
		barrelArmor = 1800;
		ejectType = 0;
		recoilModifier = "[1, 5, 1.75]";
		drySound[] = {"dz\sounds\weapons\firearms\mosin9130\mosin_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_reload",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_cycle",0.8,1,20};
		reloadAction = "ReloadWinchester70";
		shotAction = "ReloadWinchester70_shot";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Win_Shot_SoundSet","Win_Tail_SoundSet","Win_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Win_silencer_SoundSet","Win_silencerTail_SoundSet","Win_silencerInteriorTail_SoundSet"},{"Win_silencerHomeMade_SoundSet","Win_silencerHomeMadeTail_SoundSet","Win_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_0",1,1,1000};
			begin2[] = {"dz\sounds\weapons\firearms\winchester70\winchester70_1",1,1,1000};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",1,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 2;
			recoil = "recoil_Winchester";
			recoilProne = "recoil_Winchester_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
		};
	};
	class EN5C_Winchester70: EN5C_Winchester70_Base
	{
		scope = 2;
		displayName = "EN5C_Winchester model 70";
		descriptionShort = "EN5C_Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up.";
		model = "\dz\weapons\firearms\winchester70\winchester70.p3d";
		attachments[] = {"weaponWrap","suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"EN5C_HuntingOptic","","","","","","","","","",""}};
		itemSize[] = {9,6};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\winchester70\data\winchester70_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\winchester70\data\winchester70.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\winchester70\data\winchester70.rvmat","DZ\weapons\firearms\winchester70\data\winchester70_damage.rvmat","DZ\weapons\firearms\winchester70\data\winchester70_destruct.rvmat"};
		};
	};
	class EN5C_Winchester70_Black: EN5C_Winchester70
	{
		scope = 2;
		descriptionShort = "EN5C_Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up. This one is black painted.";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.15,0.15,0.15,1.0,CO)"};
	};
	class EN5C_Winchester70_Green: EN5C_Winchester70
	{
		scope = 2;
		descriptionShort = "EN5C_Winchester model 70 is a bolt action sporting rifle with an iconic place in American sporting culture and has been held in high regard by shooters ever since it was introduced. Trigger creep has been virtually eliminated in the new Model 70, it also uses M.O.A. trigger system that has no take up. This one is green painted.";
		lootCategory = "Crafted";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0.35,0.36,0.28,1.0,CO)"};
	};
};
class cfgRecoils
{
	recoil_Winchester[] = {0,0,0,0.04,"0.036943*(0.8)","0.0134348*(2.3)",0.08,"0.019755*(0.8)","0.003056*(2.3)",0.09,0,0,0.14,"-0.003138*(0.8)","-0.0005*(2.3)",0.08,"-0.001177*(0.8)","-0.000188*(2.3)",0.12,0,0};
	recoil_Winchester_prone[] = {0,0,0,0.004,"0.036943*(0.01)","0.0134348*(0.1)",0.008,"0.019755*(0.01)","0.003056*(0.1)",0.009,0,0,0.014,"-0.003138*(0.01)","-0.0005*(0.1)",0.008,"-0.001177*(0.01)","-0.000188*(0.1)",0.012,0,0};
};
