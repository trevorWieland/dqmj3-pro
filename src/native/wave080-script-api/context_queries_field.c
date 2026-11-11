/* Script-facing native API: no-argument context queries (field-module addresses).
 *
 * Each binding here is a script-side query that takes no arguments: the native
 * reads the script context, asks one engine service, and pushes the answer.  The
 * original is forty bytes - push, save the VM, load the context, one call, one
 * push, return 1 - and the literal pool holds only the context address.
 *
 * These bodies are transcribed from that instruction shape: the engine callee is
 * the address the original calls, the pushed type is the push helper it calls,
 * and the binding identifier is the name the script sees.  They take no shared
 * constant and no error path, so nothing here is inferred beyond the call and
 * the pushed value.
 *
 * 54 bindings in this unit; the split gives every one of them an address.
 */
#include "script_api.h"


/* One query reads its own engine singleton, not the script context. */
#define DRONE_MODE_STATE() (*(void **)(__UINTPTR_TYPE__)0x008977e0u)  /* drone-mode singleton */

/* The engine services these queries call, by canonical address. */
extern int fn_006abc40(ScriptContext *context);
extern int fn_006abdf0(ScriptContext *context);
extern int fn_006ac5d4(ScriptContext *context);
extern int fn_006ac574(ScriptContext *context);
extern int fn_006ac1c0(ScriptContext *context);
extern int fn_006abf20(ScriptContext *context);
extern int fn_006aca3c(ScriptContext *context);
extern int fn_001f1290(ScriptContext *context);
extern int fn_001f2174(ScriptContext *context);
extern int fn_001f2158(ScriptContext *context);
extern int fn_001f2144(ScriptContext *context);
extern int fn_006ac190(ScriptContext *context);
extern int fn_006abee4(ScriptContext *context);
extern int fn_001f063c(ScriptContext *context);
extern int fn_006abf04(ScriptContext *context);
extern int fn_001f3cf4(ScriptContext *context);
extern int fn_001f30b0(ScriptContext *context);
extern int fn_001f4418(ScriptContext *context);
extern int fn_001f42f0(ScriptContext *context);
extern int fn_001f4a58(ScriptContext *context);
extern int fn_006ad250(ScriptContext *context);
extern int fn_002dbe24(ScriptContext *context);
extern int fn_002dbdb0(ScriptContext *context);
extern int fn_001f32b4(ScriptContext *context);
extern int fn_001f4610(ScriptContext *context);
extern int fn_006ad7f0(ScriptContext *context);
extern int fn_006ac520(ScriptContext *context);
extern int fn_006ac3a8(ScriptContext *context);
extern int fn_006ac71c(ScriptContext *context);
extern int fn_006aca48(ScriptContext *context);
extern int fn_006ac094(ScriptContext *context);
extern int fn_006abb9c(ScriptContext *context);
extern int fn_001f5d88(ScriptContext *context);
extern int fn_006ac0fc(ScriptContext *context);
extern int fn_006ad6b8(ScriptContext *context);
extern int fn_006ac3cc(ScriptContext *context);
extern int fn_006abe98(ScriptContext *context);
extern int fn_006ac370(ScriptContext *context);
extern int fn_006ad120(ScriptContext *context);
extern int fn_006ad23c(ScriptContext *context);
extern int fn_006ac168(ScriptContext *context);
extern int fn_006b61ec(ScriptContext *context);
extern int fn_006ac1ac(ScriptContext *context);
extern int fn_006acff8(ScriptContext *context);
extern int fn_006ac4f4(ScriptContext *context);
extern int fn_006ad228(ScriptContext *context);
extern int fn_006abcc0(ScriptContext *context);
extern int fn_006ace90(ScriptContext *context);
extern int fn_006ac398(ScriptContext *context);
extern int fn_001f4184(ScriptContext *context);
extern int fn_006f733c(void *state);
extern int fn_006ad35c(ScriptContext *context);
extern int fn_006acfd8(ScriptContext *context);
extern int fn_006acc74(ScriptContext *context);

/* GetTargetId_() - 0x0027b5d4: pushes the engine's integer answer. */
int fn_0027b5d4(SqVM *vm)
{
    sq_pushinteger(vm, fn_006abc40(SCRIPT_CONTEXT()));
    return 1;
}

/* IsPlayerRide_() - 0x0027c494: pushes the engine's boolean answer. */
int fn_0027c494(SqVM *vm)
{
    sq_pushbool(vm, fn_006abdf0(SCRIPT_CONTEXT()));
    return 1;
}

/* GetRideMonsterType_() - 0x0028165c: pushes the engine's integer answer. */
int fn_0028165c(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac5d4(SCRIPT_CONTEXT()));
    return 1;
}

/* GetRideMonsterSize_() - 0x00281630: pushes the engine's integer answer. */
int fn_00281630(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac574(SCRIPT_CONTEXT()));
    return 1;
}

/* GetPlayerNearObj_() - 0x0027f874: pushes the engine's integer answer. */
int fn_0027f874(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac1c0(SCRIPT_CONTEXT()));
    return 1;
}

