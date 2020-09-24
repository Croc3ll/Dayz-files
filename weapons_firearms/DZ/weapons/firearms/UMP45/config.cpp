////////////////////////////////////////////////////////////////////
//DeRap: weapons_firearms\UMP45\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:39:37 2019 : 'file' last modified on Mon Dec 12 08:46:40 2016
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
	class DZ_Weapons_Firearms_UMP
	{
		units[] = {"UMP45"};
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
	class UMP_Base: MilitaryRifle
	{
		scope = 0;
		handAnim[] = {"OFP2_ManSkeleton","\DZ\anims\data\anim\sdr\ik\weapons\ump.rtm"};
		weight = 2200;
		absorbency = 0.1;
		repairableWith = 1;
		modelOptics = "-";
		distanceZoomMin = 100;
		distanceZoomMax = 100;
		optics = 1;
		value = 0;
		chamberSize = 1;
		chamberedRound = "";
		camberableFrom[] = {"Ammo_45FMJ"};
		magazines[] = {"M_UMP_25Rnd"};
		magazineSwitchTime = 0.45;
		ejectType = 1;
		drySound[] = {"DZ\sounds\weapons\firearms\ump45\UMP45_dry",0.5,1,20};
		reloadMagazineSound[] = {"dz\sounds\weapons\firearms\ump45\ump45_reload",0.8,1,30};
		reloadAction = "ReloadUMP";
		hiddenSelections[] = {"camo"};
		modes[] = {"FullAuto"};
		class FullAuto: Mode_FullAuto
		{
			soundSetShot[] = {"UMP45_Shot_SoundSet","UMP45_Tail_SoundSet","UMP45_InteriorTail_SoundSet"};
			soundSetShotExt[] = {{"UMP45_silencerPro_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"},{"UMP45_silencerHomeMade_SoundSet","UMP45_silencerTail_SoundSet","UMP45_silencerInteriorTail_SoundSet"}};
			begin1[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_0",1,1,700};
			begin2[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_1",1,1,700};
			begin3[] = {"dz\sounds\weapons\firearms\ump45\ump45_single_2",1,1,700};
			soundBegin[] = {"begin1",0.33333,"begin2",0.33333,"begin3",0.33333};
			reloadTime = 0.11;
			recoil = "recoil_auto_primary_7outof10";
			recoilProne = "recoil_auto_primary_prone_7outof10";
			dispersion = 0.003;
			magazineSlot = "magazine";
			beginSilenced_Pro[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,75};
			beginSilenced_HomeMade[] = {"dz\sounds\weapons\firearms\mp5k\mp5Silenced",1,1,100};
			soundBeginExt[] = {{"beginSilenced_Pro",1},{"beginSilenced_HomeMade",1}};
		};
	};
	class UMP45: UMP_Base
	{
		scope = 2;
		displayName = "UMP45";
		descriptionShort = "The UMP is a sub-machine gun that has been adopted by various agencies such as the U.S. Customs and Border Protection. It was developed as a lighter and cheaper successor to the MP5. Cyclic rate of fire of UMP is 600 rounds/min which makes it one of the slower firing sub-machine guns on the market.";
		model = "\dz\weapons\firearms\UMP45\ump.p3d";
		attachments[] = {"weaponFlashlight","weaponOptics","pistolMuzzle","weaponWrap","suppressorImpro"};
		baseAttachments[] = {};
		randomAttachments[] = {{"Att_Optic_BUIS","Att_Optic_M68","Att_Optic_M4T3NRDS","Att_Optic_Reflex","Att_Optic_ACOG","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",""},{"Att_Light_TLR","","","","","",""},{"Att_Suppressor_Pistol","","","","","","","","",""},{"M_UMP_25Rnd","","","","","","","","",""}};
		itemSize[] = {4,3};
		dexterity = 3.2;
		hiddenSelectionsTextures[] = {"dz\weapons\firearms\UMP45\data\ump45_co.paa"};
		hiddenSelectionsMaterials[] = {"DZ\weapons\firearms\UMP45\data\ump45.rvmat"};
		class Damage
		{
			tex[] = {};
			mat[] = {"DZ\weapons\firearms\UMP45\data\ump45.rvmat","DZ\weapons\firearms\UMP45\data\ump45_damage.rvmat","DZ\weapons\firearms\UMP45\data\ump45_destruct.rvmat"};
		};
	};
};
