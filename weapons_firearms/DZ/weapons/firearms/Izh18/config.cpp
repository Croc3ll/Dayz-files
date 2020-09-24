////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\Izh18\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:30 2019 : 'file' last modified on Mon Dec 12 08:45:35 2016
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
	class DZ_Weapons_Firearms_IZH18
	{
		units[] = {"ShotgunIzh43","ShotgunIzh43_Sawedoff"};
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
	class izh18base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\izh18.rtm"};
		lootTag[] = {"Civilian","Hunting"};
		weight = 3200;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		opticsFlare = 0;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_762x39"};
		magazines[] = {};
		barrelArmor = 220;
		ejectType = 3;
		recoilModifier = "[1, 4, 1.75]";
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\izh18\izh18_reload",0.8,1,20};
		reloadSound[] = {"",0.056234132,1,20};
		reloadAction = "ReloadIZH18";
		shotAction = "";
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_1",1,1,800};
			soundBegin[] = {"begin1",0.56,"begin2",0.5};
			reloadTime = 0.1;
			recoil = "recoil_izh18";
			recoilProne = "recoil_izh18_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.01;
			recoil = "recoil_izh18_double";
			recoilProne = "recoil_izh18";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
	};
	class izh18: izh18base
	{
		scope = 2;
		displayName = "Izh 18 Rifle";
		descriptionShort = "Izh 18 is a single-barrel rifle, designed with simplicity, built to last. It has internal hammer design, tapered spiral fluted, hammer forged chrome lined barrel, cocking indicator, walnut stock and fore-end, cross bolt safety and an 11mm Scope Rail.";
		model = "\dz\weapons\firearms\Izh18\Izh18.p3d";
		attachments[] = {"weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Izh18\data\Izh18_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Izh18\data\Izh18.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Izh18\data\Izh18.rvmat","DZ\weapons\firearms\Izh18\data\Izh18_damage.rvmat","DZ\weapons\firearms\Izh18\data\Izh18_destruct.rvmat"};
		};
	};
	class izh18_Sawedoff: izh18
	{
		scope = 2;
		displayName = "Sawed off Izh 18 Rifle";
		descriptionShort = "Izh 18 is a single-barrel rifle, designed with simplicity, built to last. It has internal hammer design, tapered spiral fluted, hammer forged chrome lined barrel, cocking indicator, walnut stock and fore-end, cross bolt safety and an 11mm Scope Rail.";
		model = "\dz\weapons\firearms\Izh18\Izh18_sawedoff.p3d";
		lootCategory = "Crafted";
		itemSize[] = {4,1};
		weight = 2800;
		dexterity = 2.8;
		attachments[] = {};
		recoilModifier = "[1, 1, 1]";
		firespreadangle = 3;
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_0",3.1622777,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_1",3.1622777,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333};
			reloadTime = 0.01;
			recoil = "recoil_izh18sawedoff_double";
			recoilProne = "recoil_izh18sawedoff_double";
			dispersion = 0.1;
			magazineSlot = "magazine";
			firespreadangle = 1.5;
		};
	};
	class EN5C_Izh18_Base: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\izh18.rtm"};
		lootTag[] = {"Civilian","Hunting"};
		weight = 3200;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		opticsFlare = 0;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"EN5C_Ammo_762x39"};
		magazines[] = {};
		barrelArmor = 220;
		ejectType = 3;
		recoilModifier = "[1, 4, 1.75]";
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\izh18\izh18_reload",0.8,1,20};
		reloadSound[] = {"",0.056234132,1,20};
		reloadAction = "ReloadIZH18";
		shotAction = "";
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		hiddenSelections[] = {"camoGround"};
		modes[] = {"Single","Burst"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_0",1,1,800};
			begin2[] = {"dz\sounds\weapons\firearms\izh18\izh18_shot_1",1,1,800};
			soundBegin[] = {"begin1",0.56,"begin2",0.5};
			reloadTime = 0.1;
			recoil = "recoil_izh18";
			recoilProne = "recoil_izh18_prone";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			begin2[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			begin3[] = {"dz\sounds\weapons\firearms\B95\b95_close_0_double",1,1,900};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			reloadTime = 0.01;
			recoil = "recoil_izh18_double";
			recoilProne = "recoil_izh18";
			dispersion = 0.001;
			magazineSlot = "magazine";
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\AK101\akSilenced",1,1,300};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
		};
	};
	class EN5C_Izh18: EN5C_Izh18_Base
	{
		scope = 2;
		displayName = "EN5C_Izh 18 Rifle";
		descriptionShort = "EN5C_Izh 18 is a single-barrel rifle, designed with simplicity, built to last. It has internal hammer design, tapered spiral fluted, hammer forged chrome lined barrel, cocking indicator, walnut stock and fore-end, cross bolt safety and an 11mm Scope Rail.";
		model = "\dz\weapons\firearms\Izh18\Izh18.p3d";
		attachments[] = {"weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		itemSize[] = {9,6};
		dexterity = 3.3;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Izh18\data\Izh18_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Izh18\data\Izh18.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Izh18\data\Izh18.rvmat","DZ\weapons\firearms\Izh18\data\Izh18_damage.rvmat","DZ\weapons\firearms\Izh18\data\Izh18_destruct.rvmat"};
		};
	};
	class EN5C_SawedoffIzh18: EN5C_Izh18
	{
		scope = 2;
		displayName = "EN5C_Sawed off Izh 18 Rifle";
		descriptionShort = "EN5C_Izh 18 is a single-barrel rifle, designed with simplicity, built to last. It has internal hammer design, tapered spiral fluted, hammer forged chrome lined barrel, cocking indicator, walnut stock and fore-end, cross bolt safety and an 11mm Scope Rail.";
		model = "\dz\weapons\firearms\Izh18\Izh18_sawedoff.p3d";
		lootCategory = "Crafted";
		itemSize[] = {6,5};
		weight = 2800;
		dexterity = 2.8;
		attachments[] = {};
		recoilModifier = "[1, 1, 1]";
		firespreadangle = 3;
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_0",1.7782794,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_1",1.7782794,1,1000};
			begin3[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_close_2",1.7782794,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin2",0.33333};
			dispersion = 0.08;
			recoil = "recoil_izh18sawedoff";
			recoilProne = "recoil_izh18sawedoff";
		};
		class Burst: Mode_Burst
		{
			soundSetShot[] = {"IZH18_Shot_SoundSet","IZH18_Tail_SoundSet","IZH18_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"IZH18_silencer_SoundSet","IZH18_silencerTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"},{"IZH18_silencerHomeMade_SoundSet","IZH18_silencerHomeMadeTail_SoundSet","IZH18_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_0",3.1622777,1,1000};
			begin2[] = {"dz\sounds\weapons\shotguns\Izh43\izh43double_close_1",3.1622777,1,1000};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333};
			reloadTime = 0.01;
			recoil = "recoil_izh18sawedoff_double";
			recoilProne = "recoil_izh18sawedoff_double";
			dispersion = 0.1;
			magazineSlot = "magazine";
			firespreadangle = 1.5;
		};
	};
};
class cfgRecoils
{
	recoil_izh18[] = {0,0,0,0.04,"0.036943*(0.7)","0.0134348*(2)",0.09,"0.019755*(0.7)","0.003056*(2)",0.12,0,0,0.18,"-0.003138*(0.7)","-0.0005*(2)",0.12,"-0.001177*(0.7)","-0.000188*(2)",0.12,0,0};
	recoil_izh18_double[] = {0,0,0,0.05,"0.036943*(1.2)","0.0134348*(5)",0.09,"0.019755*(1.2)","0.003056*(5)",0.12,0,0,0.18,"-0.003138*(1.2)","-0.0005*(5)",0.12,"-0.001177*(1.2)","-0.000188*(5)",0.12,0,0};
	recoil_izh18_prone[] = {0,0,0,0.04,"0.036943*(0.5)","0.0134348*(1.5)",0.09,"0.019755*(0.5)","0.003056*(1.5)",0.12,0,0,0.18,"-0.003138*(0.5)","-0.0005*(1.5)",0.12,"-0.001177*(0.5)","-0.000188*(1.5)",0.12,0,0};
	recoil_izh18sawedoff[] = {0,0,0,0.04,"0.036943*(2)","0.0134348*(20)",0.09,"0.019755*(2)","0.003056*(20)",0.12,0,0,0.18,"-0.003138*(2)","-0.0005*(20)",0.12,"-0.001177*(2)","-0.000188*(20)",0.12,0,0};
	recoil_izh18sawedoff_double[] = {0,0,0,0.05,"0.036943*(5)","0.0134348*(70)",0.09,"0.019755*(5)","0.003056*(70)",0.12,0,0,0.18,"-0.003138*(5)","-0.0005*(70)",0.12,"-0.001177*(5)","-0.000188*(70)",0.12,0,0};
};