/* GetQueryResult_() - 0x0027d8b8: pushes the engine's integer answer. */
int fn_0027d8b8(SqVM *vm)
{
    sq_pushinteger(vm, fn_006abf20(SCRIPT_CONTEXT()));
    return 1;
}

/* GetTouchEventMineId_() - 0x002825e8: pushes the engine's integer answer. */
int fn_002825e8(SqVM *vm)
{
    sq_pushinteger(vm, fn_006aca3c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrackNPCKind_() - 0x0027ed44: pushes the engine's integer answer. */
int fn_0027ed44(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f1290(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrackNPCSubKind_() - 0x00281440: pushes the engine's integer answer. */
int fn_00281440(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f2174(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrackNPCPartyID_() - 0x00281414: pushes the engine's integer answer. */
int fn_00281414(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f2158(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrackNPCItemNum_() - 0x002813e8: pushes the engine's integer answer. */
int fn_002813e8(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f2144(SCRIPT_CONTEXT()));
    return 1;
}

/* GetBattleEndType_() - 0x0027f7f4: pushes the engine's integer answer. */
int fn_0027f7f4(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac190(SCRIPT_CONTEXT()));
    return 1;
}

/* GetBattleRound_() - 0x0027d860: pushes the engine's integer answer. */
int fn_0027d860(SqVM *vm)
{
    sq_pushinteger(vm, fn_006abee4(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrystalNum_() - 0x0027cbe0: pushes the engine's integer answer. */
int fn_0027cbe0(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f063c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetPlayerSmell_() - 0x0027d88c: pushes the engine's integer answer. */
int fn_0027d88c(SqVM *vm)
{
    sq_pushinteger(vm, fn_006abf04(SCRIPT_CONTEXT()));
    return 1;
}

/* BossLoadNewStealthBoxData_() - 0x002860d0: pushes the engine's integer answer. */
int fn_002860d0(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f3cf4(SCRIPT_CONTEXT()));
    return 1;
}

/* BossGetStealthBoxKind_() - 0x00283794: pushes the engine's integer answer. */
int fn_00283794(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f30b0(SCRIPT_CONTEXT()));
    return 1;
}

/* BossLoadNewSkyMapMonsterData_() - 0x00287188: pushes the engine's integer answer. */
int fn_00287188(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f4418(SCRIPT_CONTEXT()));
    return 1;
}

/* BossTaskGuideFlowMenuResult_() - 0x00286e1c: pushes the engine's integer answer. */
int fn_00286e1c(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f42f0(SCRIPT_CONTEXT()));
    return 1;
}

/* Task_BossSkyMapMonsterAddFellow_() - 0x00287b20: pushes the engine's integer answer. */
int fn_00287b20(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f4a58(SCRIPT_CONTEXT()));
    return 1;
}

/* BossGetSkyMapMonsterKindId_() - 0x00286b94: pushes the engine's integer answer. */
int fn_00286b94(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ad250(SCRIPT_CONTEXT()));
    return 1;
}

/* IsMasterCrackMap_() - 0x0027f95c: pushes the engine's integer answer. */
int fn_0027f95c(SqVM *vm)
{
    sq_pushinteger(vm, fn_002dbe24(SCRIPT_CONTEXT()));
    return 1;
}

/* IsDarkLordCrackMap_() - 0x00281688: pushes the engine's integer answer. */
int fn_00281688(SqVM *vm)
{
    sq_pushinteger(vm, fn_002dbdb0(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrackNPCDarkLordNo_() - 0x00283c1c: pushes the engine's integer answer. */
int fn_00283c1c(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f32b4(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCrackNPCDarkLordScoutRound_() - 0x002877a0: pushes the engine's integer answer. */
int fn_002877a0(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f4610(SCRIPT_CONTEXT()));
    return 1;
}

/* IsWaitLod_() - 0x0027a648: pushes the engine's boolean answer. */
int fn_0027a648(SqVM *vm)
{
    sq_pushbool(vm, fn_006ad7f0(SCRIPT_CONTEXT()));
    return 1;
}

/* GetOwnerMonsterNum_() - 0x00281564: pushes the engine's integer answer. */
int fn_00281564(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac520(SCRIPT_CONTEXT()));
    return 1;
}

/* GetFreeMonsterNum_() - 0x0028079c: pushes the engine's integer answer. */
int fn_0028079c(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac3a8(SCRIPT_CONTEXT()));
    return 1;
}

/* GetNakamaMonsterNum_() - 0x00282154: pushes the engine's integer answer. */
int fn_00282154(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac71c(SCRIPT_CONTEXT()));
    return 1;
}

/* IsFlightRideSetting_() - 0x0028264c: pushes the engine's boolean answer. */
int fn_0028264c(SqVM *vm)
{
    sq_pushbool(vm, fn_006aca48(SCRIPT_CONTEXT()));
    return 1;
}

/* GetDaytimeState_() - 0x0027ed70: pushes the engine's integer answer. */
int fn_0027ed70(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac094(SCRIPT_CONTEXT()));
    return 1;
}

/* GetWeather_() - 0x0027accc: pushes the engine's integer answer. */
int fn_0027accc(SqVM *vm)
{
    sq_pushinteger(vm, fn_006abb9c(SCRIPT_CONTEXT()));
    return 1;
}

/* Task_Save_() - 0x0027aab8: pushes the engine's integer answer. */
int fn_0027aab8(SqVM *vm)
{
    sq_pushinteger(vm, fn_001f5d88(SCRIPT_CONTEXT()));
    return 1;
}

/* IsScrollNaviMap_() - 0x0027eed8: pushes the engine's boolean answer. */
int fn_0027eed8(SqVM *vm)
{
    sq_pushbool(vm, fn_006ac0fc(SCRIPT_CONTEXT()));
    return 1;
}

/* GetGold_() - 0x002884a4: pushes the engine's integer answer. */
int fn_002884a4(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ad6b8(SCRIPT_CONTEXT()));
    return 1;
}

/* GetSendMedalCount_() - 0x002807c8: pushes the engine's integer answer. */
int fn_002807c8(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac3cc(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckAccessory_() - 0x0027d70c: pushes the engine's boolean answer. */
int fn_0027d70c(SqVM *vm)
{
    sq_pushbool(vm, fn_006abe98(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckAccessoryMax_() - 0x00280728: pushes the engine's boolean answer. */
int fn_00280728(SqVM *vm)
{
    sq_pushbool(vm, fn_006ac370(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckHaveGradeAccessory_() - 0x0028549c: pushes the engine's boolean answer. */
int fn_0028549c(SqVM *vm)
{
    sq_pushbool(vm, fn_006ad120(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCreatedAccessoryCounts_() - 0x002862b8: pushes the engine's integer answer. */
int fn_002862b8(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ad23c(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckOrnamentMax_() - 0x0027f7c8: pushes the engine's boolean answer. */
int fn_0027f7c8(SqVM *vm)
{
    sq_pushbool(vm, fn_006ac168(SCRIPT_CONTEXT()));
    return 1;
}

/* IsLayoutAnimeEnd_() - 0x0027f930: pushes the engine's boolean answer. */
int fn_0027f930(SqVM *vm)
{
    sq_pushbool(vm, fn_006b61ec(SCRIPT_CONTEXT()));
    return 1;
}

/* GetCouplingCount_() - 0x0027f820: pushes the engine's integer answer. */
int fn_0027f820(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac1ac(SCRIPT_CONTEXT()));
    return 1;
}

/* GetMonsterAnalyzeCount_() - 0x0028479c: pushes the engine's integer answer. */
int fn_0028479c(SqVM *vm)
{
    sq_pushinteger(vm, fn_006acff8(SCRIPT_CONTEXT()));
    return 1;
}

/* GetFoundCrackCount_() - 0x0028146c: pushes the engine's integer answer. */
int fn_0028146c(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ac4f4(SCRIPT_CONTEXT()));
    return 1;
}

/* GetOpenedStealthBoxCount_() - 0x00285d08: pushes the engine's integer answer. */
int fn_00285d08(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ad228(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckDiscMax_() - 0x0027c24c: pushes the engine's boolean answer. */
int fn_0027c24c(SqVM *vm)
{
    sq_pushbool(vm, fn_006abcc0(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckPlayerNameNgWord_() - 0x00283bf0: pushes the engine's boolean answer. */
int fn_00283bf0(SqVM *vm)
{
    sq_pushbool(vm, fn_006ace90(SCRIPT_CONTEXT()));
    return 1;
}

/* CheckNetworkLogin_() - 0x00280754: pushes the engine's boolean answer. */
int fn_00280754(SqVM *vm)
{
    sq_pushbool(vm, fn_006ac398(SCRIPT_CONTEXT()));
    return 1;
}

/* IsGetShortCutPlayerAbility_() - 0x00286d54: pushes the engine's boolean answer. */
int fn_00286d54(SqVM *vm)
{
    sq_pushbool(vm, fn_001f4184(SCRIPT_CONTEXT()));
    return 1;
}

/* IsDroneMode_() - 0x0027b6a0: pushes the engine's boolean answer. */
int fn_0027b6a0(SqVM *vm)
{
    sq_pushbool(vm, fn_006f733c(DRONE_MODE_STATE()));
    return 1;
}

/* GetDarkLoadRevengeWinCount_() - 0x00286cf0: pushes the engine's integer answer. */
int fn_00286cf0(SqVM *vm)
{
    sq_pushinteger(vm, fn_006ad35c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetDarkLoadBattleCount_() - 0x00284624: pushes the engine's integer answer. */
int fn_00284624(SqVM *vm)
{
    sq_pushinteger(vm, fn_006acfd8(SCRIPT_CONTEXT()));
    return 1;
}

/* GetEmptyAccessoryNum_() - 0x002831dc: pushes the engine's integer answer. */
int fn_002831dc(SqVM *vm)
{
    sq_pushinteger(vm, fn_006acc74(SCRIPT_CONTEXT()));
    return 1;
}
