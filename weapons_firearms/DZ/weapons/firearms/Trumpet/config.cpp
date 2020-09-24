////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\Trumpet\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:36 2019 : 'file' last modified on Mon Dec 12 08:46:40 2016
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
	class DZ_Weapons_Firearms_Trumpet
	{
		units[] = {"Trumpet"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Sounds_Weapons"};
	};
};
class Mode_Safe;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class cfgWeapons
{
	class Rifle;
	class TrumpetBase: Rifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\trumpet.rtm"};
		animName = "Trumpet";
		animClass = "Shotgun";
		lootTag[] = {"Civilian","Hunting"};
		weight = 2000;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		opticsFlare = 0;
		value = 0;
		chamberSize = 7;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_22"};
		magazines[] = {};
		tooltip = "_text = _this call fnc_generateTooltip;_text";
		drySound[] = {"dz\sounds\weapons\shotguns\Izh43\izh43_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\trumpet\trombone_reload",0.8,1,20};
		reloadSound[] = {"dz\sounds\weapons\firearms\trumpet\trombone_pump",0.8,1,20};
		reloadAction = "ReloadTrumpet";
		shotAction = "ReloadTrumpet_shot";
		ejectType = 0;
		recoilModifier = "[1, 2.5, 1.5]";
		hiddenSelections[] = {"camo"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			soundSetShot[] = {"Trumpet_Shot_SoundSet","Trumpet_Tail_SoundSet","Trumpet_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"Trumpet_silencerPro_SoundSet","Trumpet_silencerTail_SoundSet","Trumpet_silencerInteriorTail_SoundSet"},{"Trumpet_silencerHomeMade_SoundSet","Trumpet_silencerHomeMadeTail_SoundSet","Trumpet_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\trombone\trombone_shot_0",0.8,1,300};
			begin2[] = {"dz\sounds\weapons\firearms\trombone\trombone_shot_1",0.8,1,300};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\m4a1\m4Silenced",0.05,1,150};
			soundBeginExt[] = {{"beginSilenced_HomeMade",1}};
			reloadTime = 1;
			recoil = "recoil_single_primary_1outof10";
			recoilProne = "recoil_single_primary_1outof10";
			dispersion = 0.0015;
			magazineSlot = "magazine";
		};
	};
	class Trumpet: TrumpetBase
	{
		scope = 2;
		displayName = "Trumpet";
		descriptionShort = "A pump-action rifle, which can be quickly disassembled into two pieces, significantly reducing it's length, making it easier to store, pack, transport and conceal.";
		model = "\dz\weapons\firearms\Trumpet\trumpet.p3d";
		attachments[] = {"suppressorImpro","weaponOpticsHunting"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Optic_Hunting",""}};
		itemSize[] = {6,2};
		dexterity = 3.5;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\Trumpet\data\trombone_co.paa"};
		hiddenSelectionsMaterials[] = {"dz\weapons\firearms\Trumpet\data\trumpet.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Trumpet\data\trumpet.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_damage.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_destruct.rvmat"};
		};
	};
};
class CfgVehicles
{
	class InventoryBase;
	class TrumpetParts: InventoryBase
	{
		scope = 2;
		displayName = "Disassembled Trumpet";
		descriptionShort = "A pump-action rifle, which can be quickly disassembled into two pieces, significantly reducing it's length, making it easier to store, pack, transport and conceal.";
		model = "\dz\weapons\firearms\Trumpet\trumpet_parts.p3d";
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\tools\pen.rtm"};
		handheld = "true";
		armAction = "Disarm";
		rotateDropped = 1;
		itemSize[] = {2,3};
		weight = 2000;
		absorbency = 0.1;
		lootTag[] = {"Civilian","Hunting"};
		barrelArmor = 600;
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\Trumpet\data\trumpet.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_damage.rvmat","DZ\weapons\firearms\Trumpet\data\trumpet_destruct.rvmat"};
		};
		class Melee
		{
			range = 0.65;
			swingTime = 0.5;
			action = "GestureMeleeBayonetStab";
			ammo = "MeleeFist";
			useCursor = 1;
		};
	};
};
