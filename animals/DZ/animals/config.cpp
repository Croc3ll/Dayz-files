////////////////////////////////////////////////////////////////////
//DeRap: animals\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:46:04 2019 : 'file' last modified on Mon Dec 19 09:52:39 2016
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

class CfgAnimalSkinning
{
	class Skinning_Animal_CervusElaphus
	{
		class ObtainedSteaks
		{
			item = "Meat_DeerSteak";
			count = 4;
			quantityMin = 90;
			quantityMax = 100;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltDeer";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.8;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 7;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_CapreolusCapreolus
	{
		class ObtainedSteaks
		{
			item = "Meat_DeerSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltDeer";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.8;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 7;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_CapreolusCapreolusF
	{
		class ObtainedSteaks
		{
			item = "Meat_DeerSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltDeer";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.8;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 7;
			transferToolDamage = 1;
		};
	};
	class Skinning_Food_Carp
	{
		class ObtainedFood
		{
			item = "Meat_CarpFillet";
			count = 2;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_SmallGuts";
			count = 1;
			quantityMin = 0.5;
			quantityMax = 1;
		};
	};
	class Skinning_Food_Mackerel
	{
		class ObtainedSteaks
		{
			item = "Meat_MackerelFillet";
			count = 1;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_SmallGuts";
			count = 1;
			quantityMin = 0.5;
			quantityMax = 1;
		};
	};
	class Skinning_Animal_BosTaurus
	{
		class ObtainedSteaks
		{
			item = "Meat_CowSteak";
			count = 5;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltCow";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 1;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 10;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_BosTaurusF: Skinning_Animal_BosTaurus{};
	class Skinning_Animal_CapraHircus
	{
		class ObtainedSteaks
		{
			item = "Meat_GoatSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltGoat";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.4;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 4;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_OvisOrientalis
	{
		class ObtainedSteaks
		{
			item = "Meat_MouflonSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltMouflon";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.4;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 4;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_GallusGallusDomesticus
	{
		class ObtainedSteaks
		{
			item = "Meat_ChickenBreast";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_SmallGuts";
			count = 1;
			quantity = 1;
		};
		class ObtainedFeathers
		{
			item = "Crafting_ChickenFeather";
			count = 1;
			quantity = 20;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 2;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_GallusGallusDomesticusF
	{
		class ObtainedSteaks
		{
			item = "Meat_ChickenBreast";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_SmallGuts";
			count = 1;
			quantity = 1;
		};
		class ObtainedFeathers
		{
			item = "Crafting_ChickenFeather";
			count = 1;
			quantity = 20;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 2;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_LepusEuropaeus
	{
		class ObtainedSteaks
		{
			item = "Meat_RabbitLeg";
			count = 2;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltRabbit";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 2;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_SusDomesticus
	{
		class ObtainedSteaks
		{
			item = "Meat_PigSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltPig";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.8;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 4;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_SusScrofa
	{
		class ObtainedSteaks
		{
			item = "Meat_BoarSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltWildboar";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.8;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 5;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_OvisAries
	{
		class ObtainedSteaks
		{
			item = "Meat_SheepSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltSheep";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.85;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 5;
			transferToolDamage = 1;
		};
	};
	class Skinning_Animal_OvisAriesF: Skinning_Animal_OvisAries{};
	class Skinning_Animal_VulpesVulpes
	{
		class ObtainedSteaks
		{
			item = "Meat_FoxSteak";
			count = 3;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedGuts
		{
			item = "Food_Guts";
			count = 1;
			quantity = 1;
		};
		class ObtainedPelt
		{
			item = "Consumable_PeltFox";
			count = 1;
			quantity = 1;
			transferToolDamage = 1;
		};
		class ObtainedLard
		{
			item = "Food_Lard";
			count = 1;
			quantity = 0.3;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 5;
			transferToolDamage = 1;
		};
	};
	class Skinning_SurvivorBase
	{
		class ObtainedSteaks
		{
			item = "Meat_HumanSteak";
			count = 4;
			quantityMin = 0.5;
			quantityMax = 1;
		};
		class ObtainedBones
		{
			item = "Consumable_Bones";
			count = 1;
			quantity = 5;
			transferToolDamage = 1;
		};
	};
};
class CfgPatches
{
	class DZ_Animals
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
	};
};
class CfgMovesAnimal
{
	skeletonName = "";
	class ManActions{};
	class States{};
	class Interpolations{};
	transitionsInterpolated[] = {};
	transitionsSimple[] = {};
	transitionsDisabled[] = {};
};
class CfgVehicles
{
	class DZ_LightAI;
	class AnimalBase: DZ_LightAI
	{
		class SoundEnvironExt
		{
			normalExt[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			normal[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			road[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			rock[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			water[] = {{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\water\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\water\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			gravel[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			gravel2[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			sand[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			drygrass[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			grass[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			forest[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			mud[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			wood[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			wood_int[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			carpet[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			concrete_int[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			concrete_ext[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			metal[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			steel[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			hallway[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			dirt[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			parkety[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			wave_plate[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			lepenka[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
			tasky[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",0.7,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_1",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_2",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_3",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_4",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_5",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_7",0.7,1,50}},{"runPawBig",{"\dz\sounds\effects\animals\movement\paw_big\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",0.7,1,50}},{"runPawMed",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_1",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_2",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_3",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_4",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_5",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_7",0.7,1,50}},{"runPawSmall",{"\dz\sounds\effects\animals\movement\paw_small\default\step_6",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_0",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_1",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_2",0.7,1,50}},{"reddeerdeath",{"\dz\sounds\effects\animals\deer\roar\roar_3",0.7,1,50}},{"stand2rest",{"\dz\sounds\effects\animals\cow\stand2rest_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_0",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_1",0.7,1,50}},{"stand2grazing",{"\dz\sounds\effects\animals\cow\stand_2_grazing_2",0.7,1,50}},{"rest2stand",{"\dz\sounds\effects\animals\cow\rest2stand_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_0",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_1",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_2",0.7,1,50}},{"restidle1",{"\dz\sounds\effects\animals\cow\rest_idle_1_3",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_0",0.7,1,50}},{"restidle2",{"\dz\sounds\effects\animals\cow\rest_idle_2_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_0",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_1",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_2",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_3",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_4",0.7,1,50}},{"rest",{"\dz\sounds\effects\animals\cow\rest_5",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_0",0.7,1,50}},{"restdeath",{"\dz\sounds\effects\animals\cow\rest_death_1",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_0",0.7,1,50}},{"grazingwalk",{"\dz\sounds\effects\animals\cow\grazing_walk_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_0",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_1",0.7,1,50}},{"grazingidle",{"\dz\sounds\effects\animals\cow\grazing_idle_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_0",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_1",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_2",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_3",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_4",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_5",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_6",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_7",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_8",0.7,1,50}},{"grazingstand",{"\dz\sounds\effects\animals\cow\grazing_stand_9",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_0",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_1",0.7,1,50}},{"grazing2stand",{"\dz\sounds\effects\animals\cow\grazing_2_stand_2",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_0",0.7,1,50}},{"death",{"\dz\sounds\effects\animals\cattle\roar\roar_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_0",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_1",0.7,1,50}},{"pigidle1",{"\dz\sounds\effects\animals\hog\grunt_i\grunt_i_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_0",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_1",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_2",0.7,1,50}},{"pigidle2",{"\dz\sounds\effects\animals\hog\grunt_c\grunt_c_3",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"pigdeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitattacked",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_0",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_1",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_2",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_3",0.7,1,50}},{"rabbitdeath",{"\dz\sounds\effects\animals\hare\scream\scream_4",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_0",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_1",0.7,1,50}},{"wildboaridle1",{"\dz\sounds\effects\animals\hog\grunt_d\grunt_d_2",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboaridle2",{"\dz\sounds\effects\animals\hog\grunt_b\grunt_b_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_0",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_1",0.7,1,50}},{"wildboardeath",{"\dz\sounds\effects\animals\hog\grunt_a_squeal\grunt_a_squeal_2",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_0",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_1",0.7,1,50}},{"goatdeath",{"\dz\sounds\effects\animals\goat\bleat_c\bleat_c_2",0.7,1,50}}};
		};
		scope = 0;
		vehicleClass = "Animals";
		simulation = "animal";
		storageCategory = 3;
		isMan = 0;
		woman = 0;
		itemsCargoSize[] = {6,5};
		armor = 1.5;
		sensitivity = 5;
		sensitivityEar = 8;
		icon = "\dz\animals\data\mapicon_animals_ca.paa";
		displayName = "$STR_DN_ANIMAL";
		nameSound = "veh_animal";
		accuracy = 0.25;
		camouflage = 0.4;
		boneHead = "head";
		bonePrimaryWeapon = "head";
		triggerAnim = "";
		moves = "CfgMovesAnimal";
		faceType = "Default";
		memoryPointHeadAxis = "head_axis";
		boneLEye = "l_eye";
		boneREye = "r_eye";
		boneLEyelidUp = "eye_upl";
		boneREyelidUp = "eye_upr";
		boneLEyelidDown = "eye_lwl";
		boneREyelidDown = "eye_lwr";
		boneLPupil = "l_pupila";
		boneRPupil = "r_pupila";
		memoryPointAim = "aimPoint";
		memoryPointCameraTarget = "camera";
		agentTasks[] = {"AnimalMainTask"};
		attackSounds = "";
		spottedSounds = "";
		chaseSounds = "";
		idleSounds = "";
		class VariablesScalar
		{
			_threatMaxRadius = 50;
			_runDistanceMax = 100;
			_movePrefer = 0.7;
			_formationPrefer = 0.1;
			_scareLimit = 0.2;
			_dangerLimit = 1;
		};
		class VariablesString
		{
			_expSafe = "(0.5 * meadow) * (0.5 * trees) * (1 - forest) * (1 - houses) * (1 - sea)";
			_expDanger = "(trees) * (forest) * (1 - meadow)";
		};
		htMin = 60;
		htMax = 1800;
		afMax = 30;
		mfMax = 0;
		mFact = 1;
		tBody = 37;
	};
	class AnimalsHoofsMedium: AnimalBase{};
};
class CfgTasks
{
	class AnimalMainTask
	{
		name = "Animal Main Task";
		fsm = "\dz\animals\Data\scripts\main.fsm";
		condition = "\dz\animals\Data\scripts\createSingleTask.sqf";
		description = "Animal master task";
		destination = "";
		resources[] = {};
	};
};
class CfgFSMs
{
	class Dragonfly
	{
		class States
		{
			class Random_Move
			{
				name = "Random_Move";
				class Init
				{
					function = "randomMove";
					parameters[] = {1,-0.1,1.2,5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom3";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom2";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongerWait
			{
				name = "LongerWait";
				class Init
				{
					function = "wait";
					parameters[] = {0.8,2};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "setNoBackwards";
					parameters[] = {1};
					thresholds[] = {{0,0.5,0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name = "SetTimerRandom";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.5,2};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetRandom";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class ShortWait
			{
				name = "ShortWait";
				class Init
				{
					function = "wait";
					parameters[] = {0.6,1.5};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom2
			{
				name = "SetRandom2";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1,0,1}};
				};
				class Links
				{
					class constProbability
					{
						priority = 1;
						to = "LongWait";
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "LongerWait";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom3
			{
				name = "SetRandom3";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1,0,1}};
				};
				class Links
				{
					class constProbability
					{
						priority = 1;
						to = "LongWait";
						class Condition
						{
							function = "const";
							parameters[] = {0.15};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "ShortWait";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongWait
			{
				name = "LongWait";
				class Init
				{
					function = "wait";
					parameters[] = {4,8};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom
			{
				name = "SetRandom";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1,0,1}};
				};
				class Links
				{
					class constProbability
					{
						priority = 1;
						to = "LongMove";
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "Random_Move";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongMove
			{
				name = "LongMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {2.5,-0.1,1.2,5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom3";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom2";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
	class Butterfly
	{
		class States
		{
			class Init
			{
				name = "Init";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{0,0.5,0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class MoveLand
			{
				name = "MoveLand";
				class Init
				{
					function = "randomMoveLand";
					parameters[] = {2};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetTimer3";
						class Condition
						{
							function = "moveCompletedVertical";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "wait";
							parameters[] = {5,15};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "Land";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer3
			{
				name = "SetTimer3";
				class Init
				{
					function = "setTimer";
					parameters[] = {4,6};
					thresholds[] = {};
				};
				class Links
				{
					class TimeElapsed
					{
						priority = 0;
						to = "checkWait";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "switchAction";
							parameters[] = {1};
							thresholds[] = {};
						};
					};
				};
			};
			class checkWait
			{
				name = "checkWait";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class WaitCompleted
					{
						priority = 1;
						to = "SetTimer";
						class Condition
						{
							function = "waitCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "switchAction";
							parameters[] = {0};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "SetTimer3";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer
			{
				name = "SetTimer";
				class Init
				{
					function = "setTimer";
					parameters[] = {10,25};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Move";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Land
			{
				name = "Land";
				class Init
				{
					function = "Land";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Wait";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Wait
			{
				name = "Wait";
				class Init
				{
					function = "wait";
					parameters[] = {3,10};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer3";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Move
			{
				name = "Move";
				class Init
				{
					function = "randomMove";
					parameters[] = {3};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "Continue";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetTimer2";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer2
			{
				name = "SetTimer2";
				class Init
				{
					function = "setTimer";
					parameters[] = {3,6};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "MoveLand";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Continue
			{
				name = "Continue";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "Move";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
	class HoneyBee
	{
		class States
		{
			class ShortMove
			{
				name = "ShortMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {0.2};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Break
			{
				name = "Break";
				class Init
				{
					function = "break";
					parameters[] = {50};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimer";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class Init
			{
				name = "Init";
				class Init
				{
					function = "setNoBackwards";
					parameters[] = {0};
					thresholds[] = {{0,0.5,0.5}};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimerRandom
			{
				name = "SetTimerRandom";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.5,2};
					thresholds[] = {};
				};
				class Links
				{
					class Always
					{
						priority = 0;
						to = "SetRandom_1";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetTimer
			{
				name = "SetTimer";
				class Init
				{
					function = "setTimer";
					parameters[] = {0.1,0.3};
					thresholds[] = {};
				};
				class Links
				{
					class TimeElapsed
					{
						priority = 0;
						to = "SetTimerRandom";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom
			{
				name = "SetRandom";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1,0,1}};
				};
				class Links
				{
					class constProbability
					{
						priority = 1;
						to = "SetRandom_1";
						class Condition
						{
							function = "const";
							parameters[] = {0.5};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "Break";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class SetRandom_1
			{
				name = "SetRandom_1";
				class Init
				{
					function = "nothing";
					parameters[] = {};
					thresholds[] = {{1,0,1}};
				};
				class Links
				{
					class constProbability
					{
						priority = 1;
						to = "LongMove";
						class Condition
						{
							function = "const";
							parameters[] = {0.1};
							threshold = 1;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class Always
					{
						priority = 0;
						to = "ShortMove";
						class Condition
						{
							function = "true";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
			class LongMove
			{
				name = "LongMove";
				class Init
				{
					function = "randomMove";
					parameters[] = {1.5};
					thresholds[] = {};
				};
				class Links
				{
					class MoveCompleted
					{
						priority = 1;
						to = "SetRandom";
						class Condition
						{
							function = "moveCompleted";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
					class TimeElapsed
					{
						priority = 0;
						to = "SetRandom";
						class Condition
						{
							function = "timeElapsed";
							parameters[] = {};
							threshold = 0;
						};
						class Action
						{
							function = "nothing";
							parameters[] = {};
							thresholds[] = {};
						};
					};
				};
			};
		};
		initState = "Init";
		finalStates[] = {};
	};
};
