#region Local Var
	char* sLocal_0 = 0;
	BOOL bLocal_1 = 0;
	int iLocal_2 = 0;
	BOOL bLocal_3 = 0;
	BOOL bLocal_4 = 0;
	BOOL bLocal_5 = 0;
	BOOL bLocal_6 = 0;
	Object obLocal_7 = 0;
	BOOL bLocal_8 = 0;
	BOOL bLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	BOOL bLocal_24 = 0;
	BOOL bLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	int iLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	BOOL bLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	Object obLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 3;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 32;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	BOOL bLocal_87 = 0;
	BOOL bLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	BOOL bLocal_102 = 0;
	BOOL bLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	BOOL bLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	BOOL bLocal_111 = 0;
	BOOL bLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	BOOL bLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = -1;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 4;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	Vehicle veLocal_127 = 0;
	int iLocal_128 = 0;
	BOOL bLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	BOOL bLocal_133 = 0;
	BOOL bLocal_134 = 0;
	Hash hLocal_135 = 0;
	int iLocal_136 = 0;
	BOOL bLocal_137 = 0;
	BOOL bLocal_138 = 0;
	BOOL bLocal_139 = 0;
	BOOL bLocal_140 = 0;
	BOOL bLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	BOOL bLocal_144 = 0;
	BOOL bLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void main() // Position - 0x0
{
	int num;

	sLocal_0 = "1.64.08";
	iLocal_22 = -1;
	iLocal_23 = -1;
	iLocal_29 = 10000;
	uLocal_39 = { 5022.5645f, -5738f, 16.0937f };
	uLocal_42 = { 5033.8535f, -5747.7485f, 20.4291f };
	fLocal_45 = 2f;
	iLocal_146 = -1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	uScriptParam_0 == uScriptParam_0;
	Global_1577991 = MISC::GET_HASH_KEY(sLocal_0);
	num = MISC::GET_GAME_TIMER() + 10000;

	while (MISC::GET_GAME_TIMER() < num)
	{
		func_496();
		SYSTEM::WAIT(0);
	}

	while (true)
	{
		if (IS_ROCKSTAR_DEV())
			func_493();
	
		func_496();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692735.f_3)
		{
			func_492();
			func_491();
			func_488();
			func_486();
			func_485();
			func_479();
			func_475();
			func_472();
			func_470();
			func_467();
			func_462();
			func_461();
			func_455();
			func_454();
			func_449();
			func_445();
			func_441();
			func_435();
			func_434();
			func_419();
			func_410();
			func_401();
			func_397();
			func_396();
			func_393();
			func_382();
			func_374();
			func_245();
			func_242();
		
			if (MISC::IS_PC_VERSION())
				func_236();
		
			func_211();
			func_202();
			func_199();
			func_187();
			func_174();
			func_173();
			func_168();
			func_164();
			func_28();
			func_8();
		}
	
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_5();
			func_4();
			func_3();
			func_2();
		}
		else
		{
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_1() // Position - 0x171
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_36))
		OBJECT::DELETE_OBJECT(&obLocal_36);

	return;
}

void func_2() // Position - 0x188
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) <= 0)
		return;

	if (Global_1665699.f_1)
		return;

	if (!IS_BIT_SET(Global_4718592.f_40, 1))
		return;

	Global_4718592.f_1196 = 0;
	return;
}

void func_3() // Position - 0x1C3
{
	if (*Global_4718592.f_113724 != 1601836271)
		return;

	IS_BIT_SET(Global_4980736.f_102388[74 /*1051*/].f_917.f_1, 10) || IS_BIT_SET(Global_4980736.f_102388[77 /*1051*/].f_917.f_1, 10);
	MISC::CLEAR_BIT(&(Global_4980736.f_102388[74 /*1051*/].f_917.f_1), 10);
	MISC::CLEAR_BIT(&(Global_4980736.f_102388[77 /*1051*/].f_917.f_1), 10);
	return;
}

void func_4() // Position - 0x247
{
	if (*Global_4718592.f_113724 == 380938673 || *Global_4718592.f_113724 == 1597839856)
		if (!IS_BIT_SET(Global_4718592.f_35, 2))
			MISC::SET_BIT(&(Global_4718592.f_35), 2);

	return;
}

void func_5() // Position - 0x28F
{
	if (!Global_2683864.f_24)
		return;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), uLocal_39, uLocal_42, fLocal_45, false, true, 0))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 47, true);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_36))
	{
		obLocal_36 = OBJECT::CREATE_OBJECT(joaat("prop_const_fence02b"), 5025.56f, -5740.52f, 16f, false, false, false);
		ENTITY::SET_ENTITY_HEADING(obLocal_36, -42.2f);
		ENTITY::SET_ENTITY_ALPHA(obLocal_36, 0, false);
		ENTITY::SET_ENTITY_NOWEAPONDECALS(obLocal_36, true);
	}

	if (!PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
		if (func_7(uLocal_37, 750, false))
			return;
	else
		_STOPWATCH_RESET(&uLocal_37, false, false);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCALED_LOOK_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RLEFT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RRIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RUP, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RDOWN, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_UP, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_LEFT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_RIGHT_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_LOOK_BEHIND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_LS, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_FRONTEND_RS, true);
	return;
}

void _STOPWATCH_RESET(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x4D2
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			*pStopwatch = NETWORK::GET_NETWORK_TIME();
		else
			*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
	else
		*pStopwatch = MISC::GET_GAME_TIMER();

	pStopwatch->f_1 = 1;
	return;
}

BOOL func_7(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x50F
{
	if (iParam2 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return true;

	return false;
}

void func_8() // Position - 0x562
{
	Hash model;
	int num;
	int data;
	float num2;
	float num3;
	Vector3 vector;

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_16))
	{
		MISC::SET_BIT(&Global_8254, 2);
	
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_16, 60000, false))
		{
			_STOPWATCH_RESET(&uLocal_16, false, false);
			_STOPWATCH_DESTROY(&uLocal_16);
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_14) && _STOPWATCH_HAS_TIME_PASSED(&uLocal_14, 1000, false))
	{
		if (iLocal_23 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_23 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_23, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_14, 4000, false))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_23))
				AUDIO::STOP_SOUND(iLocal_23);
		
			AUDIO::RELEASE_SOUND_ID(iLocal_23);
			iLocal_23 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			_STOPWATCH_RESET(&uLocal_14, false, false);
			_STOPWATCH_DESTROY(&uLocal_14);
		}
	}

	if (!bLocal_8 && !func_20())
		return;

	bLocal_8 = true;
	MISC::SET_BIT(&Global_8254, 2);

	if (!ENTITY::DOES_ENTITY_EXIST(obLocal_7))
	{
		model = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(model);
	
		if (STREAMING::HAS_MODEL_LOADED(model))
		{
			obLocal_7 = OBJECT::CREATE_OBJECT_NO_OFFSET(model, 360.8759f, 5623.4272f, 780.1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			ENTITY::FREEZE_ENTITY_POSITION(obLocal_7, true);
			ENTITY::SET_ENTITY_LOD_DIST(obLocal_7, 8000);
			num = func_19(MP_STAT_BACK_MARK, -1, 0);
			_MPCHAR_STAT_SET_INT(MP_STAT_BACK_MARK, num + 1, -1, true, false);
			data.f_1 = 1;
			data = 24;
			STATS::PLAYSTATS_GUNRUNNING_MISSION_ENDED(&data);
			uLocal_18 = { ENTITY::GET_ENTITY_COORDS(obLocal_7, false) };
			iLocal_21 = 0;
		}
	}
	else
	{
		func_15();
	
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_22 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_22 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_22, "07", obLocal_7, "DLC_GR_CS2_Sounds", false, 0);
			}
		
			if (!bLocal_9)
			{
				if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_10, 4500, false))
				{
					ENTITY::FREEZE_ENTITY_POSITION(obLocal_7, false);
					_STOPWATCH_RESET(&uLocal_10, false, false);
					_STOPWATCH_DESTROY(&uLocal_10);
					_STOPWATCH_INITIALIZE(&uLocal_12, false, false);
					bLocal_9 = true;
				}
			}
			else
			{
				num2 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_12, false, false)) / SYSTEM::TO_FLOAT(func_12());
				num3 = SYSTEM::TO_FLOAT(_STOPWATCH_GET_TIME_PASSED(&uLocal_10, false, false)) / SYSTEM::TO_FLOAT(func_11());
				num3 = num3 * num2;
				vector = { func_9(uLocal_18, func_10(), num3) };
				ENTITY::SET_ENTITY_COORDS(obLocal_7, vector, true, false, false, true);
			
				if (num3 >= 1f)
				{
					iLocal_21 = iLocal_21 + 1;
					uLocal_18 = { ENTITY::GET_ENTITY_COORDS(obLocal_7, false) };
					_STOPWATCH_RESET(&uLocal_10, false, false);
					_STOPWATCH_DESTROY(&uLocal_10);
				
					if (func_11() == -1)
					{
						OBJECT::DELETE_OBJECT(&obLocal_7);
						MISC::FORCE_LIGHTNING_FLASH();
					
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_22))
							AUDIO::STOP_SOUND(iLocal_22);
					
						AUDIO::RELEASE_SOUND_ID(iLocal_22);
						iLocal_22 = -1;
						_STOPWATCH_INITIALIZE(&uLocal_14, false, false);
						_STOPWATCH_INITIALIZE(&uLocal_16, false, false);
						_STOPWATCH_RESET(&uLocal_12, false, false);
						_STOPWATCH_DESTROY(&uLocal_12);
						uLocal_18 = { 0f, 0f, 0f };
						iLocal_21 = 0;
						bLocal_8 = false;
						bLocal_9 = false;
					}
				}
			}
		}
	}

	return;
}

Vector3 func_9(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, float fParam6) // Position - 0x808
{
	return ({ 1f - fParam6, 1f - fParam6, 1f - fParam6 } * uParam0) + ({ fParam6, fParam6, fParam6 } * uParam3);
}

Vector3 func_10() // Position - 0x823
{
	switch (iLocal_21)
	{
		case 0:
			return 306.567f, 5652.283f, 785.594f;
	
		case 1:
			return -1082.8652f, 6390.5195f, 924.2493f;
	
		case 2:
			return -2542.874f, 7217.5137f, 1051.3335f;
	
		case 3:
			return -4139.1064f, 8143.3022f, 1412.694f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_11() // Position - 0x895
{
	switch (iLocal_21)
	{
		case 0:
			return 2000;
	
		case 1:
			return 1000;
	
		case 2:
			return 100;
	
		case 3:
			return 50;
	
		default:
		
	}

	return -1;
}

int func_12() // Position - 0x8D3
{
	return 3150;
}

int _STOPWATCH_GET_TIME_PASSED(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x8DE
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (!useAccurateTime)
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch);
		else
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *pStopwatch);

	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch);
}

void _STOPWATCH_INITIALIZE(var pStopwatch, BOOL useLocalTimer, BOOL useAccurateTime) // Position - 0x925
{
	if (pStopwatch->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
			if (!useAccurateTime)
				*pStopwatch = NETWORK::GET_NETWORK_TIME();
			else
				*pStopwatch = NETWORK::GET_NETWORK_TIME_ACCURATE();
		else
			*pStopwatch = MISC::GET_GAME_TIMER();
	
		pStopwatch->f_1 = 1;
	}

	return;
}

void func_15() // Position - 0x96A
{
	float entityRotation;

	entityRotation = { ENTITY::GET_ENTITY_ROTATION(obLocal_7, 2) };
	entityRotation = 0f;
	entityRotation.f_1 = 0f;
	entityRotation.f_2 = entityRotation.f_2 + 1f;
	ENTITY::SET_ENTITY_ROTATION(obLocal_7, entityRotation, 2, true);
	return;
}

void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x99B
{
	Hash statName;

	bParam4;
	statName = Global_2805029[empsParam0 /*3*/][func_17(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_17(int iParam0) // Position - 0x9CB
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_18();
	
		if (num2 > -1)
		{
			Global_2804741 = 0;
			num = num2;
		}
		else
		{
			num = 0;
			Global_2804741 = 1;
		}
	}

	return num;
}

int func_18() // Position - 0x9FF
{
	return Global_1574918;
}

int func_19(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0xA0B
{
	Hash statHash;
	int outValue;

	if (empsParam0 != MP_STAT_INVALID)
	{
		iParam2 == 0;
		statHash = Global_2805029[empsParam0 /*3*/][func_17(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_20() // Position - 0xA45
{
	if (_STAT_GET_PACKED_BOOL(22107, -1) && Global_2639783 == 7 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && func_23(PLAYER::PLAYER_PED_ID(), 426.433f, 5614.172f, 766.414f, 1f) && Global_2684801.f_3076.f_178 >= 1 && Global_2684801.f_3076.f_178 < 4 && func_22() && func_21())
		return true;

	return false;
}

BOOL func_21() // Position - 0xAC6
{
	if (_STAT_GET_PACKED_BOOL(15476, -1) && func_19(MP_STAT_LFETIME_BIKER_BUY_COMPLET5, func_18(), 0) > 577)
		return true;

	return false;
}

BOOL func_22() // Position - 0xAF3
{
	int weatherType1;
	int weatherType2;
	float percentWeather2;

	MISC::GET_CURR_WEATHER_STATE(&weatherType1, &weatherType2, &percentWeather2);

	if (percentWeather2 < 0.5f)
		if (weatherType1 == joaat("rain") || weatherType1 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
			return true;
	else if (weatherType2 == joaat("rain") || weatherType2 == joaat("THUNDER") || weatherType2 == joaat("xmas"))
		return true;

	return false;
}

BOOL func_23(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0xB6A
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedParam0, true), fParam1) <= fParam4 * fParam4;
}

BOOL _STAT_GET_PACKED_BOOL(int iParam0, int iParam1) // Position - 0xB87
{
	if (iParam1 == -1)
		iParam1 = func_18();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

void _STOPWATCH_DESTROY(var uParam0) // Position - 0xBA3
{
	uParam0->f_1 = 0;
	return;
}

BOOL _STOPWATCH_HAS_TIME_PASSED(var pStopwatch, int millis, BOOL useLocalTimer) // Position - 0xBB0
{
	if (millis == -1)
		return true;

	_STOPWATCH_INITIALIZE(pStopwatch, useLocalTimer, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !useLocalTimer)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *pStopwatch)) >= millis)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *pStopwatch)) >= millis)
		return true;

	return false;
}

BOOL _STOPWATCH_IS_INITIALIZED(var uParam0) // Position - 0xC0E
{
	return uParam0->f_1;
}

void func_28() // Position - 0xC1A
{
	if (!func_163())
		return;

	if (!_IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), false))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(693190124) > 0)
		{
			if (func_158())
			{
				if (func_138())
				{
					_STAT_SET_PACKED_BOOL(36657, true, -1);
					bLocal_144 = true;
				}
			}
		}
		else if (bLocal_144)
		{
			if (func_29())
			{
				iLocal_146 = -1;
				bLocal_144 = false;
				bLocal_145 = false;
				iLocal_147 = 0;
			}
		}
	}

	return;
}

BOOL func_29() // Position - 0xC7D
{
	int num;
	int num2;
	Hash hash;
	int num3;
	Hash hash2;

	if (func_138())
	{
		num2 = func_136(iLocal_146);
	
		if (iLocal_146 == 0)
		{
			num = func_135(PLAYER::PLAYER_ID());
		
			if (num != 0)
			{
				if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() || bLocal_145)
				{
					func_68(num, &iLocal_147, 5, 0, false, false, false);
				}
				else
				{
					hash = func_66(false);
				
					if (func_46(5, hash, &iLocal_147))
					{
						if (iLocal_147 == 2)
						{
							iLocal_147 = 0;
							bLocal_145 = true;
							return false;
						}
					}
				}
			}
		}
		else
		{
			num = func_43(PLAYER::PLAYER_ID(), num2);
			num3 = func_41(num);
		
			if (num != 0)
			{
				if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() || bLocal_145)
				{
					func_68(num, &iLocal_147, 5, 0, false, false, false);
				}
				else
				{
					hash2 = func_66(false);
				
					if (func_46(num3, hash2, &iLocal_147))
					{
						if (iLocal_147 == 2)
						{
							iLocal_147 = 0;
							bLocal_145 = true;
							return false;
						}
					}
				}
			}
		}
	
		switch (iLocal_147)
		{
			case 0:
			case 1:
				return false;
		
			case 2:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("SH_TICKER_END1");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME("");
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				func_39("DSH_H_SUPP", func_40(num2), -1);
				func_36(11, func_38(num));
				break;
		
			case 3:
				break;
		}
	}
	else
	{
		func_30("SH_TICKER_END2", *Global_262145.f_33759, false);
	}

	return true;
}

int func_30(char* sParam0, int iParam1, BOOL bParam2) // Position - 0xDC0
{
	int num;

	num = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	num = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);

	if (bParam2)
		func_31(3, sParam0, 2, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	else
		func_31(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);

	return num;
}

void func_31(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11) // Position - 0xE11
{
	int num;

	if (!IS_ROCKSTAR_DEV() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0))
		return;

	num = func_32(iParam2);

	if (num >= 0 && num < 5)
	{
		Global_1944061.f_5[num /*53*/] = iParam0;
		Global_1944061.f_5[num /*53*/].f_1 = iParam2;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1944061.f_5[num /*53*/].f_8), sParam1, 16);
		Global_1944061.f_5[num /*53*/].f_2[0] = iParam4;
		Global_1944061.f_5[num /*53*/].f_2[1] = iParam5;
		Global_1944061.f_5[num /*53*/].f_2[2] = iParam6;
		Global_1944061.f_5[num /*53*/].f_7 = iParam7;
		Global_1944061.f_5[num /*53*/].f_6 = iParam8;
		TEXT_LABEL_ASSIGN_STRING(&(Global_1944061.f_5[num /*53*/].f_12), sParam3, 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_1944061.f_5[num /*53*/].f_28[0 /*6*/], sParam9, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1944061.f_5[num /*53*/].f_28[1 /*6*/], sParam10, 24);
		TEXT_LABEL_ASSIGN_STRING(&Global_1944061.f_5[num /*53*/].f_28[2 /*6*/], sParam11, 24);
	}

	return;
}

int func_32(int iParam0) // Position - 0xF19
{
	int i;

	for (i = 0; i <= Global_1944061 - 1; i = i + 1)
	{
		if (iParam0 > Global_1944061.f_5[i /*53*/].f_1)
		{
			func_33(i);
			return i;
		}
	}

	Global_1944061 = Global_1944061 + 1;

	if (Global_1944061 > 5)
	{
		Global_1944061 = 5;
		return Global_1944061;
	}

	return Global_1944061 - 1;
}

void func_33(int iParam0) // Position - 0xF7B
{
	int i;

	for (i = 4; i >= iParam0 + 1; i = i + -1)
	{
		Global_1944061.f_5[i /*53*/] = { Global_1944061.f_5[i - 1 /*53*/] };
	}

	return;
}

BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0xFB4
{
	BOOL flag;

	if (player == PLAYER::PLAYER_ID())
		flag = func_35(-1, false) == 8;
	else
		flag = Global_1853910[player /*862*/].f_205 == 8;

	if (bCheckTeam == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
			flag = PLAYER::GET_PLAYER_TEAM(player) == 8;

	return flag;
}

int func_35(int iParam0, BOOL bParam1) // Position - 0xFFF
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_18();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

void func_36(int iParam0, int iParam1) // Position - 0x1040
{
	int num;
	int offset;

	func_37(iParam1, &num, &offset);

	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&Global_1950108.f_2654[num], offset);
			return;
	
		case 1:
			MISC::SET_BIT(&Global_1950108.f_2661[num], offset);
			return;
	
		case 2:
			MISC::SET_BIT(&Global_1950108.f_2668[num], offset);
			return;
	
		case 3:
			MISC::SET_BIT(&Global_1950108.f_3325[num], offset);
			return;
	
		case 4:
			MISC::SET_BIT(&Global_1950108.f_3332[num], offset);
			return;
	
		case 5:
			MISC::SET_BIT(&Global_1950108.f_3618[num], offset);
			return;
	
		case 6:
			MISC::SET_BIT(&Global_1950108.f_3625[num], offset);
			return;
	
		case 7:
			MISC::SET_BIT(&Global_1950108.f_3632[num], offset);
			return;
	
		case 8:
			MISC::SET_BIT(&Global_1950108.f_3655[num], offset);
			return;
	
		case 9:
			MISC::SET_BIT(&Global_1950108.f_3662[num], offset);
			return;
	
		case 10:
			MISC::SET_BIT(&Global_1950108.f_3339[num], offset);
			return;
	
		case 11:
			MISC::SET_BIT(&Global_1950108.f_3639[num], offset);
			return;
	
		case 12:
			MISC::SET_BIT(&Global_1950108.f_3646[num], offset);
			return;
	
		case 13:
			MISC::SET_BIT(&Global_1950108.f_3349[num], offset);
			return;
	}

	return;
}

void func_37(int iParam0, var uParam1, var uParam2) // Position - 0x11EF
{
	if (iParam0 == -1)
		return;

	*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);
	*uParam2 = iParam0 - (*uParam1 * 32);
	return;
}

int func_38(int iParam0) // Position - 0x121E
{
	switch (iParam0)
	{
		case 1:
			return 22;
	
		case 2:
			return 23;
	
		case 3:
			return 24;
	
		case 4:
			return 25;
	
		case 5:
			return 26;
	
		case 6:
			return 27;
	
		case 7:
			return 28;
	
		case 8:
			return 29;
	
		case 9:
			return 30;
	
		case 10:
			return 31;
	
		case 11:
			return 32;
	
		case 12:
			return 33;
	
		case 13:
			return 34;
	
		case 14:
			return 35;
	
		case 15:
			return 36;
	
		case 16:
			return 37;
	
		case 17:
			return 38;
	
		case 18:
			return 39;
	
		case 19:
			return 40;
	
		case 20:
			return 41;
	
		case 32:
			return 159;
	
		case 21:
			return 70;
	
		case 22:
			return 71;
	
		case 23:
			return 72;
	
		case 24:
			return 73;
	
		case 25:
			return 74;
	
		case 26:
			return 75;
	
		case 27:
			return 76;
	
		case 28:
			return 77;
	
		case 29:
			return 78;
	
		case 30:
			return 79;
	
		case 31:
			return 80;
	}

	return -1;
}

void func_39(char* sParam0, char* sParam1, int iParam2) // Position - 0x13EE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
	return;
}

char* func_40(int iParam0) // Position - 0x140B
{
	switch (iParam0)
	{
		case 3:
			return "DSH_H_METH";
	
		case 1:
			return "DSH_H_WEED";
	
		case 4:
			return "DSH_H_COKE";
	
		case 2:
			return "DSH_H_CASH";
	
		case 0:
			return "DSH_H_DOCS";
	
		case 5:
			return "DSH_H_WEAP";
	
		case 6:
			return "DSH_H_ACID";
	
		default:
		
	}

	return "";
}

int func_41(int iParam0) // Position - 0x1471
{
	int i;

	if (func_42(iParam0))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[i /*13*/] == iParam0)
				return i;
		}
	}

	return -1;
}

BOOL func_42(int iParam0) // Position - 0x14B3
{
	if (iParam0 == 33 || iParam0 == 0)
		return false;

	return true;
}

int func_43(Player plParam0, int iParam1) // Position - 0x14D2
{
	int i;
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] != 0)
		{
			num = Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/];
		
			if (func_44(num) == iParam1)
				return num;
		}
	}

	return 0;
}

int func_44(int iParam0) // Position - 0x1534
{
	switch (iParam0)
	{
		case 1:
			return 3;
	
		case 2:
			return 1;
	
		case 3:
			return 4;
	
		case 4:
			return 2;
	
		case 5:
			return 0;
	
		case 6:
			return 3;
	
		case 7:
			return 1;
	
		case 8:
			return 4;
	
		case 9:
			return 2;
	
		case 10:
			return 0;
	
		case 11:
			return 3;
	
		case 12:
			return 1;
	
		case 13:
			return 4;
	
		case 14:
			return 2;
	
		case 15:
			return 0;
	
		case 16:
			return 3;
	
		case 17:
			return 1;
	
		case 18:
			return 4;
	
		case 19:
			return 2;
	
		case 20:
			return 0;
	
		case 21:
			return 5;
	
		case 22:
			return 5;
	
		case 23:
			return 5;
	
		case 24:
			return 5;
	
		case 25:
			return 5;
	
		case 26:
			return 5;
	
		case 27:
			return 5;
	
		case 28:
			return 5;
	
		case 29:
			return 5;
	
		case 30:
			return 5;
	
		case 31:
			return 5;
	
		case 32:
			return 6;
	
		default:
		
	}

	return -1;
}

Player _INVALID_PLAYER_INDEX() // Position - 0x1684
{
	return -1;
}

BOOL func_46(int iParam0, Hash hParam1, var uParam2) // Position - 0x168D
{
	Hash hash;

	if (*uParam2 != 0 && *uParam2 != 1)
		*uParam2 = 0;

	switch (*uParam2)
	{
		case 0:
			if (func_65() != -1)
				return false;
		
			hash = func_64(iParam0);
		
			if (func_60(78225582, joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), hParam1, -1018905335, 1, 0, 1, 4, hash, 3))
				*uParam2 = 1;
			else
				*uParam2 = 3;
		
			if (*uParam2 == 1 && func_54())
			{
			}
			else
			{
				*uParam2 = 3;
				func_50(func_65());
			}
			break;
	
		case 1:
			if (func_49(func_65()))
			{
				if (func_48(func_65()) == 2)
				{
					*uParam2 = 2;
					func_50(func_65());
					func_47(hParam1);
				}
				else
				{
					*uParam2 = 3;
					func_50(func_65());
				}
			}
			break;
	}

	return *uParam2 != 1;
}

void func_47(Hash hParam0) // Position - 0x1760
{
	Global_4536663 = hParam0;
	return;
}

int func_48(int iParam0) // Position - 0x176E
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535172[iParam0 /*85*/].f_66.f_2;

	return 0;
}

BOOL func_49(int iParam0) // Position - 0x1797
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535172[iParam0 /*85*/].f_66.f_2 != 1;

	return false;
}

void func_50(int iParam0) // Position - 0x17C2
{
	BOOL flag;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_53(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
	
		func_51(&Global_4535172[iParam0 /*85*/]);
	}

	return;
}

void func_51(var uParam0) // Position - 0x1816
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_52(&(uParam0->f_14));
	func_52(&(uParam0->f_14.f_13));
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_26), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_34), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_40), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
	return;
}

void func_52(var uParam0) // Position - 0x1922
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	return;
}

BOOL func_53(int iParam0) // Position - 0x196A
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;

	return false;
}

BOOL func_54() // Position - 0x1995
{
	BOOL flag;
	BOOL flag2;
	int num;
	int transactionId;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	flag2 = 1;
	num = func_65();

	if (num == -1)
		return false;

	if (!flag)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_59(Global_4535172[num /*85*/].f_66.f_6, Global_4535172[num /*85*/].f_66.f_4, Global_4535172[num /*85*/].f_66.f_1) == 1)
				Global_4536674 = 1;
		
			return false;
		}
	
		if (Global_2695821)
		{
			if (Global_4535172[num /*85*/].f_66.f_6 == joaat("CATEGORY_WEAPON_AMMO") || Global_4535172[num /*85*/].f_66.f_6 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return false;
			}
		}
	}

	transactionId = func_58(num);

	if (transactionId != 2147483647)
	{
		if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(transactionId))
		{
			Global_4535172[num /*85*/].f_66.f_13 = 1;
			Global_4535172[num /*85*/].f_66.f_12 = 0;
			Global_4535172[num /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
		
			if (flag)
			{
				Global_4535172[num /*85*/].f_66.f_8 = 1;
				Global_4535172[num /*85*/].f_66.f_12 = 1;
			}
		
			Global_4535172[num /*85*/].f_66.f_18 = 0;
		
			if (flag || flag2)
				func_55(Global_4535172[num /*85*/], num);
		
			Global_4536659 = 1;
			return true;
		}
	}

	return false;
}

void func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85) // Position - 0x1AF5
{
	struct<36> eventData;
	int playerBits;

	if (iParam85 < 0)
		return;

	eventData.f_2 = 2147483647;
	eventData = 45913685;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = { uParam0.f_66 };
	eventData.f_2.f_33 = iParam85;
	playerBits = _GET_PLAYER_SCRIPT_EVENT_BITS(eventData.f_1);

	if (Global_262145.f_24076 && !Global_262145.f_24077 && !Global_262145.f_24078)
		return;

	if (!(playerBits == 0))
	{
		func_56();
		SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 36, playerBits);
	}

	return;
}

void func_56() // Position - 0x1B87
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
	return;
}

int _GET_PLAYER_SCRIPT_EVENT_BITS(Player plParam0) // Position - 0x1B96
{
	var address;

	if (plParam0 != -1)
		MISC::SET_BIT(&address, plParam0);

	return address;
}

int func_58(int iParam0) // Position - 0x1BAE
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535172[iParam0 /*85*/].f_66;

	return -1;
}

int func_59(int iParam0, int iParam1, int iParam2) // Position - 0x1BD5
{
	if (iParam0 == -433440095 || iParam0 == joaat("CATEGORY_SERVICE_WITH_THRESHOLD"))
	{
		switch (iParam1)
		{
			case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
				if (iParam2 >= 10000)
					return 1;
				else
					return 0;
				break;
		
			case joaat("SERVICE_EARN_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
			case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
			case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
			case joaat("SERVICE_EARN_CASHING_OUT"):
			case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
				if (iParam2 >= 1000)
					return 1;
				else
					return 2;
				break;
		
			case joaat("SERVICE_EARN_DEBUG"):
				return 0;
		
			case joaat("SERVICE_EARN_INITIAL_CASH"):
			case joaat("SERVICE_EARN_JOBS"):
			case joaat("SERVICE_EARN_BETTING"):
			case joaat("SERVICE_EARN_LOTTERY"):
			case joaat("SERVICE_EARN_CHALLENGE_WIN"):
			case joaat("SERVICE_EARN_PROPERTY_SALES"):
			case joaat("SERVICE_EARN_VEHICLE_SALES"):
			case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
			case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
			case joaat("SERVICE_EARN_CRATE_DROP"):
			case joaat("SERVICE_EARN_HOLDUPS"):
			case joaat("SERVICE_EARN_IMPORT_EXPORT"):
			case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
			case joaat("SERVICE_EARN_JOBSHARE_CASH"):
			case joaat("SERVICE_EARN_NOT_BADSPORT"):
			case joaat("SERVICE_EARN_BANK_INTEREST"):
			case joaat("SERVICE_EARN_ROCKSTAR"):
			case joaat("SERVICE_EARN_CNCW"):
			case joaat("SERVICE_EARN_CNCB"):
			case joaat("SERVICE_EARN_JOB_BONUS"):
			case joaat("SERVICE_EARN_BEND_JOB"):
			case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
			case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
			case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
			case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
			case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
			case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
			case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
			case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
			case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
			case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
			case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
			case joaat("SERVICE_EARN_REFUND_LOTTERY"):
			case -1426920838:
			case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
			case joaat("SERVICE_EARN_BOSS"):
			case joaat("SERVICE_EARN_GOON"):
			case joaat("SERVICE_EARN_BOSS_AGENCY"):
			case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
			case joaat("SERVICE_EARN_PREMIUM_JOB"):
			case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
			case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
			case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
			case joaat("SERVICE_EARN_REFUNDAMMODROP"):
			case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
			case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
			case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
			case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
			case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
			case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
			case joaat("SERVICE_EARN_GANGOPS_WAGES"):
			case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
			case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
			case joaat("SERVICE_EARN_GANGOPS_SETUP"):
			case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
			case joaat("SERVICE_EARN_GANGOPS_FINALE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
			case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
			case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
			case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
			case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
			case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
			case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
			case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
			case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
			case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
			case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
			case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
			case joaat("SERVICE_EARN_NIGHTCLUB_DANCING_AWARD"):
			case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
			case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
			case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
			case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
			case joaat("SERVICE_EARN_ARENA_WAR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
			case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
			case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
			case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
			case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
			case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
			case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
			case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
			case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
			case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
			case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
				return 1;
		
			case joaat("SERVICE_SPEND_AIRSTRIKE"):
			case joaat("SERVICE_SPEND_AMMO_DROP"):
			case joaat("SERVICE_SPEND_BACKUP_GANG"):
			case joaat("SERVICE_SPEND_BACKUP_HELI"):
			case joaat("SERVICE_SPEND_BOAT_PICKUP"):
			case joaat("SERVICE_SPEND_BOUNTY"):
			case joaat("SERVICE_SPEND_BULL_SHARK"):
			case joaat("SERVICE_SPEND_CAR_IMPOUND"):
			case joaat("SERVICE_SPEND_CASH_SHARED"):
			case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
			case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
			case joaat("SERVICE_SPEND_HELI_PICKUP"):
			case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
			case joaat("SERVICE_SPEND_HIRE_MUGGER"):
			case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
			case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
			case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
			case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
			case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
			case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
				return 2;
		
			default:
				return 0;
		}
	
		switch (iParam1)
		{
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
			case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
			case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
			case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
			case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
			case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
			case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
			case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
			case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
			case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
			case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
			case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
			case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
			case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
			case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
			case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
			case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
			case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
			case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
			case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
			case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
			case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
			case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
			case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
			case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
			case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
			case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
			case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
			case joaat("SERVICE_EARN_FROM_CONTRABAND"):
			case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
			case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
			case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
			case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
			case 883337077:
			case -1274418755:
			case -1853979468:
			case -239888995:
			case 1163066566:
			case -955087020:
			case 1874391251:
				return 1;
		
			case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
			case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
				return 2;
		}
	}
	else if (iParam0 == joaat("CATEGORY_SERVICE_WITH_LIMIT") || iParam0 == joaat("CATEGORY_PRICE_MODIFIER") || iParam0 == joaat("CATEGORY_PRICE_OVERRIDE"))
	{
		return 0;
	}

	return 1;
}

BOOL func_60(int iParam0, Hash hParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5, Hash hParam6, int iParam7, Hash hParam8, int iParam9) // Position - 0x21E7
{
	BOOL flag;
	int num;
	Hash itemData;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (!flag)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return false;
		}
	
		if (Global_2695821)
		{
			if (hParam1 == joaat("CATEGORY_WEAPON_AMMO") || hParam1 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return false;
			}
		}
	}

	if (hParam2 == 0)
		return false;

	num = func_65();

	if (num == -1)
		if (!func_62(&num, iParam0, hParam1, hParam3, iParam7, iParam9))
			return false;

	if (num != -1)
	{
		if (hParam8 != 0 && func_61(hParam1))
		{
			itemData = hParam8;
			itemData.f_1 = hParam2;
			itemData.f_2 = iParam5;
			itemData.f_3 = hParam6;
		}
		else
		{
			itemData = hParam2;
			itemData.f_1 = hParam8;
			itemData.f_2 = iParam5;
			itemData.f_3 = hParam6;
		}
	
		Global_4535172[num /*85*/].f_66.f_1 = itemData.f_2;
		Global_4535172[num /*85*/].f_66.f_15 = itemData;
		Global_4535172[num /*85*/].f_66.f_16 = itemData.f_1;
	
		if (flag || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&itemData, iParam4))
			return true;
	}

	return false;
}

BOOL func_61(Hash hParam0) // Position - 0x2309
{
	switch (hParam0)
	{
		case -221807075:
		case joaat("CATEGORY_INVENTORY_VEHICLE"):
		case joaat("CATEGORY_INVENTORY_VEHICLE_MOD"):
		case joaat("CATEGORY_INVENTORY_PROPERTIE"):
		case joaat("CATEGORY_INVENTORY_BEARD"):
		case 1701289268:
		case joaat("CATEGORY_INVENTORY_HAIR"):
		case joaat("CATEGORY_INVENTORY_EYEBROWS"):
		case joaat("CATEGORY_INVENTORY_CHEST_HAIR"):
		case joaat("CATEGORY_INVENTORY_CONTACTS"):
		case joaat("CATEGORY_INVENTORY_FACEPAINT"):
		case joaat("CATEGORY_INVENTORY_BLUSHER"):
		case joaat("CATEGORY_INVENTORY_LIPSTICK"):
		case joaat("CATEGORY_INVENTORY_PROPERTY_INTERIOR"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE"):
		case joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_MISSION"):
		case joaat("CATEGORY_CONTRABAND_QNTY"):
		case joaat("CATEGORY_INVENTORY_WAREHOUSE_INTERIOR"):
		case joaat("CATEGORY_WAREHOUSE_VEHICLE_INDEX"):
			return true;
	}

	return false;
}

BOOL func_62(var uParam0, int iParam1, Hash hParam2, Hash hParam3, int iParam4, int iParam5) // Position - 0x2398
{
	BOOL flag;
	int i;
	BOOL flag2;
	int transactionId;

	flag = false;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		flag = true;

	if (!flag)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return false;
		}
	
		if (Global_2695821)
		{
			if (hParam2 == joaat("CATEGORY_WEAPON_AMMO") || hParam2 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return false;
			}
		}
	}

	flag2 = false;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4535172[i /*85*/].f_66.f_2 == 0)
			flag2 = true;
		else if (Global_4535172[i /*85*/].f_66.f_5 == 1)
			return false;
	}

	if (!flag2)
		return false;

	*uParam0 = 0;

	if (!flag)
		if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_ACTIVE())
			NETSHOPPING::NET_GAMESERVER_BASKET_END();

	if (flag || NETSHOPPING::NET_GAMESERVER_BASKET_START(&transactionId, hParam2, hParam3, iParam4))
	{
		*uParam0 = func_63(transactionId, iParam1, -2085313189, hParam3, hParam2, 0, true, iParam4, iParam5, 0, flag);
		return true;
	}

	return false;
}

int func_63(int iParam0, int iParam1, int iParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x2495
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4535172[i /*85*/].f_66.f_2 == 0)
		{
			if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
				iParam0 = i + 900;
		
			Global_4535172[i /*85*/].f_66.f_2 = 1;
			Global_4535172[i /*85*/].f_66.f_1 = iParam5;
			Global_4535172[i /*85*/].f_66.f_3 = iParam1;
			Global_4535172[i /*85*/].f_66.f_4 = iParam2;
			Global_4535172[i /*85*/].f_66.f_7 = hParam3;
			Global_4535172[i /*85*/].f_66.f_5 = 0;
			Global_4535172[i /*85*/].f_66 = iParam0;
			Global_4535172[i /*85*/].f_66.f_6 = hParam4;
			Global_4535172[i /*85*/].f_66.f_11 = iParam8;
			Global_4535172[i /*85*/].f_66.f_10 = iParam7;
			Global_4535172[i /*85*/].f_66.f_13 = iParam9;
			Global_4535172[i /*85*/].f_66.f_12 = 0;
			Global_4535172[i /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[i /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
		
			if (bParam6)
				Global_4535172[i /*85*/].f_66.f_5 = 1;
		
			if (iParam1 == -1135378931 && bParam10)
				func_55(Global_4535172[i /*85*/], i);
		
			return i;
		}
	}

	return -1;
}

Hash func_64(int iParam0) // Position - 0x25D2
{
	var unk;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY6_v0", 64);
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return -1;

	return MISC::GET_HASH_KEY(&unk);
}

int func_65() // Position - 0x2668
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (func_58(i) != 2147483647)
			if (func_53(i))
				return i;
	}

	return -1;
}

Hash func_66(BOOL bParam0) // Position - 0x26A3
{
	var unk;

	func_67(&unk, bParam0);
	return MISC::GET_HASH_KEY(&unk);
}

void func_67(char* sParam0, BOOL bParam1) // Position - 0x26B9
{
	if (bParam1)
		TEXT_LABEL_ASSIGN_STRING(sParam0, "IG_SELL_0_t0_v0", 64);
	else
		TEXT_LABEL_ASSIGN_STRING(sParam0, "IG_BUY_0_t0_v0", 64);

	return;
}

void func_68(int iParam0, var uParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x26D9
{
	float num;
	float num2;
	float value;
	int num3;
	int num4;
	int num5;
	int num6;
	Hash hash;

	if (!bParam4 && !bParam5 && !bParam6)
	{
	}

	num = SYSTEM::TO_FLOAT(Global_262145.f_18380);
	num2 = SYSTEM::TO_FLOAT(Global_262145.f_18381);

	if (func_133(iParam0))
	{
		if (func_131(PLAYER::PLAYER_ID()) == 297)
		{
			num = SYSTEM::TO_FLOAT(Global_262145.f_32596);
			num2 = SYSTEM::TO_FLOAT(Global_262145.f_32596);
		}
		else
		{
			num = SYSTEM::TO_FLOAT(Global_262145.f_21523);
			num2 = SYSTEM::TO_FLOAT(Global_262145.f_21524);
		}
	}
	else if (func_130(iParam0))
	{
		num = SYSTEM::TO_FLOAT(Global_262145.f_32700);
	}

	value = 0f;
	value = value + (SYSTEM::TO_FLOAT(iParam2) * num);
	value = value + (SYSTEM::TO_FLOAT(iParam3) * num2);
	num3 = func_129(PLAYER::PLAYER_ID(), iParam0);
	num4 = func_41(iParam0);

	if (num4 >= 0)
	{
		num5 = func_125(iParam0);
		num6 = num3 + SYSTEM::ROUND(value);
	
		if (bParam4)
			num6 = 100;
	
		if (bParam5 || bParam6)
			num6 = 100 + num5;
	
		if (num6 > 100 + num5)
			num6 = 100 + num5;
	
		if (num6 < 0)
			num6 = 0;
	
		if (num6 > 100 + func_124(iParam0, false))
			num6 = 100 + func_124(iParam0, false);
	
		if (func_133(iParam0) && num6 >= 100)
			Global_1648742 = 1;
	
		if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		{
			_MPCHAR_STAT_SET_INT(func_123(num4), num6, -1, true, false);
			func_122(num4, num6);
			func_121(num4, num6);
		
			if (func_120(num4, false) && num4 == 6)
				func_105(0);
		
			_STAT_SET_PACKED_BOOL(func_104(num4), false, -1);
			Global_2694475 = 1;
			*uParam1 = 2;
		
			if (!bParam4 && !bParam5 && func_133(iParam0))
				func_76();
		
			func_73(func_75(iParam0));
		}
		else
		{
			hash = SYSTEM::ROUND(value);
		
			if (num5 > func_124(iParam0, false))
				num5 = func_124(iParam0, false);
		
			if (bParam4 || bParam5 || bParam6)
				hash = 100 + num5;
		
			if (bParam4 || bParam5 || bParam6 || hash + num3 > 100 + num5)
				hash = (100 + num5) - num3;
		
			if (hash <= 0)
			{
				*uParam1 = 2;
				return;
			}
		
			if (func_69(num4, hash, uParam1))
			{
				if (*uParam1 == 2)
				{
					_MPCHAR_STAT_SET_INT(func_123(num4), num6, -1, true, false);
					func_122(num4, num6);
					func_121(num4, num6);
				
					if (func_120(num4, false) && num4 == 6)
						func_105(0);
				
					_STAT_SET_PACKED_BOOL(func_104(num4), false, -1);
					Global_2694475 = 1;
				
					if (!bParam4 && !bParam5 && func_133(iParam0))
						func_76();
				
					func_73(func_75(iParam0));
				}
			}
			else if (*uParam1 == 1 && func_65() == -1)
			{
				*uParam1 = 3;
			}
		}
	}
	else
	{
		*uParam1 = 3;
	}

	return;
}

BOOL func_69(int iParam0, Hash hParam1, var uParam2) // Position - 0x29CC
{
	Hash hash;
	Hash hash2;
	Hash hash3;
	Hash hash4;

	if (*uParam2 != 0 && *uParam2 != 1)
		*uParam2 = 0;

	switch (*uParam2)
	{
		case 0:
			if (func_65() != -1)
				return false;
		
			hash = func_72(iParam0);
			hash2 = func_71();
			hash3 = func_70(iParam0);
			hash4 = joaat("CF_MISSION_PASSED_BKR_v1");
		
			if (iParam0 == 6)
				hash4 = -1523725408;
		
			if (func_60(78225582, joaat("CATEGORY_INVENTORY_CONTRABAND_MISSION"), hash2, 2108234284, 1, 0, 1, 4, hash, 3))
				if (func_60(78225582, joaat("CATEGORY_CONTRABAND_QNTY"), hash3, 2108234284, hParam1, 0, 0, 4, 0, 3))
					if (func_60(78225582, joaat("CATEGORY_CONTRABAND_FLAGS"), hash4, 2108234284, 1, 0, hParam1, 4, hash3, 3))
						*uParam2 = 1;
					else
						*uParam2 = 3;
				else
					*uParam2 = 3;
			else
				*uParam2 = 3;
		
			if (*uParam2 == 1 && func_54())
			{
			}
			else
			{
				*uParam2 = 3;
				func_50(func_65());
			}
			break;
	
		case 1:
			if (func_49(func_65()))
			{
				if (func_48(func_65()) == 2)
				{
					*uParam2 = 2;
					func_50(func_65());
				}
				else
				{
					*uParam2 = 3;
					func_50(func_65());
				}
			}
			break;
	}

	return *uParam2 != 1;
}

Hash func_70(int iParam0) // Position - 0x2B08
{
	var unk;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY0_v0", 64);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY1_v0", 64);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY2_v0", 64);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY3_v0", 64);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY4_v0", 64);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY5_v0", 64);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MATTOTALFORFACTORY6_v0", 64);
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return -1;

	return MISC::GET_HASH_KEY(&unk);
}

Hash func_71() // Position - 0x2BA1
{
	return Global_4536663;
}

Hash func_72(int iParam0) // Position - 0x2BAD
{
	var unk;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY0_v0", 64);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY1_v0", 64);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY2_v0", 64);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY3_v0", 64);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY4_v0", 64);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY5_v0", 64);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MISSIONFORFACTORY6_v0", 64);
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return -1;

	return MISC::GET_HASH_KEY(&unk);
}

void func_73(int iParam0) // Position - 0x2C43
{
	int i;

	if (Global_262145.f_9036)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_2359296[func_74() /*5568*/].f_681.f_4242[i /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[i] == -1)
			{
				Global_1574742.f_1[i] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
	}

	return;
}

int func_74() // Position - 0x2CA6
{
	int num;

	num = 0;
	return num;
}

int func_75(int iParam0) // Position - 0x2CB3
{
	switch (func_44(iParam0))
	{
		case 4:
			return 135;
	
		case 1:
			return 136;
	
		case 2:
			return 137;
	
		case 3:
			return 138;
	
		case 0:
			return 139;
	
		case 5:
			return 140;
	
		case 6:
			return 140;
	}

	return -1;
}

void func_76() // Position - 0x2D29
{
	int num;

	if (func_103(PLAYER::PLAYER_ID()))
	{
		num = func_135(PLAYER::PLAYER_ID());
	
		if (func_102(PLAYER::PLAYER_ID(), num) <= 0 && func_101(PLAYER::PLAYER_ID(), num) != 0)
		{
			func_98(PLAYER::PLAYER_ID(), num, 0, true);
			func_78(5, false, true, false);
			func_77(PLAYER::PLAYER_ID(), num, 5000, true);
		}
	}

	return;
}

void func_77(Player plParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2D88
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				if (bParam3)
					Global_1853910[plParam0 /*862*/].f_267.f_286 = iParam2;
				else
					Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_9 = iParam2;
		}
	}

	return;
}

void func_78(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2DFD
{
	int num;
	BOOL flag;
	int num2;
	int value;
	int value2;
	int value3;
	float num3;

	flag = false;
	num2 = func_97(PLAYER::PLAYER_ID(), iParam0);

	if (!bParam1)
		func_96(iParam0, 0, bParam2);

	if (bParam1)
	{
		num = Global_2764476[iParam0];
		num = func_95(iParam0, bParam2);
	
		if (num < 0)
			num = 0;
	
		if (!bParam2)
			Global_1949961 = -1;
	
		func_94(iParam0, false, bParam2);
	}
	else if (func_120(iParam0, bParam2))
	{
		num = func_80(num2, false, false, false);
		value = func_129(PLAYER::PLAYER_ID(), num2);
		value2 = func_124(num2, bParam2);
		value3 = func_80(num2, false, bParam2, false);
		num3 = SYSTEM::TO_FLOAT(value3) / SYSTEM::TO_FLOAT(value2);
		num = num - SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * num3);
	
		if (num <= 0)
			num = value3;
	
		if (func_133(num2) && func_101(PLAYER::PLAYER_ID(), num2) == 2)
		{
			num = num / 2;
			flag = true;
		}
	
		func_96(iParam0, num, bParam2);
	}
	else
	{
		if (func_79(PLAYER::PLAYER_ID(), num2) > 0)
			func_122(iParam0, Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_2 - (func_124(num2, bParam2) / 2));
	
		num = func_80(num2, true, bParam2, bParam3) / (func_79(PLAYER::PLAYER_ID(), num2) + 1);
	}

	if (!flag)
	{
		if (func_133(num2) && func_101(PLAYER::PLAYER_ID(), num2) == 2)
		{
			num = num / 2;
			flag = true;
		}
	}

	func_77(PLAYER::PLAYER_ID(), num2, num, bParam2);
	return;
}

int func_79(Player plParam0, int iParam1) // Position - 0x2F75
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_8;
		}
	}

	return 0;
}

int func_80(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2FD4
{
	int num;
	int num2;

	num2 = func_44(iParam0);

	if (bParam1)
		func_86(iParam0, bParam2, bParam3);

	switch (num2)
	{
		case 1:
			num = Global_262145.f_17391;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				num = num - Global_262145.f_17401;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 1))
				num = num - Global_262145.f_17407;
		
			if (*Global_262145.f_33039 && !_STAT_GET_PACKED_BOOL(34716, -1))
				num = SYSTEM::FLOOR((float)num * *Global_262145.f_33046);
			break;
	
		case 6:
			num = Global_262145.f_17396;
		
			if (func_82(PLAYER::PLAYER_ID()))
				num = num - Global_262145.f_17402;
		
			if (func_81(true))
				num = num / 2;
			break;
	
		case 3:
			num = Global_262145.f_17392;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				num = num - Global_262145.f_17400;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 1))
				num = num - Global_262145.f_17406;
		
			if (*Global_262145.f_33040 && !_STAT_GET_PACKED_BOOL(34719, -1))
				num = SYSTEM::FLOOR((float)num * *Global_262145.f_33047);
			break;
	
		case 4:
			num = Global_262145.f_17393;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				num = num - Global_262145.f_17399;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 1))
				num = num - Global_262145.f_17405;
		
			if (*Global_262145.f_33041 && !_STAT_GET_PACKED_BOOL(34717, -1))
				num = SYSTEM::FLOOR((float)num * *Global_262145.f_33048);
			break;
	
		case 0:
			num = Global_262145.f_17394;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				num = num - Global_262145.f_17397;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 1))
				num = num - Global_262145.f_17403;
		
			if (*Global_262145.f_33042 && !_STAT_GET_PACKED_BOOL(34718, -1))
				num = SYSTEM::FLOOR((float)num * *Global_262145.f_33049);
			break;
	
		case 2:
			num = Global_262145.f_17395;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				num = num - Global_262145.f_17398;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 1))
				num = num - Global_262145.f_17404;
		
			if (*Global_262145.f_33043 && !_STAT_GET_PACKED_BOOL(34720, -1))
				num = SYSTEM::FLOOR((float)num * *Global_262145.f_33050);
			break;
	
		case 5:
			if (bParam2)
				num = Global_262145.f_21548;
			else
				num = Global_262145.f_21532;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				if (bParam2)
					num = num - Global_262145.f_21549;
				else
					num = num - Global_262145.f_21533;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 1))
				if (bParam2)
					num = num - Global_262145.f_21550;
				else
					num = num - Global_262145.f_21534;
		
			if (bParam2)
				if (*Global_262145.f_33045 && !_STAT_GET_PACKED_BOOL(34739, -1))
					num = SYSTEM::FLOOR((float)num * *Global_262145.f_33052);
			else if (*Global_262145.f_33044 && !_STAT_GET_PACKED_BOOL(34721, -1))
				num = SYSTEM::FLOOR((float)num * *Global_262145.f_33051);
		
			if (func_101(PLAYER::PLAYER_ID(), iParam0) == 2)
				num = num * 2;
			break;
	}

	return num;
}

BOOL func_81(BOOL bParam0) // Position - 0x337C
{
	int num;

	num = func_19(UNK_20157800, -1, 0);

	if (num == 0)
		return false;

	if (func_19(UNK_1861927166, -1, 0) <= NETWORK::GET_CLOUD_TIME_AS_INT())
	{
		if (num != 0)
		{
			_MPCHAR_STAT_SET_INT(UNK_1861927166, 0, -1, true, false);
			_MPCHAR_STAT_SET_INT(UNK_20157800, 0, -1, true, false);
		}
	
		return false;
	}

	if (bParam0 && num > Global_262145.f_21871)
		return false;

	return true;
}

BOOL func_82(Player plParam0) // Position - 0x33E2
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_478, 16);
}

BOOL func_83(Player plParam0, int iParam1, int iParam2) // Position - 0x3409
{
	int num;

	if (func_85(plParam0, iParam1))
	{
		num = func_84(plParam0, iParam1);
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_193[num /*13*/].f_5, iParam2);
	}

	return false;
}

int func_84(Player plParam0, int iParam1) // Position - 0x3441
{
	int i;

	if (func_42(iParam1) && plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return i;
		}
	}

	return -1;
}

BOOL func_85(Player plParam0, int iParam1) // Position - 0x348D
{
	int i;

	if (func_42(iParam1) && plParam0 != _INVALID_PLAYER_INDEX())
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return true;
		}
	}

	return false;
}

void func_86(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x34D8
{
	int num;
	int num2;

	if (!func_90(iParam0, bParam2))
		return;

	num = func_89(iParam0);
	num2 = func_88(num);

	if (bParam1)
		num2 = func_87(num);

	if (!_STAT_GET_PACKED_BOOL(num2, -1))
		_STAT_SET_PACKED_BOOL(num2, true, -1);

	return;
}

int func_87(int iParam0) // Position - 0x351F
{
	switch (iParam0)
	{
		case 5:
			return 34738;
	}

	return 0;
}

int func_88(int iParam0) // Position - 0x353F
{
	switch (iParam0)
	{
		case 1:
			return 34722;
	
		case 3:
			return 34725;
	
		case 4:
			return 34723;
	
		case 0:
			return 34724;
	
		case 2:
			return 34726;
	
		case 5:
			return 34727;
	}

	return 0;
}

int func_89(int iParam0) // Position - 0x35AF
{
	switch (iParam0)
	{
		case 3:
		case 8:
		case 13:
		case 18:
			return 4;
	
		case 4:
		case 9:
		case 14:
		case 19:
			return 2;
	
		case 5:
		case 10:
		case 15:
		case 20:
			return 0;
	
		case 1:
		case 6:
		case 11:
		case 16:
			return 3;
	
		case 2:
		case 7:
		case 12:
		case 17:
			return 1;
	
		case 32:
			return 6;
	
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return 5;
	}

	return -1;
}

BOOL func_90(int iParam0, BOOL bParam1) // Position - 0x36B0
{
	if (!func_85(PLAYER::PLAYER_ID(), iParam0))
		return false;

	if (!bParam1 && !func_93(PLAYER::PLAYER_ID(), iParam0))
		return false;

	if (!bParam1 && !func_91(PLAYER::PLAYER_ID(), func_41(iParam0)))
		return false;

	return true;
}

BOOL func_91(Player plParam0, int iParam1) // Position - 0x3703
{
	BOOL num;
	int num2;
	int num3;

	num = 0;
	num2 = func_97(plParam0, iParam1);
	num3 = func_44(num2);

	switch (num3)
	{
		case 1:
			if (func_92(plParam0, num2) > 8)
				num = 1;
			break;
	
		case 3:
			if (func_92(plParam0, num2) > 2)
				num = 1;
			break;
	
		case 4:
			if (func_92(plParam0, num2) > 1)
				num = 1;
			break;
	
		case 0:
			if (func_92(plParam0, num2) > 1)
				num = 1;
			break;
	
		case 2:
			if (func_92(plParam0, num2) > 1)
				num = 1;
			break;
	
		case 5:
			if (func_92(plParam0, num2) > 1)
				num = 1;
			break;
	
		case 6:
			if (func_92(plParam0, num2) > 1)
				num = 1;
			break;
	}

	return num;
}

int func_92(Player plParam0, int iParam1) // Position - 0x37D2
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_4;
		}
	}

	return 0;
}

BOOL func_93(Player plParam0, int iParam1) // Position - 0x3831
{
	int num;

	if (func_85(plParam0, iParam1))
	{
		num = func_84(plParam0, iParam1);
	
		if (Global_1853910[plParam0 /*862*/].f_267.f_193[num /*13*/].f_4 > 0 && Global_1853910[plParam0 /*862*/].f_267.f_193[num /*13*/].f_7)
			return true;
	}

	return false;
}

void func_94(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3885
{
	if (bParam2)
	{
		_STAT_SET_PACKED_BOOL(15384, bParam1, -1);
		return;
	}

	_STAT_SET_PACKED_BOOL(func_104(iParam0), bParam1, -1);
	return;
}

int func_95(int iParam0, BOOL bParam1) // Position - 0x38AC
{
	int num;
	int num2;

	num = Global_2764476[iParam0];
	num2 = func_97(PLAYER::PLAYER_ID(), iParam0);

	if (bParam1)
		num = Global_2764484;

	if (func_133(num2))
		if (func_101(PLAYER::PLAYER_ID(), num2) == 2)
			num = num * 2;

	return num;
}

void func_96(int iParam0, int iParam1, BOOL bParam2) // Position - 0x38F4
{
	if (bParam2)
	{
		Global_2764484 = iParam1;
		return;
	}

	Global_2764476[iParam0] = iParam1;
	return;
}

int func_97(Player plParam0, int iParam1) // Position - 0x3914
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (iParam1 < 0 || iParam1 >= 7)
		return 0;

	if (func_42(Global_1853910[plParam0 /*862*/].f_267.f_193[iParam1 /*13*/]))
		num = Global_1853910[plParam0 /*862*/].f_267.f_193[iParam1 /*13*/];

	return num;
}

void func_98(Player plParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x396D
{
	int i;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
			{
				Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_8 = iParam2;
			
				if (bParam3)
					_STAT_SET_PACKED_BOOL(func_100(i), func_99(iParam2), -1);
			}
		}
	}

	return;
}

BOOL func_99(int iParam0) // Position - 0x39D3
{
	return iParam0 == 1;
}

int func_100(int iParam0) // Position - 0x39DF
{
	switch (iParam0)
	{
		case 0:
			return 9394;
	
		case 1:
			return 9395;
	
		case 2:
			return 9396;
	
		case 3:
			return 9397;
	
		case 4:
			return 9398;
	
		case 5:
			return 15371;
	
		case 6:
			return 36666;
	
		default:
		
	}

	return 9394;
}

int func_101(Player plParam0, int iParam1) // Position - 0x3A46
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1) && func_133(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_12;
		}
	}

	return 0;
}

int func_102(Player plParam0, int iParam1) // Position - 0x3AB0
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1) && func_133(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return Global_1853910[plParam0 /*862*/].f_267.f_285;
		}
	}

	return 0;
}

BOOL func_103(Player plParam0) // Position - 0x3B15
{
	return func_135(plParam0) != 0;
}

int func_104(int iParam0) // Position - 0x3B25
{
	switch (iParam0)
	{
		case 0:
			return 9416;
	
		case 1:
			return 9417;
	
		case 2:
			return 9418;
	
		case 3:
			return 9419;
	
		case 4:
			return 9420;
	
		case 5:
			return 15372;
	
		case 6:
			return 36662;
	
		default:
		
	}

	return 9416;
}

void func_105(int iParam0) // Position - 0x3B8C
{
	int num;
	int num2;

	if (!func_119())
		return;

	if (func_118(true))
	{
		num = func_116(_GET_BOSS_OF_LOCAL_PLAYER());
		num.f_1 = func_115(_GET_BOSS_OF_LOCAL_PLAYER());
	}

	num.f_2 = iParam0;
	num.f_14 = func_82(PLAYER::PLAYER_ID());
	num.f_4 = func_114(PLAYER::PLAYER_ID(), 32);
	num.f_3 = Global_1648664[6] >= 0 ? Global_1648664[6] : 0;
	TEXT_LABEL_ASSIGN_STRING(&(num.f_5), func_106(PLAYER::PLAYER_ID()), 32);
	num2 = func_19(UNK_1861927166, -1, 0);

	if (num2 > NETWORK::GET_CLOUD_TIME_AS_INT())
		num.f_13 = num2 - NETWORK::GET_CLOUD_TIME_AS_INT();

	STATS::_PLAYSTATS_ACID_RND(&num);
	return;
}

const char* func_106(Player plParam0) // Position - 0x3C29
{
	const char* str;
	Player player;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		str = func_112(&(Global_1914091[plParam0 /*297*/].f_265));
		return str;
	}

	if (Global_1894573[plParam0 /*608*/].f_10.f_121 != Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121)
		return str;

	if (func_111(plParam0, 28) || func_111(PLAYER::PLAYER_ID(), 28) && !func_109(plParam0))
		return "";

	player = func_108(plParam0);

	if (player != _INVALID_PLAYER_INDEX())
		if (player != PLAYER::PLAYER_ID())
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return "";

	if (player != _INVALID_PLAYER_INDEX())
	{
		str = func_112(&(Global_1914091[player /*297*/].f_265));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(str))
			return "";
		else
			return str;
	}

	return "";
}

BOOL IS_XBOX_PLATFORM() // Position - 0x3D0C
{
	return MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION();
}

Player func_108(Player plParam0) // Position - 0x3D22
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1894573[plParam0 /*608*/].f_10;

	return _INVALID_PLAYER_INDEX();
}

BOOL func_109(Player plParam0) // Position - 0x3D45
{
	var gamerHandle;

	gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };

	if (IS_XBOX_PLATFORM())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;
		else if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
			if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
				return true;

	return false;
}

struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x3D85
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

BOOL func_111(Player plParam0, int iParam1) // Position - 0x3D9C
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

const char* func_112(var uParam0) // Position - 0x3DB4
{
	return uParam0;
}

var func_113(BOOL bParam0, var uParam1, var uParam2) // Position - 0x3DBE
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_114(Player plParam0, int iParam1) // Position - 0x3DD5
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_1;
		}
	}

	return 0;
}

int func_115(Player plParam0) // Position - 0x3E34
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[1];
}

int func_116(Player plParam0) // Position - 0x3E59
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return -1;

	return Global_1894573[plParam0 /*608*/].f_10.f_8[0];
}

Player _GET_BOSS_OF_LOCAL_PLAYER() // Position - 0x3E7E
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

BOOL func_118(BOOL bParam0) // Position - 0x3E93
{
	return _IS_PLAYER_IN_AN_ORGANIZATION(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_119() // Position - 0x3EA5
{
	return _STAT_GET_PACKED_BOOL(36658, -1);
}

BOOL func_120(int iParam0, BOOL bParam1) // Position - 0x3EB6
{
	if (bParam1)
		return _STAT_GET_PACKED_BOOL(15384, -1);

	return _STAT_GET_PACKED_BOOL(func_104(iParam0), -1);
}

void func_121(int iParam0, int iParam1) // Position - 0x3ED9
{
	if (iParam0 != -1 && iParam1 != Global_1648664[iParam0])
		Global_1648664[iParam0] = iParam1;

	return;
}

void func_122(int iParam0, int iParam1) // Position - 0x3F02
{
	if (iParam0 != -1 && iParam1 != Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_2)
		Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_2 = iParam1;

	return;
}

eMPStat func_123(int iParam0) // Position - 0x3F47
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_MATTOTALFORFACTORY0;
	
		case 1:
			return MP_STAT_MATTOTALFORFACTORY1;
	
		case 2:
			return MP_STAT_MATTOTALFORFACTORY2;
	
		case 3:
			return MP_STAT_MATTOTALFORFACTORY3;
	
		case 4:
			return MP_STAT_MATTOTALFORFACTORY4;
	
		case 5:
			return MP_STAT_MATTOTALFORFACTORY5;
	
		case 6:
			return UNK_752515705;
	
		default:
		
	}

	return MP_STAT_MATTOTALFORFACTORY0;
}

int func_124(int iParam0, BOOL bParam1) // Position - 0x3FAD
{
	int unk;
	int num;

	num = func_44(iParam0);

	switch (num)
	{
		case 1:
			unk = Global_262145.f_17412;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				unk = Global_262145.f_17418;
			break;
	
		case 3:
			unk = Global_262145.f_17411;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				unk = Global_262145.f_17417;
			break;
	
		case 4:
			unk = Global_262145.f_17410;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				unk = Global_262145.f_17416;
			break;
	
		case 0:
			unk = Global_262145.f_17408;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				unk = Global_262145.f_17414;
			break;
	
		case 6:
			unk = Global_262145.f_17413;
		
			if (func_82(PLAYER::PLAYER_ID()))
				unk = Global_262145.f_17419;
			break;
	
		case 2:
			unk = Global_262145.f_17409;
		
			if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
				unk = Global_262145.f_17415;
			break;
	
		case 5:
			if (bParam1)
			{
				unk = Global_262145.f_21551;
			
				if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
					unk = Global_262145.f_21552;
			}
			else
			{
				unk = Global_262145.f_21535;
			
				if (func_83(PLAYER::PLAYER_ID(), iParam0, 0))
					unk = Global_262145.f_21536;
			}
			break;
	}

	return unk;
}

int func_125(int iParam0) // Position - 0x410B
{
	int num;
	int num2;
	int value;
	int num3;
	int num4;
	int num5;
	float num6;
	float num7;
	float value2;

	num2 = func_41(iParam0);
	value = func_80(iParam0, false, false, false);
	num3 = _STOPWATCH_GET_TIME_PASSED(&Global_2764461[num2 /*2*/], false, false);

	if (_STAT_GET_PACKED_BOOL(func_104(num2), -1))
	{
		num3 = value - Global_2764476[num2];
	
		if (num3 < 0)
			num3 = 0;
	}

	if (num2 == 5)
	{
		num4 = func_126(num2, iParam0, true);
		num5 = func_126(num2, iParam0, false);
		num = num4 + num5;
	}
	else
	{
		num6 = 1f - (SYSTEM::TO_FLOAT(value - num3) / SYSTEM::TO_FLOAT(value));
		num7 = SYSTEM::TO_FLOAT(func_124(iParam0, false));
		value2 = num7 * num6;
		num = SYSTEM::ROUND(value2);
	}

	return num;
}

int func_126(int iParam0, int iParam1, BOOL bParam2) // Position - 0x41B8
{
	var unk;
	int value;
	int num;
	float num2;
	float num3;

	if (bParam2)
	{
		unk = Global_2764485;
		unk.f_1 = Global_2764485.f_1;
	}
	else
	{
		unk = Global_2764461[iParam0 /*2*/];
		unk.f_1 = Global_2764461[iParam0 /*2*/].f_1;
	}

	value = func_80(iParam1, false, bParam2, false);
	num = func_127(iParam1, unk, iParam0, bParam2);

	if (num < 0)
		num = 0;

	num2 = 1f - (SYSTEM::TO_FLOAT(value - num) / SYSTEM::TO_FLOAT(value));
	num3 = SYSTEM::TO_FLOAT(func_124(iParam1, bParam2));
	return SYSTEM::ROUND(num3 * num2);
}

int func_127(int iParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4) // Position - 0x4240
{
	int num;
	int num2;
	int num3;
	int num4;

	num = func_80(iParam0, false, bParam4, false);
	num2 = _STOPWATCH_GET_TIME_PASSED(&uParam1, false, false);

	if (func_95(iParam3, bParam4) > 0)
	{
		num3 = func_95(iParam3, bParam4);
	
		if (func_133(iParam0) && func_101(PLAYER::PLAYER_ID(), iParam0) == 2)
			num3 = num3 / 2;
	
		num2 = num - num3;
		num4 = func_128(PLAYER::PLAYER_ID(), iParam0, bParam4) - _STOPWATCH_GET_TIME_PASSED(&uParam1, false, false);
		func_96(iParam3, num4, bParam4);
	}

	return num2;
}

int func_128(Player plParam0, int iParam1, BOOL bParam2) // Position - 0x42BE
{
	int i;
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
			{
				num = Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_9;
			
				if (bParam2)
					num = Global_1853910[plParam0 /*862*/].f_267.f_286;
			
				if (func_133(iParam1))
					if (func_101(PLAYER::PLAYER_ID(), iParam1) == 2)
						num = num * 2;
			
				return num;
			}
		}
	}

	return 0;
}

int func_129(Player plParam0, int iParam1) // Position - 0x4354
{
	int i;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_42(iParam1))
	{
		for (i = 0; i <= 6; i = i + 1)
		{
			if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] == iParam1)
				return Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/].f_2;
		}
	}

	return 0;
}

BOOL func_130(int iParam0) // Position - 0x43B3
{
	return func_44(iParam0) == 6;
}

int func_131(Player plParam0) // Position - 0x43C3
{
	if (func_132(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_132(Player plParam0, BOOL bParam1) // Position - 0x43E6
{
	if (Global_1894573[plParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

BOOL func_133(int iParam0) // Position - 0x4421
{
	return func_44(iParam0) == 5;
}

BOOL _NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() // Position - 0x4431
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

int func_135(Player plParam0) // Position - 0x4448
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	return Global_1853910[plParam0 /*862*/].f_267.f_193[5 /*13*/];
}

int func_136(int iParam0) // Position - 0x446E
{
	switch (iParam0)
	{
		case 0:
			return 5;
	
		case 1:
			return 3;
	
		case 2:
			return 1;
	
		case 3:
			return 4;
	
		case 4:
			return 2;
	
		case 5:
			return 0;
	
		case 6:
			return 6;
	}

	return -1;
}

void _STAT_SET_PACKED_BOOL(int iParam0, BOOL bParam1, int iParam2) // Position - 0x44D9
{
	if (iParam2 == -1)
		iParam2 = func_18();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

BOOL func_138() // Position - 0x44F7
{
	var unk;
	int endRange;
	int i;
	int randomIntInRange;

	if (!func_163())
		return false;

	if (iLocal_146 != -1)
		return true;

	unk = 7;

	for (i = 0; i < 7; i = i + 1)
	{
		if (func_140(i))
		{
			unk[endRange] = i;
			endRange = endRange + 1;
		}
	}

	if (endRange > 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
		iLocal_146 = func_139(unk[randomIntInRange]);
		return true;
	}
	else if (endRange == 1)
	{
		iLocal_146 = func_139(unk[0]);
		return true;
	}

	return false;
}

int func_139(int iParam0) // Position - 0x457E
{
	switch (iParam0)
	{
		case 5:
			return 0;
	
		case 3:
			return 1;
	
		case 1:
			return 2;
	
		case 4:
			return 3;
	
		case 2:
			return 4;
	
		case 0:
			return 5;
	
		case 6:
			return 6;
	
		default:
		
	}

	return -1;
}

BOOL func_140(int iParam0) // Position - 0x45D4
{
	int num;
	int num2;

	if (iParam0 == 5)
	{
		if (func_103(PLAYER::PLAYER_ID()))
		{
			num = func_43(PLAYER::PLAYER_ID(), 5);
		
			if (func_145(num) && func_143(num))
				return true;
		}
	}
	else if (func_142(PLAYER::PLAYER_ID(), iParam0))
	{
		num = func_43(PLAYER::PLAYER_ID(), iParam0);
		num2 = func_41(num);
	
		if (func_145(num) && func_143(num) && !func_141(num2))
			return true;
	}

	return false;
}

BOOL func_141(int iParam0) // Position - 0x465F
{
	int num;

	if (func_42(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/]))
	{
		num = func_89(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/]);
	
		if (num == 1)
			if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[iParam0 /*13*/].f_4 > 8)
				return false;
	}

	return Global_1648645[iParam0] != 0;
}

BOOL func_142(Player plParam0, int iParam1) // Position - 0x46CB
{
	int i;
	int num;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return true;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/] != 0)
		{
			num = Global_1853910[plParam0 /*862*/].f_267.f_193[i /*13*/];
		
			if (func_44(num) == iParam1)
				return true;
		}
	}

	return false;
}

BOOL func_143(int iParam0) // Position - 0x4737
{
	int num;

	num = func_41(iParam0);

	if (func_85(PLAYER::PLAYER_ID(), iParam0) && Global_1648664[num] < Global_262145.f_18386 && !func_144(num))
		return 1;

	return 0;
}

BOOL func_144(int iParam0) // Position - 0x477A
{
	return Global_1648637[iParam0] != 0;
}

BOOL func_145(int iParam0) // Position - 0x478C
{
	int num;
	int num2;

	if (!func_85(PLAYER::PLAYER_ID(), iParam0))
		return false;

	num = func_41(iParam0);

	if (num >= 0 && num < 7)
		if (Global_1648691[num] != 0)
			return Global_1648691[num] == 1;

	num2 = func_146(iParam0);

	if (num2 == 1 || num2 == 3)
		return true;

	return false;
}

int func_146(int iParam0) // Position - 0x47F5
{
	int num;

	if (!func_85(PLAYER::PLAYER_ID(), iParam0))
		return 0;

	num = func_41(iParam0);

	if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[num /*13*/].f_4 <= 0)
		return 4;
	else if (!func_157(PLAYER::PLAYER_ID(), num) && !func_141(num))
		return 2;
	else if (func_147(num, iParam0))
		return 1;

	return 3;
}

BOOL func_147(int iParam0, int iParam1) // Position - 0x4869
{
	if (iParam0 == 5)
	{
		if (Global_1648664[iParam0] > 0 && !func_153(iParam1) || !func_151(PLAYER::PLAYER_ID(), iParam1))
			if (!Global_262145.f_21553 || _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID()))
				return true;
	
		return false;
	}

	if (Global_1648664[iParam0] > 0 && !func_153(iParam1) && !Global_262145.f_18951 || func_148(PLAYER::PLAYER_ID()))
		return true;

	return false;
}

BOOL func_148(Player plParam0) // Position - 0x48FB
{
	return func_149(plParam0, 1);
}

BOOL func_149(Player plParam0, int iParam1) // Position - 0x490A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

BOOL _IS_PLAYER_BOSS_OF_ORGANIZATION(Player plParam0) // Position - 0x4959
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

BOOL func_151(Player plParam0, int iParam1) // Position - 0x498E
{
	return func_102(plParam0, iParam1) >= func_152(iParam1);
}

int func_152(int iParam0) // Position - 0x49A5
{
	switch (iParam0)
	{
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return Global_262145.f_21547;
	
		default:
		
	}

	return 0;
}

BOOL func_153(int iParam0) // Position - 0x4A01
{
	return func_154(PLAYER::PLAYER_ID(), iParam0);
}

BOOL func_154(Player plParam0, int iParam1) // Position - 0x4A13
{
	int num;

	if (plParam0 != _INVALID_PLAYER_INDEX() && func_85(plParam0, iParam1))
	{
		num = func_84(plParam0, iParam1);
	
		if (func_156(num))
			return Global_1853910[plParam0 /*862*/].f_267.f_193[num /*13*/].f_1 >= func_155(iParam1);
	}

	return false;
}

int func_155(int iParam0) // Position - 0x4A64
{
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_18909;
	
		case 1:
			return Global_262145.f_18917;
	
		case 3:
			return Global_262145.f_18925;
	
		case 5:
			return Global_262145.f_18933;
	
		case 4:
			return Global_262145.f_18941;
	
		case 7:
			return Global_262145.f_18909;
	
		case 6:
			return Global_262145.f_18917;
	
		case 8:
			return Global_262145.f_18925;
	
		case 10:
			return Global_262145.f_18933;
	
		case 9:
			return Global_262145.f_18941;
	
		case 12:
			return Global_262145.f_18909;
	
		case 11:
			return Global_262145.f_18917;
	
		case 13:
			return Global_262145.f_18925;
	
		case 15:
			return Global_262145.f_18933;
	
		case 14:
			return Global_262145.f_18941;
	
		case 17:
			return Global_262145.f_18909;
	
		case 16:
			return Global_262145.f_18917;
	
		case 18:
			return Global_262145.f_18925;
	
		case 20:
			return Global_262145.f_18933;
	
		case 19:
			return Global_262145.f_18941;
	
		case 32:
			return Global_262145.f_18949;
	
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
			return Global_262145.f_21531;
	
		default:
		
	}

	return 0;
}

BOOL func_156(int iParam0) // Position - 0x4C10
{
	return iParam0 >= 0 && iParam0 < 7;
}

BOOL func_157(Player plParam0, int iParam1) // Position - 0x4C25
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && func_85(plParam0, func_97(plParam0, iParam1)))
		return Global_1853910[plParam0 /*862*/].f_267.f_193[iParam1 /*13*/].f_6;

	return false;
}

BOOL func_158() // Position - 0x4C62
{
	if (func_159("SH_OT_LEAVE") || func_159("SH_OT_LEAVE2") || func_159("SH_OT_LEAVE3"))
		return true;

	return false;
}

BOOL func_159(char* sParam0) // Position - 0x4C96
{
	if (!func_161())
		return false;

	if (Global_1574757 == 11)
		return func_160(sParam0);

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return false;

	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_12));
}

BOOL func_160(char* sParam0) // Position - 0x4CDA
{
	if (!func_161())
		return false;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return false;

	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574757.f_16));
}

BOOL func_161() // Position - 0x4D0C
{
	if (Global_1574757 == 20)
		return false;

	return true;
}

BOOL _IS_PLAYER_IN_AN_ORGANIZATION(Player plParam0, BOOL bCanBeBoss) // Position - 0x4D22
{
	if (!bCanBeBoss)
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != _INVALID_PLAYER_INDEX();
}

BOOL func_163() // Position - 0x4D4D
{
	if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[0 /*13*/] != 0 || Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[6 /*13*/] != 0 || Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_193[5 /*13*/] != 0)
		return true;

	return false;
}

void func_164() // Position - 0x4DA8
{
	if (func_131(Global_2672505.f_4.f_16) == 309)
	{
		if (!bLocal_6)
		{
			if (!bLocal_5)
			{
				if (!func_167(0) && !Global_2672505.f_4.f_5)
				{
					func_166(0);
					bLocal_5 = true;
				}
			}
			else if (func_167(0) && Global_2672505.f_4.f_5 && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && CAM::IS_SCREEN_FADED_IN())
			{
				func_165(0);
				bLocal_5 = false;
				bLocal_6 = true;
			}
		}
	}
	else
	{
		if (bLocal_5)
		{
			if (func_167(0))
				func_165(0);
		
			bLocal_5 = false;
		}
	
		if (bLocal_6)
			bLocal_6 = false;
	}

	return;
}

void func_165(int iParam0) // Position - 0x4E43
{
	MISC::CLEAR_BIT(&(Global_2793046.f_5225.f_48), iParam0);
	return;
}

void func_166(int iParam0) // Position - 0x4E5A
{
	MISC::SET_BIT(&(Global_2793046.f_5225.f_48), iParam0);
	return;
}

BOOL func_167(int iParam0) // Position - 0x4E71
{
	return IS_BIT_SET(Global_2793046.f_5225.f_48, iParam0);
}

void func_168() // Position - 0x4E85
{
	if (func_171() && func_170() || func_169())
		if (Global_1926703)
			Global_1950107 = 1;

	return;
}

BOOL func_169() // Position - 0x4EB3
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

BOOL func_170() // Position - 0x4EC1
{
	return NETWORK::GET_CLOUD_TIME_AS_INT() < func_19(UNK_88366157, -1, 0);
}

BOOL func_171() // Position - 0x4ED7
{
	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return false;

	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		return false;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -796.55725f, -234.64124f, 35.94032f, -792.6026f, -241.47414f, 39.506424f, 3f, false, true, 1))
		return true;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -792.1209f, -242.4434f, 35.93293f, -789.0962f, -247.52126f, 39.44004f, 3f, false, true, 1))
		return true;

	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -786.5422f, -248.43477f, 35.991272f, -780.42017f, -245.93564f, 39.44004f, 3f, false, true, 1))
		return true;

	return false;
}

BOOL _DOES_ENTITY_EXIST_AND_IS_ALIVE(Vehicle veParam0) // Position - 0x4F92
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;

	return false;
}

void func_173() // Position - 0x4FB3
{
	if (func_131(Global_2672505.f_4.f_16) == 309)
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			PAD::SET_CONTROL_VALUE_NEXT_FRAME(PLAYER_CONTROL, INPUT_VEH_EXIT, -1000f);

	return;
}

void func_174() // Position - 0x4FE1
{
	if (bLocal_140)
		return;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return;

	if (!func_186(-1))
		return;

	if (!func_184(false))
		return;

	if (!bLocal_141)
	{
		if (func_182() && CAM::IS_SCREEN_FADED_IN())
		{
			switch (iLocal_143)
			{
				case 0:
					if (func_179(0))
					{
						bLocal_141 = true;
						iLocal_142 = 0;
					}
					else
					{
						iLocal_143 = iLocal_143 + 1;
					}
					break;
			
				case 1:
					if (func_179(1))
					{
						bLocal_141 = true;
						iLocal_142 = 0;
					}
					else
					{
						bLocal_140 = true;
						iLocal_143 = 0;
					}
					break;
			}
		}
	}
	else
	{
		if (!func_175(0, iLocal_143, &iLocal_142))
			return;
	
		iLocal_142 == 2;
	
		if (iLocal_143 == 0)
		{
			bLocal_141 = false;
			iLocal_142 = 0;
			iLocal_143 = iLocal_143 + 1;
		}
		else
		{
			bLocal_140 = true;
			iLocal_143 = 0;
		}
	}

	return;
}

BOOL func_175(int iParam0, int iParam1, var uParam2) // Position - 0x50A8
{
	if (iParam0 < 0)
	{
		*uParam2 = 3;
		return true;
	}

	if (_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
	{
		if (func_177(uParam2, iParam0, iParam1))
			if (*uParam2 == 2)
				_MPCHAR_STAT_SET_INT(func_176(iParam1), iParam0, -1, true, false);
	
		return *uParam2 != 1 && *uParam2 != 0;
	}
	else
	{
		if (iParam0 != -1)
			_MPCHAR_STAT_SET_INT(func_176(iParam1), iParam0, -1, true, false);
	
		*uParam2 = 2;
		return true;
	}

	return false;
}

eMPStat func_176(int iParam0) // Position - 0x511B
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_TUNER_CLIENT_VEH_MISSION_0;
	
		case 1:
			return MP_STAT_TUNER_CLIENT_VEH_MISSION_1;
	
		default:
		
	}

	return MP_STAT_INVALID;
}

BOOL func_177(var uParam0, int iParam1, int iParam2) // Position - 0x5145
{
	Hash hash;

	if (*uParam0 != 0 && *uParam0 != 1)
		*uParam0 = 0;

	switch (*uParam0)
	{
		case 0:
			if (func_65() != -1)
			{
				return false;
			}
			else
			{
				hash = func_178(iParam2);
			
				if (func_60(78225582, joaat("CATEGORY_CONTRABAND_QNTY"), hash, -886368739, iParam1, 0, 1, 4, 0, 3))
					*uParam0 = 1;
				else
					*uParam0 = 3;
			
				if (*uParam0 == 1 && func_54())
				{
				}
				else
				{
					*uParam0 = 3;
					func_50(func_65());
				}
			}
			break;
	
		case 1:
			if (func_65() == -1)
			{
				*uParam0 = 3;
			}
			else if (func_49(func_65()))
			{
				if (func_48(func_65()) == 2)
				{
					*uParam0 = 2;
					func_50(func_65());
				}
				else
				{
					*uParam0 = 3;
					func_50(func_65());
				}
			}
			break;
	}

	return *uParam0 != 1 && *uParam0 != 0;
}

Hash func_178(int iParam0) // Position - 0x522E
{
	var unk;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_TUNER_CLIENT_VEHICLE_0_v0", 64);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_TUNER_CLIENT_VEHICLE_1_v0", 64);
			break;
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return -1;

	return MISC::GET_HASH_KEY(&unk);
}

BOOL func_179(int iParam0) // Position - 0x5272
{
	int num;

	num = 0;

	if (iParam0 == 0)
	{
		num = func_19(MP_STAT_MPSV_MODEL_TUNER_VEH1, -1, 0);
	}
	else
	{
		if (!func_181(PLAYER::PLAYER_ID()))
			return false;
	
		num = func_19(MP_STAT_MPSV_MODEL_TUNER_VEH2, -1, 0);
	}

	if (func_19(func_176(iParam0), -1, 0) != 0 && func_19(func_180(iParam0), -1, 0) == 0 && !IS_BIT_SET(Global_2766158[iParam0 /*106*/].f_105, 2) && num == 0)
		return true;

	return false;
}

eMPStat func_180(int iParam0) // Position - 0x52F0
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_TUNER_CLIENT_MOD_PURCHASE_0;
	
		case 1:
			return MP_STAT_TUNER_CLIENT_MOD_PURCHASE_1;
	
		default:
		
	}

	return MP_STAT_INVALID;
}

BOOL func_181(Player plParam0) // Position - 0x531A
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_485.f_2, 29);

	return false;
}

BOOL func_182() // Position - 0x5343
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_183()) > 0 && Global_1574666 == 2)
		return true;

	return false;
}

Hash func_183() // Position - 0x5368
{
	switch (Global_2697021)
	{
		case 0:
			return joaat("freemode");
	
		default:
		
	}

	return joaat("freemode");
}

BOOL func_184(BOOL bParam0) // Position - 0x538C
{
	if (bParam0)
		return IS_BIT_SET(func_19(MP_STAT_TUNER_GEN_BS, -1, 0), 0);

	return func_185(PLAYER::PLAYER_ID());
}

BOOL func_185(Player plParam0) // Position - 0x53AF
{
	if (plParam0 == PLAYER::PLAYER_ID())
		return IS_BIT_SET(func_19(MP_STAT_TUNER_GEN_BS, -1, 0), 0);

	if (plParam0 != -1)
		return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_1, 0);

	return false;
}

BOOL func_186(int iParam0) // Position - 0x53E4
{
	if (iParam0 == -1)
		iParam0 = func_17(iParam0);

	return func_19(MP_STAT_AUTO_SHOP_OWNED, iParam0, 0) != 0;
}

void func_187() // Position - 0x5406
{
	BOOL flag;

	if (iLocal_26 == 1 && func_198() || func_197())
	{
		flag = false;
	
		if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false) && !IS_BIT_SET(Global_1950108, 27))
			flag = true;
	
		if (!flag && !func_194())
			flag = true;
	
		if (!flag)
			if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_IN() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_193(PLAYER::PLAYER_ID()))
				if (!func_192(PLAYER::PLAYER_ID()) && !IS_BIT_SET(Global_1950108, 27))
					flag = true;
	
		if (flag)
		{
			Global_1950091 = 0;
			func_190();
			func_188();
		}
	}

	return;
}

void func_188() // Position - 0x54CE
{
	func_189(-1);
	return;
}

void func_189(int iParam0) // Position - 0x54DB
{
	if (iParam0 != -1)
		Global_1950108.f_4610.f_1 = iParam0;
	else
		Global_1950108.f_4610.f_1 = -1;

	return;
}

void func_190() // Position - 0x5501
{
	func_191(-1);
	return;
}

void func_191(int iParam0) // Position - 0x550E
{
	if (iParam0 != -1)
		Global_1950108.f_4610 = iParam0;
	else
		Global_1950108.f_4610 = -1;

	return;
}

BOOL func_192(Player plParam0) // Position - 0x5530
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_321, 3);

	return false;
}

BOOL func_193(Player plParam0) // Position - 0x5561
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;
		else if (Global_1575060 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;

	return false;
}

BOOL func_194() // Position - 0x55C7
{
	if (func_195() == 0)
		return true;

	return false;
}

int func_195() // Position - 0x55DC
{
	return Global_1574632.f_18;
}

BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x55EA
{
	Player player;

	player = player;

	if (player != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(player))
		{
			if (bIsPlaying)
				if (!PLAYER::IS_PLAYER_PLAYING(player))
					return false;
		
			if (bUnk)
				if (player == Global_2672505.f_3)
					return Global_2672505.f_2;
				else if (Global_2657589[player /*466*/] != 4)
					return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_197() // Position - 0x564A
{
	return Global_1950108.f_4610.f_1 != -1;
}

BOOL func_198() // Position - 0x565D
{
	return Global_1950108.f_4610 != -1;
}

void func_199() // Position - 0x566E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_131(PLAYER::PLAYER_ID()) == 164 && func_200(PLAYER::PLAYER_ID()))
		return;

	if (Global_100733.f_324[58] < 20f && Global_2672505.f_2514[0 /*80*/].f_1 == 1)
	{
		if (!IS_BIT_SET(Global_100733.f_1407[58], 8))
		{
			MISC::SET_BIT(&Global_100733.f_1407[58], 8);
			bLocal_139 = true;
		}
	}
	else if (bLocal_139)
	{
		bLocal_139 = false;
	
		if (IS_BIT_SET(Global_100733.f_1407[58], 8))
			MISC::CLEAR_BIT(&Global_100733.f_1407[58], 8);
	}

	return;
}

BOOL func_200(Player plParam0) // Position - 0x5718
{
	if (_IS_PLAYER_BOSS_OF_ORGANIZATION(plParam0))
		if (func_201(plParam0))
			return true;

	return false;
}

BOOL func_201(Player plParam0) // Position - 0x5737
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_111(plParam0, 9);

	return false;
}

void func_202() // Position - 0x5755
{
	if (!func_209(PLAYER::PLAYER_ID()))
		return;

	if (!bLocal_138)
	{
		if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && !Global_1935176 && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !(Global_4521801.f_910 == 1) && !func_169() && func_205(PLAYER::PLAYER_PED_ID(), -1352.4502f, 146.7562f, -99.6944f, 50f) && func_23(PLAYER::PLAYER_PED_ID(), -1352.4502f, 146.7562f, -99.6944f, 1f) && !func_204() && !Global_262145.f_26641)
			if (func_203() || PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CONTEXT))
				bLocal_138 = true;
	}
	else if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) || Global_4521801.f_910 == 1 || func_169() || !func_205(PLAYER::PLAYER_PED_ID(), -1352.4502f, 146.7562f, -99.6944f, 50f) || !func_23(PLAYER::PLAYER_PED_ID(), -1352.4502f, 146.7562f, -99.6944f, 1f) || Global_262145.f_26641)
	{
		if (!Global_1935176)
		{
			Global_1935176 = true;
		}
		else if (!func_203())
		{
			Global_1935176 = false;
			bLocal_138 = false;
		}
	}

	return;
}

BOOL func_203() // Position - 0x58C1
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

BOOL func_204() // Position - 0x58D6
{
	if (Global_2672505.f_947.f_5 == -1)
		return false;

	return true;
}

BOOL func_205(Ped pedParam0, float fParam1, float fParam2, float fParam3, float fParam4) // Position - 0x58F0
{
	return func_206(ENTITY::GET_ENTITY_COORDS(pedParam0, true), ENTITY::GET_ENTITY_HEADING(pedParam0), fParam1, fParam4);
}

BOOL func_206(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x590F
{
	var offsetFromCoordAndHeadingInWorldCoords;
	float num;

	offsetFromCoordAndHeadingInWorldCoords = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(0f, 0f, 0f, fParam3, 0f, 1f, 0f) };
	num = func_207(func_208(offsetFromCoordAndHeadingInWorldCoords), func_208(uParam4 - uParam0));
	return MISC::ACOS(num) <= fParam7;
}

float func_207(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Position - 0x594B
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_208(float fParam0, var uParam1, var uParam2) // Position - 0x596C
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

BOOL func_209(Player plParam0) // Position - 0x59AB
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_210(Global_2657589[plParam0 /*466*/].f_321.f_7) == 22;

	return false;
}

int func_210(int iParam0) // Position - 0x59F2
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

void func_211() // Position - 0x5EA6
{
	var unk;
	var unk5;
	var unk9;

	if (Global_2766490 || _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_194() && !bLocal_137)
	{
		bLocal_137 = true;
		TEXT_LABEL_ASSIGN_STRING(&unk, "&#166;", 16);
		TEXT_LABEL_ASSIGN_STRING(&unk5, "&#8249;", 16);
	
		if (_IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID()))
		{
			unk9 = { func_232() };
		
			if (func_231(&unk9, unk) || func_231(&unk9, unk5))
			{
				if (func_148(PLAYER::PLAYER_ID()))
					func_218(&unk9, 0, true);
				else
					func_218(&unk9, 1, true);
			
				func_217();
			}
		}
	
		if (func_216(PLAYER::PLAYER_ID()))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk9, func_215(PLAYER::PLAYER_ID()), 64);
		
			if (func_231(&unk9, unk) || func_231(&unk9, unk5))
				func_212(unk9);
		}
	}

	return;
}

void func_212(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Position - 0x5F79
{
	func_213(55, 56, &uParam0, -1, true);
	Global_1914091[PLAYER::PLAYER_ID() /*297*/].f_281 = { uParam0 };
	return;
}

void func_213(int iParam0, int iParam1, const char* sParam2, int iParam3, BOOL bParam4) // Position - 0x5FA2
{
	Hash statName;
	Hash statName2;
	var value;
	var value2;
	int lengthOfLiteralString;
	int length;

	if (func_214())
	{
		statName = Global_2849801[iParam0 /*3*/][func_17(iParam3)];
		statName2 = Global_2849801[iParam1 /*3*/][func_17(iParam3)];
	
		if (statName != 0 && statName2 != 0)
		{
			TEXT_LABEL_ASSIGN_STRING(&value, "", 32);
			TEXT_LABEL_ASSIGN_STRING(&value2, "", 32);
			lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam2);
		
			if (lengthOfLiteralString > 0)
			{
				length = 10;
			
				if (lengthOfLiteralString < 10)
					length = lengthOfLiteralString;
			
				TEXT_LABEL_ASSIGN_STRING(&value, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 0, length, 31), 32);
			
				if (lengthOfLiteralString > 10)
					TEXT_LABEL_ASSIGN_STRING(&value2, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(sParam2, 10, lengthOfLiteralString, 31), 32);
			}
		
			STATS::STAT_SET_STRING(statName, &value, bParam4);
			STATS::STAT_SET_STRING(statName2, &value2, bParam4);
		}
	}

	return;
}

BOOL func_214() // Position - 0x604C
{
	return true;
}

const char* func_215(Player plParam0) // Position - 0x6059
{
	const char* filenameForAudioConversation;
	Player player;

	filenameForAudioConversation = HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("DEFAULT_LAB_N");

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return filenameForAudioConversation;

	if (plParam0 == PLAYER::PLAYER_ID())
	{
		filenameForAudioConversation = func_112(&(Global_1914091[plParam0 /*297*/].f_281));
		return filenameForAudioConversation;
	}

	if (Global_1894573[plParam0 /*608*/].f_10.f_121 != Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121)
		return filenameForAudioConversation;

	if (func_111(plParam0, 28) || func_111(PLAYER::PLAYER_ID(), 28) && !func_109(plParam0))
		return filenameForAudioConversation;

	player = func_108(plParam0);

	if (player != _INVALID_PLAYER_INDEX())
		if (player != PLAYER::PLAYER_ID())
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
				return filenameForAudioConversation;

	if (player != _INVALID_PLAYER_INDEX())
	{
		filenameForAudioConversation = func_112(&(Global_1914091[player /*297*/].f_281));
	
		if (MISC::IS_STRING_NULL_OR_EMPTY(filenameForAudioConversation))
			return filenameForAudioConversation;
		else
			return filenameForAudioConversation;
	}

	return filenameForAudioConversation;
}

BOOL func_216(Player plParam0) // Position - 0x6150
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_478, 14);
}

void func_217() // Position - 0x6177
{
	int i;
	struct<2> eventData;

	eventData = -1548744127;
	eventData.f_1 = PLAYER::PLAYER_ID();

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[i] != _INVALID_PLAYER_INDEX())
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[i]))
				SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 2, _GET_PLAYER_SCRIPT_EVENT_BITS(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_11[i]));
	}

	return;
}

void func_218(const char* sParam0, int iParam1, BOOL bParam2) // Position - 0x61F9
{
	if (bParam2)
	{
		if (func_228(true) || iParam1 == 0)
		{
			func_213(47, 48, sParam0, -1, true);
		
			if (func_227() && iParam1 == 0)
				func_226(sParam0, bParam2);
		}
		else
		{
			func_213(65, 67, sParam0, -1, true);
		
			if (func_225() && iParam1 == 1)
				func_223(sParam0, bParam2);
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_105), sParam0, 64);
	Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_121 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_LANGUAGE();

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_221())
		func_220(28);
	else
		func_219(28);

	return;
}

void func_219(int iParam0) // Position - 0x62B4
{
	MISC::SET_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
	return;
}

void func_220(int iParam0) // Position - 0x62D1
{
	MISC::CLEAR_BIT(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_4), iParam0);
	return;
}

BOOL func_221() // Position - 0x62EE
{
	if (NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() == false)
		return false;

	if (IS_PLAYSTATION_PLATFORM())
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;
	else if (IS_XBOX_PLATFORM())
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
			return true;
	else if (MISC::IS_PC_VERSION())
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
				return true;

	return false;
}

BOOL IS_PLAYSTATION_PLATFORM() // Position - 0x6355
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

void func_223(const char* sParam0, BOOL bParam1) // Position - 0x636B
{
	var unk;

	if (bParam1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			func_213(45, 46, sParam0, -1, true);
			unk = { func_224(65, 67, -1) };
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
				func_213(65, 67, sParam0, -1, true);
		}
	}

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_221())
		func_220(28);
	else
		func_219(28);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		TEXT_LABEL_ASSIGN_STRING(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_338), sParam0, 64);

	return;
}

struct<16> func_224(int iParam0, int iParam1, int iParam2) // Position - 0x63F9
{
	Hash statHash;
	Hash statHash2;
	var unk;
	var unk17;

	statHash = Global_2849801[iParam0 /*3*/][func_17(iParam2)];
	statHash2 = Global_2849801[iParam1 /*3*/][func_17(iParam2)];
	TEXT_LABEL_ASSIGN_STRING(&unk, STATS::STAT_GET_STRING(statHash, -1), 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, STATS::STAT_GET_STRING(statHash2, -1), 32);
	TEXT_LABEL_APPEND_STRING(&unk, &unk17, 64);
	return unk;
}

BOOL func_225() // Position - 0x6446
{
	return _IS_PLAYER_BOSS_OF_ORGANIZATION(PLAYER::PLAYER_ID());
}

void func_226(const char* sParam0, BOOL bParam1) // Position - 0x6456
{
	if (bParam1)
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
			func_213(49, 50, sParam0, -1, true);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		TEXT_LABEL_ASSIGN_STRING(&(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_354), sParam0, 64);

	if (!IS_XBOX_PLATFORM() && NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || func_221())
		func_220(28);
	else
		func_219(28);

	return;
}

BOOL func_227() // Position - 0x64C3
{
	return func_148(PLAYER::PLAYER_ID());
}

BOOL func_228(BOOL bParam0) // Position - 0x64D3
{
	return func_229(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_229(Player plParam0, BOOL bParam1) // Position - 0x64E5
{
	return func_230(plParam0, bParam1, 1);
}

BOOL func_230(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x64F6
{
	Player player;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (!bParam1)
		if (func_149(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != _INVALID_PLAYER_INDEX() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

int func_231(const char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4) // Position - 0x6552
{
	int num;
	int length;
	int position;
	Hash hashKey;
	int lengthOfLiteralString;
	int lengthOfLiteralString2;
	int i;
	var unk;

	num = 0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		hashKey = MISC::GET_HASH_KEY(&uParam1);
		lengthOfLiteralString = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
		lengthOfLiteralString2 = HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam1);
	
		for (i = 0; i <= lengthOfLiteralString - 1; i = i + 1)
		{
			if (i + lengthOfLiteralString2 > lengthOfLiteralString)
			{
				return 0;
			}
			else if (MISC::GET_HASH_KEY(HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, i, i + lengthOfLiteralString2)) == hashKey)
			{
				length = i;
				position = i + lengthOfLiteralString2;
				num = 1;
				break;
			}
		}
	
		if (i != 0)
			TEXT_LABEL_APPEND_STRING(&unk, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, 0, length), 64);
	
		if (i != lengthOfLiteralString - lengthOfLiteralString2)
			TEXT_LABEL_APPEND_STRING(&unk, HUD::GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(sParam0, position, HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0)), 64);
	
		*sParam0 = { unk };
	}

	return num;
}

struct<16> func_232() // Position - 0x6607
{
	Player player;
	var unk;

	player = func_108(PLAYER::PLAYER_ID());

	if (player != _INVALID_PLAYER_INDEX())
	{
		if (player != PLAYER::PLAYER_ID())
		{
			if (func_111(player, 28) || func_111(PLAYER::PLAYER_ID(), 28) || func_235(player) && !func_109(player))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, func_233(player, false), 64);
				return unk;
			}
		
			if (!IS_XBOX_PLATFORM() && !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, func_233(player, false), 64);
				return unk;
			}
		}
	
		return Global_1894573[player /*608*/].f_10.f_105;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	return unk;
}

const char* func_233(Player plParam0, BOOL bParam1) // Position - 0x66B8
{
	if (!bParam1)
		if (func_229(plParam0, true))
			return func_234();

	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACC" /*An Organization*/);
}

const char* func_234() // Position - 0x66DF
{
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("GB_REST_ACCM" /*Motorcycle Club*/);
}

BOOL func_235(Player plParam0) // Position - 0x66EF
{
	var gamerHandle;

	if (plParam0 != _INVALID_PLAYER_INDEX())
	{
		gamerHandle = { GET_GAMER_HANDLE_PLAYER(plParam0) };
	
		if (MISC::IS_ORBIS_VERSION() && !MISC::IS_PROSPERO_VERSION() || MISC::IS_PC_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				return false;
		else if (IS_XBOX_PLATFORM() || MISC::IS_PROSPERO_VERSION())
			if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(0))
				if (NETWORK::NETWORK_CAN_VIEW_GAMER_USER_CONTENT(&gamerHandle))
					return false;
	}

	return true;
}

void func_236() // Position - 0x675C
{
	func_238(&uLocal_118);

	if (Global_1935690.f_12 != 4)
		func_237(&uLocal_118, 0);

	if (Global_2650102.f_192 != 6)
		func_237(&uLocal_118, 1);

	if (Global_2648605.f_1236 != 32)
		func_237(&uLocal_118, 2);

	if (Global_2648605.f_1399 != 32)
		func_237(&uLocal_118, 3);

	return;
}

void func_237(var uParam0, int iParam1) // Position - 0x67B2
{
	if (uParam0->f_4[iParam1] == 0)
		uParam0->f_4[iParam1] = 1;

	return;
}

void func_238(int* piParam0) // Position - 0x67D2
{
	switch (piParam0->f_3)
	{
		case 0:
			piParam0->f_2 = func_241(piParam0);
		
			if (piParam0->f_2 != 4)
				piParam0->f_3 = 2;
			break;
	
		case 2:
			if (NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(piParam0, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), func_240(piParam0->f_2), -50712147, 0, 1))
			{
				if (NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(*piParam0))
				{
					piParam0->f_3 = 1;
					piParam0->f_4[piParam0->f_2] = 2;
				}
			}
			break;
	
		case 1:
			func_239(piParam0);
		
			if (piParam0->f_1 && NETSHOPPING::NET_GAMESERVER_END_SERVICE(*piParam0))
			{
				*piParam0 = -1;
				piParam0->f_3 = 0;
				piParam0->f_4[piParam0->f_2] = 3;
				piParam0->f_2 = 4;
			}
			break;
	}

	return;
}

void func_239(int* piParam0) // Position - 0x6881
{
	int i;
	struct<7> eventData;

	if (*piParam0 == -1 || piParam0->f_1)
		return;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i) == EVENT_NETWORK_SHOP_TRANSACTION)
			if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 7))
				if (eventData == *piParam0 && eventData != -1)
					piParam0->f_1 = 1;
	}

	return;
}

Hash func_240(int iParam0) // Position - 0x68E4
{
	Hash num;

	switch (iParam0)
	{
		case 0:
			num = -1807935122;
			break;
	
		case 1:
			num = 2026037878;
			break;
	
		case 2:
			num = 1794983659;
			break;
	
		case 3:
			num = 612415999;
			break;
	}

	return num;
}

int func_241(int* piParam0) // Position - 0x6935
{
	int i;

	for (i = 0; i < 4; i = i + 1)
	{
		if (piParam0->f_4[i] == 1)
			return i;
	}

	return 4;
}

void func_242() // Position - 0x6961
{
	int num;
	Hash entityModel;
	int num2;

	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
		return;

	if (!_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM())
		return;

	if (!func_186(-1))
		return;

	if (!func_184(false))
		return;

	num = Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_485.f_4;

	if (num != 0 && num != 1)
		return;

	if (!bLocal_133)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_content_auto_shop_delivery")) > 0)
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == -1)
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
					num2 = func_243(entityModel);
				
					if (num2 != func_19(func_176(num), -1, 0))
					{
						bLocal_133 = true;
						hLocal_135 = entityModel;
						iLocal_136 = 0;
					}
				}
			}
		}
	}
	else if (!bLocal_134)
	{
		if (!func_175(0, num, &iLocal_136))
			return;
	
		iLocal_136 == 2;
		bLocal_134 = true;
		iLocal_136 = 0;
		return;
	}
	else
	{
		if (!func_175(func_243(hLocal_135), num, &iLocal_136))
			return;
	
		iLocal_136 == 2;
		iLocal_136 = 0;
		bLocal_133 = false;
		hLocal_135 = 0;
		bLocal_134 = false;
	}

	return;
}

int func_243(Hash hParam0) // Position - 0x6A86
{
	switch (hParam0)
	{
		case joaat("weevil"):
			return 1;
	
		case joaat("brioso2"):
			return 2;
	
		case joaat("rhapsody"):
			return 3;
	
		case joaat("club"):
			return 4;
	
		case joaat("issi3"):
			return 5;
	
		case joaat("nebula"):
			return 6;
	
		case joaat("dynasty"):
			return 7;
	
		case joaat("fagaloa"):
			return 8;
	
		case joaat("futo"):
			return 9;
	
		case joaat("asbo"):
			return 10;
	
		case joaat("sentinel"):
			return 11;
	
		case joaat("dominator3"):
			return 12;
	
		case joaat("vamos"):
			return 13;
	
		case joaat("hermes"):
			return 14;
	
		case joaat("coquette3"):
			return 15;
	
		case joaat("riata"):
			return 16;
	
		case joaat("everon"):
			return 17;
	
		case joaat("glendale2"):
			return 18;
	
		case joaat("schafter3"):
			return 19;
	
		case joaat("warrener"):
			return 20;
	
		case joaat("primo2"):
			return 21;
	
		case joaat("seminole2"):
			return 22;
	
		case joaat("rebla"):
			return 23;
	
		case joaat("swinger"):
			return 24;
	
		case joaat("flashgt"):
			return 25;
	
		case joaat("raiden"):
			return 26;
	
		case joaat("surano"):
			return 27;
	
		case joaat("penumbra2"):
			return 28;
	
		case joaat("vstr"):
			return 29;
	
		case joaat("jugular"):
			return 30;
	
		case joaat("toros"):
			return 31;
	
		case joaat("entity2"):
			return 32;
	
		case joaat("tempesta"):
			return 33;
	
		case joaat("thrax"):
			return 34;
	
		case joaat("sc1"):
			return 35;
	
		case joaat("gp1"):
			return 36;
	
		case joaat("cheetah2"):
			return 37;
	
		case joaat("neo"):
			return 38;
	
		case joaat("comet2"):
			return 39;
	
		case joaat("paragon"):
			return 40;
	
		default:
		
	}

	return 0;
}

int _GET_VEHICLE_SEAT_PED_IS_IN(Ped ped, BOOL includeLastVehicle) // Position - 0x6C47
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(ped))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(ped, includeLastVehicle))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(ped, includeLastVehicle);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == ped)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

void func_245() // Position - 0x6CCC
{
	BOOL flag;
	var unk;

	if (iLocal_128 > 2 || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !_NETSHOPPING_SHOULD_USE_TRANSACTION_SYSTEM() || !func_370(PLAYER::PLAYER_ID()))
		return;

	if (!bLocal_129 && func_369(-1))
	{
		iLocal_128 = 3;
		return;
	}

	flag = false;

	if (func_368(PLAYER::PLAYER_ID()) && !func_369(-1))
		flag = true;

	if (!flag)
		return;

	if (!bLocal_129)
	{
		if (!func_194() || func_369(-1) || Global_2793046.f_996)
			return;
	
		if (NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			_STOPWATCH_RESET(&uLocal_130, false, false);
			return;
		}
		else if (NETSHOPPING::NET_GAMESERVER_TRANSACTION_IN_PROGRESS())
		{
			_STOPWATCH_RESET(&uLocal_130, false, false);
			return;
		}
		else if (_STOPWATCH_IS_INITIALIZED(&uLocal_130))
		{
			if (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_130, 5000, false))
				return;
		
			_STOPWATCH_DESTROY(&uLocal_130);
		}
	
		if (Global_75693 || func_367() || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return;
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && func_366())
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 568.6935f, -438.6235f, -70.647f) < 4f)
				return;
	
		iLocal_128 = 0;
		bLocal_129 = true;
	}
	else
	{
		unk.f_9 = 49;
		unk.f_59 = 2;
		unk.f_78 = -1;
		unk.f_79 = -1;
		unk.f_96 = -1;
		unk.f_97 = 1;
		unk.f_99 = 132;
		unk.f_100 = -1;
	
		switch (iLocal_128)
		{
			case 0:
			case 1:
				if (iLocal_128 == 0)
				{
					func_365(&unk);
					unk.f_66 = -1576586413;
				}
				else
				{
					func_364(&unk);
					unk.f_66 = 1384502824;
				}
			
				if (!ENTITY::DOES_ENTITY_EXIST(veLocal_127))
				{
					if (!func_335(&unk, &veLocal_127))
					{
					}
				}
				else if (func_286(&iLocal_132, veLocal_127))
				{
					if (iLocal_132 == 2)
					{
						func_50(func_65());
						iLocal_132 = 0;
					
						if (iLocal_128 == 0)
							func_256(veLocal_127, 413, true, true, false, true, true, false, false, -1, 0);
						else
							func_256(veLocal_127, 414, true, true, false, true, true, false, false, -1, 0);
					
						iLocal_128 = iLocal_128 + 1;
						VEHICLE::DELETE_VEHICLE(&veLocal_127);
					}
					else
					{
						func_50(func_65());
						iLocal_128 = 0;
						iLocal_132 = 0;
						bLocal_129 = false;
						VEHICLE::DELETE_VEHICLE(&veLocal_127);
					}
				}
				break;
		
			case 2:
				func_251(413, 413, -1);
				func_251(414, 414, -1);
				func_250(true);
				func_249(true);
				func_246(-835426960, 10, false);
				_STOPWATCH_DESTROY(&uLocal_130);
				iLocal_128 = iLocal_128 + 1;
				break;
		}
	}

	return;
}

void func_246(int iParam0, int iParam1, BOOL bParam2) // Position - 0x6F58
{
	int num;

	if (func_248(iParam1, bParam2))
	{
		num = func_247();
		Global_2694420[num] = iParam1;
		Global_2694431[num] = iParam0;
	}

	return;
}

int func_247() // Position - 0x6F85
{
	int num;
	int i;

	num = 9;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (Global_2694420[i] == 0)
		{
			num = i;
			i = 10;
		}
	}

	return num;
}

BOOL func_248(int iParam0, BOOL bParam1) // Position - 0x6FBA
{
	if (Global_1575048)
		return false;

	if (iParam0 == 22)
		return true;

	if (bParam1 || !Global_1575060 || iParam0 == 3 || iParam0 == 10 || iParam0 == 11 || iParam0 == 27 || iParam0 == 28 || iParam0 == 29 || iParam0 == 30)
		return true;
	else
		return false;

	return true;
}

void func_249(BOOL bParam0) // Position - 0x7040
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 6))
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 6);
	else if (IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 6))
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 6);

	return;
}

void func_250(BOOL bParam0) // Position - 0x7099
{
	if (bParam0)
		if (!IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 5))
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 5);
	else if (IS_BIT_SET(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201, 5))
		MISC::CLEAR_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_201), 5);

	return;
}

void func_251(int iParam0, int iParam1, int iParam2) // Position - 0x70F2
{
	if (iParam0 < 0)
		return;

	iParam1 = iParam1 + 1;
	func_252(iParam0, iParam1, iParam2);

	if (iParam0 >= 415)
		return;

	if (iParam2 == func_18() || iParam2 == -1)
		Global_1944416[iParam0] = iParam1;

	return;
}

void func_252(int iParam0, int iParam1, int iParam2) // Position - 0x713C
{
	if (iParam1 <= 255)
	{
		func_254(func_255(iParam0), iParam1, iParam2);
		func_254(func_253(iParam0), 0, iParam2);
	}
	else
	{
		func_254(func_255(iParam0), 255, iParam2);
		func_254(func_253(iParam0), iParam1 - 255, iParam2);
	}

	return;
}

int func_253(int iParam0) // Position - 0x7188
{
	if (iParam0 < 261)
		return 24625 + iParam0;
	else if (iParam0 < 271)
		return (26349 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28069 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30200 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31548 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34096 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36594 + iParam0) - 337;
	else if (iParam0 < 415)
		return (41160 + iParam0) - 363;

	return 24625 + iParam0;
}

void func_254(int iParam0, int iParam1, int iParam2) // Position - 0x7252
{
	if (iParam2 == -1)
		iParam2 = func_18();

	if (iParam1 < 0)
		iParam1 = 255;

	STATS::SET_PACKED_STAT_INT_CODE(iParam0, iParam1, iParam2);
	return;
}

int func_255(int iParam0) // Position - 0x727A
{
	if (iParam0 < 158)
		if (iParam0 <= 38)
			return 4036 + iParam0;
		else if (iParam0 <= 48)
			return (5905 + iParam0) - 39;
		else if (iParam0 <= 51)
			return (6025 + iParam0) - 49;
		else if (iParam0 <= 64)
			return (7199 + iParam0) - 52;
		else if (iParam0 <= 87)
			return (9207 + iParam0) - 65;
		else
			return (14734 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15356;
	else if (iParam0 < 261)
		if (iParam0 < 184)
			return (17911 + iParam0) - 159;
		else if (iParam0 < 194)
			return (18903 + iParam0) - 184;
		else if (iParam0 < 231)
			return (21757 + iParam0) - 194;
		else
			return (24595 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26339 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28059 + iParam0) - 271;
	else if (iParam0 < 307)
		return (30174 + iParam0) - 281;
	else if (iParam0 < 317)
		return (31538 + iParam0) - 307;
	else if (iParam0 < 337)
		return (34076 + iParam0) - 317;
	else if (iParam0 < 363)
		return (36568 + iParam0) - 337;
	else if (iParam0 < 415)
		return (41108 + iParam0) - 363;

	return 4036 + iParam0;
}

void func_256(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0x741A
{
	int int;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_284();
	
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) != 0)
			VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 9);
			func_282();
			func_281(iParam1, true);
			Global_1956097 = 1;
		}
	
		func_271(veParam0, &Global_1586468[iParam1 /*142*/], bParam5);
		Global_1586468[iParam1 /*142*/].f_70 = 1;
	
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 7);
		}
	
		if (bParam3)
			MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 0);
		else
			MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 0);
	
		if (bParam4)
			func_270(iParam1);
	
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
		}
	
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 27);
					break;
			
				case 1:
					MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 28);
					break;
			}
		}
	
		if (bParam8)
			MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 13);
	
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
			{
				int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				if (IS_BIT_SET(int, 3))
					MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 2);
			}
		}
	
		if (VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
		{
			func_269(&veParam0, &(Global_1586468[iParam1 /*142*/].f_9), &(Global_1586468[iParam1 /*142*/].f_59));
		
			if (func_268(iParam1, &unk))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == veParam0)
					Global_2359296[func_74() /*5568*/].f_593.f_86 = iParam1 + 1;
			
				MISC::SET_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1586468[iParam1 /*142*/].f_103), 26);
			}
		}
	
		Global_2359296[func_74() /*5568*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_257(iParam1, &Global_1586468[iParam1 /*142*/], false, iParam9, false, false);
	}

	return;
}

int func_257(int iParam0, var uParam1, BOOL bParam2, int iParam3, BOOL bParam4, BOOL bParam5) // Position - 0x7674
{
	int i;
	int num;
	int cloudTimeAsInt;

	if (bParam2)
	{
		!bParam4;
		Global_2359296[func_74() /*5568*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}

	!bParam4;
	num = func_267(1411, iParam0);
	func_254(num, uParam1->f_138, iParam3);
	!bParam4;
	num = func_267(1412, iParam0);
	func_254(num, uParam1->f_139, iParam3);
	!bParam4;
	num = func_267(1413, iParam0);
	func_254(num, *uParam1, iParam3);
	!bParam4;

	for (i = 0; i < 49; i = i + 1)
	{
		if (i < 25)
		{
			num = func_267(1414, iParam0) + i;
			func_254(num, uParam1->f_9[i], iParam3);
		}
		else
		{
			num = func_266(iParam0) + (i - 25);
			func_254(num, uParam1->f_9[i], iParam3);
		}
	}

	i = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		num = func_267(1439, iParam0) + i;
		func_254(num, uParam1->f_59[i], iParam3);
	}

	num = func_267(1441, iParam0);
	func_254(num, uParam1->f_62, iParam3);
	!bParam4;
	num = func_267(1442, iParam0);
	func_254(num, uParam1->f_63, iParam3);
	!bParam4;
	num = func_267(1443, iParam0);
	func_254(num, uParam1->f_64, iParam3);
	!bParam4;
	num = func_267(1444, iParam0);
	func_254(num, uParam1->f_65, iParam3);
	!bParam4;
	num = func_267(1445, iParam0);
	func_254(num, uParam1->f_67, iParam3);
	num = func_267(1446, iParam0);
	func_254(num, uParam1->f_68, iParam3);
	num = func_267(1447, iParam0);
	func_254(num, uParam1->f_69, iParam3);
	!bParam4;
	num = func_267(1448, iParam0);
	func_254(num, uParam1->f_70, -1);
	num = func_267(1449, iParam0);
	func_254(num, uParam1->f_71, iParam3);
	num = func_267(1450, iParam0);
	func_254(num, uParam1->f_72, iParam3);
	num = func_267(1451, iParam0);
	func_254(num, uParam1->f_73, iParam3);
	num = func_267(1452, iParam0);
	func_254(num, uParam1->f_5, iParam3);
	num = func_267(1453, iParam0);
	func_254(num, uParam1->f_6, iParam3);
	num = func_267(1454, iParam0);
	func_254(num, uParam1->f_7, iParam3);
	num = func_267(1455, iParam0);
	func_254(num, uParam1->f_8, iParam3);
	num = func_267(3880, iParam0);
	func_254(num, uParam1->f_74, iParam3);
	num = func_267(3881, iParam0);
	func_254(num, uParam1->f_75, iParam3);
	num = func_267(3882, iParam0);
	func_254(num, uParam1->f_76, iParam3);
	num = func_265(iParam0);
	func_254(num, uParam1->f_97, iParam3);
	num = func_264(iParam0);
	func_254(num, uParam1->f_99, iParam3);
	num = func_263(iParam0);
	func_254(num, uParam1->f_98, iParam3);
	num = func_260(iParam0, false);
	func_254(num, uParam1->f_102, iParam3);
	cloudTimeAsInt = Global_2359296[func_74() /*5568*/].f_681.f_1275;

	if (bParam5)
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	_MPCHAR_STAT_SET_INT(MP_STAT_MPSV_VEHICLE_TIMESTAMP, cloudTimeAsInt, iParam3, true, false);
	!bParam4;
	_MPCHAR_STAT_SET_INT(func_259(1, iParam0), uParam1->f_103, iParam3, true, false);
	!bParam4;
	_MPCHAR_STAT_SET_INT(func_259(2, iParam0), uParam1->f_104, iParam3, true, false);
	!bParam4;
	_MPCHAR_STAT_SET_INT(func_259(3, iParam0), uParam1->f_105, iParam3, true, false);
	!bParam4;
	_MPCHAR_STAT_SET_INT(func_259(4, iParam0), uParam1->f_66, iParam3, true, false);
	_MPCHAR_STAT_SET_INT(func_259(5, iParam0), uParam1->f_77, iParam3, true, false);
	!bParam4;
	_MPCHAR_STAT_SET_INT(func_259(7, iParam0), uParam1->f_140, iParam3, true, false);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
	{
		func_258(func_259(6, iParam0), &(uParam1->f_1), iParam3);
		!bParam4;
	}
	else
	{
		!bParam4;
	}

	!bParam4;
	return 1;
}

void func_258(eMPStat empsParam0, const char* sParam1, int iParam2) // Position - 0x7A7E
{
	Hash statName;

	statName = Global_2805029[empsParam0 /*3*/][func_17(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_LICENSE_PLATE(statName, sParam1);

	return;
}

eMPStat func_259(int iParam0, int iParam1) // Position - 0x7AA7
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 363:
					return UNK_894347879;
			
				case 364:
					return UNK_1158498788;
			
				case 365:
					return UNK_251026871;
			
				case 366:
					return UNK_590710325;
			
				case 367:
					return UNK_2089826537;
			
				case 368:
					return UNK_898259074;
			
				case &func_1:
					return UNK_1510962152;
			
				case 370:
					return UNK_789328450;
			
				case 371:
					return UNK_492474079;
			
				case 372:
					return UNK_211250521;
			
				case 373:
					return UNK_1546129765;
			
				case 374:
					return UNK_1852683760;
			
				case 375:
					return UNK_2142492796;
			
				case 376:
					return UNK_846510347;
			
				case 377:
					return UNK_352224019;
			
				case 378:
					return UNK_658384786;
			
				case 379:
					return UNK_940591414;
			
				case 380:
					return UNK_511905808;
			
				case 381:
					return UNK_758787454;
			
				case 382:
					return UNK_64652520;
			
				case 383:
					return UNK_073128898;
			
				case 384:
					return UNK_1921138489;
			
				case 385:
					return UNK_093850471;
			
				case 386:
					return UNK_1961411590;
			
				case 387:
					return UNK_657500311;
			
				case 388:
					return UNK_443748124;
			
				case 389:
					return UNK_1286435728;
			
				case 390:
					return UNK_390626287;
			
				case 391:
					return UNK_679648867;
			
				case &func_2:
					return UNK_039321419;
			
				case 393:
					return UNK_1928086953;
			
				case 394:
					return UNK_1621074192;
			
				case 395:
					return UNK_1334738670;
			
				case 396:
					return UNK_1027267143;
			
				case 397:
					return UNK_759249492;
			
				case 398:
					return UNK_464918334;
			
				case 399:
					return UNK_108326076;
			
				case 400:
					return UNK_428087018;
			
				case 401:
					return UNK_725432924;
			
				case 402:
					return UNK_409434653;
			
				case 403:
					return UNK_2108350262;
			
				case 404:
					return UNK_1347650696;
			
				case 405:
					return UNK_1648797806;
			
				case 406:
					return UNK_75168881;
			
				case 407:
					return UNK_182869791;
			
				case 408:
					return UNK_1806154604;
			
				case 409:
					return UNK_641111487;
			
				case 410:
					return UNK_307919475;
			
				case 411:
					return UNK_747613917;
			
				case 412:
					return UNK_68836473;
			
				case 413:
					return UNK_1388805380;
			
				case 414:
					return UNK_646658;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 363:
					return UNK_28228305;
			
				case 364:
					return UNK_59282524;
			
				case 365:
					return UNK_87289226;
			
				case 366:
					return UNK_217884679;
			
				case 367:
					return UNK_737338875;
			
				case 368:
					return UNK_959217774;
			
				case &func_1:
					return UNK_698081609;
			
				case 370:
					return UNK_15189967;
			
				case 371:
					return UNK_80214651;
			
				case 372:
					return UNK_003087608;
			
				case 373:
					return UNK_426266478;
			
				case 374:
					return UNK_703095915;
			
				case 375:
					return UNK_406241544;
			
				case 376:
					return UNK_225291126;
			
				case 377:
					return UNK_1366631;
			
				case 378:
					return UNK_1462648566;
			
				case 379:
					return UNK_1155504729;
			
				case 380:
					return UNK_66986885;
			
				case 381:
					return &func_76;
			
				case 382:
					return UNK_112875647;
			
				case 383:
					return UNK_664595727;
			
				case 384:
					return UNK_366365058;
			
				case 385:
					return UNK_187118624;
			
				case 386:
					return UNK_1705794238;
			
				case 387:
					return UNK_2001665539;
			
				case 388:
					return UNK_112285801;
			
				case 389:
					return UNK_813465290;
			
				case 390:
					return UNK_605448092;
			
				case 391:
					return UNK_1029151262;
			
				case &func_2:
					return UNK_1319255219;
			
				case 393:
					return UNK_1506562823;
			
				case 394:
					return UNK_086186007;
			
				case 395:
					return UNK_14694842;
			
				case 396:
					return UNK_42264364;
			
				case 397:
					return UNK_36758977;
			
				case 398:
					return UNK_1981582239;
			
				case 399:
					return UNK_033767180;
			
				case 400:
					return UNK_886490845;
			
				case 401:
					return UNK_1213722079;
			
				case 402:
					return UNK_1369833595;
			
				case 403:
					return UNK_1675863286;
			
				case 404:
					return UNK_2132466532;
			
				case 405:
					return UNK_856143383;
			
				case 406:
					return UNK_702915539;
			
				case 407:
					return UNK_397016924;
			
				case 408:
					return UNK_95050199;
			
				case 409:
					return UNK_197060486;
			
				case 410:
					return UNK_1185543931;
			
				case 411:
					return UNK_91409843;
			
				case 412:
					return UNK_601534813;
			
				case 413:
					return UNK_907105738;
			
				case 414:
					return UNK_1803894961;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 363:
					return UNK_486137899;
			
				case 364:
					return &func_75;
			
				case 365:
					return UNK_988150984;
			
				case 366:
					return UNK_068300380;
			
				case 367:
					return UNK_79539952;
			
				case 368:
					return UNK_77377003;
			
				case &func_1:
					return UNK_1976038027;
			
				case 370:
					return UNK_73022841;
			
				case 371:
					return UNK_1928366204;
			
				case 372:
					return UNK_516606001;
			
				case 373:
					return UNK_1970769294;
			
				case 374:
					return UNK_623334630;
			
				case 375:
					return UNK_1783691073;
			
				case 376:
					return UNK_101204957;
			
				case 377:
					return UNK_1205056071;
			
				case 378:
					return UNK_977671980;
			
				case 379:
					return UNK_557540623;
			
				case 380:
					return UNK_1763503481;
			
				case 381:
					return UNK_803336635;
			
				case 382:
					return UNK_1175988080;
			
				case 383:
					return UNK_128503422;
			
				case 384:
					return UNK_567367066;
			
				case 385:
					return UNK_66318136;
			
				case 386:
					return UNK_408865718;
			
				case 387:
					return UNK_92489189;
			
				case 388:
					return UNK_058923330;
			
				case 389:
					return UNK_1527206158;
			
				case 390:
					return UNK_1486769500;
			
				case 391:
					return UNK_574051718;
			
				case &func_2:
					return UNK_1961297389;
			
				case 393:
					return UNK_540823956;
			
				case 394:
					return UNK_1988266272;
			
				case 395:
					return UNK_069245277;
			
				case 396:
					return UNK_846329343;
			
				case 397:
					return UNK_37928711;
			
				case 398:
					return UNK_41795258;
			
				case 399:
					return UNK_23073171;
			
				case 400:
					return UNK_4256947;
			
				case 401:
					return UNK_34989405;
			
				case 402:
					return UNK_332663001;
			
				case 403:
					return UNK_631483512;
			
				case 404:
					return UNK_837403908;
			
				case 405:
					return UNK_1138551018;
			
				case 406:
					return UNK_1433046029;
			
				case 407:
					return UNK_2035995629;
			
				case 408:
					return UNK_991412782;
			
				case 409:
					return UNK_686759389;
			
				case 410:
					return UNK_1179936393;
			
				case 411:
					return UNK_932333829;
			
				case 412:
					return UNK_721006548;
			
				case 413:
					return UNK_473862750;
			
				case 414:
					return UNK_960841177;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 363:
					return UNK_504365398;
			
				case 364:
					return UNK_1554784593;
			
				case 365:
					return UNK_92732013;
			
				case 366:
					return UNK_133857896;
			
				case 367:
					return UNK_1830928956;
			
				case 368:
					return UNK_593637054;
			
				case &func_1:
					return UNK_300649425;
			
				case 370:
					return UNK_972636836;
			
				case 371:
					return UNK_1706404336;
			
				case 372:
					return UNK_1441729123;
			
				case 373:
					return UNK_1091559589;
			
				case 374:
					return UNK_861029674;
			
				case 375:
					return UNK_776878882;
			
				case 376:
					return UNK_548118493;
			
				case 377:
					return UNK_164786731;
			
				case 378:
					return UNK_5481032;
			
				case 379:
					return UNK_96240330;
			
				case 380:
					return UNK_1526470677;
			
				case 381:
					return UNK_943340430;
			
				case 382:
					return UNK_2121883407;
			
				case 383:
					return UNK_407403491;
			
				case 384:
					return UNK_175071281;
			
				case 385:
					return UNK_26911644;
			
				case 386:
					return UNK_97135416;
			
				case 387:
					return UNK_86234132;
			
				case 388:
					return UNK_59046655;
			
				case 389:
					return UNK_527650;
			
				case 390:
					return UNK_797027189;
			
				case 391:
					return UNK_595366763;
			
				case &func_2:
					return UNK_087906029;
			
				case 393:
					return UNK_45972502;
			
				case 394:
					return UNK_39789954;
			
				case 395:
					return UNK_70537874;
			
				case 396:
					return UNK_68118753;
			
				case 397:
					return UNK_304907547;
			
				case 398:
					return UNK_546513384;
			
				case 399:
					return UNK_932204514;
			
				case 400:
					return UNK_1409350119;
			
				case 401:
					return UNK_59005219;
			
				case 402:
					return UNK_405865032;
			
				case 403:
					return UNK_92442501;
			
				case 404:
					return UNK_251228173;
			
				case 405:
					return UNK_203944810;
			
				case 406:
					return UNK_61027823;
			
				case 407:
					return UNK_244217911;
			
				case 408:
					return UNK_36385925;
			
				case 409:
					return UNK_858866048;
			
				case 410:
					return UNK_1367568204;
			
				case 411:
					return &func_78;
			
				case 412:
					return UNK_876000435;
			
				case 413:
					return UNK_727037853;
			
				case 414:
					return UNK_001019462;
			
				default:
					break;
			}
			break;
	
		case 5:
			switch (iParam1)
			{
				case 363:
					return UNK_1051201820;
			
				case 364:
					return UNK_1364571767;
			
				case 365:
					return UNK_607804477;
			
				case 366:
					return UNK_60235345;
			
				case 367:
					return UNK_127705858;
			
				case 368:
					return UNK_38728283;
			
				case &func_1:
					return UNK_12283505;
			
				case 370:
					return UNK_614438335;
			
				case 371:
					return UNK_600942683;
			
				case 372:
					return UNK_92149213;
			
				case 373:
					return UNK_121892672;
			
				case 374:
					return UNK_07397396;
			
				case 375:
					return UNK_1673303028;
			
				case 376:
					return UNK_845661579;
			
				case 377:
					return UNK_076715798;
			
				case 378:
					return UNK_368774318;
			
				case 379:
					return UNK_710877498;
			
				case 380:
					return UNK_772924;
			
				case 381:
					return UNK_1546355578;
			
				case 382:
					return UNK_909102707;
			
				case 383:
					return UNK_65224427;
			
				case 384:
					return UNK_2028453106;
			
				case 385:
					return UNK_557092237;
			
				case 386:
					return UNK_1368092218;
			
				case 387:
					return UNK_2080162588;
			
				case 388:
					return UNK_775268239;
			
				case 389:
					return UNK_413629551;
			
				case 390:
					return UNK_823210090;
			
				case 391:
					return UNK_77916023;
			
				case &func_2:
					return UNK_44054853;
			
				case 393:
					return UNK_13743138;
			
				case 394:
					return UNK_86108078;
			
				case 395:
					return UNK_135896156;
			
				case 396:
					return UNK_1854876513;
			
				case 397:
					return UNK_674344787;
			
				case 398:
					return UNK_978867108;
			
				case 399:
					return UNK_1145624277;
			
				case 400:
					return UNK_172337489;
			
				case 401:
					return UNK_10960957;
			
				case 402:
					return UNK_79579048;
			
				case 403:
					return UNK_29344330;
			
				case 404:
					return UNK_88339128;
			
				case 405:
					return UNK_1951531281;
			
				case 406:
					return UNK_978651507;
			
				case 407:
					return UNK_739503345;
			
				case 408:
					return UNK_366657663;
			
				case 409:
					return UNK_1020072456;
			
				case 410:
					return UNK_540695878;
			
				case 411:
					return UNK_722396808;
			
				case 412:
					return UNK_969245681;
			
				case 413:
					return UNK_1316203853;
			
				case 414:
					return UNK_1557482000;
			
				default:
					break;
			}
			break;
	
		case 6:
			switch (iParam1)
			{
				case 363:
					return UNK_04941786;
			
				case 364:
					return UNK_380487777;
			
				case 365:
					return UNK_12227297;
			
				case 366:
					return UNK_74029436;
			
				case 367:
					return UNK_2047282966;
			
				case 368:
					return UNK_007979095;
			
				case &func_1:
					return UNK_1280193437;
			
				case 370:
					return UNK_102934123;
			
				case 371:
					return UNK_453267502;
			
				case 372:
					return UNK_678718222;
			
				case 373:
					return UNK_080944309;
			
				case 374:
					return UNK_55690203;
			
				case 375:
					return UNK_388186525;
			
				case 376:
					return UNK_621829495;
			
				case 377:
					return UNK_1220258640;
			
				case 378:
					return UNK_990121953;
			
				case 379:
					return UNK_1714316853;
			
				case 380:
					return UNK_430987694;
			
				case 381:
					return UNK_900829616;
			
				case 382:
					return UNK_421050660;
			
				case 383:
					return UNK_1384336211;
			
				case 384:
					return UNK_1220818901;
			
				case 385:
					return UNK_62328027;
			
				case 386:
					return UNK_68357718;
			
				case 387:
					return UNK_717249651;
			
				case 388:
					return UNK_1851622143;
			
				case 389:
					return UNK_729611579;
			
				case 390:
					return UNK_49321477;
			
				case 391:
					return UNK_890665747;
			
				case &func_2:
					return UNK_132664812;
			
				case 393:
					return UNK_415285864;
			
				case 394:
					return UNK_654728947;
			
				case 395:
					return UNK_470701158;
			
				case 396:
					return UNK_1186769346;
			
				case 397:
					return UNK_948047181;
			
				case 398:
					return UNK_1661198928;
			
				case 399:
					return UNK_85072265;
			
				case 400:
					return UNK_1850615864;
			
				case 401:
					return UNK_735263037;
			
				case 402:
					return UNK_1717835880;
			
				case 403:
					return UNK_890680778;
			
				case 404:
					return UNK_088840547;
			
				case 405:
					return UNK_1369468637;
			
				case 406:
					return UNK_537299882;
			
				case 407:
					return UNK_05322184;
			
				case 408:
					return UNK_1082903732;
			
				case 409:
					return UNK_18004193;
			
				case 410:
					return UNK_92247971;
			
				case 411:
					return UNK_1782030123;
			
				case 412:
					return UNK_2018327382;
			
				case 413:
					return UNK_1784455033;
			
				case 414:
					return UNK_2020752292;
			
				default:
					break;
			}
			break;
	
		case 7:
			switch (iParam1)
			{
				case 363:
					return UNK_740974258;
			
				case 364:
					return UNK_911766286;
			
				case 365:
					return UNK_43636291;
			
				case 366:
					return UNK_024914399;
			
				case 367:
					return UNK_991042826;
			
				case 368:
					return UNK_26596216;
			
				case &func_1:
					return UNK_367702563;
			
				case 370:
					return UNK_1678828654;
			
				case 371:
					return UNK_324712344;
			
				case 372:
					return UNK_2132056701;
			
				case 373:
					return UNK_69365308;
			
				case 374:
					return UNK_685433496;
			
				case 375:
					return UNK_873464885;
			
				case 376:
					return UNK_1649008808;
			
				case 377:
					return UNK_413355356;
			
				case 378:
					return UNK_1188309437;
			
				case 379:
					return UNK_358267856;
			
				case 380:
					return UNK_560551125;
			
				case 381:
					return UNK_30534331;
			
				case 382:
					return UNK_392186354;
			
				case 383:
					return UNK_67027814;
			
				case 384:
					return UNK_36497899;
			
				case 385:
					return UNK_1909161675;
			
				case 386:
					return UNK_1066244688;
			
				case 387:
					return UNK_119974275;
			
				case 388:
					return UNK_1425098007;
			
				case 389:
					return UNK_435602920;
			
				case 390:
					return UNK_1598315797;
			
				case 391:
					return UNK_026885900;
			
				case &func_2:
					return UNK_1954875294;
			
				case 393:
					return UNK_513395670;
			
				case 394:
					return &func_77;
			
				case 395:
					return UNK_22275683;
			
				case 396:
					return UNK_161128924;
			
				case 397:
					return UNK_09528152;
			
				case 398:
					return UNK_33875714;
			
				case 399:
					return UNK_35562187;
			
				case 400:
					return UNK_1894568747;
			
				case 401:
					return UNK_036138345;
			
				case 402:
					return UNK_798694171;
			
				case 403:
					return UNK_693636757;
			
				case 404:
					return UNK_485389762;
			
				case 405:
					return UNK_112478542;
			
				case 406:
					return UNK_122648654;
			
				case 407:
					return UNK_52589360;
			
				case 408:
					return UNK_60847343;
			
				case 409:
					return UNK_1114336901;
			
				case 410:
					return UNK_8912570;
			
				case 411:
					return UNK_21894744;
			
				case 412:
					return UNK_49835900;
			
				case 413:
					return UNK_45772739;
			
				case 414:
					return UNK_0982503;
			
				default:
					break;
			}
			break;
	}

	return MP_STAT_MPSV_VEHICLE_BS_0;
}

int func_260(int iParam0, BOOL bParam1) // Position - 0x8C66
{
	if (iParam0 <= 38)
		if (iParam0 < 10)
			if (bParam1)
				return joaat("twi_01") + iParam0;
			else
				return 31488 + iParam0;
		else if (iParam0 > 12 && iParam0 < 23)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 3;
			else
				return (31488 + iParam0) - 3;
		else if (iParam0 > 25 && iParam0 < 36)
			if (bParam1)
				return (joaat("twi_01") + iParam0) - 6;
			else
				return (31488 + iParam0) - 6;
	else if (iParam0 > 38 && iParam0 < 49)
		return (6015 + iParam0) - 39;
	else if (iParam0 > 51 && iParam0 < 62)
		return (7252 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9310 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30134 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30134 + (iParam0 - 281 - 3);
	else if (iParam0 < func_261(11))
		return (15084 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15084 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15361;
	else if (iParam0 < 184)
		return (18036 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18953 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21942 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24535 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26319 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28039 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31488 + 30 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34036 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36528 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36528 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 41004 + (iParam0 - 363);

	return 0;
}

int func_261(int iParam0) // Position - 0x8F2F
{
	switch (iParam0)
	{
		case 8:
			return 108;
	
		case 9:
			return 128;
	
		case 10:
			return 148;
	
		case 11:
			return 156;
	
		case 6:
			return 75;
	
		case 7:
			return 88;
	
		case 5:
			return -1;
	
		case 12:
			return 179;
	
		case 13:
			return 186;
	
		case 14:
			return 192;
	
		case 15:
			return 202;
	
		case 16:
			return 212;
	
		case 17:
			return 222;
	
		case 18:
			return 236;
	
		case 19:
			return 246;
	
		case 20:
			return 256;
	
		case 21:
			return 268;
	
		case 22:
			return 278;
	
		case 23:
			return 294;
	
		case 24:
			return 307;
	
		case 25:
			return 317;
	
		case 26:
			return 337;
	
		case 27:
			return 350;
	
		case 28:
			return 363;
	
		case 29:
			return 413;
	}

	if (iParam0 >= 1000)
		return -1;

	return func_262(iParam0, -1, true) * (iParam0 + 1);
}

int func_262(int iParam0, int iParam1, BOOL bParam2) // Position - 0x90BE
{
	if (iParam0 == -1)
		if (iParam1 >= 1)
			if (iParam1 == 115)
				return 8;
			else if (iParam1 == 116)
				return 20;
			else if (iParam1 == 117)
				return 7;
			else if (iParam1 == 118)
				return 1;
			else if (iParam1 == 119 || iParam1 == 120 || iParam1 == 121)
				return 10;
			else if (iParam1 == 122)
				return 9;
			else if (iParam1 == 123 || iParam1 == 124)
				return 10;
			else if (iParam1 == 125)
				return 10;
			else if (iParam1 == 126)
				return 10;
			else if (iParam1 == 127)
				return 10;
			else if (iParam1 == 128)
				return 20;
			else if (iParam1 == 129)
				return 50;
			else if (iParam1 <= 130 && iParam1 > 0)
				if (Global_1312228[iParam1 /*1951*/].f_33 == 2)
					if (bParam2)
						return 3;
					else
						return 2;
				else if (Global_1312228[iParam1 /*1951*/].f_33 == 6)
					if (bParam2)
						return 8;
					else
						return 6;
				else if (Global_1312228[iParam1 /*1951*/].f_33 == 10)
					if (bParam2)
						return 13;
					else
						return 10;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
	
		case 5:
			return 0;
	
		case 6:
			return 10;
	
		case 8:
		case 9:
		case 10:
			return 20;
	
		case 11:
			return 8;
	
		case 12:
			return 20;
	
		case 13:
			return 7;
	
		case 14:
			return 1;
	
		case 15:
		case 16:
		case 17:
			return 10;
	
		case 18:
		case 19:
		case 20:
			return 10;
	
		case 21:
			return 10;
	
		case 22:
			return 10;
	
		case 25:
			return 10;
	
		case 26:
			return 20;
	
		case 29:
			return 50;
	}

	return 0;
}

int func_263(int iParam0) // Position - 0x9350
{
	if (iParam0 < 10)
		return 7263 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 7263 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 7263 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 7263 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7263 + iParam0) - 12;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9330 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30154 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30154 + (iParam0 - 281 - 3);
	else if (iParam0 < func_261(11))
		return (15154 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15154 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15362;
	else if (iParam0 < 184)
		return (18061 + iParam0) - 159;
	else if (iParam0 < 194)
		return (&func_154 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21979 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24565 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26329 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28049 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31528 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34056 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36548 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36548 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (41056 + iParam0) - 363;

	return 0;
}

int func_264(int iParam0) // Position - 0x95D9
{
	if (iParam0 < 10)
		return 5975 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5975 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5975 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5975 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7242 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9290 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30114 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30114 + (iParam0 - 281 - 3);
	else if (iParam0 < func_261(11))
		return (15014 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (15014 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15360;
	else if (iParam0 < 184)
		return (18011 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18943 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21905 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24505 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26309 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28029 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31478 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (34016 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36508 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36508 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40952 + iParam0) - 363;

	return 0;
}

int func_265(int iParam0) // Position - 0x9862
{
	if (iParam0 < 10)
		return 5935 + iParam0;
	else if (iParam0 > 12 && iParam0 < 23)
		return 5935 + (iParam0 - 3);
	else if (iParam0 > 25 && iParam0 < 36)
		return 5935 + (iParam0 - 6);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5935 + (iParam0 - 9);
	else if (iParam0 > 51 && iParam0 < 62)
		return (7232 + iParam0) - 52;
	else if (iParam0 > 64 && iParam0 < 85)
		return (9270 + iParam0) - 65;
	else if (iParam0 >= 281 && iParam0 < 291)
		return (30094 + iParam0) - 281;
	else if (iParam0 >= 294 && iParam0 < 304)
		return 30094 + (iParam0 - 281 - 3);
	else if (iParam0 < func_261(11))
		return (14944 + iParam0) - 88;
	else if (iParam0 <= 157)
		return (14944 + iParam0) - 88;
	else if (iParam0 == 158)
		return 15359;
	else if (iParam0 < 184)
		return (17986 + iParam0) - 159;
	else if (iParam0 < 194)
		return (18933 + iParam0) - 184;
	else if (iParam0 < 231)
		return (21868 + iParam0) - 194;
	else if (iParam0 < 261)
		return (24475 + iParam0) - 231;
	else if (iParam0 < 271)
		return (26299 + iParam0) - 261;
	else if (iParam0 < 281)
		return (28019 + iParam0) - 271;
	else if (iParam0 > 306 && iParam0 < 317)
		return (31468 + iParam0) - 307;
	else if (iParam0 >= 317 && iParam0 < 337)
		return (33996 + iParam0) - 317;
	else if (iParam0 >= 337 && iParam0 < 347)
		return (36488 + iParam0) - 337;
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36488 + (iParam0 - 337 - 3);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return (40900 + iParam0) - 363;

	return 0;
}

int func_266(int iParam0) // Position - 0x9AEB
{
	int num;

	num = 4424 - 4400;

	if (iParam0 < 10)
		return 4400 + (iParam0 * num);
	else if (iParam0 > 12 && iParam0 < 23)
		return 4640 + ((iParam0 - 13) * num);
	else if (iParam0 > 25 && iParam0 < 36)
		return 4880 + ((iParam0 - 26) * num);
	else if (iParam0 > 38 && iParam0 < 49)
		return 5120 + ((iParam0 - 39) * num);
	else if (iParam0 > 51 && iParam0 < 62)
		return 6414 + ((iParam0 - 52) * num);
	else if (iParam0 > 64 && iParam0 < 85)
		return 7682 + ((iParam0 - 65) * num);
	else if (iParam0 >= 281 && iParam0 < 291)
		return 29534 + ((iParam0 - 281) * num);
	else if (iParam0 >= 294 && iParam0 < 304)
		return 29774 + ((iParam0 - 294) * num);
	else if (iParam0 < func_261(11))
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 <= 157)
		return 9554 + ((iParam0 - 88) * num);
	else if (iParam0 == 158)
		return 15282;
	else if (iParam0 < 184)
		return 16061 + ((iParam0 - 159) * num);
	else if (iParam0 < 194)
		return 18163 + ((iParam0 - 184) * num);
	else if (iParam0 < 231)
		return 19019 + ((iParam0 - 194) * num);
	else if (iParam0 < 261)
		return 22195 + ((iParam0 - 231) * num);
	else if (iParam0 < 271)
		return 25539 + ((iParam0 - 261) * num);
	else if (iParam0 < 281)
		return 27259 + ((iParam0 - 271) * num);
	else if (iParam0 > 306 && iParam0 < 317)
		return 31188 + ((iParam0 - 307) * num);
	else if (iParam0 >= 317 && iParam0 < 337)
		return 33436 + ((iParam0 - 317) * num);
	else if (iParam0 >= 337 && iParam0 < 347)
		return 35928 + ((iParam0 - 337) * num);
	else if (iParam0 >= 350 && iParam0 < 360)
		return 36168 + ((iParam0 - 350) * num);
	else if (iParam0 >= 363 && iParam0 <= 414)
		return 39444 + ((iParam0 - 363) * num);

	return 0;
}

int func_267(int iParam0, int iParam1) // Position - 0x9DBA
{
	int num;

	if (iParam0 == 3880 || iParam0 == 3881 || iParam0 == 3882)
	{
		if (iParam1 < 10)
			num = iParam0 + (iParam1 * 3);
		else if (iParam1 < 23)
			if (iParam0 == 3880)
				num = 3910 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3881)
				num = 3911 + ((iParam1 - 13) * 3);
			else if (iParam0 == 3882)
				num = 3912 + ((iParam1 - 13) * 3);
		else if (iParam1 < 36)
			if (iParam0 == 3880)
				num = 3946 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3881)
				num = 3947 + ((iParam1 - 26) * 3);
			else if (iParam0 == 3882)
				num = 3948 + ((iParam1 - 26) * 3);
		else if (iParam1 < 49)
			if (iParam0 == 3880)
				num = 5855 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3881)
				num = 5856 + ((iParam1 - 39) * 3);
			else if (iParam0 == 3882)
				num = 5857 + ((iParam1 - 39) * 3);
		else if (iParam1 < 62)
			if (iParam0 == 3880)
				num = 7149 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3881)
				num = 7150 + ((iParam1 - 52) * 3);
			else if (iParam0 == 3882)
				num = 7151 + ((iParam1 - 52) * 3);
		else if (iParam1 < 85)
			if (iParam0 == 3880)
				num = 9107 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3881)
				num = 9108 + ((iParam1 - 65) * 3);
			else if (iParam0 == 3882)
				num = 9109 + ((iParam1 - 65) * 3);
		else if (iParam1 < func_261(11))
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = &func_93 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 <= 157)
			if (iParam0 == 3880)
				num = 14384 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3881)
				num = &func_93 + ((iParam1 - 88) * 3);
			else if (iParam0 == 3882)
				num = 14386 + ((iParam1 - 88) * 3);
		else if (iParam1 == 158)
			if (iParam0 == 3880)
				num = 15351;
			else if (iParam0 == 3881)
				num = 15352;
			else if (iParam0 == 3882)
				num = 15353;
		else if (iParam1 < 184)
			if (iParam0 == 3880)
				num = 17786 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3881)
				num = 17787 + ((iParam1 - 159) * 3);
			else if (iParam0 == 3882)
				num = 17788 + ((iParam1 - 159) * 3);
		else if (iParam1 < 194)
			if (iParam0 == 3880)
				num = &func_152 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3881)
				num = 18854 + ((iParam1 - 184) * 3);
			else if (iParam0 == 3882)
				num = 18855 + ((iParam1 - 184) * 3);
		else if (iParam1 < 231)
			if (iParam0 == 3880)
				num = 21572 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3881)
				num = 21573 + ((iParam1 - 194) * 3);
			else if (iParam0 == 3882)
				num = 21574 + ((iParam1 - 194) * 3);
		else if (iParam1 < 261)
			if (iParam0 == 3880)
				num = 24265 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3881)
				num = 24266 + ((iParam1 - 231) * 3);
			else if (iParam0 == 3882)
				num = 24267 + ((iParam1 - 231) * 3);
		else if (iParam1 < 271)
			if (iParam0 == 3880)
				num = 26229 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3881)
				num = 26230 + ((iParam1 - 261) * 3);
			else if (iParam0 == 3882)
				num = 26231 + ((iParam1 - 261) * 3);
		else if (iParam1 < 281)
			if (iParam0 == 3880)
				num = 27949 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3881)
				num = 27950 + ((iParam1 - 271) * 3);
			else if (iParam0 == 3882)
				num = 27951 + ((iParam1 - 271) * 3);
		else if (iParam1 < 291)
			if (iParam0 == 3880)
				num = 29474 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3881)
				num = 29475 + ((iParam1 - 281) * 3);
			else if (iParam0 == 3882)
				num = 29476 + ((iParam1 - 281) * 3);
		else if (iParam1 < 304)
			if (iParam0 == 3880)
				num = 29504 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3881)
				num = 29505 + ((iParam1 - 294) * 3);
			else if (iParam0 == 3882)
				num = 29506 + ((iParam1 - 294) * 3);
		else if (iParam1 > 306 && iParam1 < 317)
			if (iParam0 == 3880)
				num = 31158 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3881)
				num = 31159 + ((iParam1 - 307) * 3);
			else if (iParam0 == 3882)
				num = 31160 + ((iParam1 - 307) * 3);
		else if (iParam1 >= 317 && iParam1 < 337)
			if (iParam0 == 3880)
				num = 33376 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3881)
				num = 33377 + ((iParam1 - 317) * 3);
			else if (iParam0 == 3882)
				num = 33378 + ((iParam1 - 317) * 3);
		else if (iParam1 >= 337 && iParam1 < 347)
			if (iParam0 == 3880)
				num = 35868 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3881)
				num = 35869 + ((iParam1 - 337) * 3);
			else if (iParam0 == 3882)
				num = 35870 + ((iParam1 - 337) * 3);
		else if (iParam1 >= 350 && iParam1 < 360)
			if (iParam0 == 3880)
				num = 35898 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3881)
				num = 35899 + ((iParam1 - 350) * 3);
			else if (iParam0 == 3882)
				num = 35900 + ((iParam1 - 350) * 3);
		else if (iParam1 >= 363 && iParam1 <= 414)
			if (iParam0 == 3880)
				num = 39288 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3881)
				num = 39289 + ((iParam1 - 363) * 3);
			else if (iParam0 == 3882)
				num = 39290 + ((iParam1 - 363) * 3);
	}
	else if (iParam1 < 10)
	{
		num = iParam0 + (iParam1 * (1456 - 1411));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		num = (iParam1 - 10) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 1861;
		else if (iParam0 == 1412)
			num = num + 1862;
		else if (iParam0 == 1441)
			num = num + 1863;
		else if (iParam0 == 1442)
			num = num + 1864;
		else if (iParam0 == 1443)
			num = num + 1865;
		else if (iParam0 == 1445)
			num = num + 1866;
		else if (iParam0 == 1447)
			num = num + 1867;
		else if (iParam0 == 1448)
			num = num + 1868;
		else if (iParam0 == 1449)
			num = num + 1869;
		else if (iParam0 == 1450)
			num = num + 1870;
		else if (iParam0 == 1451)
			num = num + 1871;
		else if (iParam0 == 1452)
			num = num + 1872;
		else if (iParam0 == 1453)
			num = num + 1873;
		else if (iParam0 == 1454)
			num = num + 1874;
		else if (iParam0 == 1455)
			num = num + 1875;
	}
	else if (iParam1 < 23)
	{
		num = 1906 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 13) * (1456 - 1411));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		num = (iParam1 - 23) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2356;
		else if (iParam0 == 1412)
			num = num + 2357;
		else if (iParam0 == 1441)
			num = num + 2358;
		else if (iParam0 == 1442)
			num = num + 2359;
		else if (iParam0 == 1443)
			num = num + 2360;
		else if (iParam0 == 1445)
			num = num + 2361;
		else if (iParam0 == 1447)
			num = num + 2362;
		else if (iParam0 == 1448)
			num = num + 2363;
		else if (iParam0 == 1449)
			num = num + 2364;
		else if (iParam0 == 1450)
			num = num + 2365;
		else if (iParam0 == 1451)
			num = num + 2366;
		else if (iParam0 == 1452)
			num = num + 2367;
		else if (iParam0 == 1453)
			num = num + 2368;
		else if (iParam0 == 1454)
			num = num + 2369;
		else if (iParam0 == 1455)
			num = num + 2370;
	}
	else if (iParam1 < 36)
	{
		num = 2405 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 26) * (1456 - 1411));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		num = (iParam1 - 36) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 2855;
		else if (iParam0 == 1412)
			num = num + 2856;
		else if (iParam0 == 1441)
			num = num + 2857;
		else if (iParam0 == 1442)
			num = num + 2858;
		else if (iParam0 == 1443)
			num = num + 2859;
		else if (iParam0 == 1445)
			num = num + 2860;
		else if (iParam0 == 1447)
			num = num + 2861;
		else if (iParam0 == 1448)
			num = num + 2862;
		else if (iParam0 == 1449)
			num = num + 2863;
		else if (iParam0 == 1450)
			num = num + 2864;
		else if (iParam0 == 1451)
			num = num + 2865;
		else if (iParam0 == 1452)
			num = num + 2866;
		else if (iParam0 == 1453)
			num = num + 2867;
		else if (iParam0 == 1454)
			num = num + 2868;
		else if (iParam0 == 1455)
			num = num + 2869;
	}
	else if (iParam1 < 49)
	{
		num = 5360 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 39) * (1456 - 1411));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		num = (iParam1 - 49) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 5810;
		else if (iParam0 == 1412)
			num = num + 5811;
		else if (iParam0 == 1441)
			num = num + 5812;
		else if (iParam0 == 1442)
			num = num + 5813;
		else if (iParam0 == 1443)
			num = num + 5814;
		else if (iParam0 == 1445)
			num = num + 5815;
		else if (iParam0 == 1447)
			num = num + 5816;
		else if (iParam0 == 1448)
			num = num + 5817;
		else if (iParam0 == 1449)
			num = num + 5818;
		else if (iParam0 == 1450)
			num = num + 5819;
		else if (iParam0 == 1451)
			num = num + 5820;
		else if (iParam0 == 1452)
			num = num + 5821;
		else if (iParam0 == 1453)
			num = num + 5822;
		else if (iParam0 == 1454)
			num = num + 5823;
		else if (iParam0 == 1455)
			num = num + 5824;
	}
	else if (iParam1 < 62)
	{
		num = 6654 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 52) * (1456 - 1411));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		num = (iParam1 - 62) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 7104;
		else if (iParam0 == 1412)
			num = num + 7105;
		else if (iParam0 == 1441)
			num = num + 7106;
		else if (iParam0 == 1442)
			num = num + 7107;
		else if (iParam0 == 1443)
			num = num + 7108;
		else if (iParam0 == 1445)
			num = num + 7109;
		else if (iParam0 == 1447)
			num = num + 7110;
		else if (iParam0 == 1448)
			num = num + 7111;
		else if (iParam0 == 1449)
			num = num + 7112;
		else if (iParam0 == 1450)
			num = num + 7113;
		else if (iParam0 == 1451)
			num = num + 7114;
		else if (iParam0 == 1452)
			num = num + 7115;
		else if (iParam0 == 1453)
			num = num + 7116;
		else if (iParam0 == 1454)
			num = num + 7117;
		else if (iParam0 == 1455)
			num = num + 7118;
	}
	else if (iParam1 < 85)
	{
		num = 8162 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 65) * (1456 - 1411));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		num = (iParam1 - 85) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 9062;
		else if (iParam0 == 1412)
			num = num + 9063;
		else if (iParam0 == 1441)
			num = num + 9064;
		else if (iParam0 == 1442)
			num = num + 9065;
		else if (iParam0 == 1443)
			num = num + 9066;
		else if (iParam0 == 1445)
			num = num + 9067;
		else if (iParam0 == 1447)
			num = num + 9068;
		else if (iParam0 == 1448)
			num = num + 9069;
		else if (iParam0 == 1449)
			num = num + 9070;
		else if (iParam0 == 1450)
			num = num + 9071;
		else if (iParam0 == 1451)
			num = num + 9072;
		else if (iParam0 == 1452)
			num = num + 9073;
		else if (iParam0 == 1453)
			num = num + 9074;
		else if (iParam0 == 1454)
			num = num + 9075;
		else if (iParam0 == 1455)
			num = num + 9076;
	}
	else if (iParam1 < func_261(11))
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_261(7)) * (1456 - 1411));
	}
	else if (iParam1 <= 157)
	{
		num = 11234 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - func_261(7)) * (1456 - 1411));
	}
	else if (iParam1 == 158)
	{
		num = 15306 - 1411;
		num = num + iParam0;
	}
	else if (iParam1 < 184)
	{
		num = 16661 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 159) * (1456 - 1411));
	}
	else if (iParam1 < 194)
	{
		num = 18403 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 184) * (1456 - 1411));
	}
	else if (iParam1 < 231)
	{
		num = 19907 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 194) * (1456 - 1411));
	}
	else if (iParam1 < 261)
	{
		num = 22915 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 231) * (1456 - 1411));
	}
	else if (iParam1 < 271)
	{
		num = 25779 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 261) * (1456 - 1411));
	}
	else if (iParam1 < 281)
	{
		num = 27499 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 271) * (1456 - 1411));
	}
	else if (iParam1 < 291)
	{
		num = 28484 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 281) * (1456 - 1411));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		num = (iParam1 - 291) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 28934;
		else if (iParam0 == 1412)
			num = num + 28935;
		else if (iParam0 == 1441)
			num = num + 28936;
		else if (iParam0 == 1442)
			num = num + 28937;
		else if (iParam0 == 1443)
			num = num + 28938;
		else if (iParam0 == 1445)
			num = num + 28939;
		else if (iParam0 == 1447)
			num = num + 28940;
		else if (iParam0 == 1448)
			num = num + 28941;
		else if (iParam0 == 1449)
			num = num + 28942;
		else if (iParam0 == 1450)
			num = num + 28943;
		else if (iParam0 == 1451)
			num = num + 28944;
		else if (iParam0 == 1452)
			num = num + 28945;
		else if (iParam0 == 1453)
			num = num + 28946;
		else if (iParam0 == 1454)
			num = num + 28947;
		else if (iParam0 == 1455)
			num = num + 28948;
	}
	else if (iParam1 < 304)
	{
		num = 28979 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 294) * (1456 - 1411));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		num = (iParam1 - 304) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 29429;
		else if (iParam0 == 1412)
			num = num + 29430;
		else if (iParam0 == 1441)
			num = num + 29431;
		else if (iParam0 == 1442)
			num = num + 29432;
		else if (iParam0 == 1443)
			num = num + 29433;
		else if (iParam0 == 1445)
			num = num + 29434;
		else if (iParam0 == 1447)
			num = num + 29435;
		else if (iParam0 == 1448)
			num = num + 29436;
		else if (iParam0 == 1449)
			num = num + 29437;
		else if (iParam0 == 1450)
			num = num + 29438;
		else if (iParam0 == 1451)
			num = num + 29439;
		else if (iParam0 == 1452)
			num = num + 29440;
		else if (iParam0 == 1453)
			num = num + 29441;
		else if (iParam0 == 1454)
			num = num + 29442;
		else if (iParam0 == 1455)
			num = num + 29443;
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		num = 30708 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 307) * (1456 - 1411));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		num = 32476 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 317) * (1456 - 1411));
	}
	else if (iParam1 < 347)
	{
		num = 34878 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 337) * (1456 - 1411));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		num = (iParam1 - 347) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35328;
		else if (iParam0 == 1412)
			num = num + 35329;
		else if (iParam0 == 1441)
			num = num + 35330;
		else if (iParam0 == 1442)
			num = num + 35331;
		else if (iParam0 == 1443)
			num = num + 35332;
		else if (iParam0 == 1445)
			num = num + 35333;
		else if (iParam0 == 1447)
			num = num + 35334;
		else if (iParam0 == 1448)
			num = num + 35335;
		else if (iParam0 == 1449)
			num = num + 35336;
		else if (iParam0 == 1450)
			num = num + 35337;
		else if (iParam0 == 1451)
			num = num + 35338;
		else if (iParam0 == 1452)
			num = num + 35339;
		else if (iParam0 == 1453)
			num = num + 35340;
		else if (iParam0 == 1454)
			num = num + 35341;
		else if (iParam0 == 1455)
			num = num + 35342;
	}
	else if (iParam1 < 360)
	{
		num = 35373 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 350) * (1456 - 1411));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		num = (iParam1 - 360) * (1876 - 1861);
	
		if (iParam0 == 1411)
			num = num + 35823;
		else if (iParam0 == 1412)
			num = num + 35824;
		else if (iParam0 == 1441)
			num = num + 35825;
		else if (iParam0 == 1442)
			num = num + 35826;
		else if (iParam0 == 1443)
			num = num + 35827;
		else if (iParam0 == 1445)
			num = num + 35828;
		else if (iParam0 == 1447)
			num = num + 35829;
		else if (iParam0 == 1448)
			num = num + 35830;
		else if (iParam0 == 1449)
			num = num + 35831;
		else if (iParam0 == 1450)
			num = num + 35832;
		else if (iParam0 == 1451)
			num = num + 35833;
		else if (iParam0 == 1452)
			num = num + 35834;
		else if (iParam0 == 1453)
			num = num + 35835;
		else if (iParam0 == 1454)
			num = num + 35836;
		else if (iParam0 == 1455)
			num = num + 35837;
	}
	else if (iParam1 >= 363 && iParam1 <= 414)
	{
		num = 36948 - 1411;
		num = num + iParam0;
		num = num + ((iParam1 - 363) * (1456 - 1411));
	}

	return num;
}

BOOL func_268(int iParam0, var uParam1) // Position - 0xB4CE
{
	int num;

	*uParam1 = -1;
	num = 0;

	if (iParam0 >= 0 && iParam0 <= 9)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 13 && iParam0 <= 22)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 26 && iParam0 <= 35)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 39 && iParam0 <= 48)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 52 && iParam0 <= 61)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 65 && iParam0 <= 74 || iParam0 >= 75 && iParam0 <= 84)
		*uParam1 = iParam0 - num;

	num = num + 3;

	if (iParam0 >= 88 && iParam0 <= 107 || iParam0 >= 108 && iParam0 <= 127 || iParam0 >= 128 && iParam0 <= 147 || iParam0 >= 148 && iParam0 <= 155)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 20;

	if (iParam0 >= 179 && iParam0 <= 185)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (iParam0 >= 191 && iParam0 <= 221)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;
	num = num + 1;

	if (iParam0 >= 227 && iParam0 <= 235)
		*uParam1 = iParam0 - num;

	num = num + 1;

	if (iParam0 >= 237 && iParam0 <= 245)
		*uParam1 = iParam0 - num;

	num = num + 1;

	if (iParam0 >= 247 && iParam0 <= 255)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;

	if (iParam0 >= 258 && iParam0 <= 267)
		*uParam1 = iParam0 - num;

	num = num + 1;
	num = num + 1;

	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return false;
	}

	return *uParam1 != -1;
}

int func_269(var uParam0, var uParam1, var uParam2) // Position - 0xB741
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

void func_270(int iParam0) // Position - 0xB934
{
	Global_2359296[func_74() /*5568*/].f_681.f_2 = iParam0;
	return;
}

void func_271(Vehicle veParam0, var uParam1, BOOL bParam2) // Position - 0xB94E
{
	int int;

	func_280(uParam1);

	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_106), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = NETWORK::GET_CLOUD_TIME_AS_INT();
	
		if (Global_262145.f_11091)
			MISC::SET_BIT(&(uParam1->f_103), 22);
	}

	if (func_279(veParam0, 0))
	{
		func_278();
		MISC::SET_BIT(&(uParam1->f_103), 3);
	}

	func_272(veParam0, uParam1);

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
	{
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
		{
			int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
		
			if (IS_BIT_SET(int, 3))
				MISC::SET_BIT(&(uParam1->f_103), 2);
		}
	}

	return;
}

void func_272(Vehicle veParam0, var uParam1) // Position - 0xB9FC
{
	Player player;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_274(veParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
	
		if (IS_BIT_SET(uParam1->f_77, 11))
			MISC::SET_BIT(&(uParam1->f_95), 0);
	
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0) && !VEHICLE::GET_DRIFT_TYRES_SET(veParam0))
			uParam1->f_102 = 2;
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			uParam1->f_102 = 1;
		else if (VEHICLE::GET_DRIFT_TYRES_SET(veParam0))
			uParam1->f_102 = 3;
	
		if (uParam1->f_70 == 0)
			uParam1->f_70 = 1;
	
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(veParam0);
		uParam1->f_79 = AUDIO::GET_VEHICLE_HORN_SOUND_INDEX(veParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(veParam0);
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(veParam0, &(uParam1->f_97));
		VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(veParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::GET_VEHICLE_LIVERY2(veParam0);
		player = PLAYER::PLAYER_ID();
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
	
		if (!(player == _INVALID_PLAYER_INDEX()))
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(player, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
	
		if (player == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
		
			if (uParam1->f_94 == 1)
				if (func_273(veParam0))
					MISC::SET_BIT(&(uParam1->f_95), 3);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
	}

	return;
}

BOOL func_273(Vehicle veParam0) // Position - 0xBB39
{
	if (Global_2793046.f_299 == veParam0)
		return true;

	return false;
}

void func_274(Vehicle veParam0, var uParam1) // Position - 0xBB52
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_277(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_276(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_269(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_275(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_275(int iParam0) // Position - 0xBDFD
{
	switch (iParam0)
	{
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 2;
	
		case 4:
			return 3;
	
		case 5:
			return 4;
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

BOOL func_276(int iParam0) // Position - 0xBEAD
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return true;
	
		default:
		
	}

	return false;
}

void func_277(var uParam0) // Position - 0xBECD
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

void func_278() // Position - 0xBF7D
{
	int i;

	for (i = 0; i < 415; i = i + 1)
	{
		if (IS_BIT_SET(Global_1586468[i /*142*/].f_103, 3))
			MISC::CLEAR_BIT(&(Global_1586468[i /*142*/].f_103), 3);
	}

	return;
}

BOOL func_279(Vehicle veParam0, int iParam1) // Position - 0xBFB7
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (iParam1 == 0)
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", INT))
					if (DECORATOR::DECOR_EXIST_ON(veParam0, "bombdec1"))
						return true;
			else if (iParam1 == 1)
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", INT))
					if (DECORATOR::DECOR_EXIST_ON(veParam0, "bombdec"))
						return true;

	return false;
}

void func_280(var uParam0) // Position - 0xC01C
{
	func_277(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
	return;
}

void func_281(int iParam0, BOOL bParam1) // Position - 0xC0AC
{
	int i;

	if (bParam1)
	{
		for (i = 0; i < 39; i = i + 1)
		{
			if (Global_2793046.f_2339[i /*44*/].f_40 == iParam0)
				func_281(i, false);
		}
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2793046.f_2339[iParam0 /*44*/], "", 24);
		Global_2793046.f_2339[iParam0 /*44*/].f_6 = 138;
		TEXT_LABEL_ASSIGN_STRING(&(Global_2793046.f_2339[iParam0 /*44*/].f_7), "", 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_2793046.f_2339[iParam0 /*44*/].f_23), "", 64);
		Global_2793046.f_2339[iParam0 /*44*/].f_39 = -1;
		Global_2793046.f_2339[iParam0 /*44*/].f_40 = -1;
		_STOPWATCH_DESTROY(&(Global_2793046.f_2339[iParam0 /*44*/].f_41));
		Global_2793046.f_2339[iParam0 /*44*/].f_43 = 0;
	}

	return;
}

void func_282() // Position - 0xC166
{
	func_283(10);
	return;
}

void func_283(int iParam0) // Position - 0xC174
{
	int num;
	int offset;

	num = iParam0 / 32;
	offset = iParam0 % 32;
	MISC::SET_BIT(&Global_1836764.f_5[num], offset);
	return;
}

void func_284() // Position - 0xC19A
{
	Global_2672505.f_62.f_73 = 0;
	func_285(25);
	func_285(24);
	return;
}

void func_285(int iParam0) // Position - 0xC1B7
{
	if (iParam0 < 32)
		if (IS_BIT_SET(Global_2672505.f_62.f_1, iParam0))
			MISC::CLEAR_BIT(&(Global_2672505.f_62.f_1), iParam0);
	else if (IS_BIT_SET(Global_2672505.f_62.f_2, iParam0 - 32))
		MISC::CLEAR_BIT(&(Global_2672505.f_62.f_2), iParam0 - 32);

	return;
}

BOOL func_286(var uParam0, Vehicle veParam1) // Position - 0xC207
{
	Hash entityModel;
	int num;
	Hash hashKey;
	Hash hash;
	Hash hash2;
	int num2;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(veParam1))
		return true;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam1);

	if (*uParam0 == 0)
	{
		if (func_65() != -1)
			return false;
	
		if (entityModel == func_334())
		{
			num = 413;
			hashKey = MISC::GET_HASH_KEY("VE_BRICKADE2_t2_v38");
		}
		else
		{
			num = 414;
			hashKey = func_332(entityModel, true, -1, false);
		}
	
		hash = func_331(num);
		hash2 = entityModel;
	
		if (func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), hashKey, -897111558, 1, 0, hash2, 4, hash, 3))
		{
			if (func_287(num, veParam1, true, false))
			{
				if (func_54())
				{
					*uParam0 = 1;
				}
				else
				{
					*uParam0 = 3;
					return true;
				}
			}
			else
			{
				*uParam0 = 3;
				return true;
			}
		}
		else
		{
			*uParam0 = 3;
			return true;
		}
	}
	else if (*uParam0 == 1)
	{
		num2 = func_65();
	
		if (num2 >= 0 && num2 < 15)
		{
			if (func_49(num2))
			{
				if (func_48(num2) == 2)
				{
					*uParam0 = 2;
					return true;
				}
				else
				{
					*uParam0 = 3;
					return true;
				}
			}
		}
		else
		{
			*uParam0 = 3;
			return true;
		}
	}

	return false;
}

BOOL func_287(int iParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3) // Position - 0xC31B
{
	int num;
	int num2;
	int num3;
	var unk;
	var unk5;
	var unk9;
	int colorPrimary;
	int colorSecondary;
	int pearlescentColor;
	int wheelColor;
	int num4;
	BOOL flag;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	var unk13;
	var unk17;
	int num15;
	int num16;
	int r;
	int g;
	int b;
	int num17;
	int num18;
	int num19;
	BOOL flag2;
	int num20;
	int num21;
	int num22;
	char* str;

	num4 = func_330(ENTITY::GET_ENTITY_MODEL(veParam1));

	if (!Global_4540401 || !ENTITY::DOES_ENTITY_EXIST(veParam1) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false) || VEHICLE::GET_NUM_MOD_KITS(veParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam1) <= 0 && func_329(ENTITY::GET_ENTITY_MODEL(veParam1)))
		{
			func_328(veParam1, &num, &unk, &colorPrimary, &num2, &unk5, &colorSecondary, &num3, &unk9, &pearlescentColor, &wheelColor, false);
		
			if (!func_327(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &unk, 1, 24, num4, num, colorPrimary))
				return false;
		
			if (!func_327(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &unk9, 3, 24, num4, num3, pearlescentColor))
				return false;
		
			if (!func_325(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_326(num)))
				return false;
		
			if (!func_327(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &unk5, 2, 25, num4, num2, colorSecondary))
				return false;
		
			if (!func_325(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_326(num2)))
				return false;
		}
	
		return true;
	}

	if (iParam0 == -1)
		iParam0 = 0;

	flag = true;

	if (iParam0 == 10 || iParam0 == 11 || iParam0 == 12 || iParam0 == 23 || iParam0 == 24 || iParam0 == 25 || iParam0 == 36 || iParam0 == 37 || iParam0 == 38 || iParam0 == 49 || iParam0 == 50 || iParam0 == 51 || iParam0 == 62 || iParam0 == 63 || iParam0 == 64)
		flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
	{
		num5 = func_323(ENTITY::GET_ENTITY_MODEL(veParam1));
		num6 = func_321(ENTITY::GET_ENTITY_MODEL(veParam1));
		num7 = func_317(ENTITY::GET_ENTITY_MODEL(veParam1));
		num8 = func_316(ENTITY::GET_ENTITY_MODEL(veParam1));
		num9 = func_315(veParam1);
	
		if (flag)
		{
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(veParam1, 0) + 1, 14, num5, -1, veParam1, 0))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(veParam1, 1) + 1, 34, num5, -1, veParam1, 1))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(veParam1, 2) + 11, 35, num5, -1, veParam1, 2))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(veParam1, 3) + 1, 13, num5, -1, veParam1, 3))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(veParam1, 4) + 1, 6, num5, -1, veParam1, 4))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(veParam1, 5) + 1, 4, num5, -1, veParam1, 5))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(veParam1, 6) + 1, 8, num5, -1, veParam1, 6))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(veParam1, 7) + 1, 9, num5, -1, veParam1, 7))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(veParam1, 8) + 1, 36, num5, -1, veParam1, 8))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(veParam1, 9) + 6, 37, num5, -1, veParam1, 9))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(veParam1, 10) + 1, 12, num5, num9, veParam1, 10))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(veParam1, 11) + 1, 5, num5, -1, veParam1, 11))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(veParam1, 12) + 1, 2, num5, -1, veParam1, 12))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(veParam1, 13) + 1, 16, num5, -1, veParam1, 13))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(veParam1, 15) + 1, 15, num5, -1, veParam1, 15))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(veParam1, 16) + 1, 1, num5, -1, veParam1, 16))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_313(VEHICLE::IS_TOGGLE_MOD_ON(veParam1, 18)), 17, num5, -1, 0, 23))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_313(VEHICLE::IS_TOGGLE_MOD_ON(veParam1, 22)), 11, num5, -1, 0, 23))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(veParam1, 25) + 1, 41, num6, -1, veParam1, 25))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(veParam1, 26) + 1, 42, num6, -1, veParam1, 26))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(veParam1, 27) + 1, 43, num6, -1, veParam1, 27))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(veParam1, 28) + 1, 44, num6, -1, veParam1, 28))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(veParam1, 29) + 1, 45, num6, -1, veParam1, 29))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(veParam1, 30) + 1, 46, num6, -1, veParam1, 30))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(veParam1, 31) + 1, 47, num6, -1, veParam1, 31))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(veParam1, 32) + 1, 48, num6, -1, veParam1, 32))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(veParam1, 33) + 1, 49, num6, -1, veParam1, 33))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(veParam1, 34) + 1, 50, num6, -1, veParam1, 34))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(veParam1, 35) + 1, 51, num6, -1, veParam1, 35))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(veParam1, 36) + 1, 52, num6, -1, veParam1, 36))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(veParam1, 37) + 1, 53, num6, -1, veParam1, 37))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(veParam1, 38) + 1, 54, num6, -1, veParam1, 38))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(veParam1, 39) + 1, 55, num6, -1, veParam1, 39))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(veParam1, 40) + 1, 56, num6, -1, veParam1, 40))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(veParam1, 41) + 1, 57, num6, -1, veParam1, 41))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(veParam1, 42) + 1, 58, num6, -1, veParam1, 42))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(veParam1, 43) + 1, 59, num6, -1, veParam1, 43))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(veParam1, 44) + 1, 60, num6, -1, veParam1, 44))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(veParam1, 45) + 1, 61, num6, -1, veParam1, 45))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(veParam1, 46) + 1, 62, num6, -1, veParam1, 46))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(veParam1, 47) + 1, 63, num6, -1, veParam1, 47))
				return false;
		
			if (!func_314(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(veParam1, 48) + 1, 64, num7, -1, veParam1, 48))
				return false;
		}
	
		if (flag)
		{
			num10 = func_312(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(veParam1, 14, VEHICLE::GET_VEHICLE_MOD(veParam1, 14)));
		
			if (!func_310(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_311(num10), 10, num5))
				return false;
		}
	
		if (flag)
		{
			if (!func_309(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", veParam1, 23, num8))
				return false;
		
			if (!func_309(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", veParam1, 24, num8))
				return false;
		}
	
		if (!func_307(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", veParam1))
			return false;
	
		if (flag)
		{
			num11 = 0;
		
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam1))
			{
				case 0:
					num11 = 0;
					break;
			
				case 3:
					num11 = 1;
					break;
			
				case 2:
					num11 = 2;
					break;
			
				case 1:
					num11 = 3;
					break;
			
				case 4:
					num11 = 4;
					break;
			
				case 5:
					num11 = 5;
					break;
			}
		
			if (!func_314(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", num11, 33, num5, -1, 0, 23))
				return false;
		}
	
		if (flag)
		{
			num12 = 0;
		
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam1))
			{
				case 3:
					num12 = 0;
					break;
			
				case 0:
					num12 = 1;
					break;
			
				case 4:
					num12 = 2;
					break;
			
				case 2:
					num12 = 3;
					break;
			
				case 1:
					num12 = 4;
					break;
			}
		
			if (!func_314(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", num12, 23, num5, -1, 0, 23))
				return false;
		}
	
		if (flag)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam1, 23) == 0)
				if (!func_314(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, num5, -1, 0, 23))
					return false;
			else if (!func_314(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, num5, -1, 0, 23))
				return false;
		
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam1, 24) == 0)
				if (!func_314(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, num5, -1, 0, 23))
					return false;
			else if (!func_314(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, num5, -1, 0, 23))
				return false;
		}
	
		func_328(veParam1, &num, &unk, &colorPrimary, &num2, &unk5, &colorSecondary, &num3, &unk9, &pearlescentColor, &wheelColor, true);
		num13 = func_306(wheelColor);
	
		if (!func_314(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", num13, 29, num4, -1, 0, 23))
			return false;
	
		VEHICLE::SET_VEHICLE_COLOURS(veParam1, colorPrimary, colorSecondary);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam1, pearlescentColor, wheelColor);
	
		if (bParam3)
		{
			while (func_305(num14, &unk13, &unk17, &num15, &num16))
			{
				if (num15 == colorPrimary && num16 == pearlescentColor)
					unk9 = { unk13 };
			
				num14 = num14 + 1;
			}
		}
	
		if (!func_327(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &unk, 1, 24, num4, num, colorPrimary))
			return false;
	
		if (!func_327(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &unk9, 3, 24, num4, num3, pearlescentColor))
			return false;
	
		if (!func_325(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_326(num)))
			return false;
	
		if (!func_327(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &unk5, 2, 25, num4, num2, colorSecondary))
			return false;
	
		if (!func_325(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_326(num2)))
			return false;
	
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam1, &r, &g, &b);
	
		switch (func_304(r, g, b))
		{
			case 1:
				num17 = 3;
				break;
		
			case 2:
				num17 = 4;
				break;
		
			case 3:
				num17 = 5;
				break;
		
			case 4:
				num17 = 6;
				break;
		
			case 5:
				num17 = 11;
				break;
		
			case 6:
				num17 = 7;
				break;
		
			case 7:
				num17 = 10;
				break;
		
			case 8:
				num17 = 8;
				break;
		
			case 9:
				num17 = 12;
				break;
		
			case 10:
				num17 = 13;
				break;
		
			case 11:
				num17 = -1;
				break;
		
			case 12:
				num17 = 9;
				break;
		
			case 0:
				if (func_303(ENTITY::GET_ENTITY_MODEL(veParam1)) || VEHICLE::IS_VEHICLE_MODEL(veParam1, joaat("oppressor2")))
				{
					num17 = 255;
					break;
				}
				break;
		}
	
		if (flag)
			if (!func_302(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", num17, 18, num5))
				return false;
	
		num18 = func_301(VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 2), VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 0) || VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 1), VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 3));
	
		if (flag)
			if (!func_300(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", num18, 21, num5, true))
				return false;
	
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam1, &r, &g, &b);
		num19 = func_297(r, g, b);
	
		if (flag)
			if (!func_300(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", num19, 21, num5, false))
				return false;
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam1) > 1)
			if (!func_314(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(veParam1), 26, num5, func_296(ENTITY::GET_ENTITY_MODEL(veParam1)), 0, 23))
				return false;
	
		if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam1) > 1)
			if (!func_314(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::GET_VEHICLE_LIVERY2(veParam1), 39, num7, func_296(ENTITY::GET_ENTITY_MODEL(veParam1)), 0, 23))
				return false;
	
		if (flag)
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam1))
				if (!func_295(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, num5))
					return false;
	
		if (flag)
		{
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_5(veParam1, &num22);
			flag2 = false;
			num20 = 0;
		
			while (func_294(num20, &num21) && !flag2)
			{
				if (num21 == num22)
				{
					flag2 = true;
					str = func_293(num20);
				}
				else
				{
					num20 = num20 + 1;
				}
			}
		
			if (flag2)
				func_292(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", str, 38, 5, 3);
		
			VEHICLE::GET_VEHICLE_EXTRA_COLOUR_6(veParam1, &num22);
			flag2 = false;
			num20 = 0;
		
			while (func_291(num20, &num21) && !flag2)
			{
				if (num21 == num22)
				{
					flag2 = true;
					str = func_290(num20);
				}
				else
				{
					num20 = num20 + 1;
				}
			}
		
			if (!flag2)
			{
				if (num22 == 0)
				{
					str = "VEM_COLOUR_6_BLACK_t65_v3";
					flag2 = true;
				}
				else if (num22 == 132)
				{
					str = "VEM_COLOUR_6_DEFAULT_t65_v3";
					flag2 = true;
				}
			}
		
			if (flag2)
				func_292(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", str, 65, 6, 3);
		}
	
		if (bParam2 && flag)
			if (!func_289(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(veParam1)))
				return false;
		else if (flag)
			if (!func_288(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
				return false;
	
		return true;
	}

	return false;
}

BOOL func_288(int iParam0, char* sParam1) // Position - 0xD220
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, "VEM_INSURANCE_NONE", 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

BOOL func_289(int iParam0, char* sParam1, Hash hParam2) // Position - 0xD27D
{
	var unk;
	var unk17;
	var unk21;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam2), 16);

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk17) || MISC::GET_HASH_KEY(&unk17) == joaat("carnotfound"))
		return true;

	TEXT_LABEL_APPEND_STRING(&unk21, "VEM_INSURANCE_", 64);
	TEXT_LABEL_APPEND_STRING(&unk21, &unk17, 64);

	switch (hParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			TEXT_LABEL_APPEND_STRING(&unk21, "2", 64);
			break;
	
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			TEXT_LABEL_APPEND_STRING(&unk21, "3", 64);
			break;
	
		case joaat("tornado4"):
			TEXT_LABEL_APPEND_STRING(&unk21, "4", 64);
			break;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk21)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk21), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

char* func_290(int iParam0) // Position - 0xD373
{
	switch (iParam0)
	{
		case 0:
			return "SILVER" /*Silver*/;
	
		case 1:
			return "BLUE_SILVER" /*Bluish Silver*/;
	
		case 2:
			return "ROLLED_STEEL" /*Rolled Steel*/;
	
		case 3:
			return "SHADOW_SILVER" /*Shadow Silver*/;
	
		case 4:
			return "WHITE" /*Ice White*/;
	
		case 5:
			return "FROST_WHITE" /*Frost White*/;
	
		case 6:
			return "CREAM" /*Cream*/;
	
		case 7:
			return "SIENNA_BROWN" /*Sienna Brown*/;
	
		case 8:
			return "SADDLE_BROWN" /*Saddle Brown*/;
	
		case 9:
			return "MOSS_BROWN" /*Moss Brown*/;
	
		case 10:
			return "WOODBEECH_BROWN" /*Woodbeech Brown*/;
	
		case 11:
			return "STRAW_BROWN" /*Straw Brown*/;
	
		case 12:
			return "SANDY_BROWN" /*Sandy Brown*/;
	
		case 13:
			return "BLEECHED_BROWN" /*Bleached Brown*/;
	
		case 14:
			return "GOLD" /*Gold*/;
	
		case 15:
			return "BRONZE" /*Bronze*/;
	
		case 16:
			return "YELLOW" /*Yellow*/;
	
		case 17:
			return "RACE_YELLOW" /*Race Yellow*/;
	
		case 18:
			return "FLUR_YELLOW" /*Dew Yellow*/;
	
		case 19:
			return "ORANGE" /*Orange*/;
	
		case 20:
			return "BRIGHT_ORANGE" /*Bright Orange*/;
	
		case 21:
			return "SUNRISE_ORANGE" /*Sunrise Orange*/;
	
		case 22:
			return "RED" /*Red*/;
	
		case 23:
			return "TORINO_RED" /*Torino Red*/;
	
		case 24:
			return "FORMULA_RED" /*Formula Red*/;
	
		case 25:
			return "LAVA_RED" /*Lava Red*/;
	
		case 26:
			return "BLAZE_RED" /*Blaze Red*/;
	
		case 27:
			return "GRACE_RED" /*Grace Red*/;
	
		case 28:
			return "GARNET_RED" /*Garnet Red*/;
	
		case 29:
			return "CANDY_RED" /*Candy Red*/;
	
		case 30:
			return "HOT PINK" /*Hot Pink*/;
	
		case 31:
			return "PINK" /*Pfister Pink*/;
	
		case 32:
			return "SALMON_PINK" /*Salmon Pink*/;
	
		case 33:
			return "PURPLE" /*Schafter Purple*/;
	
		case 34:
			return "BRIGHT_PURPLE" /*Bright Purple*/;
	
		case 35:
			return "SAXON_BLUE" /*Saxon Blue*/;
	
		case 36:
			return "BLUE" /*Blue*/;
	
		case 37:
			return "MARINER_BLUE" /*Mariner Blue*/;
	
		case 38:
			return "HARBOR_BLUE" /*Harbor Blue*/;
	
		case 39:
			return "DIAMOND_BLUE" /*Diamond Blue*/;
	
		case 40:
			return "SURF_BLUE" /*Surf Blue*/;
	
		case 41:
			return "NAUTICAL_BLUE" /*Nautical Blue*/;
	
		case 42:
			return "RACING_BLUE" /*Racing Blue*/;
	
		case 43:
			return "ULTRA_BLUE" /*Ultra Blue*/;
	
		case 44:
			return "LIGHT_BLUE" /*Light Blue*/;
	
		case 45:
			return "SEA_GREEN" /*Sea Green*/;
	
		case 46:
			return "BRIGHT_GREEN" /*Bright Green*/;
	
		case 47:
			return "PETROL_GREEN" /*Gasoline Green*/;
	
		case 48:
			return "LIME_GREEN" /*Lime Green*/;
	}

	return "";
}

BOOL func_291(int iParam0, var uParam1) // Position - 0xD695
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
	
		case 1:
			*uParam1 = 5;
			break;
	
		case 2:
			*uParam1 = 6;
			break;
	
		case 3:
			*uParam1 = 7;
			break;
	
		case 4:
			*uParam1 = 111;
			break;
	
		case 5:
			*uParam1 = 112;
			break;
	
		case 6:
			*uParam1 = 107;
			break;
	
		case 7:
			*uParam1 = 104;
			break;
	
		case 8:
			*uParam1 = 98;
			break;
	
		case 9:
			*uParam1 = 100;
			break;
	
		case 10:
			*uParam1 = 102;
			break;
	
		case 11:
			*uParam1 = 99;
			break;
	
		case 12:
			*uParam1 = 105;
			break;
	
		case 13:
			*uParam1 = 106;
			break;
	
		case 14:
			*uParam1 = 37;
			break;
	
		case 15:
			*uParam1 = 90;
			break;
	
		case 16:
			*uParam1 = 88;
			break;
	
		case 17:
			*uParam1 = 89;
			break;
	
		case 18:
			*uParam1 = 91;
			break;
	
		case 19:
			*uParam1 = 38;
			break;
	
		case 20:
			*uParam1 = 138;
			break;
	
		case 21:
			*uParam1 = 36;
			break;
	
		case 22:
			*uParam1 = 27;
			break;
	
		case 23:
			*uParam1 = 28;
			break;
	
		case 24:
			*uParam1 = 29;
			break;
	
		case 25:
			*uParam1 = 150;
			break;
	
		case 26:
			*uParam1 = 30;
			break;
	
		case 27:
			*uParam1 = 31;
			break;
	
		case 28:
			*uParam1 = 32;
			break;
	
		case 29:
			*uParam1 = 35;
			break;
	
		case 30:
			*uParam1 = 135;
			break;
	
		case 31:
			*uParam1 = 137;
			break;
	
		case 32:
			*uParam1 = 136;
			break;
	
		case 33:
			*uParam1 = 71;
			break;
	
		case 34:
			*uParam1 = 145;
			break;
	
		case 35:
			*uParam1 = 63;
			break;
	
		case 36:
			*uParam1 = 64;
			break;
	
		case 37:
			*uParam1 = 65;
			break;
	
		case 38:
			*uParam1 = 66;
			break;
	
		case 39:
			*uParam1 = 67;
			break;
	
		case 40:
			*uParam1 = 68;
			break;
	
		case 41:
			*uParam1 = 69;
			break;
	
		case 42:
			*uParam1 = 73;
			break;
	
		case 43:
			*uParam1 = 70;
			break;
	
		case 44:
			*uParam1 = 74;
			break;
	
		case 45:
			*uParam1 = 51;
			break;
	
		case 46:
			*uParam1 = 53;
			break;
	
		case 47:
			*uParam1 = 54;
			break;
	
		case 48:
			*uParam1 = 92;
			break;
	}

	return *uParam1 != -1;
}

BOOL func_292(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xD957
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam2, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
	{
		TEXT_LABEL_ASSIGN_STRING(&unk17, "VEM_COLOUR_", 64);
		TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);
		TEXT_LABEL_APPEND_STRING(&unk17, "_", 64);
		TEXT_LABEL_APPEND_STRING(&unk17, sParam2, 64);
		TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
		TEXT_LABEL_APPEND_INT(&unk17, iParam3, 64);
		TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
		TEXT_LABEL_APPEND_INT(&unk17, iParam5, 64);
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

char* func_293(int iParam0) // Position - 0xD9F8
{
	switch (iParam0)
	{
		case 0:
			return "BLACK" /*Black*/;
	
		case 1:
			return "GRAPHITE" /*Graphite*/;
	
		case 2:
			return "ANTHR_BLACK" /*Anthracite Black*/;
	
		case 3:
			return "BLACK_STEEL" /*Black Steel*/;
	
		case 4:
			return "DARK_SILVER" /*Dark Steel*/;
	
		case 5:
			return "BLUE_SILVER" /*Bluish Silver*/;
	
		case 6:
			return "ROLLED_STEEL" /*Rolled Steel*/;
	
		case 7:
			return "SHADOW_SILVER" /*Shadow Silver*/;
	
		case 8:
			return "STONE_SILVER" /*Stone Silver*/;
	
		case 9:
			return "MIDNIGHT_SILVER" /*Midnight Silver*/;
	
		case 10:
			return "CAST_IRON_SIL" /*Cast Iron Silver*/;
	
		case 11:
			return "RED" /*Red*/;
	
		case 12:
			return "TORINO_RED" /*Torino Red*/;
	
		case 13:
			return "LAVA_RED" /*Lava Red*/;
	
		case 14:
			return "BLAZE_RED" /*Blaze Red*/;
	
		case 15:
			return "GRACE_RED" /*Grace Red*/;
	
		case 16:
			return "GARNET_RED" /*Garnet Red*/;
	
		case 17:
			return "SUNSET_RED" /*Sunset Red*/;
	
		case 18:
			return "CABERNET_RED" /*Cabernet Red*/;
	
		case 19:
			return "WINE_RED" /*Wine Red*/;
	
		case 20:
			return "CANDY_RED" /*Candy Red*/;
	
		case 21:
			return "PINK" /*Pfister Pink*/;
	
		case 22:
			return "SALMON_PINK" /*Salmon Pink*/;
	
		case 23:
			return "SUNRISE_ORANGE" /*Sunrise Orange*/;
	
		case 24:
			return "ORANGE" /*Orange*/;
	
		case 25:
			return "BRIGHT_ORANGE" /*Bright Orange*/;
	
		case 26:
			return "BRONZE" /*Bronze*/;
	
		case 27:
			return "YELLOW" /*Yellow*/;
	
		case 28:
			return "RACE_YELLOW" /*Race Yellow*/;
	
		case 29:
			return "FLUR_YELLOW" /*Dew Yellow*/;
	
		case 30:
			return "DARK_GREEN" /*Dark Green*/;
	
		case 31:
			return "RACING_GREEN" /*Racing Green*/;
	
		case 32:
			return "SEA_GREEN" /*Sea Green*/;
	
		case 33:
			return "OLIVE_GREEN" /*Olive Green*/;
	
		case 34:
			return "BRIGHT_GREEN" /*Bright Green*/;
	
		case 35:
			return "PETROL_GREEN" /*Gasoline Green*/;
	
		case 36:
			return "LIME_GREEN" /*Lime Green*/;
	
		case 37:
			return "MIDNIGHT_BLUE" /*Midnight Blue*/;
	
		case 38:
			return "GALAXY_BLUE" /*Galaxy Blue*/;
	
		case 39:
			return "DARK_BLUE" /*Dark Blue*/;
	
		case 40:
			return "SAXON_BLUE" /*Saxon Blue*/;
	
		case 41:
			return "MARINER_BLUE" /*Mariner Blue*/;
	
		case 42:
			return "HARBOR_BLUE" /*Harbor Blue*/;
	
		case 43:
			return "DIAMOND_BLUE" /*Diamond Blue*/;
	
		case 44:
			return "SURF_BLUE" /*Surf Blue*/;
	
		case 45:
			return "NAUTICAL_BLUE" /*Nautical Blue*/;
	
		case 46:
			return "RACING_BLUE" /*Racing Blue*/;
	
		case 47:
			return "ULTRA_BLUE" /*Ultra Blue*/;
	
		case 48:
			return "LIGHT_BLUE" /*Light Blue*/;
	
		case 49:
			return "CHOCOLATE_BROWN" /*Chocolate Brown*/;
	
		case 50:
			return "BISON_BROWN" /*Bison Brown*/;
	
		case 51:
			return "CREEK_BROWN" /*Creek Brown*/;
	
		case 52:
			return "UMBER_BROWN" /*Feltzer Brown*/;
	
		case 53:
			return "MAPLE_BROWN" /*Maple Brown*/;
	
		case 54:
			return "BEECHWOOD_BROWN" /*Beechwood Brown*/;
	
		case 55:
			return "SIENNA_BROWN" /*Sienna Brown*/;
	
		case 56:
			return "SADDLE_BROWN" /*Saddle Brown*/;
	
		case 57:
			return "MOSS_BROWN" /*Moss Brown*/;
	
		case 58:
			return "WOODBEECH_BROWN" /*Woodbeech Brown*/;
	
		case 59:
			return "STRAW_BROWN" /*Straw Brown*/;
	
		case 60:
			return "SANDY_BROWN" /*Sandy Brown*/;
	
		case 61:
			return "BLEECHED_BROWN" /*Bleached Brown*/;
	
		case 62:
			return "SPIN_PURPLE" /*Spinnaker Purple*/;
	
		case 63:
			return "MIGHT_PURPLE" /*Midnight Purple*/;
	
		case 64:
			return "BRIGHT_PURPLE" /*Bright Purple*/;
	
		case 65:
			return "CREAM" /*Cream*/;
	
		case 66:
			return "WHITE" /*Ice White*/;
	
		case 67:
			return "FROST_WHITE" /*Frost White*/;
	}

	return "";
}

BOOL func_294(int iParam0, var uParam1) // Position - 0xDE4A
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
	
		case 1:
			*uParam1 = 1;
			break;
	
		case 2:
			*uParam1 = 11;
			break;
	
		case 3:
			*uParam1 = 2;
			break;
	
		case 4:
			*uParam1 = 3;
			break;
	
		case 5:
			*uParam1 = 5;
			break;
	
		case 6:
			*uParam1 = 6;
			break;
	
		case 7:
			*uParam1 = 7;
			break;
	
		case 8:
			*uParam1 = 8;
			break;
	
		case 9:
			*uParam1 = 9;
			break;
	
		case 10:
			*uParam1 = 10;
			break;
	
		case 11:
			*uParam1 = 27;
			break;
	
		case 12:
			*uParam1 = 28;
			break;
	
		case 13:
			*uParam1 = 150;
			break;
	
		case 14:
			*uParam1 = 30;
			break;
	
		case 15:
			*uParam1 = 31;
			break;
	
		case 16:
			*uParam1 = 32;
			break;
	
		case 17:
			*uParam1 = 33;
			break;
	
		case 18:
			*uParam1 = 34;
			break;
	
		case 19:
			*uParam1 = 143;
			break;
	
		case 20:
			*uParam1 = 35;
			break;
	
		case 21:
			*uParam1 = 137;
			break;
	
		case 22:
			*uParam1 = 136;
			break;
	
		case 23:
			*uParam1 = 36;
			break;
	
		case 24:
			*uParam1 = 38;
			break;
	
		case 25:
			*uParam1 = 138;
			break;
	
		case 26:
			*uParam1 = 90;
			break;
	
		case 27:
			*uParam1 = 88;
			break;
	
		case 28:
			*uParam1 = 89;
			break;
	
		case 29:
			*uParam1 = 91;
			break;
	
		case 30:
			*uParam1 = 49;
			break;
	
		case 31:
			*uParam1 = 50;
			break;
	
		case 32:
			*uParam1 = 51;
			break;
	
		case 33:
			*uParam1 = 52;
			break;
	
		case 34:
			*uParam1 = 53;
			break;
	
		case 35:
			*uParam1 = 54;
			break;
	
		case 36:
			*uParam1 = 92;
			break;
	
		case 37:
			*uParam1 = 141;
			break;
	
		case 38:
			*uParam1 = 61;
			break;
	
		case 39:
			*uParam1 = 62;
			break;
	
		case 40:
			*uParam1 = 63;
			break;
	
		case 41:
			*uParam1 = 65;
			break;
	
		case 42:
			*uParam1 = 66;
			break;
	
		case 43:
			*uParam1 = 67;
			break;
	
		case 44:
			*uParam1 = 68;
			break;
	
		case 45:
			*uParam1 = 69;
			break;
	
		case 46:
			*uParam1 = 73;
			break;
	
		case 47:
			*uParam1 = 70;
			break;
	
		case 48:
			*uParam1 = 74;
			break;
	
		case 49:
			*uParam1 = 96;
			break;
	
		case 50:
			*uParam1 = 101;
			break;
	
		case 51:
			*uParam1 = 95;
			break;
	
		case 52:
			*uParam1 = 94;
			break;
	
		case 53:
			*uParam1 = 97;
			break;
	
		case 54:
			*uParam1 = 103;
			break;
	
		case 55:
			*uParam1 = 104;
			break;
	
		case 56:
			*uParam1 = 98;
			break;
	
		case 57:
			*uParam1 = 100;
			break;
	
		case 58:
			*uParam1 = 102;
			break;
	
		case 59:
			*uParam1 = 99;
			break;
	
		case 60:
			*uParam1 = 105;
			break;
	
		case 61:
			*uParam1 = 106;
			break;
	
		case 62:
			*uParam1 = 72;
			break;
	
		case 63:
			*uParam1 = 146;
			break;
	
		case 64:
			*uParam1 = 145;
			break;
	
		case 65:
			*uParam1 = 107;
			break;
	
		case 66:
			*uParam1 = 111;
			break;
	
		case 67:
			*uParam1 = 112;
			break;
	}

	return *uParam1 != -1;
}

BOOL func_295(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Position - 0xE213
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam2, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam3, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

int func_296(Hash hParam0) // Position - 0xE28A
{
	switch (hParam0)
	{
		case joaat("windsor"):
			return 1;
	}

	return -1;
}

int func_297(int iParam0, int iParam1, int iParam2) // Position - 0xE2A7
{
	if (iParam0 == 222 && iParam1 == 222 && iParam2 == 255)
		return 0;

	if (iParam0 == 2 && iParam1 == 21 && iParam2 == 255)
		return 1;

	if (iParam0 == 3 && iParam1 == 83 && iParam2 == 255)
		return 2;

	if (iParam0 == 0 && iParam1 == 255 && iParam2 == 140)
		return 3;

	if (iParam0 == 94 && iParam1 == 255 && iParam2 == 1)
		return 4;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 0)
		return 5;

	if (iParam0 == 255 && iParam1 == 150 && iParam2 == 5)
		return 6;

	if (iParam0 == 255 && iParam1 == 62 && iParam2 == 0)
		return 7;

	if (iParam0 == 255 && iParam1 == 1 && iParam2 == 1)
		return 8;

	if (iParam0 == 255 && iParam1 == 50 && iParam2 == 100)
		return 9;

	if (iParam0 == 255 && iParam1 == 5 && iParam2 == 190)
		return 10;

	if (iParam0 == 35 && iParam1 == 1 && iParam2 == 255)
		return 11;

	if (iParam0 == 15 && iParam1 == 3 && iParam2 == 255)
		return 12;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_298() && Global_1576216)
		if (iParam0 == Global_1576217 && iParam1 == Global_1576218 && iParam2 == Global_1576219)
			return 13;

	return 0;
}

BOOL func_298() // Position - 0xE489
{
	var gamerHandle;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			gamerHandle = { GET_LOCAL_GAMER_HANDLE() };
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				return true;
		}
	}

	return false;
}

struct<13> GET_LOCAL_GAMER_HANDLE() // Position - 0xE4D1
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	return gamerHandle;
}

BOOL func_300(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, BOOL bParam6) // Position - 0xE4E6
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam2, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_", 64);

	if (iParam3 == 0 && !bParam6)
		TEXT_LABEL_APPEND_STRING(&unk17, "255", 64);
	else
		TEXT_LABEL_APPEND_INT(&unk17, iParam3, 64);

	TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam5, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

int func_301(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0xE585
{
	if (bParam2 && bParam1 && bParam0)
		return 7;
	else if (bParam2 && bParam1 && !bParam0)
		return 6;
	else if (!bParam2 && bParam1 && bParam0)
		return 5;
	else if (bParam2 && !bParam1 && bParam0)
		return 4;
	else if (!bParam2 && bParam1 && !bParam0)
		return 3;
	else if (bParam2 && !bParam1 && !bParam0)
		return 2;
	else if (!bParam2 && !bParam1 && bParam0)
		return 1;

	return 0;
}

BOOL func_302(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0xE64A
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam2, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_", 64);

	if (iParam3 == -1)
		TEXT_LABEL_APPEND_STRING(&unk17, "PAT", 64);
	else
		TEXT_LABEL_APPEND_INT(&unk17, iParam3, 64);

	TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam5, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

BOOL func_303(Hash hParam0) // Position - 0xE6E0
{
	switch (hParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("conada"):
			return true;
	
		default:
		
	}

	return false;
}

int func_304(int iParam0, int iParam1, int iParam2) // Position - 0xE826
{
	int r;
	int g;
	int b;
	var a;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 255)
		return 1;

	if (iParam0 == 0 && iParam1 == 0 && iParam2 == 0)
		return 11;

	if (iParam0 == 255 && iParam1 == 127 && iParam2 == 0)
		return 6;

	if (iParam0 == 252 && iParam1 == 238 && iParam2 == 0)
		return 4;

	if (iParam0 == 0 && iParam1 == 174 && iParam2 == 239)
		return 3;

	if (iParam0 == 226 && iParam1 == 6 && iParam2 == 6)
		return 8;

	if (iParam0 == 20 && iParam1 == 20 && iParam2 == 20)
		return 2;

	if (iParam0 == Global_1576217 && iParam1 == Global_1576218 && iParam2 == Global_1576219)
		return 12;

	if (iParam0 == 1 && iParam1 == 1 && iParam2 == 1)
		return 0;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_PURPLE, &r, &g, &b, &a);

	if (iParam0 == r && iParam1 == g && iParam2 == b)
		return 5;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_GREEN, &r, &g, &b, &a);

	if (iParam0 == r && iParam1 == g && iParam2 == b)
		return 7;

	if (iParam0 == 114 && iParam1 == 204 && iParam2 == 114 || iParam0 == 102 && iParam1 == 152 && iParam2 == 104)
		return 7;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, &r, &g, &b, &a);

	if (iParam0 == r && iParam1 == g && iParam2 == b)
		return 9;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_BRONZE, &r, &g, &b, &a);

	if (iParam0 == r && iParam1 == g && iParam2 == b)
		return 10;

	return 1;
}

BOOL func_305(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4) // Position - 0xEA46
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR BLACK_STEEL" /*Brushed Black Steel*/, 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /*Carbon Black*/, 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /*Chocolate Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /*Schafter Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /*Hot Pink*/, 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /*Formula Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /*Ultra Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /*Racing Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /*Race Yellow*/, 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /*Gold*/, 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /*Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHROME" /*Chrome*/, 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /*Graphite*/, 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /*Anthracite Black*/, 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /*Black Steel*/, 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /*Dark Steel*/, 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /*Bluish Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /*Rolled Steel*/, 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /*Shadow Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /*Stone Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /*Midnight Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /*Cast Iron Silver*/, 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /*Torino Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /*Lava Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /*Blaze Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /*Grace Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /*Garnet Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /*Sunset Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /*Cabernet Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /*Wine Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /*Candy Red*/, 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /*Pfister Pink*/, 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /*Salmon Pink*/, 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /*Sunrise Orange*/, 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /*Bright Orange*/, 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /*Bronze*/, 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACE_YELLOW" /*Race Yellow*/, 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /*Dew Yellow*/, 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /*Dark Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_GREEN" /*Racing Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /*Sea Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /*Olive Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /*Bright Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /*Gasoline Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /*Galaxy Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /*Saxon Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /*Mariner Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /*Harbor Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /*Diamond Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /*Surf Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /*Nautical Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /*Racing Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ULTRA_BLUE" /*Ultra Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /*Light Blue*/, 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CHOCOLATE_BROWN" /*Chocolate Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /*Bison Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /*Creek Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /*Feltzer Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /*Maple Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /*Beechwood Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /*Sienna Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /*Saddle Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /*Moss Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /*Woodbeech Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /*Straw Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /*Sandy Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /*Bleached Brown*/, 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /*Spinnaker Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /*Bright Purple*/, 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /*Cream*/, 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /*Frost White*/, 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_GRAPHITE" /*Carbon Black*/, 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRAPHITE" /*Graphite*/, 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ANTHR_BLACK" /*Anthracite Black*/, 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK_STEEL" /*Black Steel*/, 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_SILVER" /*Dark Steel*/, 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SILVER" /*Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE_SILVER" /*Bluish Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ROLLED_STEEL" /*Rolled Steel*/, 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SHADOW_SILVER" /*Shadow Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STONE_SILVER" /*Stone Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_SILVER" /*Midnight Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CAST_IRON_SIL" /*Cast Iron Silver*/, 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "TORINO_RED" /*Torino Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FORMULA_RED" /*Formula Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LAVA_RED" /*Lava Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLAZE_RED" /*Blaze Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GRACE_RED" /*Grace Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GARNET_RED" /*Garnet Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNSET_RED" /*Sunset Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CABERNET_RED" /*Cabernet Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WINE_RED" /*Wine Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CANDY_RED" /*Candy Red*/, 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HOT PINK" /*Hot Pink*/, 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PINK" /*Pfister Pink*/, 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SALMON_PINK" /*Salmon Pink*/, 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SUNRISE_ORANGE" /*Sunrise Orange*/, 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_ORANGE" /*Bright Orange*/, 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD" /*Gold*/, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRONZE" /*Bronze*/, 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FLUR_YELLOW" /*Dew Yellow*/, 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_GREEN" /*Dark Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SEA_GREEN" /*Sea Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "OLIVE_GREEN" /*Olive Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_GREEN" /*Bright Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PETROL_GREEN" /*Gasoline Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIME_GREEN" /*Lime Green*/, 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GALAXY_BLUE" /*Galaxy Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SAXON_BLUE" /*Saxon Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MARINER_BLUE" /*Mariner Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "HARBOR_BLUE" /*Harbor Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DIAMOND_BLUE" /*Diamond Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SURF_BLUE" /*Surf Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "NAUTICAL_BLUE" /*Nautical Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RACING_BLUE" /*Racing Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_BLUE" /*Light Blue*/, 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BISON_BROWN" /*Bison Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREEK_BROWN" /*Creek Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "UMBER_BROWN" /*Feltzer Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MAPLE_BROWN" /*Maple Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BEECHWOOD_BROWN" /*Beechwood Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SIENNA_BROWN" /*Sienna Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SADDLE_BROWN" /*Saddle Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MOSS_BROWN" /*Moss Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WOODBEECH_BROWN" /*Woodbeech Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "STRAW_BROWN" /*Straw Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SANDY_BROWN" /*Sandy Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLEECHED_BROWN" /*Bleached Brown*/, 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "PURPLE" /*Schafter Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "SPIN_PURPLE" /*Spinnaker Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BRIGHT_PURPLE" /*Bright Purple*/, 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "CREAM" /*Cream*/, 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "FROST_WHITE" /*Frost White*/, 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLACK" /*Black*/, 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GREY" /*Gray*/, 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "LIGHT_GREY" /*Light Gray*/, 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "WHITE" /*Ice White*/, 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BLUE" /*Blue*/, 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_BLUE" /*Dark Blue*/, 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIDNIGHT_BLUE" /*Midnight Blue*/, 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MIGHT_PURPLE" /*Midnight Purple*/, 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "Purple" /*Schafter Purple*/, 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "RED" /*Red*/, 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "DARK_RED" /*Dark Red*/, 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "ORANGE" /*Orange*/, 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "YELLOW" /*Yellow*/, 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GREEN" /*Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOR" /*Forest Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_FOIL" /*Foliage Green*/, 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_OD" /*Olive Drab*/, 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DIRT" /*Dark Earth*/, 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "MATTE_DESERT" /*Desert Tan*/, 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_STEEL" /*Brushed Steel*/, 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "BR_ALUMINIUM" /*Brushed Aluminum*/, 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_P" /*Pure Gold*/, 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "GOLD_S" /*Brushed Gold*/, 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}

	return *uParam2 != -1;
}

int func_306(int iParam0) // Position - 0xFF38
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 156:
			num = 0;
			break;
	
		case 0:
			num = 1;
			break;
	
		case 1:
			num = 2;
			break;
	
		case 11:
			num = 3;
			break;
	
		case 2:
			num = 4;
			break;
	
		case 8:
			num = 5;
			break;
	
		case 122:
			num = 6;
			break;
	
		case 27:
			num = 7;
			break;
	
		case 30:
			num = 8;
			break;
	
		case 45:
			num = 9;
			break;
	
		case 35:
			num = 10;
			break;
	
		case 33:
			num = 11;
			break;
	
		case 136:
			num = 12;
			break;
	
		case 135:
			num = 13;
			break;
	
		case 36:
			num = 14;
			break;
	
		case 41:
			num = 15;
			break;
	
		case 138:
			num = 16;
			break;
	
		case 37:
			num = 17;
			break;
	
		case 99:
			num = 18;
			break;
	
		case 90:
			num = 19;
			break;
	
		case 95:
			num = 20;
			break;
	
		case 115:
			num = 21;
			break;
	
		case 109:
			num = 22;
			break;
	
		case 153:
			num = 23;
			break;
	
		case 154:
			num = 24;
			break;
	
		case 88:
			num = 25;
			break;
	
		case 89:
			num = 26;
			break;
	
		case 91:
			num = 27;
			break;
	
		case 55:
			num = 28;
			break;
	
		case 125:
			num = 29;
			break;
	
		case 53:
			num = 30;
			break;
	
		case 56:
			num = 31;
			break;
	
		case 151:
			num = 32;
			break;
	
		case 82:
			num = 33;
			break;
	
		case 64:
			num = 34;
			break;
	
		case 87:
			num = 35;
			break;
	
		case 70:
			num = 36;
			break;
	
		case 140:
			num = 37;
			break;
	
		case 81:
			num = 38;
			break;
	
		case 145:
			num = 39;
			break;
	
		case 142:
			num = 40;
			break;
	}

	return num;
}

BOOL func_307(int iParam0, char* sParam1, Vehicle veParam2) // Position - 0x10217
{
	var unk;
	Hash hash;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	hash = func_308(VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam2));

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(hash))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), hash, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

Hash func_308(int iParam0) // Position - 0x10270
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "VEM_", 32);

	switch (iParam0)
	{
		case -1:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_INVALID", 32);
			break;
	
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SPORT", 32);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_MUSCLE", 32);
			break;
	
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_LOWRIDER", 32);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SUV", 32);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_OFFROAD", 32);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_TUNER", 32);
			break;
	
		case 6:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_BIKE", 32);
			break;
	
		case 7:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_HIEND", 32);
			break;
	
		case 8:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SUPERMOD1", 32);
			break;
	
		case 9:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SUPERMOD2", 32);
			break;
	
		case 10:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SUPERMOD3", 32);
			break;
	
		case 11:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SUPERMOD4", 32);
			break;
	
		case 12:
			TEXT_LABEL_APPEND_STRING(&unk, "MWT_SUPERMOD5", 32);
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, "_t", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_v0", 32);
	return MISC::GET_HASH_KEY(&unk);
}

BOOL func_309(int iParam0, char* sParam1, Vehicle veParam2, int iParam3, int iParam4) // Position - 0x10391
{
	var unk;
	var unk17;
	int vehicleMod;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, "VEM_", 64);
	vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam2, iParam3);

	if (vehicleMod == -1 || iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam2)))
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam2)))
			TEXT_LABEL_APPEND_STRING(&unk17, "CMOD_WHE_B_0" /*Stock Wheel*/, 64);
		else
			TEXT_LABEL_APPEND_STRING(&unk17, "CMOD_WHE_0" /*Stock Wheels*/, 64);
	else
		TEXT_LABEL_APPEND_STRING(&unk17, VEHICLE::GET_MOD_TEXT_LABEL(veParam2, iParam3, vehicleMod), 64);

	TEXT_LABEL_APPEND_STRING(&unk17, "_t19_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

BOOL func_310(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x10459
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, "VEM_", 64);
	TEXT_LABEL_APPEND_STRING(&unk17, sParam2, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam3, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

char* func_311(int iParam0) // Position - 0x104D8
{
	char* str;
	int num;

	str = "";
	num = iParam0;

	switch (num)
	{
		case 0:
			str = "CMOD_HRN_0" /*Stock Horn*/;
			break;
	
		case 1:
			str = "HORN_INDI_1";
			break;
	
		case 2:
			str = "HORN_INDI_2";
			break;
	
		case 3:
			str = "HORN_INDI_3";
			break;
	
		case 4:
			str = "HORN_INDI_4";
			break;
	
		case 5:
			str = "HORN_HIPS1";
			break;
	
		case 6:
			str = "HORN_HIPS2";
			break;
	
		case 7:
			str = "HORN_HIPS3";
			break;
	
		case 8:
			str = "HORN_HIPS4";
			break;
	
		case 9:
			str = "HORN_CNOTE_C0";
			break;
	
		case 10:
			str = "HORN_CNOTE_D0";
			break;
	
		case 11:
			str = "HORN_CNOTE_E0";
			break;
	
		case 12:
			str = "HORN_CNOTE_F0";
			break;
	
		case 13:
			str = "HORN_CNOTE_G0";
			break;
	
		case 14:
			str = "HORN_CNOTE_A0";
			break;
	
		case 15:
			str = "HORN_CNOTE_B0";
			break;
	
		case 16:
			str = "HORN_CNOTE_C1";
			break;
	
		case 17:
			str = "HORN_CLAS1";
			break;
	
		case 18:
			str = "HORN_CLAS2";
			break;
	
		case 19:
			str = "HORN_CLAS3";
			break;
	
		case 20:
			str = "HORN_CLAS4";
			break;
	
		case 21:
			str = "HORN_CLAS5";
			break;
	
		case 22:
			str = "HORN_CLAS6";
			break;
	
		case 23:
			str = "HORN_CLAS7";
			break;
	
		case 24:
			str = "HORN_LUXE1";
			break;
	
		case 25:
			str = "HORN_LUXE2";
			break;
	
		case 26:
			str = "HORN_LUXE3";
			break;
	
		case 30:
			str = "HORN_LOWRDER1";
			break;
	
		case 31:
			str = "HORN_LOWRDER2";
			break;
	
		case 34:
			str = "HORN_HWEEN1";
			break;
	
		case 35:
			str = "HORN_HWEEN2";
			break;
	
		case 38:
			str = "HORN_XM15_1";
			break;
	
		case 39:
			str = "HORN_XM15_2";
			break;
	
		case 40:
			str = "HORN_XM15_3";
			break;
	
		case 46:
			str = "CMOD_HRN_CLO" /*Clown Horn*/;
			break;
	
		case 45:
			str = "CMOD_HRN_COP" /*Cop Horn*/;
			break;
	
		case 44:
			str = "CMOD_HRN_TRK" /*Truck Horn*/;
			break;
	
		case 47:
			str = "CMOD_HRN_MUS1" /*Musical Horn 1*/;
			break;
	
		case 48:
			str = "CMOD_HRN_MUS2" /*Musical Horn 2*/;
			break;
	
		case 49:
			str = "CMOD_HRN_MUS3" /*Musical Horn 3*/;
			break;
	
		case 50:
			str = "CMOD_HRN_MUS4" /*Musical Horn 4*/;
			break;
	
		case 51:
			str = "CMOD_HRN_MUS5" /*Musical Horn 5*/;
			break;
	
		case 52:
			str = "CMOD_HRN_SAD" /*Sad Trombone*/;
			break;
	
		case 53:
			str = "CMOD_AIRHORN_01" /*Air Horn 1*/;
			break;
	
		case 54:
			str = "CMOD_AIRHORN_02" /*Air Horn 2*/;
			break;
	
		case 55:
			str = "CMOD_AIRHORN_03" /*Air Horn 3*/;
			break;
	}

	return str;
}

int func_312(Hash hParam0) // Position - 0x107A4
{
	switch (hParam0)
	{
		case joaat("indep_horn_1"):
			return 1;
	
		case joaat("indep_horn_2"):
			return 2;
	
		case joaat("indep_horn_3"):
			return 3;
	
		case joaat("indep_horn_4"):
			return 4;
	
		case joaat("hipster_horn_1"):
			return 5;
	
		case joaat("hipster_horn_2"):
			return 6;
	
		case joaat("hipster_horn_3"):
			return 7;
	
		case joaat("hipster_horn_4"):
			return 8;
	
		case joaat("dlc_busi2_c_major_notes_c0"):
			return 9;
	
		case joaat("dlc_busi2_c_major_notes_d0"):
			return 10;
	
		case joaat("dlc_busi2_c_major_notes_e0"):
			return 11;
	
		case joaat("dlc_busi2_c_major_notes_f0"):
			return 12;
	
		case joaat("dlc_busi2_c_major_notes_g0"):
			return 13;
	
		case joaat("dlc_busi2_c_major_notes_a0"):
			return 14;
	
		case joaat("dlc_busi2_c_major_notes_b0"):
			return 15;
	
		case joaat("dlc_busi2_c_major_notes_c1"):
			return 16;
	
		case joaat("musical_horn_business_1"):
			return 17;
	
		case joaat("musical_horn_business_2"):
			return 18;
	
		case joaat("musical_horn_business_3"):
			return 19;
	
		case joaat("musical_horn_business_4"):
			return 20;
	
		case joaat("musical_horn_business_5"):
			return 21;
	
		case joaat("musical_horn_business_6"):
			return 22;
	
		case joaat("musical_horn_business_7"):
			return 23;
	
		case joaat("luxe_horn_2"):
			return 24;
	
		case joaat("luxe_horn_1"):
			return 25;
	
		case joaat("luxe_horn_3"):
			return 26;
	
		case joaat("luxury_horn_2"):
			return 27;
	
		case joaat("luxory_horn_1"):
			return 28;
	
		case joaat("luxury_horn_3"):
			return 29;
	
		case joaat("LOWRIDER_HORN_1"):
			return 30;
	
		case joaat("LOWRIDER_HORN_2"):
			return 31;
	
		case joaat("LOWRIDER_HORN_1_PREVIEW"):
			return 32;
	
		case joaat("LOWRIDER_HORN_2_PREVIEW"):
			return 33;
	
		case joaat("ORGAN_HORN_LOOP_01"):
			return 34;
	
		case joaat("ORGAN_HORN_LOOP_02"):
			return 35;
	
		case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
			return 36;
	
		case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
			return 37;
	
		case joaat("XM15_HORN_01"):
			return 38;
	
		case joaat("XM15_HORN_02"):
			return 39;
	
		case joaat("XM15_HORN_03"):
			return 40;
	
		case joaat("XM15_HORN_01_PREVIEW"):
			return 41;
	
		case joaat("XM15_HORN_02_PREVIEW"):
			return 42;
	
		case joaat("XM15_HORN_03_PREVIEW"):
			return 43;
	
		case joaat("HORN_CLOWN"):
			return 46;
	
		case joaat("HORN_COP"):
			return 45;
	
		case joaat("HORN_TRUCK"):
			return 44;
	
		case joaat("HORN_MUSICAL_1"):
			return 47;
	
		case joaat("HORN_MUSICAL_2"):
			return 48;
	
		case joaat("HORN_MUSICAL_3"):
			return 49;
	
		case joaat("HORN_MUSICAL_4"):
			return 50;
	
		case joaat("HORN_MUSICAL_5"):
			return 51;
	
		case joaat("HORN_SAD_TROMBONE"):
			return 52;
	
		case joaat("dlc_aw_airhorn_01"):
			return 53;
	
		case joaat("dlc_aw_airhorn_02"):
			return 54;
	
		case joaat("dlc_aw_airhorn_03"):
			return 55;
	
		case joaat("dlc_aw_airhorn_01_preview"):
			return 56;
	
		case joaat("dlc_aw_airhorn_02_preview"):
			return 57;
	
		case joaat("dlc_aw_airhorn_03_preview"):
			return 58;
	}

	return 0;
}

int func_313(BOOL bParam0) // Position - 0x10AD9
{
	if (bParam0)
		return 1;

	return 0;
}

BOOL func_314(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, Vehicle veParam7, int iParam8) // Position - 0x10AEB
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	if (iParam8 != 23)
		if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam7, iParam8) == 0)
			if (iParam8 >= 0 && iParam8 < 64 && !IS_BIT_SET(Global_4540730[iParam8 / 32], iParam8 % 32))
				return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam2, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_", 64);

	if (iParam4 == 33)
		if (iParam3 < 0 || iParam3 > 3)
			iParam3 = 0;

	TEXT_LABEL_APPEND_INT(&unk17, iParam3, 64);

	if (iParam6 != -1)
	{
		TEXT_LABEL_APPEND_STRING(&unk17, "_n", 64);
		TEXT_LABEL_APPEND_INT(&unk17, iParam6, 64);
	}

	TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam5, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

int func_315(Vehicle veParam0) // Position - 0x10BDE
{
	int num;

	num = -1;

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			num = 1;
			break;
	
		case joaat("avenger"):
			num = 2;
			break;
	}

	return num;
}

int func_316(Hash hParam0) // Position - 0x10C20
{
	switch (hParam0)
	{
		case joaat("faction3"):
			return 12;
	
		case joaat("diablous"):
			return 4;
	
		case joaat("fcr"):
			return 4;
	}

	return func_330(hParam0);
}

int func_317(Hash hParam0) // Position - 0x10C5D
{
	switch (hParam0)
	{
		case joaat("btype2"):
			return 9;
	
		case joaat("lurcher"):
			return 8;
	
		case joaat("sultanrs"):
			return 6;
	
		case joaat("banshee2"):
			return 7;
	
		case joaat("btype3"):
			return 5;
	
		case joaat("omnis"):
			return 13;
	
		case joaat("bf400"):
			return 14;
	
		case joaat("tropos"):
			return 15;
	
		case joaat("brioso"):
			return 16;
	
		case joaat("trophytruck"):
			return 17;
	
		case joaat("trophytruck2"):
			return 18;
	
		case joaat("cliffhanger"):
			return 19;
	
		case joaat("tampa2"):
			return 20;
	
		case joaat("gargoyle"):
			return 21;
	
		case joaat("le7b"):
			return 22;
	
		case joaat("lynx"):
			return 24;
	
		case joaat("sheava"):
			return 25;
	
		case joaat("diablous2"):
			return 28;
	
		case joaat("fcr2"):
			return 28;
	
		case joaat("italigtb2"):
			return 27;
	
		case joaat("specter2"):
			return 27;
	
		case joaat("nero2"):
			return 27;
	
		case joaat("comet3"):
			return 26;
	
		case joaat("elegy"):
			return 26;
	
		case joaat("trailerlarge"):
			return 32;
	
		case joaat("rcbandito"):
			return 39;
	
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
	}

	if (func_320(hParam0))
		return 33;
	else if (func_319(hParam0))
		return 34;

	if (func_318(hParam0))
		return 38;

	return 3;
}

BOOL func_318(Hash hParam0) // Position - 0x10E2F
{
	switch (hParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_319(Hash hParam0) // Position - 0x10F1B
{
	switch (hParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return true;
	}

	return false;
}

BOOL func_320(Hash hParam0) // Position - 0x10F62
{
	switch (hParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
			return true;
	}

	return false;
}

int func_321(Hash hParam0) // Position - 0x10FF1
{
	switch (hParam0)
	{
		case joaat("virgo2"):
			return 10;
	
		case joaat("slamvan3"):
			return 11;
	}

	switch (hParam0)
	{
		case joaat("sultanrs"):
			return 6;
	
		case joaat("banshee2"):
			return 7;
	}

	switch (hParam0)
	{
		case joaat("btype3"):
			return 5;
	}

	switch (hParam0)
	{
		case joaat("faction3"):
			return 3;
	
		case joaat("minivan2"):
			return 3;
	
		case joaat("sabregt2"):
			return 3;
	
		case joaat("slamvan3"):
			return 3;
	
		case joaat("tornado5"):
			return 3;
	
		case joaat("virgo2"):
			return 3;
	}

	switch (hParam0)
	{
		case joaat("diablous2"):
			return 28;
	
		case joaat("fcr2"):
			return 28;
	
		case joaat("italigtb2"):
			return 27;
	
		case joaat("specter2"):
			return 27;
	
		case joaat("nero2"):
			return 27;
	
		case joaat("comet3"):
			return 26;
	
		case joaat("elegy"):
			return 26;
	
		case joaat("rcbandito"):
			return 39;
	
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
	}

	if (func_318(hParam0))
		return 38;

	if (func_322(hParam0))
		return 38;

	return 3;
}

BOOL func_322(Hash hParam0) // Position - 0x11166
{
	switch (hParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("greenwood"):
		case joaat("omnisegt"):
		case 669204833:
		case 1076201208:
			return true;
	}

	return false;
}

int func_323(Hash hParam0) // Position - 0x111B9
{
	switch (hParam0)
	{
		case joaat("virgo2"):
			return 10;
	
		case joaat("slamvan3"):
			return 11;
	}

	switch (hParam0)
	{
		case joaat("sultanrs"):
			return 6;
	
		case joaat("banshee2"):
			return 7;
	}

	switch (hParam0)
	{
		case joaat("btype3"):
			return 5;
	}

	switch (hParam0)
	{
		case joaat("faction3"):
			return 3;
	
		case joaat("minivan2"):
			return 0;
	
		case joaat("sabregt2"):
			return 0;
	
		case joaat("slamvan3"):
			return 0;
	
		case joaat("tornado5"):
			return 0;
	
		case joaat("virgo2"):
			return 3;
	
		case joaat("virgo3"):
			return 3;
	}

	switch (hParam0)
	{
		case joaat("fcr"):
			return 0;
	
		case joaat("diablous"):
			return 0;
	
		case joaat("diablous2"):
			return 28;
	
		case joaat("fcr2"):
			return 28;
	
		case joaat("italigtb"):
			return 3;
	
		case joaat("specter"):
			return 3;
	
		case joaat("nero"):
			return 3;
	
		case joaat("italigtb2"):
			return 27;
	
		case joaat("specter2"):
			return 27;
	
		case joaat("nero2"):
			return 27;
	
		case joaat("comet3"):
			return 26;
	
		case joaat("elegy"):
			return 26;
	
		case joaat("youga3"):
			return 27;
	
		case joaat("gauntlet5"):
			return 27;
	
		case joaat("manana2"):
			return 27;
	
		case joaat("peyote3"):
			return 27;
	
		case joaat("yosemite3"):
			return 27;
	
		case joaat("glendale2"):
			return 27;
	}

	switch (hParam0)
	{
		case joaat("apc"):
			return 29;
	
		case joaat("halftrack"):
			return 29;
	
		case joaat("trailersmall2"):
			return 29;
	
		case joaat("deluxo"):
			return 29;
	
		case joaat("stromberg"):
			return 29;
	
		case joaat("caracara"):
			return 29;
	
		case joaat("dune3"):
			return 30;
	
		case joaat("insurgent3"):
			return 30;
	
		case joaat("tampa3"):
			return 30;
	
		case joaat("technical3"):
			return 30;
	
		case joaat("oppressor"):
			return 31;
	
		case joaat("oppressor2"):
			return 31;
	
		case joaat("phantom3"):
			return 32;
	
		case joaat("hauler2"):
			return 32;
	
		case joaat("trailerlarge"):
			return 32;
	
		case joaat("barrage"):
			return 35;
	
		case joaat("mule4"):
			return 37;
	
		case joaat("speedo4"):
			return 36;
	
		case joaat("pounder2"):
			return 36;
	
		case joaat("rcbandito"):
			return 39;
	
		case joaat("minitank"):
			return 36;
	
		case joaat("jb7002"):
			return 36;
	}

	if (func_320(hParam0))
		return 33;
	else if (func_319(hParam0))
		return 34;
	else if (func_318(hParam0))
		return 38;

	switch (hParam0)
	{
		case joaat("vigilante"):
			return 31;
	}

	if (func_322(hParam0) || hParam0 == -1576586413)
		return 38;

	if (func_324(hParam0))
		return 3;

	if (VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0))
		return 4;

	switch (hParam0)
	{
		case joaat("adder"):
			return 3;
	
		case joaat("airbus"):
			return 0;
	
		case joaat("akuma"):
			return 4;
	
		case joaat("alpha"):
			return 3;
	
		case joaat("annihilator"):
			return 0;
	
		case joaat("asea"):
			return 0;
	
		case joaat("asterope"):
			return 0;
	
		case joaat("baller2"):
			return 2;
	
		case joaat("banshee"):
			return 3;
	
		case joaat("barracks"):
			return 0;
	
		case joaat("bati"):
			return 4;
	
		case joaat("bati2"):
			return 4;
	
		case joaat("besra"):
			return 0;
	
		case joaat("bfinjection"):
			return 0;
	
		case joaat("bifta"):
			return 0;
	
		case joaat("bison"):
			return 2;
	
		case joaat("blade"):
			return 3;
	
		case joaat("blazer"):
			return 0;
	
		case joaat("blazer3"):
			return 0;
	
		case joaat("bmx"):
			return 0;
	
		case joaat("bobcatxl"):
			return 2;
	
		case joaat("bodhi2"):
			return 0;
	
		case joaat("btype"):
			return 0;
	
		case joaat("buffalo"):
			return 0;
	
		case joaat("buffalo2"):
			return 1;
	
		case joaat("bullet"):
			return 3;
	
		case joaat("bus"):
			return 0;
	
		case joaat("buzzard"):
			return 0;
	
		case joaat("carbonizzare"):
			return 3;
	
		case joaat("carbonrs"):
			return 3;
	
		case joaat("cavalcade"):
			return 2;
	
		case joaat("cavalcade2"):
			return 2;
	
		case joaat("cheetah"):
			return 3;
	
		case joaat("coach"):
			return 0;
	
		case joaat("cogcabrio"):
			return 3;
	
		case joaat("comet2"):
			return 3;
	
		case joaat("coquette"):
			return 3;
	
		case joaat("coquette2"):
			return 1;
	
		case joaat("cruiser"):
			return 0;
	
		case joaat("crusader"):
			return 0;
	
		case joaat("cuban800"):
			return 0;
	
		case joaat("dilettante"):
			return 0;
	
		case joaat("dilettante2"):
			return 0;
	
		case joaat("dominator"):
			return 1;
	
		case joaat("dominator2"):
			return 1;
	
		case joaat("double"):
			return 4;
	
		case joaat("dubsta3"):
			return 3;
	
		case joaat("dump"):
			return 0;
	
		case joaat("dune"):
			return 0;
	
		case joaat("duster"):
			return 0;
	
		case joaat("elegy2"):
			return 3;
	
		case joaat("entityxf"):
			return 3;
	
		case joaat("exemplar"):
			return 3;
	
		case joaat("f620"):
			return 1;
	
		case joaat("faggio2"):
			return 4;
	
		case joaat("felon"):
			return 0;
	
		case joaat("felon2"):
			return 0;
	
		case joaat("feltzer2"):
			return 3;
	
		case joaat("frogger"):
			return 0;
	
		case joaat("frogger2"):
			return 0;
	
		case joaat("fugitive"):
			return 0;
	
		case joaat("fusilade"):
			return 1;
	
		case joaat("gauntlet"):
			return 0;
	
		case joaat("gauntlet2"):
			return 0;
	
		case joaat("glendale"):
			return 3;
	
		case joaat("granger"):
			return 2;
	
		case joaat("gresley"):
			return 2;
	
		case joaat("hexer"):
			return 4;
	
		case joaat("hotknife"):
			return 3;
	
		case joaat("huntley"):
			return 1;
	
		case joaat("hydra"):
			return 0;
	
		case joaat("infernus"):
			return 3;
	
		case joaat("ingot"):
			return 0;
	
		case joaat("intruder"):
			return 0;
	
		case joaat("issi2"):
			return 0;
	
		case joaat("jackal"):
			return 1;
	
		case joaat("jb700"):
			return 3;
	
		case joaat("jester"):
			return 3;
	
		case joaat("jester2"):
			return 3;
	
		case joaat("jetmax"):
			return 0;
	
		case joaat("journey"):
			return 0;
	
		case joaat("kalahari"):
			return 0;
	
		case joaat("khamelion"):
			return 3;
	
		case joaat("landstalker"):
			return 2;
	
		case joaat("luxor"):
			return 0;
	
		case joaat("mammatus"):
			return 0;
	
		case joaat("marquis"):
			return 0;
	
		case joaat("massacro"):
			return 3;
	
		case joaat("massacro2"):
			return 3;
	
		case joaat("maverick"):
			return 0;
	
		case joaat("mesa"):
			return 2;
	
		case joaat("mesa2"):
			return 2;
	
		case joaat("mesa3"):
			return 2;
	
		case joaat("miljet"):
			return 0;
	
		case joaat("minivan"):
			return 0;
	
		case joaat("monroe"):
			return 3;
	
		case joaat("monster"):
			return 0;
	
		case joaat("mule"):
			return 0;
	
		case joaat("mule2"):
			return 0;
	
		case joaat("mule3"):
			return 0;
	}

	switch (hParam0)
	{
		case joaat("nemesis"):
			return 4;
	
		case joaat("ninef"):
			return 3;
	
		case joaat("ninef2"):
			return 3;
	
		case joaat("oracle"):
			return 1;
	
		case joaat("oracle2"):
			return 1;
	
		case joaat("panto"):
			return 3;
	
		case joaat("paradise"):
			return 0;
	
		case joaat("pcj"):
			return 4;
	
		case joaat("penumbra"):
			return 1;
	
		case joaat("picador"):
			return 0;
	
		case joaat("pigalle"):
			return 3;
	
		case joaat("premier"):
			return 0;
	
		case joaat("primo"):
			return 0;
	
		case joaat("radi"):
			return 0;
	
		case joaat("rancherxl"):
			return 2;
	
		case joaat("rancherxl2"):
			return 2;
	
		case joaat("rapidgt"):
			return 3;
	
		case joaat("ratloader"):
			return 2;
	
		case joaat("ratloader2"):
			return 2;
	
		case joaat("rebel"):
			return 2;
	
		case joaat("rebel2"):
			return 2;
	
		case joaat("regina"):
			return 0;
	
		case joaat("rentalbus"):
			return 0;
	
		case joaat("rhapsody"):
			return 3;
	
		case joaat("rhino"):
			return 0;
	
		case joaat("rocoto"):
			return 2;
	
		case joaat("ruffian"):
			return 4;
	
		case joaat("rumpo"):
			return 0;
	
		case joaat("sadler"):
			return 2;
	
		case joaat("sanchez"):
			return 4;
	
		case joaat("sanchez2"):
			return 4;
	
		case joaat("sandking"):
			return 2;
	
		case joaat("sandking2"):
			return 2;
	
		case joaat("schafter2"):
			return 1;
	
		case joaat("schwarzer"):
			return 1;
	
		case joaat("scorcher"):
			return 0;
	
		case joaat("seashark"):
			return 0;
	
		case joaat("seminole"):
			return 2;
	
		case joaat("sentinel"):
			return 1;
	
		case joaat("sentinel2"):
			return 1;
	
		case joaat("shamal"):
			return 0;
	
		case joaat("sovereign"):
			return 4;
	
		case joaat("speeder"):
			return 0;
	
		case joaat("squalo"):
			return 0;
	
		case joaat("stanier"):
			return 0;
	
		case joaat("stinger"):
			return 3;
	
		case joaat("stingergt"):
			return 3;
	
		case joaat("stratum"):
			return 0;
	
		case joaat("stretch"):
			return 0;
	
		case joaat("stunt"):
			return 0;
	
		case joaat("suntrap"):
			return 0;
	
		case joaat("superd"):
			return 3;
	
		case joaat("surano"):
			return 3;
	
		case joaat("surfer"):
			return 0;
	
		case joaat("surge"):
			return 0;
	
		case joaat("tailgater"):
			return 0;
	
		case joaat("thrust"):
			return 4;
	
		case joaat("titan"):
			return 0;
	
		case joaat("tribike"):
			return 4;
	
		case joaat("tribike2"):
			return 4;
	
		case joaat("tribike3"):
			return 4;
	
		case joaat("tropic"):
			return 0;
	
		case joaat("turismor"):
			return 3;
	
		case joaat("vacca"):
			return 3;
	
		case joaat("vader"):
			return 4;
	
		case joaat("valkyrie"):
			return 0;
	
		case joaat("velum"):
			return 0;
	
		case joaat("vestra"):
			return 0;
	
		case joaat("vigero"):
			return 1;
	
		case joaat("voltic"):
			return 3;
	
		case joaat("warrener"):
			return 3;
	
		case joaat("washington"):
			return 0;
	
		case joaat("youga"):
			return 2;
	
		case joaat("zentorno"):
			return 3;
	
		case joaat("zion"):
			return 1;
	
		case joaat("zion2"):
			return 1;
	
		case joaat("ztype"):
			return 3;
	
		case joaat("swift"):
			return 0;
	
		case joaat("innovation"):
			return 4;
	
		case joaat("hakuchou"):
			return 4;
	
		case joaat("furoregt"):
			return 0;
	
		case joaat("kuruma"):
			return 3;
	
		case joaat("blista2"):
			return 0;
	
		case joaat("blista3"):
			return 0;
	
		case joaat("buffalo3"):
			return 1;
	
		case joaat("dodo"):
			return 0;
	
		case joaat("dominator"):
			return 1;
	
		case joaat("dominator2"):
			return 1;
	
		case joaat("dukes"):
			return 1;
	
		case joaat("dukes2"):
			return 0;
	
		case joaat("marshall"):
			return 0;
	
		case joaat("stalion"):
			return 0;
	
		case joaat("stalion2"):
			return 0;
	
		case joaat("submersible"):
			return 0;
	
		case joaat("submersible2"):
			return 0;
	}

	switch (hParam0)
	{
		case joaat("bagger"):
			return 4;
	
		case joaat("baller"):
			return 2;
	
		case joaat("bjxl"):
			return 2;
	
		case joaat("blista"):
			return 0;
	
		case joaat("blista2"):
			return 0;
	
		case joaat("buccaneer"):
			return 0;
	
		case joaat("daemon"):
			return 4;
	
		case joaat("dloader"):
			return 0;
	
		case joaat("fq2"):
			return 0;
	
		case joaat("habanero"):
			return 0;
	
		case joaat("manana"):
			return 0;
	
		case joaat("patriot"):
			return 2;
	
		case joaat("peyote"):
			return 0;
	
		case joaat("phoenix"):
			return 0;
	
		case joaat("prairie"):
			return 0;
	
		case joaat("sabregt"):
			return 0;
	
		case joaat("serrano"):
			return 2;
	
		case joaat("speedo"):
			return 0;
	
		case joaat("speedo2"):
			return 0;
	
		case joaat("voodoo2"):
			return 0;
	
		case joaat("romero"):
			return 0;
	
		case joaat("surfer2"):
			return 0;
	
		case joaat("emperor2"):
			return 0;
	
		case joaat("dubsta2"):
			return 2;
	
		case joaat("blazer2"):
			return 0;
	
		case joaat("oracle2"):
			return 1;
	
		case joaat("cavalcade2"):
			return 2;
	
		case joaat("dubsta"):
			return 2;
	
		case joaat("rapidgt2"):
			return 1;
	
		case joaat("boxville4"):
			return 0;
	
		case joaat("mesa"):
			return 2;
	}

	switch (hParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
	
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
	
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
	
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
	
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
	
		case joaat("contender"):
			return 2;
	
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
	
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("comet7"):
		case joaat("ignus"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("mule5"):
		case joaat("iwagen"):
			return 3;
	}

	return 0;
}

BOOL func_324(Hash hParam0) // Position - 0x124AC
{
	switch (hParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return true;
	
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return true;
	
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return true;
	
		case joaat("faction3"):
		case joaat("virgo2"):
			return true;
	
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return true;
	
		case joaat("tampa"):
			return true;
	
		case joaat("banshee2"):
			return true;
	
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return true;
	
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return true;
	
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return true;
	
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return true;
	
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return true;
	
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return true;
	
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return true;
	
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return true;
	}

	switch (hParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("mule5"):
		case joaat("champion"):
		case joaat("iwagen"):
		case joaat("reever"):
		case joaat("shinobi"):
			return true;
	}

	switch (hParam0)
	{
		case joaat("brioso3"):
		case joaat("corsita"):
		case joaat("draugur"):
		case joaat("greenwood"):
		case joaat("kanjosj"):
		case joaat("lm87"):
		case joaat("postlude"):
		case joaat("rhinehart"):
		case joaat("sm722"):
		case joaat("tenf"):
		case joaat("tenf2"):
		case joaat("torero2"):
		case joaat("vigero2"):
		case joaat("weevil2"):
		case joaat("ruiner4"):
		case joaat("sentinel4"):
		case joaat("conada"):
		case joaat("omnisegt"):
		case -1249788006:
		case -1035489563:
		case -1627077503:
		case 1748565021:
		case 2100457220:
		case 996383885:
		case -131348178:
		case 268758436:
		case 1550581940:
		case -1933242328:
		case -461850249:
			return true;
	}

	return false;
}

BOOL func_325(int iParam0, char* sParam1, Hash hParam2) // Position - 0x12E59
{
	var unk;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(hParam2))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), hParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

Hash func_326(int iParam0) // Position - 0x12EA6
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "VEM_", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_METALLIC", 32);
			break;
	
		case 1:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_CLASSIC", 32);
			break;
	
		case 2:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_PEARLESCENT", 32);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_MATTE", 32);
			break;
	
		case 4:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_METALS", 32);
			break;
	
		case 5:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_CHROME", 32);
			break;
	
		case 7:
			TEXT_LABEL_APPEND_STRING(&unk, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}

	TEXT_LABEL_APPEND_STRING(&unk, "_t", 32);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 32);
	TEXT_LABEL_APPEND_STRING(&unk, "_v0", 32);
	return MISC::GET_HASH_KEY(&unk);
}

BOOL func_327(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Position - 0x12F54
{
	var unk;
	var unk17;

	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
		return true;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "VEM_", 64);

	if (iParam3 == 1)
		TEXT_LABEL_APPEND_STRING(&unk17, "COLOUR_1_", 64);
	else if (iParam3 == 2)
		TEXT_LABEL_APPEND_STRING(&unk17, "COLOUR_2_", 64);
	else if (iParam3 == 3)
		TEXT_LABEL_APPEND_STRING(&unk17, "COLOUR_EXTRA_1_", 64);

	if (iParam6 == 5)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_CHROME_", 64);
	else if (iParam6 == 1)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_CLASSIC_", 64);
	else if (iParam6 == 0)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_METALLIC_", 64);
	else if (iParam6 == 4)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_METALS_", 64);
	else if (iParam6 == 3)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_MATTE_", 64);
	else if (iParam6 == 2)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_PEARLESCENT_", 64);
	else if (iParam6 == 7)
		TEXT_LABEL_APPEND_STRING(&unk17, "MCT_NONE_", 64);

	TEXT_LABEL_APPEND_STRING(&unk17, sParam2, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_t", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam4, 64);
	TEXT_LABEL_APPEND_STRING(&unk17, "_v", 64);
	TEXT_LABEL_APPEND_INT(&unk17, iParam5, 64);

	if (iParam6 == 7)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk17, "VEM_COLOUR_MCT_NONE_", 64);
		TEXT_LABEL_APPEND_INT(&unk17, iParam7, 64);
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(MISC::GET_HASH_KEY(&unk17)))
		return true;

	return func_60(78225582, joaat("CATEGORY_INVENTORY_VEHICLE"), MISC::GET_HASH_KEY(&unk17), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&unk), 3);
}

void func_328(Vehicle veParam0, int* piParam1, char* sParam2, int* piParam3, int* piParam4, char* sParam5, int* piParam6, var uParam7, char* sParam8, int* piParam9, int* piParam10, BOOL bParam11) // Position - 0x1308B
{
	var unk;
	var unk2;
	int pearlescentColor;
	int paintType;
	int i;
	int numModColors;
	var colorPrimary;
	var colorSecondary;
	var pearlescentColor2;
	var colorSecondary2;

	VEHICLE::GET_VEHICLE_COLOURS(veParam0, piParam3, piParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, piParam9, piParam10);
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 16);
	TEXT_LABEL_ASSIGN_STRING(sParam5, "", 16);
	TEXT_LABEL_ASSIGN_STRING(sParam8, "", 16);

	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(veParam0, piParam1, &unk, &pearlescentColor);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(veParam0, piParam4, &unk2);
	}

	if (bParam11)
	{
		paintType = 0;
	
		while (paintType != 7)
		{
			numModColors = VEHICLE::GET_NUM_MOD_COLORS(paintType, true);
		
			for (i = 0; i < numModColors; i = i + 1)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_1(veParam0, paintType, i, pearlescentColor);
				VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary2);
			
				if (colorPrimary == *piParam3)
				{
					*piParam1 = paintType;
					TEXT_LABEL_ASSIGN_STRING(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(veParam0, false), 16);
					i = numModColors + 1;
				}
			}
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
				paintType = paintType + 1;
			else
				paintType = 7;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*piParam1 = 7;
		TEXT_LABEL_ASSIGN_INT(sParam2, *piParam3, 16);
	}

	if (bParam11)
	{
		i = 0;
		numModColors = VEHICLE::GET_NUM_MOD_COLORS(0, true);
	
		for (i = 0; i < numModColors; i = i + 1)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(veParam0, 0, i, i);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &pearlescentColor2, &colorSecondary2);
		
			if (pearlescentColor2 == *piParam9)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(veParam0, false), 16);
				i = numModColors + 1;
			}
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		TEXT_LABEL_ASSIGN_INT(sParam8, *piParam9, 16);
		*uParam7 = 7;
	}
	else
	{
		*uParam7 = *piParam1;
	}

	if (bParam11)
	{
		paintType = 0;
	
		while (paintType != 7)
		{
			i = 0;
			numModColors = VEHICLE::GET_NUM_MOD_COLORS(paintType, true);
		
			for (i = 0; i < numModColors; i = i + 1)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_2(veParam0, paintType, i);
				VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorSecondary2, &colorSecondary);
			
				if (colorSecondary == *piParam6)
				{
					*piParam4 = paintType;
					TEXT_LABEL_ASSIGN_STRING(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(veParam0), 16);
					i = numModColors + 1;
				}
			}
		
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				paintType = paintType + 1;
			else
				paintType = 7;
		}
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*piParam4 = 7;
		TEXT_LABEL_ASSIGN_INT(sParam5, *piParam6, 16);
	}

	VEHICLE::SET_VEHICLE_COLOURS(veParam0, *piParam3, *piParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, *piParam9, *piParam10);
	return;
}

BOOL func_329(Hash hParam0) // Position - 0x13271
{
	if (hParam0 == joaat("bmx"))
		return true;

	if (hParam0 == joaat("cruiser"))
		return true;

	if (hParam0 == joaat("scorcher"))
		return true;

	if (hParam0 == joaat("tribike") || hParam0 == joaat("tribike2") || hParam0 == joaat("tribike3"))
		return true;

	if (hParam0 == joaat("fixter"))
		return true;

	return false;
}

int func_330(Hash hParam0) // Position - 0x132DD
{
	switch (hParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("minitank"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("seasparrow2"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("sultan3"):
		case joaat("buffalo4"):
		case joaat("deity"):
		case joaat("jubilee"):
		case joaat("granger2"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("weevil2"):
		case joaat("tenf2"):
		case joaat("brioso3"):
		case joaat("sentinel4"):
		case 1384502824:
		case -1576586413:
		case -1249788006:
		case -1386336041:
		case -1035489563:
		case -1627077503:
		case 2100457220:
		case -1933242328:
		case 1550581940:
			return 3;
	}

	if (func_318(hParam0))
		return 3;

	if (func_322(hParam0))
		return 3;

	return func_323(hParam0);
}

Hash func_331(int iParam0) // Position - 0x13601
{
	var unk;

	if (iParam0 == -1)
		iParam0 = 0;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_0", 64);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_1", 64);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_2", 64);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_3", 64);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_4", 64);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_5", 64);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_6", 64);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_7", 64);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_8", 64);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}

	if (iParam0 >= 10)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "MP_STAT_MPSV_MODEL_", 64);
		TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
	}

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk))
		return -1;

	return MISC::GET_HASH_KEY(&unk);
}

Hash func_332(Hash hParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x136EB
{
	int num;
	var unk;
	var unk5;

	num = func_323(hParam0);
	TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam0), 16);

	if (bParam1)
		func_333(&unk5, unk, hParam0, 4, 1, num, iParam2, -1, false, bParam3);
	else
		func_333(&unk5, unk, hParam0, 4, 0, num, iParam2, -1, false, bParam3);

	return MISC::GET_HASH_KEY(&unk5);
}

void func_333(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, BOOL bParam12) // Position - 0x1373F
{
	switch (MISC::GET_HASH_KEY(&uParam1))
	{
		case joaat("GSA_TYPE_R1"):
		case joaat("GSA_TYPE_R"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R", 16);
			break;
	
		case joaat("GSA_TYPE_C1"):
		case joaat("GSA_TYPE_C"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C", 16);
			break;
	
		case joaat("GSA_TYPE_RO1"):
		case joaat("GSA_TYPE_RO"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO", 16);
			break;
	
		case joaat("GSA_TYPE_CH1"):
		case joaat("GSA_TYPE_CH"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH", 16);
			break;
	
		case joaat("GSA_TYPE_G1"):
		case joaat("GSA_TYPE_G"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G", 16);
			break;
	
		case joaat("GSA_TYPE_B1"):
		case joaat("GSA_TYPE_B"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B", 16);
			break;
	
		case joaat("GSA_TYPE_FW1"):
		case joaat("GSA_TYPE_FW"):
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_FW" /*Fireworks*/, 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (hParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (hParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (hParam5 == joaat("MP_M_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == joaat("MP_F_Freemode_01"))
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (hParam5 == Global_75654)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (hParam5 == Global_75655)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == Global_75656)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (hParam5 == Global_75657)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (hParam5 == Global_75658)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == joaat("kosatka"))
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (hParam5 == func_334())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (hParam5 == 1384502824)
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (hParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1) || MISC::GET_HASH_KEY(&uParam1) == joaat("carnotfound"))
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (hParam5)
				{
					case joaat("fcr2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case joaat("diablous2"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case joaat("comet3"):
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
					
						if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case joaat("tornado4"):
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);

	return;
}

Hash func_334() // Position - 0x13D9A
{
	return -1576586413;
}

BOOL func_335(var uParam0, var uParam1) // Position - 0x13DA7
{
	float entityCoords;

	STREAMING::REQUEST_MODEL(uParam0->f_66);

	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_66))
		return false;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
		return false;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	*uParam1 = VEHICLE::CREATE_VEHICLE(uParam0->f_66, entityCoords, entityCoords.f_1, entityCoords.f_2 + 200f, 0f, false, false, false);
	func_336(*uParam1, uParam0, true, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
	ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
	ENTITY::SET_ENTITY_COLLISION(*uParam1, false, false);
	return true;
}

void func_336(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x13E2A
{
	Hash entityModel;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (PLAYER::PLAYER_ID() != _INVALID_PLAYER_INDEX())
				uParam1->f_100 = PLAYER::PLAYER_ID();
		
			if (uParam1->f_70 == 0)
				uParam1->f_70 = 1;
		
			func_349(veParam0, uParam1, bParam2, bParam3);
		
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, true);
				}
			}
		
			if (func_322(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (uParam1->f_9[44] == 2)
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
				else
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
		
			if (!(uParam1->f_78 == -1) && uParam1->f_9[14] == -1)
				AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
		
			if (!(uParam1->f_79 == -1))
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
		
			if (func_348(uParam1->f_66, &num) && uParam1->f_80 != num)
				uParam1->f_80 = num;
		
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
		
			if (uParam1->f_99 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
		
			if (func_347(veParam0))
				func_345(veParam0, func_297(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >= 0)
				VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
		
			!func_340(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION();
		
			if (func_339(entityModel))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						break;
				
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 0, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						break;
				
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 1, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 3, false);
						break;
				
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						break;
				
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						
							if (VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab2")) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("scarab3")))
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
							else
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						}
						break;
				}
			}
		
			if (func_338(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
					
						if (uParam1->f_9[16] == 5)
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21747 + 0.05f);
						else
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21747);
					
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				}
			}
		
			switch (uParam1->f_94)
			{
				case 0:
					break;
			
				case 1:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
					{
						if (IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT))
					{
						DECORATOR::DECOR_SET_INT(veParam0, "Player_Vehicle", -1);
					}
					break;
			
				case 2:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
						if (IS_GAMER_HANDLE_VALID(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						else
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", -1);
					break;
			
				case 3:
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL IS_GAMER_HANDLE_VALID(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x142F6
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_338(Hash hParam0) // Position - 0x14306
{
	return func_322(hParam0);
}

BOOL func_339(Hash hParam0) // Position - 0x14314
{
	switch (hParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return true;
	}

	return false;
}

BOOL func_340(int iParam0) // Position - 0x14415
{
	int i;

	if (func_367())
	{
		for (i = 0; i < 60; i = i + 1)
		{
			if (func_344(i) == iParam0)
				if (func_341(i))
					return true;
		}
	}

	return false;
}

BOOL func_341(int iParam0) // Position - 0x14450
{
	return func_342(iParam0, 6, true);
}

BOOL func_342(int iParam0, int iParam1, BOOL bParam2) // Position - 0x14460
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (Global_32163 == 0)
			return IS_BIT_SET(func_19(func_343(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

eMPStat func_343(int iParam0) // Position - 0x144C0
{
	switch (iParam0)
	{
		case 0:
			return MP_STAT_SHOPFM_HAIRDO_01_BH;
	
		case 1:
			return MP_STAT_SHOPFM_HAIRDO_02_SC;
	
		case 2:
			return MP_STAT_SHOPFM_HAIRDO_03_V;
	
		case 3:
			return MP_STAT_SHOPFM_HAIRDO_04_SS;
	
		case 4:
			return MP_STAT_SHOPFM_HAIRDO_05_MP;
	
		case 5:
			return MP_STAT_SHOPFM_HAIRDO_06_HW;
	
		case 6:
			return MP_STAT_SHOPFM_HAIRDO_07_PB;
	
		case 7:
			return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
	
		case 8:
			return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
	
		case 9:
			return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
	
		case 10:
			return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
	
		case 11:
			return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
	
		case 12:
			return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
	
		case 13:
			return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
	
		case 14:
			return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
	
		case 15:
			return MP_STAT_SHOPFM_CLOTHES_M_03_H;
	
		case 16:
			return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
	
		case 17:
			return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
	
		case 18:
			return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
	
		case 19:
			return MP_STAT_SHOPFM_CLOTHES_H_02_B;
	
		case 20:
			return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
	
		case 21:
			return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
	
		case 22:
			return MP_STAT_SHOPFM_TATTOO_01_HW;
	
		case 23:
			return MP_STAT_SHOPFM_TATTOO_02_SS;
	
		case 24:
			return MP_STAT_SHOPFM_TATTOO_03_PB;
	
		case 25:
			return MP_STAT_SHOPFM_TATTOO_04_VC;
	
		case 26:
			return MP_STAT_SHOPFM_TATTOO_05_ELS;
	
		case 27:
			return MP_STAT_SHOPFM_TATTOO_06_GOH;
	
		case 28:
			return MP_STAT_SHOPFM_GUN_01_DT;
	
		case 29:
			return MP_STAT_SHOPFM_GUN_02_SS;
	
		case 30:
			return MP_STAT_SHOPFM_GUN_03_HW;
	
		case 31:
			return MP_STAT_SHOPFM_GUN_04_ELS;
	
		case 32:
			return MP_STAT_SHOPFM_GUN_05_PB;
	
		case 33:
			return MP_STAT_SHOPFM_GUN_06_LS;
	
		case 34:
			return MP_STAT_SHOPFM_GUN_07_MW;
	
		case 35:
			return MP_STAT_SHOPFM_GUN_08_CS;
	
		case 36:
			return MP_STAT_SHOPFM_GUN_09_GOH;
	
		case 37:
			return MP_STAT_SHOPFM_GUN_10_VWH;
	
		case 38:
			return MP_STAT_SHOPFM_GUN_11_ID1;
	
		case 39:
			return MP_STAT_SHOPFM_CARMOD_01_AP;
	
		case 40:
			return MP_STAT_SHOPFM_CARMOD_05_ID2;
	
		case 41:
			return MP_STAT_SHOPFM_CARMOD_06_BT1;
	
		case 42:
			return MP_STAT_SHOPFM_CARMOD_07_CS1;
	
		case 43:
			return MP_STAT_SHOPFM_CARMOD_08_CS6;
	
		case 44:
			return MP_STAT_SHOPFM_CARMOD_SUPERMOD;
	
		case 45:
			return MP_STAT_SHOPFM_PERS_GAR;
	
		case 46:
			return MP_STAT_SHOPFM_PERS_GUN;
	
		case 47:
			return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
	
		case 48:
			return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
	
		case 49:
			return MP_STAT_SHOPFM_PERS_GUN_ARENA;
	
		case 52:
			return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
	
		case 50:
			return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
	
		case 51:
			return MP_STAT_SHOPFM_CLOTHES_CASINO;
	
		case 53:
			return MP_STAT_SHOPFM_PERS_GUN_SUB;
	
		case 54:
			return MP_STAT_SHOPFM_TATTOO_07_CCT;
	
		case 55:
			return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
	
		case 56:
			return MP_STAT_SHOPFM_PERS_GUN_FIXER;
	
		case 57:
			return MP_STAT_SHOPFM_CLOTHES_STUDIO;
	
		default:
			break;
	}

	return MP_STAT_INVALID;
}

int func_344(int iParam0) // Position - 0x1483B
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
		case 16:
			return 1;
	
		case 17:
			return 1;
	
		case 18:
			return 1;
	
		case 19:
			return 1;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	}

	return 6;
}

void func_345(Vehicle veParam0, int iParam1) // Position - 0x14B4A
{
	int num;
	int num2;

	num2 = func_346(iParam1);
	func_291(num2, &num);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
	return;
}

int func_346(int iParam0) // Position - 0x14B6B
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 36;
	
		case 2:
			return 35;
	
		case 3:
			return 46;
	
		case 4:
			return 48;
	
		case 5:
			return 16;
	
		case 6:
			return 14;
	
		case 7:
			return 19;
	
		case 8:
			return 22;
	
		case 9:
			return 31;
	
		case 10:
			return 30;
	
		case 11:
			return 33;
	
		case 12:
			return 34;
	
		default:
		
	}

	return 0;
}

BOOL func_347(Vehicle veParam0) // Position - 0x14C09
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case joaat("deathbike2"):
			return true;
	}

	return false;
}

BOOL func_348(int iParam0, var uParam1) // Position - 0x14C2A
{
	*uParam1 = -1f;

	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
	
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
	
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
	
		case joaat("alphaz1"):
			*uParam1 = 0.2f;
			break;
	
		case joaat("bombushka"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("howard"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("hunter"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("microlight"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("mogul"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("molotok"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("nokota"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("pyro"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("rogue"):
			*uParam1 = 0.4f;
			break;
	
		case joaat("seabreeze"):
			*uParam1 = 0.3f;
			break;
	
		case joaat("starling"):
			*uParam1 = 0.5f;
			break;
	
		case joaat("tula"):
			*uParam1 = 0.15f;
			break;
	
		case joaat("khanjali"):
			*uParam1 = 0.6f;
			break;
	
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
	
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
	
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
	
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
	
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
	
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
	
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
	
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
	
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
	
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
	
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
	
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
	
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
	
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}

	return *uParam1 != -1f;
}

void func_349(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x14F2B
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_359(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_275(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_275(num + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_275(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_275(num2 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_275(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_275(i));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_275(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_275(j));
				}
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_275(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_275(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_275(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_275(l));
				}
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_275(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_275(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_275(1));
		}
		else if (uParam1->f_66 == joaat("hotknife"))
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_275(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_275(m));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
			VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_358(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0)
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_276(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_357(veParam0, uParam1->f_69);
				else
					func_357(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_354(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_275(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("omnis") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("le7b"))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_350() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("avenger")))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (IS_BIT_SET(uParam1->f_77, 22))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_350() // Position - 0x155ED
{
	if (*Global_4718592.f_104427 == 6 || *Global_4718592.f_104427 == 7 || *Global_4718592.f_104427 == 18 || *Global_4718592.f_104427 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_352(7))
		if (func_201(Global_2672505.f_4.f_16) || func_351(Global_2672505.f_4.f_16))
			return false;

	return true;
}

BOOL func_351(Player plParam0) // Position - 0x1567C
{
	Player player;

	player = plParam0;

	if (player != -1)
		return Global_1890444[player /*129*/].f_77.f_51 != 0;

	return false;
}

BOOL func_352(int iParam0) // Position - 0x156A0
{
	return func_353(&(Global_2672505.f_184), iParam0);
}

BOOL func_353(var uParam0, int iParam1) // Position - 0x156B4
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_354(var uParam0, var uParam1, var uParam2) // Position - 0x156D7
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
				if (modType == 23)
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				else if (modType == 24)
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				else
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
		}
	}

	func_356(uParam0);

	if (func_355(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_355(Vehicle veParam0) // Position - 0x15854
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY("MNU_CAGE" /*Roll Cage and Chassis Upgrade*/) || hashKey == MISC::GET_HASH_KEY("SABRE_CAG" /*Stunt Cage*/))
						return true;
			}
		}
	}

	return false;
}

void func_356(var uParam0) // Position - 0x15930
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

void func_357(Vehicle veParam0, int iParam1) // Position - 0x15987
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("peyote2"))
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_358(Vehicle veParam0) // Position - 0x159FF
{
	int int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(int, 4);
			}
		}
	}

	return false;
}

BOOL func_359(Vehicle veParam0) // Position - 0x15A47
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!_IS_PLAYER_IN_VEHICLE_SEAT(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_361(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_360(veParam0) != -1)
				return true;

	return false;
}

int func_360(Vehicle veParam0) // Position - 0x15ACE
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_361(Player plParam0) // Position - 0x15AFD
{
	if (func_131(plParam0) == 233)
		return func_362(plParam0);

	return -1;
}

int func_362(Player plParam0) // Position - 0x15B1A
{
	if (func_132(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL _IS_PLAYER_IN_VEHICLE_SEAT(Player plParam0, int iParam1) // Position - 0x15B3D
{
	Vehicle vehiclePedIsIn;

	if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

void func_364(var uParam0) // Position - 0x15B8A
{
	uParam0->f_5 = 3;
	uParam0->f_6 = 6;
	uParam0->f_7 = 2;
	uParam0->f_8 = 0;
	uParam0->f_97 = 1;
	uParam0->f_99 = 132;
	uParam0->f_98 = 0;
	uParam0->f_69 = 6;
	uParam0->f_62 = 255;
	uParam0->f_63 = 255;
	uParam0->f_64 = 255;
	uParam0->f_9[48] = 2;
	MISC::SET_BIT(&(uParam0->f_77), 9);
	return;
}

void func_365(var uParam0) // Position - 0x15BE0
{
	uParam0->f_5 = 9;
	uParam0->f_6 = 9;
	uParam0->f_7 = 1;
	uParam0->f_8 = 0;
	uParam0->f_97 = 1;
	uParam0->f_99 = 132;
	uParam0->f_98 = 0;
	uParam0->f_62 = 255;
	uParam0->f_63 = 255;
	uParam0->f_64 = 255;
	uParam0->f_74 = 255;
	uParam0->f_76 = 255;
	uParam0->f_9[42] = 1;
	uParam0->f_9[5] = 1;
	uParam0->f_9[48] = 0;
	MISC::SET_BIT(&(uParam0->f_77), 0);
	MISC::SET_BIT(&(uParam0->f_77), 9);
	return;
}

BOOL func_366() // Position - 0x15C59
{
	return IS_BIT_SET(Global_1950108.f_515, 31);
}

BOOL func_367() // Position - 0x15C6B
{
	return Global_100733.f_388 > 0;
}

BOOL func_368(Player plParam0) // Position - 0x15C7C
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_478, 15);
}

BOOL func_369(int iParam0) // Position - 0x15CA3
{
	return func_19(UNK_739813649, iParam0, 0) == func_334();
}

BOOL func_370(Player plParam0) // Position - 0x15CBA
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (plParam0 == PLAYER::PLAYER_ID())
		return func_373(5, true);
	else
		return func_371(plParam0, 5);

	return false;
}

BOOL func_371(Player plParam0, int iParam1) // Position - 0x15CEF
{
	if (plParam0 != -1)
		return IS_BIT_SET(Global_1981514[plParam0 /*60*/].f_57, func_372(iParam1, true));

	return false;
}

// Unhandled jump detected. Output should be considered invalid
int func_372(int iParam0, BOOL bParam1) // Position - 0x15D13
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
		
			case 1:
				return 1;
		
			case 2:
				return 2;
		
			case 3:
				return 3;
		
			case 4:
				return 4;
		
			case 5:
				return 5;
		
			case 6:
				return 6;
		
			case 7:
				return 7;
		
			case 8:
				return 8;
		
			case 9:
				return 9;
		
			case 10:
				return 10;
		
			default:
				goto 0x105;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 11;
		
			case 1:
				return 12;
		
			case 2:
				return 13;
		
			case 3:
				return 14;
		
			case 4:
				return 15;
		
			case 5:
				return 16;
		
			case 6:
				return 17;
		
			case 7:
				return 18;
		
			case 8:
				return 19;
		
			case 9:
				return 20;
		
			case 10:
				return 21;
		
			default:
			
		}
	}

	return -1;
}

BOOL func_373(int iParam0, BOOL bParam1) // Position - 0x15E1C
{
	if (bParam1)
		return IS_BIT_SET(func_19(UNK_0081022, -1, 0), func_372(iParam0, true));

	return func_371(PLAYER::PLAYER_ID(), iParam0);
}

void func_374() // Position - 0x15E47
{
	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_115)
		{
			if (IS_BIT_SET(Global_1950108, 27) && IS_BIT_SET(Global_1950108.f_5, 20) && Global_2644490.f_1 == 17 && func_381(1))
			{
				bLocal_115 = true;
				_STOPWATCH_INITIALIZE(&uLocal_116, false, false);
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_378(), "base", 3) && func_381(1) && func_194())
			{
				MISC::SET_BIT(&Global_1950108, 27);
				MISC::SET_BIT(&(Global_1950108.f_5), 20);
				func_377(5);
				func_376(0);
				bLocal_115 = false;
				_STOPWATCH_DESTROY(&uLocal_116);
			}
		
			if (func_375(uLocal_116, 10000, false))
			{
				bLocal_115 = false;
				_STOPWATCH_DESTROY(&uLocal_116);
			}
		}
	}

	return;
}

BOOL func_375(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x15F06
{
	if (!_STOPWATCH_IS_INITIALIZED(&iParam0))
		return false;

	if (iParam2 == -1)
		return true;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
		return true;

	return false;
}

void func_376(int iParam0) // Position - 0x15F67
{
	Global_2644490 = iParam0;
	return;
}

void func_377(int iParam0) // Position - 0x15F75
{
	if (!(Global_2639783 == iParam0))
		Global_2639783.f_1 = 0;

	Global_2639783 = iParam0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		Global_2639783.f_3 = NETWORK::GET_NETWORK_TIME();

	return;
}

char* func_378() // Position - 0x15FA6
{
	if (func_379())
		return "ANIM@AMB@CLUBHOUSE@SEATING@FEMALE@VAR_B@BASE@";
	else
		return "ANIM@AMB@CLUBHOUSE@SEATING@MALE@VAR_B@BASE@";

	return "";
}

BOOL func_379() // Position - 0x15FC9
{
	return func_380(PLAYER::PLAYER_ID());
}

BOOL func_380(Player plParam0) // Position - 0x15FD9
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_Freemode_01"))
		return 1;

	return 0;
}

BOOL func_381(int iParam0) // Position - 0x15FF8
{
	return Global_2644490 == iParam0;
}

void func_382() // Position - 0x16007
{
	if (!func_392())
		if (func_391(PLAYER::PLAYER_PED_ID(), 353.71417f, 4877.06f, -59.14812f, true) < 16f && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			func_385(1);

	if (IS_BIT_SET(Global_1966831.f_1247, 1) || IS_BIT_SET(Global_1966831.f_1247, 2) || IS_BIT_SET(Global_1964005.f_2825, 1) || IS_BIT_SET(Global_1964005.f_2825, 2))
		if (!_IS_FMMC_ACTIVE())
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				HUD::DISABLE_FRONTEND_THIS_FRAME();

	if (!bLocal_112)
	{
		if (_IS_FMMC_ACTIVE() && func_383(*Global_4718592.f_113724))
			bLocal_112 = true;
	}
	else if (!_IS_FMMC_ACTIVE())
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_113))
		{
			_STOPWATCH_INITIALIZE(&uLocal_113, false, false);
		}
		else if (!_STOPWATCH_HAS_TIME_PASSED(&uLocal_113, 4000, false))
		{
			if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				Global_1963031 = 1;
		}
		else
		{
			_STOPWATCH_DESTROY(&uLocal_113);
			bLocal_112 = false;
		}
	}

	return;
}

BOOL func_383(int iParam0) // Position - 0x160FD
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_262145.f_5042[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL _IS_FMMC_ACTIVE() // Position - 0x16137
{
	return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_192 != 0;
}

void func_385(int iParam0) // Position - 0x1614E
{
	if (func_390())
		return;

	if (!(Global_20383.f_1 == 1))
	{
		if (func_389(0))
			func_386(iParam0);
	
		MISC::SET_BIT(&Global_8254, 2);
	}

	return;
}

void func_386(int iParam0) // Position - 0x16181
{
	if (func_390())
		return;

	if (Global_20584)
		if (func_388())
			func_387(true, true);
		else
			func_387(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_392())
		Global_20383.f_1 = 3;

	return;
}

void func_387(BOOL bParam0, BOOL bParam1) // Position - 0x1620B
{
	if (bParam0)
	{
		if (func_389(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	}

	return;
}

BOOL func_388() // Position - 0x1627F
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_389(int iParam0) // Position - 0x1628D
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_390() // Position - 0x162E4
{
	return IS_BIT_SET(Global_1962996, 19);
}

float func_391(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Position - 0x162F3
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

BOOL func_392() // Position - 0x1632D
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_393() // Position - 0x16351
{
	if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_109, 5000, false))
	{
		MISC::CLEAR_BIT(&(Global_1950108.f_4600.f_1), 26);
		_STOPWATCH_DESTROY(&uLocal_109);
		bLocal_111 = false;
	}
	else if (!bLocal_111)
	{
		if (func_389(0) || func_169() || func_395() || func_204() || func_394(true))
		{
			_STOPWATCH_DESTROY(&uLocal_109);
			bLocal_111 = true;
		
			if (!IS_BIT_SET(Global_1950108.f_4600.f_1, 26))
				MISC::SET_BIT(&(Global_1950108.f_4600.f_1), 26);
		}
	}
	else if (bLocal_111)
	{
		if (!func_389(0) && !func_169() && !func_395() && !func_204() && !func_394(true))
		{
			_STOPWATCH_DESTROY(&uLocal_109);
			bLocal_111 = false;
			_STOPWATCH_INITIALIZE(&uLocal_109, false, false);
		}
	}

	return;
}

BOOL func_394(BOOL bParam0) // Position - 0x1642B
{
	if (bParam0)
		return Global_23131.f_4 && Global_23131.f_104 == 4;

	return Global_23131.f_4;
}

BOOL func_395() // Position - 0x16454
{
	return Global_75693;
}

void func_396() // Position - 0x16460
{
	if (func_131(Global_2672505.f_4.f_16) != 256)
		return;

	if (func_362(Global_2672505.f_4.f_16) != 17)
		return;

	if (IS_BIT_SET(Global_1950108.f_7, 4))
		return;

	if (func_23(Global_2672505.f_4.f_15, 978.3134f, 61.9363f, 119.2406f, 5f))
		if (Global_2793046.f_6880 == 1)
			Global_2793046.f_6880 = 0;
	else if (Global_2793046.f_6880 == 0)
		Global_2793046.f_6880 = 1;

	return;
}

void func_397() // Position - 0x164E7
{
	if (!func_400(PLAYER::PLAYER_ID()))
		return;

	if (func_399() || func_398(1000) && Global_1926703)
		Global_1950107 = 1;

	return;
}

int func_398(int iParam0) // Position - 0x16520
{
	if (PAD::IS_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_EXIT) || PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_EXIT))
	{
		if (!_STOPWATCH_IS_INITIALIZED(&uLocal_107))
		{
			_STOPWATCH_INITIALIZE(&uLocal_107, false, false);
		}
		else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_107, iParam0, false))
		{
			_STOPWATCH_DESTROY(&uLocal_107);
			return 1;
		}
	}
	else
	{
		_STOPWATCH_DESTROY(&uLocal_107);
	}

	return 0;
}

int func_399() // Position - 0x16574
{
	Vector3 vector;
	Vector3 vector2;
	float width;

	if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()))
	{
		vector = { -2148.6133f, 1106.074f, 31.213045f };
		vector2 = { -2132.1213f, 1106.0887f, 24.412294f };
		width = 10f;
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), vector, vector2, width, false, true, 0))
			return 1;
	}

	return 0;
}

BOOL func_400(Player plParam0) // Position - 0x165D1
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_210(Global_2657589[plParam0 /*466*/].f_321.f_7) == 23;

	return false;
}

void func_401() // Position - 0x16618
{
	if (!IS_BIT_SET(Global_1981350.f_5, 0) && !func_402())
		MISC::SET_BIT(&(Global_1981350.f_5), 0);

	return;
}

BOOL func_402() // Position - 0x16641
{
	int num;
	BOOL flag;
	int i;

	flag = false;

	for (i = 0; i < 30; i = i + 1)
	{
		if (!flag)
		{
			num = func_405(i, -1);
		
			if (num != 0)
				flag = func_403(num);
		}
	}

	return flag;
}

BOOL func_403(int iParam0) // Position - 0x1667E
{
	if (func_404(iParam0) == 6)
		return 1;

	return 0;
}

int func_404(int iParam0) // Position - 0x16695
{
	switch (iParam0)
	{
		case 86:
			return 8;
	
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
	
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
	
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
	
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
			return 6;
	
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
	
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
	
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
	
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
	
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
	}

	return 0;
}

int func_405(int iParam0, int iParam1) // Position - 0x1699A
{
	int num;
	int num2;

	num = iParam1;

	if (iParam1 == -1)
		num = func_18();

	if (iParam0 == 7 && !Global_262145.f_17451)
		return 0;

	if (iParam0 >= 1000)
	{
		num2 = func_409(iParam0);
	
		if (num2 == 0 && func_19(MP_STAT_INV_TRUCK_MODEL_0, iParam1, 0) != 0)
			return &_STOPWATCH_RESET;
	
		if (func_408(-1) && num2 == 2)
			return 1236;
	
		if (func_407(PLAYER::PLAYER_ID()) && num2 == 1)
			return 1237;
	
		if (func_406(-1) && num2 == 3)
			return 1238;
	}

	if (iParam0 == 0)
	{
		return Global_1665644[num];
	}
	else if (iParam0 == 99)
	{
		return Global_2851504[num];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 30)
			return 0;
	
		return Global_2851325[iParam0 - 1 /*3*/][num];
	}

	return 0;
}

BOOL func_406(int iParam0) // Position - 0x16A8C
{
	return func_19(MP_STAT_IH_SUB_OWNED, iParam0, 0) != 0;
}

BOOL func_407(Player plParam0) // Position - 0x16AA0
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		return Global_1853910[plParam0 /*862*/].f_267.f_353 != 0;

	return false;
}

BOOL func_408(int iParam0) // Position - 0x16AC6
{
	if (!Global_262145.f_24171)
		return false;

	return func_19(MP_STAT_INV_HACKERTRUCK_MODEL_0, iParam0, 0) != 0;
}

int func_409(int iParam0) // Position - 0x16AE9
{
	iParam0 = iParam0 - 1000;

	if (iParam0 >= 0 && iParam0 <= 4)
		return iParam0;

	return -1;
}

void func_410() // Position - 0x16B0F
{
	if (func_131(Global_2672505.f_4.f_16) == 309)
	{
		if (func_111(Global_2672505.f_4.f_16, 27))
		{
			func_411(13, 1, false);
			func_220(27);
		}
	
		if (func_111(Global_2672505.f_4.f_16, 22))
			func_220(22);
	}

	return;
}

void func_411(int iParam0, int iParam1, BOOL bParam2) // Position - 0x16B5F
{
	if (func_418())
	{
		if (iParam1 == 1)
		{
			if (Global_2793046.f_4492 == -1)
				Global_2793046.f_4492 = Global_262145.f_27184;
		
			_STOPWATCH_RESET(&(Global_2793046.f_4490), false, false);
		
			if (bParam2)
			{
				if (Global_2793046.f_4495 == -1)
					Global_2793046.f_4495 = Global_262145.f_27185;
			
				_STOPWATCH_RESET(&(Global_2793046.f_4493), false, false);
			}
			else
			{
				Global_1574582 = false;
				Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8 = 0;
				func_417(true);
			}
		}
		else
		{
			Global_1574582 = false;
			Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_8 = 0;
			func_417(true);
		}
	
		if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_416() && !func_412(PLAYER::PLAYER_ID()))
			Global_1057408 = 0;
	
		STATS::PLAYSTATS_SWITCH_PASSIVE_MODE(false, -1, -1, iParam0);
	}

	return;
}

BOOL func_412(Player plParam0) // Position - 0x16C29
{
	if (func_413(plParam0, true, false))
		if (Global_1853910[plParam0 /*862*/] != 6)
			return true;

	return false;
}

BOOL func_413(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x16C4E
{
	if (bParam1)
		if (func_414(plParam0))
			return true;

	!bParam2;

	if (Global_1853910[plParam0 /*862*/] == -1)
		return false;

	return true;
}

BOOL func_414(Player plParam0) // Position - 0x16C80
{
	return func_415(plParam0);
}

BOOL func_415(Player plParam0) // Position - 0x16C8E
{
	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}

BOOL func_416() // Position - 0x16CA5
{
	return Global_2683864.f_841;
}

void func_417(BOOL bParam0) // Position - 0x16CB4
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_418())
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, false))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
		
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
		
			if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
			{
				Global_1574582.f_2 = 0;
			
				if (bParam0)
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(false, false);
			}
		}
		else
		{
			if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
			
				if (Global_1574582.f_1 == 0 || Global_1574582.f_2 == 1)
					NETWORK::SET_LOCAL_PLAYER_AS_GHOST(true, false);
			}
		
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}

	return;
}

BOOL func_418() // Position - 0x16DAD
{
	return Global_1574582;
}

void func_419() // Position - 0x16DB9
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !func_194() || !_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true))
		return;

	if (!func_433(PLAYER::PLAYER_ID(), false) || !func_432(PLAYER::PLAYER_ID()))
		return;

	if (func_431())
		func_420();

	return;
}

void func_420() // Position - 0x16E11
{
	int i;
	var unk;

	unk = 20;

	for (i = 0; i < 20; i = i + 1)
	{
		unk[i] = i;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (i == 0)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) <= 4)
			{
				Global_1968823[i /*10*/] = func_430(i, true, &unk);
				Global_1968823[i /*10*/].f_9 = 2;
			}
			else
			{
				Global_1968823[i /*10*/] = func_430(i, false, &unk);
				Global_1968823[i /*10*/].f_9 = 0;
			}
		}
		else
		{
			Global_1968823[i /*10*/] = func_430(i, false, &unk);
			Global_1968823[i /*10*/].f_9 = 1;
		}
	
		func_426(i);
		func_421(i);
	}

	return;
}

void func_421(int iParam0) // Position - 0x16EC3
{
	int i;
	int startRange;
	int endRange;
	BOOL flag;

	flag = false;

	for (i = 0; i < 3; i = i + 1)
	{
		func_425(iParam0, Global_1968823[iParam0 /*10*/].f_1[i], &startRange, &endRange);
		endRange = endRange + 1;
		Global_1968823[iParam0 /*10*/].f_5[i] = MISC::GET_RANDOM_INT_IN_RANGE(startRange, endRange);
	
		if (iParam0 > 0 && func_424(Global_1968823[iParam0 /*10*/].f_1[i], Global_1968823[iParam0 /*10*/].f_5[i]))
		{
			if (flag)
				Global_1968823[iParam0 /*10*/].f_5[i] = Global_1968823[iParam0 /*10*/].f_5[i] - func_422(Global_1968823[iParam0 /*10*/].f_1[i]);
		
			flag = true;
		}
	}

	return;
}

int func_422(int iParam0) // Position - 0x16F77
{
	return func_423(iParam0) / 5;
}

int func_423(int iParam0) // Position - 0x16F87
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_24388;
	
		case 2:
			return Global_262145.f_24389;
	
		case 3:
			return Global_262145.f_24390;
	
		case 4:
			return Global_262145.f_24391;
	
		case 5:
			return Global_262145.f_24392;
	
		case 6:
			return Global_262145.f_24393;
	
		case 0:
			return Global_262145.f_24394;
	
		default:
		
	}

	return 0;
}

BOOL func_424(int iParam0, int iParam1) // Position - 0x17007
{
	int num;

	num = func_422(iParam0);
	return iParam1 > num * 4;
}

void func_425(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x1701E
{
	int num;

	num = 0;

	if (iParam0 > 0)
		num = 1;
	else if (Global_1968823[iParam0 /*10*/] > 20)
		num = 2;

	switch (iParam1)
	{
		case 0:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 10;
					break;
			
				case 1:
					*uParam2 = 11;
					*uParam3 = 50;
					break;
			
				case 2:
					*uParam2 = 41;
					*uParam3 = 50;
					break;
			}
			break;
	
		case 1:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 20;
					break;
			
				case 1:
					*uParam2 = 21;
					*uParam3 = 100;
					break;
			
				case 2:
					*uParam2 = 81;
					*uParam3 = 100;
					break;
			}
			break;
	
		case 2:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 2;
					break;
			
				case 1:
					*uParam2 = 3;
					*uParam3 = 10;
					break;
			
				case 2:
					*uParam2 = 9;
					*uParam3 = 10;
					break;
			}
			break;
	
		case 3:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 4;
					break;
			
				case 1:
					*uParam2 = 5;
					*uParam3 = 20;
					break;
			
				case 2:
					*uParam2 = 17;
					*uParam3 = 20;
					break;
			}
			break;
	
		case 4:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 16;
					break;
			
				case 1:
					*uParam2 = 17;
					*uParam3 = 80;
					break;
			
				case 2:
					*uParam2 = 65;
					*uParam3 = 80;
					break;
			}
			break;
	
		case 5:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 12;
					break;
			
				case 1:
					*uParam2 = 13;
					*uParam3 = 60;
					break;
			
				case 2:
					*uParam2 = 49;
					*uParam3 = 60;
					break;
			}
			break;
	
		case 6:
			switch (num)
			{
				case 0:
					*uParam2 = 1;
					*uParam3 = 8;
					break;
			
				case 1:
					*uParam2 = 9;
					*uParam3 = 40;
					break;
			
				case 2:
					*uParam2 = 33;
					*uParam3 = 40;
					break;
			}
			break;
	}

	return;
}

void func_426(int iParam0) // Position - 0x17240
{
	int i;
	int randomIntInRange;
	int endRange;
	var unk;
	int randomIntInRange2;
	int num;

	endRange = 6;
	unk = 6;
	func_429(&unk);
	i = iParam0;

	while (i > 0)
	{
		randomIntInRange2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		num = 0;
	
		if (func_428(&unk, Global_1968823[i - 1 /*10*/].f_1[randomIntInRange2], &num))
		{
			func_427(&unk, num);
			i = i - 1;
			endRange = endRange - 1;
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, endRange);
		Global_1968823[iParam0 /*10*/].f_1[i] = unk[randomIntInRange];
		func_427(&unk, randomIntInRange);
		endRange = endRange - 1;
	}

	return;
}

void func_427(var uParam0, int iParam1) // Position - 0x172DA
{
	int i;

	uParam0->[iParam1] = -1;

	for (i = iParam1; i <= 6 - 2; i = i + 1)
	{
		if (uParam0->[i] == -1)
		{
			uParam0->[i] = uParam0->[i + 1];
			uParam0->[i + 1] = -1;
		}
	}

	return;
}

BOOL func_428(var uParam0, int iParam1, var uParam2) // Position - 0x1731F
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
		{
			*uParam2 = i;
			return true;
		}
	}

	return false;
}

void func_429(var uParam0) // Position - 0x1734E
{
	int i;

	for (i = 0; i < 6; i = i + 1)
	{
		uParam0->[i] = i;
	}

	return;
}

int func_430(int iParam0, BOOL bParam1, var uParam2) // Position - 0x17370
{
	int randomIntInRange;
	int i;
	int startRange;
	int endRange;
	int num;

	i = 0;
	startRange = 1;
	endRange = 20 - iParam0;

	if (bParam1)
	{
		startRange = 21;
		endRange = 27;
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(startRange, endRange);
		num = randomIntInRange;
	}
	else
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(startRange, endRange);
		num = uParam2->[randomIntInRange];
		uParam2->[randomIntInRange] = 0;
	
		for (i = randomIntInRange; i <= 20 - 2; i = i + 1)
		{
			if (uParam2->[i] == 0)
			{
				uParam2->[i] = uParam2->[i + 1];
				uParam2->[i + 1] = 0;
			}
		}
	}

	return num;
}

BOOL func_431() // Position - 0x173F5
{
	int i;
	int j;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			if (Global_1968823[i /*10*/].f_1[j] == 7)
				return true;
		}
	}

	return false;
}

BOOL func_432(Player plParam0) // Position - 0x17438
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (Global_1853910[plParam0 /*862*/].f_267.f_310 != 0)
			return true;

	return false;
}

BOOL func_433(Player plParam0, BOOL bParam1) // Position - 0x17461
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return false;

	if (Global_1853910[plParam0 /*862*/].f_267.f_193[0 /*13*/] != 0)
		return true;

	if (Global_1853910[plParam0 /*862*/].f_267.f_193[5 /*13*/] != 0)
		return true;

	if (Global_1853910[plParam0 /*862*/].f_267.f_293 != 0)
		return true;

	if (Global_1853910[plParam0 /*862*/].f_267.f_116[0 /*3*/] != -1)
		return true;

	if (bParam1)
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_133, 14);

	return false;
}

void func_434() // Position - 0x174F2
{
	BOOL flag;

	flag = true;

	if (func_131(PLAYER::PLAYER_ID()) != 307)
		flag = false;

	if (func_362(PLAYER::PLAYER_ID()) != 1)
		flag = false;

	if (!Global_2672505.f_947.f_10)
		flag = false;

	if (flag)
	{
		if (!bLocal_106)
		{
			if (!_STOPWATCH_IS_INITIALIZED(&uLocal_104))
			{
				_STOPWATCH_INITIALIZE(&uLocal_104, false, false);
			}
			else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_104, 10000, false))
			{
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				bLocal_106 = true;
			}
		}
	}
	else if (_STOPWATCH_IS_INITIALIZED(&uLocal_104))
	{
		_STOPWATCH_DESTROY(&uLocal_104);
		bLocal_106 = false;
	}

	return;
}

void func_435() // Position - 0x17576
{
	if (func_440(PLAYER::PLAYER_ID()) && _DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) && CAM::IS_SCREEN_FADED_IN())
	{
		if (!bLocal_103)
		{
			if (func_203() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "SUB_SUPPLIES" /*SUPPLIES*/) && !func_23(PLAYER::PLAYER_PED_ID(), func_439(), 1.5f))
				bLocal_103 = true;
		}
		else
		{
			if (func_436(PLAYER::PLAYER_PED_ID()))
				Global_44199 = 1;
		
			if (func_203() && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "SUB_SUPPLIES" /*SUPPLIES*/) && func_23(PLAYER::PLAYER_PED_ID(), func_439(), 1f))
				bLocal_103 = false;
		}
	}
	else if (bLocal_103)
	{
		bLocal_103 = false;
	}

	return;
}

BOOL func_436(Ped pedParam0) // Position - 0x17623
{
	if (func_438(pedParam0))
		return true;

	if (func_437(pedParam0))
		return true;

	return false;
}

BOOL func_437(Ped pedParam0) // Position - 0x17646
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, -1360.6123f, 161.89719f, -99.9951f, -1368.3901f, 161.89969f, -97.24433f, 7.25f, false, true, 0);
}

BOOL func_438(Ped pedParam0) // Position - 0x1767A
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(pedParam0, -1352.5779f, 161.77977f, -100.444336f, -1352.4767f, 168.37584f, -97.944336f, 6f, false, true, 0);
}

Vector3 func_439() // Position - 0x176AA
{
	return -1352.4502f, 146.7562f, -99.6944f;
}

BOOL func_440(Player plParam0) // Position - 0x176C1
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (func_209(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10 == plParam0)
			return true;

	return false;
}

void func_441() // Position - 0x176F6
{
	if (bLocal_102)
		if (func_444(PLAYER::PLAYER_ID()) || func_192(PLAYER::PLAYER_ID()))
			return;
		else
			bLocal_102 = false;

	if (Global_1836858.f_5 != -1 && func_192(PLAYER::PLAYER_ID()) && func_443(PLAYER::PLAYER_ID()) == 160)
	{
		func_442();
		bLocal_102 = true;
	}

	return;
}

void func_442() // Position - 0x17754
{
	Global_1836858.f_24 = 1;
	return;
}

int func_443(Player plParam0) // Position - 0x17763
{
	if (plParam0 != _INVALID_PLAYER_INDEX() && _NETWORK_IS_PLAYER_VALID(plParam0, true, true))
		return Global_2657589[plParam0 /*466*/].f_321.f_17;

	return -1;
}

BOOL func_444(Player plParam0) // Position - 0x17794
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_210(Global_2657589[plParam0 /*466*/].f_321.f_7) == 26;

	return false;
}

void func_445() // Position - 0x177DB
{
	int i;
	int num;
	int num2;
	Entity entity;
	float objectFragmentDamageHealth;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) == 0)
	{
		func_447();
		return;
	}

	if (!Global_1574965)
	{
		func_447();
		return;
	}

	if (*Global_4718592.f_113724 != 1871729633 || Global_1058070.f_14[0] != 1)
	{
		func_447();
		return;
	}

	if (!bLocal_87)
	{
		bLocal_87 = true;
	
		for (i = 0; i <= Global_1058070.f_266 - 1; i = i + 1)
		{
			num = Global_4980736.f_5994[i /*492*/].f_15;
		
			switch (num)
			{
				case 414980139:
				case 2081370119:
				case 996088146:
				case 1404217665:
				case 1337892921:
				case 1433649518:
				case 1199646089:
				case 2102530342:
				case -1747785625:
					uLocal_54[iLocal_53] = i;
					iLocal_53 = iLocal_53 + 1;
					break;
			}
		}
	}

	for (i = 0; i <= iLocal_53 - 1; i = i + 1)
	{
		num2 = uLocal_54[i];
	
		if (!func_446(num2))
		{
		}
		else
		{
			entity = Global_1058070.f_119[num2];
		
			if (!ENTITY::DOES_ENTITY_EXIST(entity))
			{
			}
			else if (ENTITY::IS_ENTITY_DEAD(entity, false))
			{
			}
			else
			{
				objectFragmentDamageHealth = OBJECT::GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(entity, false);
			
				if (objectFragmentDamageHealth < 0.1f)
					ENTITY::SET_ENTITY_HEALTH(entity, 0, 0);
			}
		}
	}

	return;
}

BOOL func_446(int iParam0) // Position - 0x1791E
{
	return iParam0 > -1 && iParam0 < 32;
}

void func_447() // Position - 0x17934
{
	if (iLocal_53 > 0)
	{
		func_448(&uLocal_54, -1);
		iLocal_53 = 0;
		bLocal_87 = false;
	}

	return;
}

void func_448(var uParam0, int iParam1) // Position - 0x1794F
{
	int i;

	for (i = 0; i <= *uParam0 - 1; i = i + 1)
	{
		uParam0->[i] = iParam1;
	}

	return;
}

void func_449() // Position - 0x17975
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_controller_2020")) > 0)
		func_452();
	else
		func_450();

	return;
}

void func_450() // Position - 0x17995
{
	int i;

	if (iLocal_34 == 0)
		return;

	for (i = 0; i < 26; i = i + 1)
	{
		if (IS_BIT_SET(iLocal_34, i))
		{
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(i), false);
			MISC::CLEAR_BIT(&iLocal_34, i);
		}
	}

	iLocal_35 = 0;
	Global_2766577 = 0;
	return;
}

char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x179DF
{
	switch (iParam0)
	{
		case 9:
			return "RADIO_01_CLASS_ROCK" /*Los Santos Rock Radio*/;
	
		case 10:
			return "RADIO_02_POP" /*Non-Stop-Pop FM*/;
	
		case 12:
			return "RADIO_03_HIPHOP_NEW" /*Radio Los Santos*/;
	
		case 18:
			return "RADIO_04_PUNK" /*Channel X*/;
	
		case 17:
			return "RADIO_06_COUNTRY" /*Rebel Radio*/;
	
		case 15:
			return "RADIO_07_DANCE_01" /*Soulwax FM*/;
	
		case 16:
			return "RADIO_08_MEXICAN" /*East Los FM*/;
	
		case 11:
			return "RADIO_09_HIPHOP_OLD" /*West Coast Classics*/;
	
		case 23:
			return "RADIO_11_TALK_02" /*Blaine County Radio*/;
	
		case 22:
			return "RADIO_12_REGGAE" /*Blue Ark*/;
	
		case 5:
			return "RADIO_13_JAZZ" /*Worldwide FM*/;
	
		case 6:
			return "RADIO_14_DANCE_02" /*FlyLo FM*/;
	
		case 21:
			return "RADIO_15_MOTOWN" /*The Lowdown 91.1*/;
	
		case 13:
			return "RADIO_20_THELAB" /*The Lab*/;
	
		case 14:
			return "RADIO_16_SILVERLAKE" /*Radio Mirror Park*/;
	
		case 20:
			return "RADIO_17_FUNK" /*Space 103.2*/;
	
		case 19:
			return "RADIO_18_90S_ROCK" /*Vinewood Boulevard Radio*/;
	
		case 8:
			return "RADIO_21_DLC_XM17" /*Blonded Los Santos 97.8 FM*/;
	
		case 24:
			return "RADIO_05_TALK_01" /*West Coast Talk Radio*/;
	
		case 2:
			return "RADIO_27_DLC_PRHEI4" /*Still Slipping Los Santos*/;
	
		case 4:
			return "RADIO_23_DLC_XM19_RADIO" /*iFruit Radio*/;
	
		case 7:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO" /*Los Santos Underground Radio*/;
	
		case 0:
			return "RADIO_36_AUDIOPLAYER" /*Media Player*/;
	
		case 1:
			return "RADIO_35_DLC_HEI4_MLR" /*The Music Locker*/;
	
		case 3:
			return "RADIO_34_DLC_HEI4_KULT" /*Kult FM*/;
	
		case 25:
			return "RADIO_37_MOTOMAMI" /*MOTOMAMI Los Santos*/;
	
		default:
		
	}

	return "OFF";
}

void func_452() // Position - 0x17B44
{
	int num;
	int i;

	if (!func_453(*Global_4718592.f_113724))
		return;

	num = func_19(MP_STAT_TUNER_FAV_RADIO_STATIONS, -1, 0);

	if (num == 0)
		return;

	for (i = 0; i < 26; i = i + 1)
	{
		if (!IS_BIT_SET(iLocal_35, i))
		{
			if (IS_BIT_SET(num, i))
			{
			}
		
			MISC::SET_BIT(&iLocal_35, i);
			AUDIO::SET_RADIO_STATION_AS_FAVOURITE(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(i), true);
		}
	
		if (IS_BIT_SET(num, i) && !IS_BIT_SET(iLocal_34, i))
		{
			MISC::SET_BIT(&iLocal_34, i);
			Global_2766577 = 1;
		}
	}

	return;
}

BOOL func_453(var uParam0) // Position - 0x17BCF
{
	if (uParam0 == Global_262145.f_31722[0] || uParam0 == Global_262145.f_31722[1] || uParam0 == Global_262145.f_31722[2])
		return true;

	return false;
}

void func_454() // Position - 0x17C12
{
	if (IS_BIT_SET(Global_1950108.f_8, 25))
		if (Global_4282954 != -1)
			Global_4282954 = -1;

	return;
}

void func_455() // Position - 0x17C33
{
	if (PLAYER::PLAYER_ID() == _INVALID_PLAYER_INDEX())
	{
		bLocal_33 = false;
		return;
	}

	if (!ENTITY::DOES_ENTITY_EXIST(Global_2793046.f_299))
	{
		bLocal_33 = false;
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(Global_2793046.f_299, false))
	{
		bLocal_33 = false;
		return;
	}

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_2793046.f_299, false))
	{
		bLocal_33 = false;
		return;
	}

	if (func_192(PLAYER::PLAYER_ID()))
	{
		bLocal_33 = false;
		return;
	}

	if (func_209(PLAYER::PLAYER_ID()) && Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_10 == PLAYER::PLAYER_ID())
	{
		bLocal_33 = false;
		return;
	}

	if (!ENTITY::IS_ENTITY_IN_AREA(Global_2793046.f_299, -1372.786f, 135.814f, -100.586f, -1319.589f, 169.764f, -87.918f, false, true, 0))
	{
		bLocal_33 = false;
		return;
	}

	if (bLocal_33)
		return;

	func_456(true, false, false, false, false, false, false);
	bLocal_33 = true;
	return;
}

void func_456(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x17D17
{
	if (_GET_ACTIVE_PV_SLOT() < 0 && Global_1962819)
		return;

	if (func_459(35))
		bParam0 = true;

	if (IS_BIT_SET(Global_2672505.f_62.f_60, 3))
		bParam0 = true;

	if (IS_BIT_SET(Global_2672505.f_62.f_64, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}

	if (IS_BIT_SET(Global_2672505.f_62.f_68, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}

	if (bParam0)
		func_458(2);
	else
		func_458(1);

	if (bParam1)
		func_458(11);

	if (bParam2)
	{
		func_458(32);
	
		if (bParam3)
			if (_GET_ACTIVE_PV_SLOT() >= 0 && IS_BIT_SET(Global_1586468[_GET_ACTIVE_PV_SLOT() /*142*/].f_103, 0))
				func_458(33);
		else
			func_285(33);
	
		if (_GET_ACTIVE_PV_SLOT() >= 0)
			if (func_457(Global_1586468[_GET_ACTIVE_PV_SLOT() /*142*/].f_66))
				func_458(40);
	}
	else if (bParam5)
	{
		func_458(37);
	}

	if (bParam4)
		func_458(36);

	if (func_459(36))
		if (func_459(2))
			func_285(36);

	if (bParam6)
		func_458(38);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		Global_2793046.f_436 = NETWORK::GET_NETWORK_TIME();

	return;
}

BOOL func_457(int iParam0) // Position - 0x17E3F
{
	if (iParam0 == joaat("trailersmall2"))
		return true;

	return false;
}

void func_458(int iParam0) // Position - 0x17E56
{
	if (iParam0 < 32)
		if (!IS_BIT_SET(Global_2672505.f_62.f_1, iParam0))
			MISC::SET_BIT(&(Global_2672505.f_62.f_1), iParam0);
	else if (!IS_BIT_SET(Global_2672505.f_62.f_2, iParam0 - 32))
		MISC::SET_BIT(&(Global_2672505.f_62.f_2), iParam0 - 32);

	return;
}

BOOL func_459(int iParam0) // Position - 0x17EA8
{
	if (iParam0 < 32)
		return IS_BIT_SET(Global_2672505.f_62.f_1, iParam0);

	return IS_BIT_SET(Global_2672505.f_62.f_2, iParam0 - 32);
}

int _GET_ACTIVE_PV_SLOT() // Position - 0x17ED6
{
	if (Global_2359296[func_74() /*5568*/].f_681.f_2 >= 415)
	{
		Global_2359296[func_74() /*5568*/].f_681.f_2 = -1;
		return -1;
	}

	return Global_2359296[func_74() /*5568*/].f_681.f_2;
}

void func_461() // Position - 0x17F19
{
	if (Global_2672505.f_62.f_57)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_2793046.f_299) && !ENTITY::IS_ENTITY_DEAD(Global_2793046.f_299, false))
		{
			if (!Global_2672505.f_62.f_21)
			{
				if (iLocal_32 == -1)
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", INT))
						if (DECORATOR::DECOR_EXIST_ON(Global_2793046.f_299, "PV_Slot"))
							iLocal_32 = DECORATOR::DECOR_GET_INT(Global_2793046.f_299, "PV_Slot");
				else if (Global_2359296[func_74() /*5568*/].f_681.f_2 != iLocal_32)
					if (!_STOPWATCH_IS_INITIALIZED(&uLocal_30))
						_STOPWATCH_INITIALIZE(&uLocal_30, true, false);
					else if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_30, 10000, true))
						func_456(true, false, true, false, false, false, false);
			}
			else
			{
				_STOPWATCH_DESTROY(&uLocal_30);
				iLocal_32 = -1;
			}
		}
		else
		{
			_STOPWATCH_DESTROY(&uLocal_30);
			iLocal_32 = -1;
		}
	}
	else
	{
		_STOPWATCH_DESTROY(&uLocal_30);
		iLocal_32 = -1;
	}

	return;
}

void func_462() // Position - 0x17FF6
{
	if (func_466(PLAYER::PLAYER_ID()) && func_463() == PLAYER::PLAYER_ID())
	{
		if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() || HUD::IS_WARNING_MESSAGE_ACTIVE() || func_169())
		{
			_STOPWATCH_RESET(&uLocal_27, true, false);
			Global_1949962 = 1;
		
			if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				iLocal_29 = 30000;
		}
	}

	if (_STOPWATCH_IS_INITIALIZED(&uLocal_27))
	{
		if (_STOPWATCH_HAS_TIME_PASSED(&uLocal_27, iLocal_29, true))
		{
			_STOPWATCH_DESTROY(&uLocal_27);
			Global_1949962 = 0;
			iLocal_29 = 10000;
		}
	}

	return;
}

Player func_463() // Position - 0x18071
{
	return func_464(PLAYER::PLAYER_ID());
}

Player func_464(Player plParam0) // Position - 0x18081
{
	int num;

	if (plParam0 == _INVALID_PLAYER_INDEX())
		return plParam0;

	if (func_465(plParam0) != -1)
	{
		num = func_210(func_465(plParam0));
	
		if (num == 2 || num == 1 || num == 0 || num == 25)
		{
			if (_IS_PLAYER_IN_AN_ORGANIZATION(plParam0, false))
				return func_108(plParam0);
		
			return plParam0;
		}
		else if (num == 3)
		{
			return _INVALID_PLAYER_INDEX();
		}
	
		return Global_2657589[plParam0 /*466*/].f_321.f_10;
	}

	return _INVALID_PLAYER_INDEX();
}

int func_465(Player plParam0) // Position - 0x18110
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7;
		else if (Global_1575060 || Global_2635559.f_2680 && plParam0 == PLAYER::PLAYER_ID() && _NETWORK_IS_PLAYER_VALID(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7;

	return -1;
}

BOOL func_466(Player plParam0) // Position - 0x1817F
{
	if (plParam0 != _INVALID_PLAYER_INDEX())
		if (_NETWORK_IS_PLAYER_VALID(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_210(Global_2657589[plParam0 /*466*/].f_321.f_7) == 9;

	return false;
}

void func_467() // Position - 0x181C6
{
	if (!func_469() && !func_468())
		if (!STATS::STAT_IS_STATS_TRACKING_ENABLED())
			if (func_194() && _NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), false, true) && CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				STATS::STAT_ENABLE_STATS_TRACKING();

	return;
}

BOOL func_468() // Position - 0x1821B
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("animal_controller")) > 0;
}

BOOL func_469() // Position - 0x1822E
{
	return SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) > 0;
}

void func_470() // Position - 0x18241
{
	Vehicle vehiclePedIsIn;

	iLocal_26 = iLocal_26 + 1;

	if (iLocal_26 == 30)
		iLocal_26 = 0;
	else
		return;

	if (!_DOES_ENTITY_EXIST_AND_IS_ALIVE(PLAYER::PLAYER_PED_ID()) || !_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) || NETWORK::NETWORK_IS_ACTIVITY_SESSION() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE() || !func_194() || func_192(PLAYER::PLAYER_ID()) || func_471(PLAYER::PLAYER_ID()) || func_193(PLAYER::PLAYER_ID()) || Global_2672505.f_3542 || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn))
		{
			if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(vehiclePedIsIn))
			{
				if (ENTITY::GET_ENTITY_CAN_BE_DAMAGED(vehiclePedIsIn))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(vehiclePedIsIn, 0f);
					ENTITY::SET_ENTITY_INVINCIBLE(vehiclePedIsIn, false);
					ENTITY::SET_ENTITY_PROOFS(vehiclePedIsIn, false, false, false, false, false, false, true, false);
				}
			}
		}
	}

	return;
}

BOOL func_471(Player plParam0) // Position - 0x18335
{
	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 14))
		return true;

	if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_31, 11))
		return true;

	return false;
}

void func_472() // Position - 0x1836E
{
	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return;

	if (!bLocal_25)
	{
		if (Global_1950108.f_513 != -1 && MISC::ARE_STRINGS_EQUAL(&(Global_23270.f_1), "MP_MAN_VEH1" /*Replace*/) && func_474() == 9)
			bLocal_25 = true;
	}
	else if (!func_203())
	{
		if (func_473())
		{
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT, true);
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY, true);
		}
		else if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(Global_2793046.f_299))
		{
			if (!func_473())
				func_456(true, false, true, false, false, false, false);
		}
		else
		{
			bLocal_25 = false;
			TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_1), "", 16);
		}
	}

	return;
}

BOOL func_473() // Position - 0x18410
{
	if (func_459(2) || func_459(1))
		return true;

	return false;
}

int func_474() // Position - 0x18430
{
	return func_210(Global_1950108.f_513);
}

void func_475() // Position - 0x18443
{
	Vehicle vehiclePedIsIn;

	if (!_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true))
		return;

	if (func_193(PLAYER::PLAYER_ID()) || func_478(PLAYER::PLAYER_ID()))
		return;

	if (func_477() || func_476("CMOD_TRIG" /*Press ~a~ to repair, respray and customize your vehicle.*/, &Global_44195))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (_GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == -1)
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, -2, false))
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);
		}
	}

	return;
}

BOOL func_476(char* sParam0, const char* sParam1) // Position - 0x184CA
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_477() // Position - 0x184E3
{
	if (func_342(39, 5, false) || func_342(40, 5, false) || func_342(41, 5, false) || func_342(42, 5, false) || func_342(43, 5, false) || func_342(44, 5, false))
		return true;

	return false;
}

BOOL func_478(Player plParam0) // Position - 0x18541
{
	if (plParam0 > -1)
	{
		if (Global_2657589[plParam0 /*466*/].f_246 > -1)
			if (func_344(Global_2657589[plParam0 /*466*/].f_246) == 5)
				return 1;
	
		if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 4))
			return 1;
	}

	return 0;
}

void func_479() // Position - 0x1858A
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (_NETWORK_IS_PLAYER_VALID(PLAYER::PLAYER_ID(), true, true) && func_484(PLAYER::PLAYER_ID()) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (_DOES_ENTITY_EXIST_AND_IS_ALIVE(vehiclePedIsIn) && _GET_VEHICLE_SEAT_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == -1)
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
		
			if (entityModel == joaat("openwheel1") || entityModel == joaat("openwheel2") || entityModel == joaat("formula") || entityModel == joaat("formula2") || entityModel == joaat("oppressor2"))
			{
				if (!bLocal_24)
				{
					bLocal_24 = true;
					func_483(45, 1, true);
				}
			
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT, true);
				PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CONTEXT_SECONDARY, true);
				Global_44199 = 1;
			
				if (CAM::IS_GAMEPLAY_CAM_RENDERING() && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMOD_FTRIG" /*This vehicle cannot be modified.*/))
					func_481("CMOD_FTRIG" /*This vehicle cannot be modified.*/);
			}
		}
	}
	else if (bLocal_24)
	{
		bLocal_24 = false;
		func_480(45, 1, true);
	
		if (_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("CMOD_FTRIG" /*This vehicle cannot be modified.*/))
			HUD::CLEAR_HELP(true);
	}

	return;
}

void func_480(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1868D
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			address = func_19(func_343(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			_MPCHAR_STAT_SET_INT(func_343(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void func_481(char* sParam0) // Position - 0x186FE
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x18714
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_483(int iParam0, int iParam1, BOOL bParam2) // Position - 0x18727
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (Global_32163 == 0)
		{
			address = func_19(func_343(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			_MPCHAR_STAT_SET_INT(func_343(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_484(Player plParam0) // Position - 0x18798
{
	if (plParam0 == _INVALID_PLAYER_INDEX())
		return 0;

	if (func_466(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10 == plParam0)
		return 1;

	return 0;
}

void func_485() // Position - 0x187D1
{
	if (Global_112594 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("director_mode")) <= 0 && func_194())
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();

	return;
}

void func_486() // Position - 0x187FD
{
	int num;

	if (!bLocal_4)
	{
		if (Global_1836395)
		{
			num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_EXPLOIT_LEVEL"));
		
			if (num >= 4)
				Global_262145.f_10593 = 1;
		
			bLocal_4 = true;
		}
	}
	else if (!Global_1836395)
	{
		bLocal_4 = false;
	}

	return;
}

int _MPPLY_STAT_GET_INT(Hash hParam0) // Position - 0x1883C
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

void func_488() // Position - 0x1885A
{
	if (!bLocal_3)
	{
		if (Global_1836395)
		{
			if (func_490() || func_489())
				Global_262145.f_20169 = 1;
			else
				Global_262145.f_20169 = 0;
		
			bLocal_3 = true;
		}
	}
	else if (!Global_1836395)
	{
		bLocal_3 = false;
	}

	return;
}

int func_489() // Position - 0x188A4
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10702)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10698 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10702)
			return 0;
	}

	return 1;
}

int func_490() // Position - 0x18933
{
	int num;
	var unk;
	int i;

	num = _MPPLY_STAT_GET_INT(joaat("MPPLY_CHAR_PEAK_EXPLOIT_LEVEL"));

	if (num < Global_262145.f_10701)
		return 0;

	unk = 4;
	unk[0] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASONEXPLOITLEVEL"));
	unk[1] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON2EXPLOITLEVEL"));
	unk[2] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON3EXPLOITLEVEL"));
	unk[3] = _MPPLY_STAT_GET_INT(joaat("MPPLY_PREVSEASON4EXPLOITLEVEL"));

	for (i = 0; i < Global_262145.f_10697 - 1; i = i + 1)
	{
		if (unk[i] < Global_262145.f_10701)
			return 0;
	}

	return 1;
}

void func_491() // Position - 0x189C2
{
	int i;

	if (MISC::IS_PC_VERSION())
	{
		for (i = 0; i < Global_1853910; i = i + 1)
		{
			MISC::SET_BIT(&(Global_1853910[i /*862*/].f_799), 1);
		}
	}

	return;
}

void func_492() // Position - 0x189F7
{
	if (Global_262145.f_10677 != 120)
		Global_262145.f_10677 = 120;

	return;
}

void func_493() // Position - 0x18A14
{
	if (bLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0.23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_494(0.69f, 0.06f, "STRING", sLocal_0);
	}

	if (!bLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					break;
			
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
					{
						iLocal_2 = iLocal_2 + 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
					{
						bLocal_1 = true;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
			}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				break;
		
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT))
				{
					iLocal_2 = iLocal_2 + 1;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT))
				{
					bLocal_1 = false;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
		}
	}

	return;
}

void func_494(float fParam0, float fParam1, char* sParam2, char* sParam3) // Position - 0x18C14
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

BOOL IS_ROCKSTAR_DEV() // Position - 0x18C31
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_496() // Position - 0x18C42
{
	var gamerHandle;

	if (!bLocal_88)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&uLocal_89, 13);
	
		if (IS_GAMER_HANDLE_VALID(uLocal_89))
			bLocal_88 = true;
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692735.f_3)
	{
		NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&gamerHandle, &uLocal_89))
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
			bLocal_88 = false;
		}
	}

	return;
}

