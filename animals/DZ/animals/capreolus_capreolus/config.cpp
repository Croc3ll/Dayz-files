////////////////////////////////////////////////////////////////////
//DeRap: animals\capreolus_capreolus\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:46:04 2019 : 'file' last modified on Mon Dec 19 09:52:40 2016
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
	class DZ_Animals_capreolus_capreolus
	{
		units[] = {"Animal_CapreolusCapreolus"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_CapreolusCapreolus: AnimalBase
	{
		class SoundEnvironExt
		{
			normal[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			normalExt[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			concrete_int[] = {{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\rub_2",1,1,50}}};
			concrete_ext[] = {{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\concrete\rub_2",1,1,50}}};
			dirt[] = {{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\dirt\rub_2",1,1,50}}};
			forest[] = {{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\forest\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\forest\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\forest\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\forest\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\forest\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\forest\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\forest\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\forest\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\forest\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\forest\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\forest\rub_2",1,1,50}}};
			grass[] = {{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\grass\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\grass\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\grass\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\grass\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\grass\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\grass\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\grass\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\grass\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\grass\rub_2",1,1,50}}};
			drygrass[] = {{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\grass_dry\rub_2",1,1,50}}};
			gravel[] = {{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\rub_2",1,1,50}}};
			gravel2[] = {{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\gravel\rub_2",1,1,50}}};
			metal[] = {{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\metal\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\metal\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\metal\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\metal\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\metal\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\metal\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\metal\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\metal\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\metal\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\metal\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\metal\rub_2",1,1,50}}};
			mud[] = {{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\mud\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\mud\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\mud\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\mud\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\mud\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\mud\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\mud\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\mud\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\mud\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\mud\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\mud\rub_2",1,1,50}}};
			road[] = {{"\dz\sounds\effects\animals\movement\hoof_small\road\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\road\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\road\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\road\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\road\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\road\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\road\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\road\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\road\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\road\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\road\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\road\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\road\rub_2",1,1,50}}};
			rock[] = {{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\rock\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\rock\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\rock\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\rock\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\rock\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\rock\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\rock\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\rock\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\rock\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\rock\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\rock\rub_2",1,1,50}}};
			sand[] = {{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\sand\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\sand\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\sand\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\sand\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\sand\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\sand\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\sand\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\sand\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\sand\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\sand\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\sand\rub_2",1,1,50}}};
			water[] = {{"\dz\sounds\effects\animals\movement\hoof_small\water\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\water\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\water\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\water\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\water\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\water\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\water\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\water\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\water\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\water\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\water\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\water\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\water\rub_2",1,1,50}}};
			wood[] = {{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\wood\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\rub_2",1,1,50}}};
			wood_int[] = {{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\wood\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\rub_2",1,1,50}}};
			parkety[] = {{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\wood\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\wood\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\wood\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\wood\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\wood\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\wood\rub_2",1,1,50}}};
			steel[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			hallway[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			carpet[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			wave_plate[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			lepenka[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
			tasky[] = {{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50},{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_1",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_3",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_5",1,1,50}},{"hs_stepl",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_7",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_2",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_4",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_6",1,1,50}},{"hs_stepr",{"\dz\sounds\effects\animals\movement\hoof_small\default\step_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_1",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_2",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_3",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_4",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_5",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_6",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_7",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_8",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_9",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_10",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_11",1,1,50}},{"hs_grazing",{"\dz\sounds\effects\animals\movement\hoof_small\default\grazing_12",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_0",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_1",1,1,50}},{"hs_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_small\default\bodyfall_2",1,1,50}},{"hs_settle",{"\dz\sounds\effects\animals\movement\hoof_small\default\settle_0",1,1,50}},{"hs_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_a_0",1,1,50}},{"hs_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\rest2stand_b_0",1,1,50}},{"hs_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_a_0",1,1,50}},{"hs_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_b_0",1,1,50}},{"hs_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_small\default\stand2rest_c_0",1,1,50}},{"hs_rubr",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_1",1,1,50}},{"hs_rubl",{"\dz\sounds\effects\animals\movement\hoof_small\default\rub_2",1,1,50}}};
		};
		newAnimSystemSoundStepOverride = "walk";
		scope = 2;
		model = "\DZ\animals\capreolus_capreolus\capreolus_capreolus.p3d";
		armor = 1.2;
		displayName = "Capreolus Capreolus";
		moves = "CfgMovesCapreolusCapreolus";
		class AnimEventNoises
		{
			class DeathFallNoise
			{
				strength = 100.0;
				type = "sound";
			};
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
				};
				damageLevels[] = {1.0,0.7,0.5,0.3,0.0};
			};
			class GlobalArmor
			{
				class WolfHit
				{
					health = 11;
					blood = 0;
					shock = 0.25;
				};
			};
		};
		class Skinning
		{
			class ObtainedSteaks
			{
				item = "Meat_DeerSteak";
				count = 4;
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
		class AIAgentTemplate
		{
			name = "roe deer";
			HeadLookBoneName = "pin_lookat";
			teamName = "BigGame";
			defaultGroupTemplateName = "DZDeerGroupBeh";
			class BehaviourHLDeer
			{
				instantAlertRangeMin = 20.0;
				instantAlertRangeMax = 50.0;
				instantAlertStrength = 6.0;
				class SlotCalmResting
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.5;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 50.0;
							RepeatEnabled = 1;
						};
						travelingMode = 0;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 50;
						travelWeight = 0;
						grazeOnSpotDurationMin = 20;
						grazeOnSpotDurationMax = 40;
						grazeWalkingDurationMin = 20;
						grazeWalkingDurationMax = 25;
						restingDurationMin = 20;
						restingDurationMax = 40;
						travelingDurationMin = 20;
						travelingDurationMax = 20;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
						safetyDurationMax = 15;
						safetyLookAngleMin = 0.1;
						safetyLookAngleMax = 1.5;
						safetyLookAngleChangeInterval = 7;
						class GrazeMovement
						{
							maxSpeed = 0.135;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 0.9;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
						class CatchUpMovement
						{
							maxSpeed = 0.651;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
					};
				};
				class SlotCalmGrazing
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.5;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 50.0;
							RepeatEnabled = 1;
						};
						travelingMode = 0;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 20;
						travelWeight = 0;
						grazeOnSpotDurationMin = 10;
						grazeOnSpotDurationMax = 50;
						grazeWalkingDurationMin = 20;
						grazeWalkingDurationMax = 40;
						restingDurationMin = 20;
						restingDurationMax = 20;
						travelingDurationMin = 20;
						travelingDurationMax = 20;
						safetyIntervalMin = 15;
						safetyIntervalMax = 15;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.1;
						safetyLookAngleMax = 1.5;
						safetyLookAngleChangeInterval = 7;
						class GrazeMovement
						{
							maxSpeed = 0.135;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 0.9;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
						class CatchUpMovement
						{
							maxSpeed = 0.651;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
					};
				};
				class SlotCalmTravelling
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.5;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 50.0;
							RepeatEnabled = 1;
						};
						travelingMode = 1;
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 0;
						travelWeight = 50;
						grazeOnSpotDurationMin = 15;
						grazeOnSpotDurationMax = 20;
						grazeWalkingDurationMin = 15;
						grazeWalkingDurationMax = 20;
						restingDurationMin = 5;
						restingDurationMax = 10;
						travelingDurationMin = 40;
						travelingDurationMax = 60;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.135;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 0.9;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
						class CatchUpMovement
						{
							maxSpeed = 6.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
					};
				};
				class SlotDrinking
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.5;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 50.0;
							RepeatEnabled = 1;
						};
						travelingMode = 1;
						grazeOnSpotWeight = 10;
						grazeWalkingWeight = 10;
						restWeight = 10;
						travelWeight = 0;
						drinkingWeight = 20;
						grazeOnSpotDurationMin = 10;
						grazeOnSpotDurationMax = 10;
						grazeWalkingDurationMin = 10;
						grazeWalkingDurationMax = 10;
						restingDurationMin = 0;
						restingDurationMax = 0;
						travelingDurationMin = 20;
						travelingDurationMax = 20;
						drinkingDurationMin = 15;
						drinkingDurationMax = 20;
						grazeWalkingSpeed = 0.179;
						travelingWalkingSpeed = 1.196;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class GrazeMovement
						{
							maxSpeed = 0.2;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
						class TravelingMovement
						{
							maxSpeed = 1.359;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
						class CatchUpMovement
						{
							maxSpeed = 6.0;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "DeerOnRun";
						};
					};
				};
				class SlotNonSpecificThreat
				{
					class BehaviourNonSpecificThreat
					{
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.8;
						};
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.3;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 30.0;
							RepeatEnabled = 1;
						};
						lookWeight = 30;
						sniffWeight = 0;
						sniffDuration = 0.5;
						lookDuration = 6.0;
					};
				};
				class SlotSpecificThreat
				{
					class BehaviourSpecificThreat
					{
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 100;
							probability = 0.8;
						};
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 150;
							probability = 0.3;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 30.0;
							RepeatEnabled = 1;
						};
						lookWeight = 30;
						walkWeight = 10;
						walkSpeed = 1.0;
						maxRotateAngle = 2.5;
						walkDuration = 1.5;
						lookDuration = 6.0;
					};
				};
				class SlotAlerted
				{
					class BehaviourFleeFromTargets
					{
						minDistanceToTargetRatio = 0.5;
						class SoundsEntering
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 200;
							probability = 1.0;
						};
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\deer\bark_roe\bark_0","dz\sounds\effects\animals\deer\bark_roe\bark_1","dz\sounds\effects\animals\deer\bark_roe\bark_2","dz\sounds\effects\animals\deer\bark_roe\bark_3","dz\sounds\effects\animals\deer\bark_roe\bark_4","dz\sounds\effects\animals\deer\bark_roe\bark_5","dz\sounds\effects\animals\deer\bark_roe\bark_6","dz\sounds\effects\animals\deer\bark_roe\bark_7"};
							volume = 0.8;
							distance = 200;
							probability = 0.3;
							RepeatTimeMin = 10.0;
							RepeatTimeMax = 30.0;
							RepeatEnabled = 1;
						};
						class RunMovement
						{
							maxSpeed = 9.8;
							optimalSpeed = 7.6;
							minSpeed = 3.0;
							maxSpeedRange = 50.0;
							optimalSpeedRange = 25.0;
							acceleration = 7.0;
							maxAngleSpeed = 120.0;
							slowRadius = 0.0;
							stopRadius = 3.0;
							slowToTurn = 1;
							smoothAcceleration = 1;
							useStartAnimation = 1;
							pathFilter = "DeerOnRun";
							startAnimationMaxSpeed = 0.85;
						};
					};
				};
				class AlertSystem
				{
					visionToAlertMultiplier = 7;
					noiseToAlertMultiplier = 1.0;
					damageToAlertMultiplier = 1e+006;
					class Calm
					{
						dropSpeed = 5;
						dropDelay = 1;
						maxAlertValue = 25;
					};
					class NonSpecificThreat
					{
						dropSpeed = 5;
						dropDelay = 10;
						maxAlertValue = 50;
					};
					class SpecificThreat
					{
						dropSpeed = 2;
						dropDelay = 8;
						maxAlertValue = 75;
					};
					class Alerted
					{
						dropSpeed = 10;
						dropDelay = 10;
						maxAlertValue = 100;
					};
				};
			};
			class NoiseSystemParams
			{
				rangeMin = 50.0;
				rangeMax = 120.0;
				rangeShotMin = 100.0;
				rangeShotMax = 300.0;
				class NoiseStrengthTeamMultipliers
				{
					BigGame = 0.8;
					Zombies = 1.0;
					Player = 1.0;
				};
			};
			class TargetSystemDZBase
			{
				class VisionTeamMultipliers
				{
					BigGame = 1.0;
					Zombies = 1.0;
					Player = 1.0;
					Predator = 10.0;
				};
				visionManSizeStand = 1.0;
				visionManSizeCrouch = 0.8;
				visionManSizeProne = 0.5;
				visionAngularSpeedMin = 0.1;
				visionAngularSpeedMax = 0.5;
				visionAngularSpeedMaxMult = 1.5;
				visionRangeMin = 20;
				visionRangeMax = 100;
				visionFov = 2.0;
				visionPeripheralRangeMin = 15;
				visionPeripheralRangeMax = 30;
				visionPeripheralFov = 6.28;
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
			meshObject = "dz\animals\capreolus_capreolus\data\capreolus_capreolus_skeleton.xob";
			animGraph = "dz\animals\animations\roe_deer_skeleton\AG_roe_deer_skeleton.ag";
			class AnimEventSounds
			{
				class deer_bleat
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\bleat\bleat_0","DZ\sounds\effects\animals\deer\bleat\bleat_1","DZ\sounds\effects\animals\deer\bleat\bleat_2"};
					volume = 1;
					distance = 70;
				};
				class doe_bleat
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\bleat_doe\bleat_0","DZ\sounds\effects\animals\deer\bleat_doe\bleat_1","DZ\sounds\effects\animals\deer\bleat_doe\bleat_2","DZ\sounds\effects\animals\deer\bleat_doe\bleat_3"};
					volume = 1;
					distance = 70;
				};
				class deer_breath
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\breath\breath_0","DZ\sounds\effects\animals\deer\breath\breath_1"};
					volume = 1;
					distance = 70;
				};
				class deer_bark
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\bark\bark_0","DZ\sounds\effects\animals\deer\bark\bark_1","DZ\sounds\effects\animals\deer\bark\bark_2","DZ\sounds\effects\animals\deer\bark\bark_3"};
					volume = 1;
					distance = 70;
				};
				class doe_bark
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\bark_doe\bark_0","DZ\sounds\effects\animals\deer\bark_doe\bark_1","DZ\sounds\effects\animals\deer\bark_doe\bark_2","DZ\sounds\effects\animals\deer\bark_doe\bark_3"};
					volume = 1;
					distance = 70;
				};
				class roe_bark
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\bark_roe\bark_0","DZ\sounds\effects\animals\deer\bark_roe\bark_1","DZ\sounds\effects\animals\deer\bark_roe\bark_2","DZ\sounds\effects\animals\deer\bark_roe\bark_3","DZ\sounds\effects\animals\deer\bark_roe\bark_4","DZ\sounds\effects\animals\deer\bark_roe\bark_5","DZ\sounds\effects\animals\deer\bark_roe\bark_6","DZ\sounds\effects\animals\deer\bark_roe\bark_7"};
					volume = 1;
					distance = 70;
				};
				class deer_call
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\call\call_0","DZ\sounds\effects\animals\deer\call\call_1","DZ\sounds\effects\animals\deer\call\call_2","DZ\sounds\effects\animals\deer\call\call_3","DZ\sounds\effects\animals\deer\call\call_4","DZ\sounds\effects\animals\deer\call\call_5","DZ\sounds\effects\animals\deer\call\call_6","DZ\sounds\effects\animals\deer\call\call_7","DZ\sounds\effects\animals\deer\call\call_8","DZ\sounds\effects\animals\deer\call\call_9","DZ\sounds\effects\animals\deer\call\call_10"};
					volume = 1;
					distance = 250;
				};
				class deer_call_dist
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\call_dist\call_dist_0","DZ\sounds\effects\animals\deer\call_dist\call_dist_1"};
					volume = 1;
					distance = 250;
				};
				class deer_call_fear
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\call_fear\call_fear_0","DZ\sounds\effects\animals\deer\call_fear\call_fear_1","DZ\sounds\effects\animals\deer\call_fear\call_fear_2","DZ\sounds\effects\animals\deer\call_fear\call_fear_3","DZ\sounds\effects\animals\deer\call_fear\call_fear_4"};
					volume = 1;
					distance = 250;
				};
				class deer_grunt
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\grunt\grunt_0","DZ\sounds\effects\animals\deer\grunt\grunt_1","DZ\sounds\effects\animals\deer\grunt\grunt_2"};
					volume = 1;
					distance = 70;
				};
				class deer_roar_long
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\roar_long\roar_long_0","DZ\sounds\effects\animals\deer\roar_long\roar_long_1","DZ\sounds\effects\animals\deer\roar_long\roar_long_2","DZ\sounds\effects\animals\deer\roar_long\roar_long_3","DZ\sounds\effects\animals\deer\roar_long\roar_long_4"};
					volume = 1;
					distance = 70;
				};
				class deer_roar_short
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\roar_short\roar_short_0","DZ\sounds\effects\animals\deer\roar_short\roar_short_1","DZ\sounds\effects\animals\deer\roar_short\roar_short_2","DZ\sounds\effects\animals\deer\roar_short\roar_short_3","DZ\sounds\effects\animals\deer\roar_short\roar_short_4","DZ\sounds\effects\animals\deer\roar_short\roar_short_5","DZ\sounds\effects\animals\deer\roar_short\roar_short_6"};
					volume = 1;
					distance = 70;
				};
				class deer_snort
				{
					sounds[] = {"DZ\sounds\effects\animals\deer\snort\snort_0","DZ\sounds\effects\animals\deer\snort\snort_1","DZ\sounds\effects\animals\deer\snort\snort_2"};
					volume = 1;
					distance = 70;
				};
			};
		};
	};
};
