////////////////////////////////////////////////////////////////////
//DeRap: animals\bos_taurus_fem\config.bin
//Produced from mikero's Dos Tools Dll version 7.16
//https://armaservices.maverick-applications.com/Products/MikerosDosTools/default
//'now' is Sun Jul 28 07:46:01 2019 : 'file' last modified on Mon Dec 19 09:52:40 2016
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
	class DZ_Animals_bos_taurus_fem
	{
		units[] = {"Animal_BosTaurusF"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Animals"};
	};
};
class CfgVehicles
{
	class AnimalBase;
	class Animal_BosTaurusF: AnimalBase
	{
		class SoundEnvironExt
		{
			normal[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			normalExt[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			concrete_int[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\rub_2",0.7,1,50}}};
			concrete_ext[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\concrete\rub_2",0.7,1,50}}};
			dirt[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\dirt\rub_2",0.7,1,50}}};
			forest[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\forest\rub_2",0.7,1,50}}};
			grass[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass\rub_2",0.7,1,50}}};
			drygrass[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\grass_dry\rub_2",0.7,1,50}}};
			gravel[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\rub_2",0.7,1,50}}};
			gravel2[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\gravel\rub_2",0.7,1,50}}};
			metal[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\metal\rub_2",0.7,1,50}}};
			mud[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\mud\rub_2",0.7,1,50}}};
			road[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\road\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\road\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\road\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\road\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\road\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\road\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\road\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\road\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\road\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\road\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\road\rub_2",0.7,1,50}}};
			rock[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\rock\rub_2",0.7,1,50}}};
			sand[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\sand\rub_2",0.7,1,50}}};
			water[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\water\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\water\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\water\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\water\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\water\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\water\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\water\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\water\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\water\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\water\rub_2",0.7,1,50}}};
			wood[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\rub_2",0.7,1,50}}};
			wood_int[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\rub_2",0.7,1,50}}};
			parkety[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\settle_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_a_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\wood\rub_2",0.7,1,50}}};
			steel[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			hallway[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			carpet[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			wave_plate[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			lepenka[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
			tasky[] = {{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50},{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_1",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_3",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_5",0.7,1,50}},{"hm_stepl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_7",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_2",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_4",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_6",0.7,1,50}},{"hm_stepr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\step_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_1",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_2",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_3",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_4",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_5",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_6",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_7",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_8",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_9",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_10",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_11",0.7,1,50}},{"hm_grazing",{"\dz\sounds\effects\animals\movement\hoof_medium\default\grazing_12",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_0",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_1",0.7,1,50}},{"hm_bodyfall",{"\dz\sounds\effects\animals\movement\hoof_medium\default\bodyfall_2",0.7,1,50}},{"hm_settle",{"\dz\sounds\effects\animals\movement\hoof_medium\default\settle_0",0.7,1,50}},{"hm_rest2stand_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_a_0",0.7,1,50}},{"hm_rest2stand_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rest2stand_b_0",0.7,1,50}},{"hm_stand2rest_a",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_a_0",0.7,1,50}},{"hm_stand2rest_b",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_b_0",0.7,1,50}},{"hm_stand2rest_c",{"\dz\sounds\effects\animals\movement\hoof_medium\default\stand2rest_c_0",0.7,1,50}},{"hm_rubr",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_1",0.7,1,50}},{"hm_rubl",{"\dz\sounds\effects\animals\movement\hoof_medium\default\rub_2",0.7,1,50}}};
		};
		newAnimSystemSoundStepOverride = "walk";
		scope = 0;
		model = "\DZ\animals\bos_taurus_fem\bos_taurus_fem.p3d";
		armor = 1.2;
		displayName = "Bos Taurus Feminam";
		moves = "CfgMovesBosTaurus";
		hiddenSelections[] = {"Camo"};
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
				item = "Meat_CowSteak";
				count = 5;
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
		class AIAgentTemplate
		{
			name = "bull";
			HeadLookBoneName = "pin_lookat";
			teamName = "BigGame";
			defaultGroupTemplateName = "DZdomesticGroupBeh";
			class PathAgent
			{
				radius = 0.6;
				height = 1.8;
			};
			class BehaviourHLDeer
			{
				instantAlertRangeMin = 10.0;
				instantAlertRangeMax = 20.0;
				instantAlertStrength = 7.0;
				class SlotCalmResting
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\cattle\bawl\bawl_0","dz\sounds\effects\animals\cattle\bawl\bawl_1","dz\sounds\effects\animals\cattle\bawl\bawl_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_0","dz\sounds\effects\animals\cattle\moo_a\moo_a_1","dz\sounds\effects\animals\cattle\moo_a\moo_a_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_3","dz\sounds\effects\animals\cattle\moo_a\moo_a_4"};
							volume = 0.8;
							distance = 400;
							probability = 0.2;
							RepeatTimeMin = 15.0;
							RepeatTimeMax = 40.0;
							RepeatEnabled = 1;
						};
						grazeOnSpotWeight = 20;
						grazeWalkingWeight = 20;
						restWeight = 100;
						travelWeight = 0;
						grazeOnSpotDurationMin = 20;
						grazeOnSpotDurationMax = 40;
						grazeWalkingDurationMin = 20;
						grazeWalkingDurationMax = 30;
						restingDurationMin = 50;
						restingDurationMax = 150;
						travelingDurationMin = 0;
						travelingDurationMax = 0;
						safetyIntervalMin = 15;
						safetyIntervalMax = 25;
						safetyDurationMin = 8;
						safetyDurationMax = 12;
						safetyLookAngleMin = 0.1;
						safetyLookAngleMax = 1.5;
						safetyLookAngleChangeInterval = 7;
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
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
						};
						class CatchUpMovement
						{
							maxSpeed = 3.51;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
						};
					};
				};
				class SlotCalmGrazing
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\cattle\bawl\bawl_0","dz\sounds\effects\animals\cattle\bawl\bawl_1","dz\sounds\effects\animals\cattle\bawl\bawl_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_0","dz\sounds\effects\animals\cattle\moo_a\moo_a_1","dz\sounds\effects\animals\cattle\moo_a\moo_a_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_3","dz\sounds\effects\animals\cattle\moo_a\moo_a_4"};
							volume = 0.8;
							distance = 400;
							probability = 0.2;
							RepeatTimeMin = 15.0;
							RepeatTimeMax = 40.0;
							RepeatEnabled = 1;
						};
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
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
						};
						class CatchUpMovement
						{
							maxSpeed = 3.51;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
						};
					};
				};
				class SlotCalmTravelling
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\cattle\bawl\bawl_0","dz\sounds\effects\animals\cattle\bawl\bawl_1","dz\sounds\effects\animals\cattle\bawl\bawl_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_0","dz\sounds\effects\animals\cattle\moo_a\moo_a_1","dz\sounds\effects\animals\cattle\moo_a\moo_a_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_3","dz\sounds\effects\animals\cattle\moo_a\moo_a_4"};
							volume = 0.8;
							distance = 400;
							probability = 0.2;
							RepeatTimeMin = 15.0;
							RepeatTimeMax = 40.0;
							RepeatEnabled = 1;
						};
						grazeOnSpotWeight = 10;
						grazeWalkingWeight = 10;
						restWeight = 0;
						travelWeight = 50;
						grazeOnSpotDurationMin = 20;
						grazeOnSpotDurationMax = 30;
						grazeWalkingDurationMin = 10;
						grazeWalkingDurationMax = 20;
						restingDurationMin = 0;
						restingDurationMax = 0;
						travelingDurationMin = 20;
						travelingDurationMax = 50;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
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
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
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
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
						};
					};
				};
				class SlotDrinking
				{
					class BehaviourCalm
					{
						class SoundsDuring
						{
							sounds[] = {"dz\sounds\effects\animals\cattle\bawl\bawl_0","dz\sounds\effects\animals\cattle\bawl\bawl_1","dz\sounds\effects\animals\cattle\bawl\bawl_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_0","dz\sounds\effects\animals\cattle\moo_a\moo_a_1","dz\sounds\effects\animals\cattle\moo_a\moo_a_2","dz\sounds\effects\animals\cattle\moo_a\moo_a_3","dz\sounds\effects\animals\cattle\moo_a\moo_a_4"};
							volume = 0.8;
							distance = 400;
							probability = 0.2;
							RepeatTimeMin = 15.0;
							RepeatTimeMax = 40.0;
							RepeatEnabled = 1;
						};
						grazeOnSpotWeight = 10;
						grazeWalkingWeight = 10;
						restWeight = 10;
						travelWeight = 0;
						drinkingWeight = 20;
						grazeOnSpotDurationMin = 100;
						grazeOnSpotDurationMax = 100;
						grazeWalkingDurationMin = 100;
						grazeWalkingDurationMax = 100;
						restingDurationMin = 200;
						restingDurationMax = 200;
						travelingDurationMin = 0;
						travelingDurationMax = 0;
						drinkingDurationMin = 150;
						drinkingDurationMax = 150;
						safetyIntervalMin = 15;
						safetyIntervalMax = 20;
						safetyDurationMin = 10;
						safetyDurationMax = 10;
						safetyLookAngleMin = 0.3;
						safetyLookAngleMax = 0.7;
						safetyLookAngleChangeInterval = 3;
						class DrinkingMovement
						{
							maxSpeed = 1.12;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
						};
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
							maxSpeed = 1.359;
							minSpeed = 0.0;
							acceleration = 5.0;
							maxAngleSpeed = 90.0;
							slowRadius = 0.0;
							stopRadius = 0.5;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
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
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
						};
					};
				};
				class SlotNonSpecificThreat
				{
					class BehaviourNonSpecificThreat
					{
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
						lookWeight = 30;
						walkWeight = 0;
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
						class RunMovement
						{
							maxSpeed = 7.2;
							optimalSpeed = 6.9;
							minSpeed = 1.0;
							maxSpeedRange = 30.0;
							optimalSpeedRange = 25.0;
							acceleration = 5.0;
							maxAngleSpeed = 120.0;
							slowRadius = 0.0;
							stopRadius = 2.0;
							slowToTurn = 1;
							smoothAcceleration = 1;
							pathFilter = "CowOnRun";
							startAnimationMaxSpeed = 1.0;
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
						dropSpeed = 3;
						dropDelay = 5;
						maxAlertValue = 50;
					};
					class SpecificThreat
					{
						dropSpeed = 2;
						dropDelay = 4;
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
				rangeMin = 15.0;
				rangeMax = 50.0;
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
					BigGame = 0.8;
					Zombies = 1.0;
					Player = 1.0;
				};
				visionManSizeStand = 1.0;
				visionManSizeCrouch = 0.8;
				visionManSizeProne = 0.5;
				visionAngularSpeedMin = 0.1;
				visionAngularSpeedMax = 0.5;
				visionAngularSpeedMaxMult = 1.5;
				visionRangeMin = 25;
				visionRangeMax = 60;
				visionFov = 1.2;
				visionPeripheralRangeMin = 0;
				visionPeripheralRangeMax = 20;
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
			meshObject = "dz\animals\bos_taurus\data\bos_taurus_skeleton.xob";
			animGraph = "dz\animals\animations\cow_skeleton\AG_cow_skeleton.ag";
			class AnimEventSounds
			{
				class cattle_bawl
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\bawl\bawl_0","DZ\sounds\effects\animals\cattle\bawl\bawl_1","DZ\sounds\effects\animals\cattle\bawl\bawl_2"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_bellow
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\bellow\bellow_0","DZ\sounds\effects\animals\cattle\bellow\bellow_1","DZ\sounds\effects\animals\cattle\bellow\bellow_2","DZ\sounds\effects\animals\cattle\bellow\bellow_3"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_breath
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\breath\breath_0","DZ\sounds\effects\animals\cattle\breath\breath_1"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_groan
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\groan\groan_0","DZ\sounds\effects\animals\cattle\groan\groan_1","DZ\sounds\effects\animals\cattle\groan\groan_2","DZ\sounds\effects\animals\cattle\groan\groan_3","DZ\sounds\effects\animals\cattle\groan\groan_4","DZ\sounds\effects\animals\cattle\groan\groan_5","DZ\sounds\effects\animals\cattle\groan\groan_6","DZ\sounds\effects\animals\cattle\groan\groan_7"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_hoarse
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\hoarse\hoarse_0","DZ\sounds\effects\animals\cattle\hoarse\hoarse_1","DZ\sounds\effects\animals\cattle\hoarse\hoarse_2","DZ\sounds\effects\animals\cattle\hoarse\hoarse_3"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_honk
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\honk\honk_0","DZ\sounds\effects\animals\cattle\honk\honk_1","DZ\sounds\effects\animals\cattle\honk\honk_2"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_moo_a
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\moo_a\moo_a_0","DZ\sounds\effects\animals\cattle\moo_a\moo_a_1","DZ\sounds\effects\animals\cattle\moo_a\moo_a_2","DZ\sounds\effects\animals\cattle\moo_a\moo_a_3","DZ\sounds\effects\animals\cattle\moo_a\moo_a_4"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_moo_b
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\moo_b\moo_b_0","DZ\sounds\effects\animals\cattle\moo_b\moo_b_1","DZ\sounds\effects\animals\cattle\moo_b\moo_b_2","DZ\sounds\effects\animals\cattle\moo_b\moo_b_3","DZ\sounds\effects\animals\cattle\moo_b\moo_b_4","DZ\sounds\effects\animals\cattle\moo_b\moo_b_5","DZ\sounds\effects\animals\cattle\moo_b\moo_b_6","DZ\sounds\effects\animals\cattle\moo_b\moo_b_7","DZ\sounds\effects\animals\cattle\moo_b\moo_b_8","DZ\sounds\effects\animals\cattle\moo_b\moo_b_9"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_moo_c
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\moo_c\moo_c_0","DZ\sounds\effects\animals\cattle\moo_c\moo_c_1"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_roar
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\roar\roar_0","DZ\sounds\effects\animals\cattle\roar\roar_1","DZ\sounds\effects\animals\cattle\roar\roar_2"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_sigh
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\sigh\sigh_0","DZ\sounds\effects\animals\cattle\sigh\sigh_1"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_sigh_long
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\sigh_long\sigh_0","DZ\sounds\effects\animals\cattle\sigh_long\sigh_1"};
					volume = 0.7;
					distance = 70;
				};
				class cattle_snort
				{
					sounds[] = {"DZ\sounds\effects\animals\cattle\snort\snort_0","DZ\sounds\effects\animals\cattle\snort\snort_1","DZ\sounds\effects\animals\cattle\snort\snort_2"};
					volume = 0.7;
					distance = 70;
				};
			};
		};
	};
	class Animal_BosTaurusF_Brown: Animal_BosTaurusF
	{
		scope = 2;
		displayName = "Bos Taurus Feminam Brown";
		hiddenSelectionsTextures[] = {"dz\animals\bos_taurus_fem\data\cow_brown_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\animals\bos_taurus_fem\data\cow_brown.rvmat"};
	};
	class Animal_BosTaurusF_White: Animal_BosTaurusF
	{
		scope = 2;
		displayName = "Bos Taurus Feminam White";
		hiddenSelectionsTextures[] = {"dz\animals\bos_taurus_fem\data\cow_white_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\animals\bos_taurus_fem\data\cow_white.rvmat"};
	};
	class Animal_BosTaurusF_Spotted: Animal_BosTaurusF
	{
		scope = 2;
		displayName = "Bos Taurus Feminam White";
		hiddenSelectionsTextures[] = {"dz\animals\bos_taurus_fem\data\cow_CO.paa"};
		hiddenSelectionsMaterials[] = {"dz\animals\bos_taurus_fem\data\cow.rvmat"};
	};
};
