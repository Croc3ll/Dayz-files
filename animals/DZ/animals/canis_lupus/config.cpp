////////////////////////////////////////////////////////////////////
//DeRap: animals\canis_lupus\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:46:02 2019 : 'file' last modified on Mon Dec 19 09:52:40 2016
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
	class DZ_Animals_canis_lupus
	{
		units[] = {"Animal_CanisLupus_Grey","Animal_CanisLupus_White"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_CanisLupus: AnimalBase
	{
		class SoundEnvironExt
		{
			normal[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			normalExt[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			concrete_int[] = {{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\rest2stand_b_0",1,1,50}}};
			concrete_ext[] = {{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\concrete\rest2stand_b_0",1,1,50}}};
			dirt[] = {{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\dirt\rest2stand_b_0",1,1,50}}};
			forest[] = {{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\forest\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\forest\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\forest\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\forest\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\forest\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\forest\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\forest\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\forest\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\forest\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\forest\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\forest\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\forest\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\forest\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\forest\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\forest\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\forest\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\forest\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\forest\rest2stand_b_0",1,1,50}}};
			grass[] = {{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\grass\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\grass\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\grass\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\grass\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\grass\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\grass\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\grass\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\grass\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\grass\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\grass\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\grass\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\grass\rest2stand_b_0",1,1,50}}};
			drygrass[] = {{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\grass_dry\rest2stand_b_0",1,1,50}}};
			gravel[] = {{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\rest2stand_b_0",1,1,50}}};
			gravel2[] = {{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\gravel\rest2stand_b_0",1,1,50}}};
			metal[] = {{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\metal\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\metal\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\metal\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\metal\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\metal\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\metal\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\metal\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\metal\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\metal\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\metal\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\metal\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\metal\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\metal\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\metal\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\metal\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\metal\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\metal\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\metal\rest2stand_b_0",1,1,50}}};
			mud[] = {{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\mud\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\mud\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\mud\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\mud\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\mud\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\mud\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\mud\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\mud\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\mud\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\mud\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\mud\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\mud\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\mud\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\mud\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\mud\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\mud\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\mud\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\mud\rest2stand_b_0",1,1,50}}};
			road[] = {{"\dz\sounds\effects\animals\movement\paw_medium\road\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\road\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\road\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\road\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\road\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\road\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\road\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\road\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\road\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\road\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\road\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\road\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\road\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\road\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\road\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\road\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\road\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\road\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\road\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\road\rest2stand_b_0",1,1,50}}};
			rock[] = {{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\rock\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\rock\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\rock\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\rock\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\rock\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\rock\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\rock\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\rock\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\rock\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\rock\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\rock\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\rock\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\rock\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\rock\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\rock\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\rock\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\rock\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\rock\rest2stand_b_0",1,1,50}}};
			sand[] = {{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\sand\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\sand\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\sand\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\sand\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\sand\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\sand\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\sand\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\sand\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\sand\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\sand\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\sand\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\sand\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\sand\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\sand\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\sand\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\sand\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\sand\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\sand\rest2stand_b_0",1,1,50}}};
			water[] = {{"\dz\sounds\effects\animals\movement\paw_medium\water\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\water\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\water\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\water\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\water\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\water\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\water\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\water\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\water\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\water\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\water\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\water\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\water\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\water\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\water\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\water\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\water\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\water\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\water\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\water\rest2stand_b_0",1,1,50}}};
			wood[] = {{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\wood\rest2stand_b_0",1,1,50}}};
			wood_int[] = {{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\wood\rest2stand_b_0",1,1,50}}};
			parkety[] = {{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\wood\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\wood\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\wood\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\wood\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\wood\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\wood\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\wood\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\wood\rest2stand_b_0",1,1,50}}};
			steel[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			hallway[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			carpet[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			wave_plate[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			lepenka[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
			tasky[] = {{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_1",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_3",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_5",1,1,50}},{"pm_stepl",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_7",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_2",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_4",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_6",1,1,50}},{"pm_stepr",{"\dz\sounds\effects\animals\movement\paw_medium\default\step_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_1",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_2",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_3",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_4",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_5",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_6",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_7",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_8",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_9",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_10",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_11",1,1,50}},{"pm_grazing",{"\dz\sounds\effects\animals\movement\paw_medium\default\grazing_12",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_0",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_1",1,1,50}},{"pm_bodyfall",{"\dz\sounds\effects\animals\movement\paw_medium\default\bodyfall_2",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_0",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_1",1,1,50}},{"pm_jump",{"\dz\sounds\effects\animals\movement\paw_medium\default\jump_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_0",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_1",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_2",1,1,50}},{"pm_impact",{"\dz\sounds\effects\animals\movement\paw_medium\default\impact_3",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\settle_0",1,1,50}},{"pm_stand2rest_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_a_0",1,1,50}},{"pm_stand2rest_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_b_0",1,1,50}},{"pm_stand2rest_c",{"\dz\sounds\effects\animals\movement\paw_medium\default\stand2rest_c_0",1,1,50}},{"pm_rest2stand_a",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_a_0",1,1,50}},{"pm_rest2stand_b",{"\dz\sounds\effects\animals\movement\paw_medium\default\rest2stand_b_0",1,1,50}}};
		};
		newAnimSystemSoundStepOverride = "walk";
		scope = 0;
		model = "\DZ\animals\canis_lupus\canis_lupus.p3d";
		armor = 5.0;
		armorStructural = 2.0;
		displayName = "Canis Lupus";
		moves = "CfgMovesCanisLupus";
		hiddenSelections[] = {"Camo","CamoHair"};
		DamageSphereAmmos[] = {"MeleeWolf","MeleeWolfVsPrey"};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "Meat_WolfSteak";
				count = 3;
				quantityMinMax[] = {0.25,1.0};
			};
			class ObtainedGuts
			{
				item = "Food_Guts";
				count = 1;
				quantity = 1;
			};
			class ObtainedPelt
			{
				item = "Consumable_PeltWolf";
				count = 1;
				quantity = 1;
				transferToolDamage = 1;
			};
			class ObtainedLard
			{
				item = "Food_Lard";
				count = 1;
				quantity = 0.5;
			};
			class ObtainedBones
			{
				item = "Consumable_Bones";
				count = 1;
				quantity = 5;
				transferToolDamage = 1;
			};
		};
		class AIAgentTemplate
		{
			name = "wolf";
			HeadLookBoneName = "pin_lookat";
			teamName = "Predator";
			defaultGroupTemplateName = "DZWolfGroupBeh";
			class PathAgent
			{
				radius = 0.3;
				height = 1.0;
			};
			class BehaviourHLPredator
			{
				instantAlertRangeMin = 5.0;
				instantAlertRangeMax = 7.0;
				instantAlertStrength = 30.0;
				proximityAttackRange = 3.0;
				attackCooldown = 3.0;
				class SlotCalmGrazing
				{
					class BehaviourCalm
					{
						travelingMode = 1;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 0;
						travelWeight = 0;
						grazeOnSpotDurationMin = 5;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 500;
						grazeWalkingDurationMax = 500;
						restingDurationMin = 5;
						restingDurationMax = 10;
						travelingDurationMin = 15;
						travelingDurationMax = 30;
						grazeWalkingSpeed = 0.2;
						travelingWalkingSpeed = 1.36;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.54;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.12;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 4.0;
							stopRadius = 2.0;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotSiege
				{
					class BehaviourSiege
					{
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\wolf\pant\pant_0","dz\sounds\effects\animals\wolf\pant\pant_1","dz\sounds\effects\animals\wolf\pant\pant_2"};
							volume = 0.8;
							distance = 50;
							probability = 0.5;
						};
						innerRadius = 7;
						innerRadiusMin = 2.5;
						innerRadiusMax = 10;
						outerRadius = 16;
						directionChangeTimeMin = 7;
						directionChangeTimeMax = 25;
						preferPlayerFOVCooldown = 1.5;
						attackDistance = 4;
						class InnerCircleMovement
						{
							maxSpeed = 6.3;
							optimalSpeed = 6.3;
							optimalSpeedRange = 1;
							minSpeed = 0.01;
							acceleration = 10.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 2.0;
							maxSpeedRange = 2;
							pathFilter = "WolfOnHunt";
							startAnimationMaxSpeed = 0.54;
						};
						class Movement
						{
							maxSpeed = 9.0;
							optimalSpeed = 6.3;
							optimalSpeedRange = 15;
							minSpeed = 1.0;
							acceleration = 10.0;
							maxAngleSpeed = 180.0;
							slowRadius = 0.0;
							stopRadius = 2.0;
							maxSpeedRange = 20;
							pathFilter = "WolfOnHunt";
							startAnimationMaxSpeed = 0.54;
						};
						class AttackMovement
						{
							maxSpeed = 12.175;
							optimalSpeed = 12.0;
							optimalSpeedRange = 6;
							minSpeed = 0.8;
							acceleration = 10.0;
							maxAngleSpeed = 180.0;
							slowRadius = 2.0;
							stopRadius = 3.0;
							maxSpeedRange = 30;
							pathFilter = "WolfOnHunt";
						};
					};
				};
				class SlotEating
				{
					class BehaviourCalm
					{
						travelingMode = 0;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 20;
						travelWeight = 10;
						eatingWeight = 50;
						grazeOnSpotDurationMin = 15;
						grazeOnSpotDurationMax = 30;
						grazeWalkingDurationMin = 10;
						grazeWalkingDurationMax = 15;
						restingDurationMin = 15;
						restingDurationMax = 25;
						travelingDurationMin = 15;
						travelingDurationMax = 30;
						eatingDurationMin = 60;
						eatingDurationMax = 120;
						safetyDurationMin = 10;
						safetyDurationMax = 20;
						safetyLookAngleMin = 0.1;
						safetyLookAngleMax = 1.5;
						safetyLookAngleChangeInterval = 7;
						class GrazeMovement
						{
							maxSpeed = 0.54;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.12;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotHunting
				{
					class BehaviourHunt
					{
						attackRange = 4.0;
						followingRadius = 15.0;
						followingRadiusReqroupCooldownMin = 5.0;
						followingRadiusReqroupCooldownMax = 15.0;
						followingRadiusRegroupMinSpeed = 1.5;
						predictFollowingMinDistance = 10.0;
						minDistanceToTargetRatio = 0.3;
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\wolf\bark2\bark2_0","dz\sounds\effects\animals\wolf\pant\pant_0"};
							volume = 0.8;
							distance = 300;
							probability = 0.3;
						};
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\wolf\pant\pant_0","dz\sounds\effects\animals\wolf\bark2\bark2_0","dz\sounds\effects\animals\wolf\bark2\bark2_1","dz\sounds\effects\animals\wolf\bark2\bark2_2","dz\sounds\effects\animals\wolf\bark2\bark2_3","dz\sounds\effects\animals\wolf\bark2\bark2_4"};
							volume = 0.8;
							distance = 50;
							probability = 0.2;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 30.0;
							RepeatEnabled = 1;
						};
						class Movement
						{
							maxSpeed = 9.0;
							optimalSpeed = 7.5;
							minSpeed = 1.0;
							acceleration = 10.0;
							maxAngleSpeed = 180.0;
							slowRadius = 2.0;
							stopRadius = 1.0;
							maxSpeedRange = 8.0;
							optimalSpeedRange = 5.0;
							pathFilter = "WolfOnHunt";
						};
						class MovementAttack
						{
							maxSpeed = 12.175;
							optimalSpeed = 12.175;
							minSpeed = 6.0;
							acceleration = 20.0;
							maxAngleSpeed = 360.0;
							slowRadius = 0.0;
							stopRadius = 0.0;
							maxSpeedRange = 3;
							optimalSpeedRange = 1;
							pathFilter = "WolfOnHunt";
						};
					};
				};
				class SlotCalmResting
				{
					class BehaviourCalm
					{
						travelingMode = 1;
						grazeOnSpotWeight = 50;
						grazeWalkingWeight = 50;
						restWeight = 50;
						travelWeight = 0;
						grazeOnSpotDurationMin = 5;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 15;
						grazeWalkingDurationMax = 25;
						restingDurationMin = 25;
						restingDurationMax = 35;
						travelingDurationMin = 15;
						travelingDurationMax = 30;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.1;
						safetyLookAngleMax = 1.5;
						safetyLookAngleChangeInterval = 7;
						class GrazeMovement
						{
							maxSpeed = 0.54;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.12;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotCalmTravelling
				{
					class BehaviourCalm
					{
						travelingMode = 1;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 0;
						travelWeight = 50;
						grazeOnSpotDurationMin = 10;
						grazeOnSpotDurationMax = 20;
						grazeWalkingDurationMin = 25;
						grazeWalkingDurationMax = 35;
						restingDurationMin = 5;
						restingDurationMax = 10;
						travelingDurationMin = 50;
						travelingDurationMax = 80;
						safetyDurationMin = 10;
						safetyDurationMax = 20;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 1.0;
						safetyLookAngleChangeInterval = 5;
						class TravelingMovement
						{
							maxSpeed = 3.13;
							minSpeed = 0.782;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 4.0;
							stopRadius = 2.0;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
						class CatchUpMovement
						{
							maxSpeed = 3.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
						class GrazeMovement
						{
							maxSpeed = 0.1;
							minSpeed = 0.1;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
					};
				};
				class SlotAttracted
				{
					class BehaviourCalm
					{
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\wolf\howls\howls_0","dz\sounds\effects\animals\wolf\howls\howls_1","dz\sounds\effects\animals\wolf\howls\howls_2"};
							volume = 0.8;
							distance = 500;
							probability = 0.6;
						};
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\wolf\howls\howls_0","dz\sounds\effects\animals\wolf\howl\howl_0","dz\sounds\effects\animals\wolf\howl\howl_1","dz\sounds\effects\animals\wolf\howl\howl_2","dz\sounds\effects\animals\wolf\howl\howl_3","dz\sounds\effects\animals\wolf\howl\howl_4"};
							volume = 0.8;
							distance = 500;
							probability = 0.3;
							RepeatTimeMin = 5.0;
							RepeatTimeMax = 25.0;
							RepeatEnabled = 1;
						};
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 0;
						travelWeight = 50;
						grazeOnSpotDurationMin = 5;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 5;
						grazeWalkingDurationMax = 10;
						restingDurationMin = 5;
						restingDurationMax = 10;
						travelingDurationMin = 50;
						travelingDurationMax = 100;
						grazeWalkingSpeed = 0.544;
						travelingWalkingSpeed = 0.782;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class TravelingMovement
						{
							maxSpeed = 3.13;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 5.0;
							stopRadius = 3.0;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
						class CatchUpMovement
						{
							maxSpeed = 6.37;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
						class GrazeMovement
						{
							maxSpeed = 0.54;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
					};
				};
				class SlotFireplace
				{
					class BehaviourCalm
					{
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 20;
						travelWeight = 0;
						grazeOnSpotDurationMin = 50;
						grazeOnSpotDurationMax = 100;
						grazeWalkingDurationMin = 50;
						grazeWalkingDurationMax = 100;
						restingDurationMin = 50;
						restingDurationMax = 150;
						travelingDurationMin = 0;
						travelingDurationMax = 0;
						grazeWalkingSpeed = 0.2;
						travelingWalkingSpeed = 1.36;
						safetyIntervalMin = 30;
						safetyIntervalMax = 40;
						safetyDurationMin = 5;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.25;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.12;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
						};
					};
				};
				class SlotScared
				{
					class BehaviourFleeFromTargets
					{
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\wolf\groans\groans_0","dz\sounds\effects\animals\wolf\groans\groans_1","dz\sounds\effects\animals\wolf\groans\groans_2","dz\sounds\effects\animals\wolf\groans\groans_3"};
							volume = 0.8;
							distance = 400;
							probability = 1.0;
						};
						class RunMovement
						{
							maxSpeed = 12.175;
							optimalSpeed = 6.4;
							minSpeed = 1.0;
							acceleration = 2.0;
							maxAngleSpeed = 360.0;
							slowRadius = 4.0;
							stopRadius = 0.0;
							maxSpeedRange = 15;
							optimalSpeedRange = 10;
							pathFilter = "DeerOnRun";
						};
					};
				};
				class AlertSystem
				{
					visionToAlertMultiplier = 10;
					noiseToAlertMultiplier = 1.0;
					damageToAlertMultiplier = 200.0;
					class Calm
					{
						dropSpeed = 3;
						dropDelay = 2;
						maxAlertValue = 30;
					};
					class Alerted
					{
						dropSpeed = 15;
						dropDelay = 1;
						maxAlertValue = 200;
					};
					class AlertedExtra
					{
						dropSpeed = 25;
						dropDelay = 10;
						maxAlertValue = 500;
					};
				};
			};
			class NoiseSystemParams
			{
				rangeMin = 10.0;
				rangeMax = 100.0;
				rangeShotMin = 0.0;
				rangeShotMax = 40.0;
				class NoiseStrengthTeamMultipliers
				{
					BigGame = 0.8;
					Zombies = 0.4;
					Player = 1.0;
				};
			};
			class TargetSystemDZBase
			{
				class VisionTeamMultipliers
				{
					BigGame = 0.8;
					Zombies = 0.8;
					Player = 1.0;
				};
				visionManSizeStand = 1.0;
				visionManSizeCrouch = 0.8;
				visionManSizeProne = 0.6;
				visionAngularSpeedMin = 0.1;
				visionAngularSpeedMax = 0.5;
				visionAngularSpeedMaxMult = 1.5;
				visionRangeMin = 100;
				visionRangeMax = 200;
				visionFov = 1.8;
				visionPeripheralRangeMin = 1;
				visionPeripheralRangeMax = 16;
				visionPeripheralFov = 3.15;
				visionNightMinMult = 1.0;
				visionNightMaxMult = 0.5;
				visionRainMinMult = 1.0;
				visionRainMaxMult = 0.8;
				visionFogMinMult = 1.0;
				visionFogMaxMult = 0.4;
			};
		};
		class AnimSystem
		{
			meshObject = "dz\animals\canis_lupus\data\canis_lupus_skeleton.xob";
			animGraph = "dz\animals\animations\wolf_skeleton\AG_wolf_skeleton.ag";
			class AnimEventNoises
			{
				class SomeNoise
				{
					strength = 9.0;
					type = "sound";
				};
			};
			class AnimEventSounds
			{
				class wolf_bark
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\bark\bark_0","DZ\sounds\effects\animals\wolf\bark\bark_1","DZ\sounds\effects\animals\wolf\bark\bark_2","DZ\sounds\effects\animals\wolf\bark\bark_3","DZ\sounds\effects\animals\wolf\bark\bark_4","DZ\sounds\effects\animals\wolf\bark\bark_5","DZ\sounds\effects\animals\wolf\bark\bark_6","DZ\sounds\effects\animals\wolf\bark\bark_7","DZ\sounds\effects\animals\wolf\bark\bark_8","DZ\sounds\effects\animals\wolf\bark\bark_9","DZ\sounds\effects\animals\wolf\bark\bark_10"};
					volume = 1;
					distance = 70;
				};
				class wolf_bark2
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\bark2\bark2_0","DZ\sounds\effects\animals\wolf\bark2\bark2_1","DZ\sounds\effects\animals\wolf\bark2\bark2_2","DZ\sounds\effects\animals\wolf\bark2\bark2_3","DZ\sounds\effects\animals\wolf\bark2\bark2_4"};
					volume = 1;
					distance = 70;
				};
				class wolf_breath
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\breath\breath_0","DZ\sounds\effects\animals\wolf\breath\breath_1","DZ\sounds\effects\animals\wolf\breath\breath_2","DZ\sounds\effects\animals\wolf\breath\breath_3","DZ\sounds\effects\animals\wolf\breath\breath_4","DZ\sounds\effects\animals\wolf\breath\breath_5","DZ\sounds\effects\animals\wolf\breath\breath_6","DZ\sounds\effects\animals\wolf\breath\breath_7","DZ\sounds\effects\animals\wolf\breath\breath_8","DZ\sounds\effects\animals\wolf\breath\breath_9","DZ\sounds\effects\animals\wolf\breath\breath_10"};
					volume = 1;
					distance = 70;
				};
				class wolf_growl
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\growl\growl_0","DZ\sounds\effects\animals\wolf\growl\growl_1","DZ\sounds\effects\animals\wolf\growl\growl_2","DZ\sounds\effects\animals\wolf\growl\growl_3"};
					volume = 1;
					distance = 70;
				};
				class wolf_howl
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\howl\howl_0","DZ\sounds\effects\animals\wolf\howl\howl_1","DZ\sounds\effects\animals\wolf\howl\howl_2","DZ\sounds\effects\animals\wolf\howl\howl_3","DZ\sounds\effects\animals\wolf\howl\howl_4"};
					volume = 1;
					distance = 70;
				};
				class wolf_howls
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\howls\howls_0","DZ\sounds\effects\animals\wolf\howls\howls_1","DZ\sounds\effects\animals\wolf\howls\howls_2"};
					volume = 1;
					distance = 70;
				};
				class wolf_pant
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\pant\pant_0","DZ\sounds\effects\animals\wolf\pant\pant_1","DZ\sounds\effects\animals\wolf\pant\pant_2","DZ\sounds\effects\animals\wolf\pant\pant_3","DZ\sounds\effects\animals\wolf\pant\pant_4","DZ\sounds\effects\animals\wolf\pant\pant_5","DZ\sounds\effects\animals\wolf\pant\pant_6","DZ\sounds\effects\animals\wolf\pant\pant_7"};
					volume = 1;
					distance = 70;
				};
				class wolf_pant_short
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\pant_short\pant_short_0","DZ\sounds\effects\animals\wolf\pant_short\pant_short_1","DZ\sounds\effects\animals\wolf\pant_short\pant_short_2","DZ\sounds\effects\animals\wolf\pant_short\pant_short_3","DZ\sounds\effects\animals\wolf\pant_short\pant_short_4","DZ\sounds\effects\animals\wolf\pant_short\pant_short_5","DZ\sounds\effects\animals\wolf\pant_short\pant_short_6","DZ\sounds\effects\animals\wolf\pant_short\pant_short_7"};
					volume = 1;
					distance = 70;
				};
				class wolf_snarl
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\snarl\snarl_0","DZ\sounds\effects\animals\wolf\snarl\snarl_1","DZ\sounds\effects\animals\wolf\snarl\snarl_2","DZ\sounds\effects\animals\wolf\snarl\snarl_3"};
					volume = 1;
					distance = 70;
				};
				class wolf_snarl_short
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\snarl_short\snarl_short_0","DZ\sounds\effects\animals\wolf\snarl_short\snarl_short_1","DZ\sounds\effects\animals\wolf\snarl_short\snarl_short_2"};
					volume = 1;
					distance = 70;
				};
				class wolf_attack
				{
					sounds[] = {"DZ\sounds\effects\impacts\Wolf_attack_0","DZ\sounds\effects\impacts\Wolf_attack_1","DZ\sounds\effects\impacts\Wolf_attack_2","DZ\sounds\effects\impacts\Wolf_attack_3","DZ\sounds\effects\impacts\Wolf_attack_4"};
					volume = 1;
					distance = 70;
				};
				class wolf_whimper
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\whimper\whimper_0","DZ\sounds\effects\animals\wolf\whimper\whimper_1","DZ\sounds\effects\animals\wolf\whimper\whimper_2","DZ\sounds\effects\animals\wolf\whimper\whimper_3","DZ\sounds\effects\animals\wolf\whimper\whimper_4","DZ\sounds\effects\animals\wolf\whimper\whimper_5"};
					volume = 1;
					distance = 70;
				};
				class wolf_yelp
				{
					sounds[] = {"DZ\sounds\effects\animals\wolf\yelp\yelp_0","DZ\sounds\effects\animals\wolf\yelp\yelp_1","DZ\sounds\effects\animals\wolf\yelp\yelp_2","DZ\sounds\effects\animals\wolf\yelp\yelp_3","DZ\sounds\effects\animals\wolf\yelp\yelp_4"};
					volume = 1;
					distance = 70;
				};
			};
		};
	};
	class Animal_CanisLupus_Grey: Animal_CanisLupus
	{
		scope = 2;
		displayName = "Canis Lupus Grey";
		hiddenSelectionsTextures[] = {"dz\animals\canis_lupus\data\wolf_grey_CO.paa","dz\animals\canis_lupus\data\wolf_grey_fur_CA.paa"};
	};
	class Animal_CanisLupus_White: Animal_CanisLupus
	{
		scope = 2;
		displayName = "Canis Lupus White";
		hiddenSelectionsTextures[] = {"dz\animals\canis_lupus\data\wolf_white_CO.paa","dz\animals\canis_lupus\data\wolf_white_fur_CA.paa"};
	};
};
