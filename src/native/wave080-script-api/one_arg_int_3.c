/* Script-facing native API: bindings that read one integer.
 *
 * Every binding here reads its Squirrel arguments through the VM helpers,
 * validates each read with the assertion the original carries, forwards the
 * values to one engine service and either returns 0 or pushes that service's
 * answer.  Locals are named by argument position; the engine service named in
 * each comment is the recovered callee, and the operation/file/line operands are
 * the original's own.
 *
 * Status: bodies transcribed from the original instruction shapes.  The build
 * measures each one against the original bytes; only exact ones remain here.
 */
#include "script_api.h"

/* The engine services the original calls, by canonical image symbol. */
extern void fn_001491a0(ScriptContext *context, u8);
extern int fn_0014a35c(ScriptContext *context, s32);
extern int fn_00154b54(ScriptContext *context, s32);
extern int fn_00154f50(ScriptContext *context, s32);
extern int fn_00155f80(ScriptContext *context, s32);
extern void fn_00159c8c(ScriptContext *context, u8);
extern void fn_00159dc4(ScriptContext *context, u8);
extern int fn_00164258(ScriptContext *context, s32);
extern int fn_001648dc(ScriptContext *context, s32);
extern void fn_0016a51c(ScriptContext *context, u8);
extern int fn_00174b78(ScriptContext *context, s8);
extern int fn_00175324(ScriptContext *context, s8);
extern int fn_00175518(ScriptContext *context, s8);
extern int fn_00175724(ScriptContext *context, s32);
extern int fn_00175778(ScriptContext *context, s32);
extern void fn_001ec1c4(ScriptContext *context, s32);
extern void fn_001f0d74(ScriptContext *context, s32);
extern int fn_001f14d8(ScriptContext *context, s16);
extern void fn_001f15d4(ScriptContext *context, s32);
extern void fn_001f1744(ScriptContext *context, s32);
extern void fn_001f1798(ScriptContext *context, s32);
extern int fn_001f1ac4(ScriptContext *context, s16);
extern void fn_001f32d0(ScriptContext *context, s32);
extern int fn_001f3a6c(ScriptContext *context, u16);
extern int fn_001f3ab4(ScriptContext *context, s32);
extern void fn_001f4a98(ScriptContext *context, s32);
extern int fn_006ac3f4(ScriptContext *context, u8);
extern int fn_006aca70(ScriptContext *context, s8);
extern int fn_006acb24(ScriptContext *context, s8);
extern int fn_006ad1b8(ScriptContext *context, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_IsLightWave_[];
extern const char kName_IsOpenNaviMapRideFilter_[];
extern const char kName_IsPalpnte_[];
extern const char kName_IsPartnerRide_[];
extern const char kName_IsPartyMonsterHpMax_[];
extern const char kName_IsPartyMonsterMpMax_[];
extern const char kName_IsPasser_[];
extern const char kName_IsPassingWinNum_[];
extern const char kName_IsRankingBattleEntryNum_[];
extern const char kName_IsReactorMarkerTypeHide_[];
extern const char kName_IsRideTypeMonster_[];
extern const char kName_IsRide_[];
extern const char kName_IsStatusChangeVisible_[];
extern const char kName_IsTargetSingle_[];
extern const char kName_IsTeraAttack_[];
extern const char kName_IsTokugi_[];
extern const char kName_IsUsedCoinOverNum_[];
extern const char kName_OpenNaviMapBlind_[];
extern const char kName_OpenNaviMapRideFilter_[];
extern const char kName_PlacementMonster_[];
extern const char kName_PlayIconAttackAnim_[];
extern const char kName_PlayIconHealAndSupportAnim_[];
extern const char kName_PushCrackNPCItemNameAndNumMessage_[];
extern const char kName_ResetStepSe_[];
extern const char kName_RideMaster_[];
extern const char kName_RideOffMaster_[];
extern const char kName_SetDamageMotion_ScoutAttack_[];
extern const char kName_SetDirToPlayer_[];
extern const char kName_SetDiscQuestEnd_[];

/* IsTaskEnd_(s32 value) - 0x0012d914, 80 bytes: forwards s32 to fn_00154b54. */
int fn_0012d914(SqVM *vm)
{
    s32 value;
    if (sq_getinteger(vm, -1, &value) < 0)
        return sq_throwerror(vm, SCRIPT_EMPTY_MESSAGE);
    sq_pushbool(vm, fn_00154b54(SCRIPT_CONTEXT(), value));
    return 1;
}

/* RideMaster_(s32 value) - 0x001305e4, 92 bytes: forwards s32 to fn_001491a0. */
int fn_001305e4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_RideMaster_, 0x02b8);
    fn_001491a0(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* RideOffMaster_(s32 value) - 0x001324dc, 92 bytes: forwards s32 to fn_0016a51c. */
int fn_001324dc(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_RideOffMaster_, 0x02af);
    fn_0016a51c(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* PlayIconAttackAnim_(s32 value) - 0x0013542c, 92 bytes: forwards s32 to fn_00159c8c. */
int fn_0013542c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_PlayIconAttackAnim_, 0x0785);
    fn_00159c8c(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* PlayIconHealAndSupportAnim_(s32 value) - 0x0013822c, 92 bytes: forwards s32 to fn_00159dc4. */
int fn_0013822c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_PlayIconHealAndSupportAnim_, 0x078e);
    fn_00159dc4(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* ResetStepSe_(s32 value) - 0x0027b800, 88 bytes: forwards s32 to fn_001ec1c4. */
int fn_0027b800(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ResetStepSe_, 0x03ee);
    fn_001ec1c4(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetDirToPlayer_(s32 value) - 0x0027deec, 88 bytes: forwards s32 to fn_001f0d74. */
int fn_0027deec(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetDirToPlayer_, 0x028e);
    fn_001f0d74(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetDiscQuestEnd_(s32 value) - 0x0027ef74, 88 bytes: forwards s32 to fn_001f15d4. */
int fn_0027ef74(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetDiscQuestEnd_, 0x0a64);
    fn_001f15d4(SCRIPT_CONTEXT(), value);
    return 0;
}

/* OpenNaviMapBlind_(s32 value) - 0x0027f988, 88 bytes: forwards s32 to fn_001f1744. */
int fn_0027f988(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_OpenNaviMapBlind_, 0x06b2);
    fn_001f1744(SCRIPT_CONTEXT(), value);
    return 0;
}

/* PlacementMonster_(s32 value) - 0x0027fa18, 88 bytes: forwards s32 to fn_001f1798. */
int fn_0027fa18(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_PlacementMonster_, 0x01c3);
    fn_001f1798(SCRIPT_CONTEXT(), value);
    return 0;
}

/* OpenNaviMapRideFilter_(s32 value) - 0x00283e10, 88 bytes: forwards s32 to fn_001f32d0. */
int fn_00283e10(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_OpenNaviMapRideFilter_, 0x06a0);
    fn_001f32d0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* PushCrackNPCItemNameAndNumMessage_(s32 value) - 0x00287b4c, 88 bytes: forwards s32 to fn_001f4a98. */
int fn_00287b4c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_PushCrackNPCItemNameAndNumMessage_, 0x07cc);
    fn_001f4a98(SCRIPT_CONTEXT(), value);
    return 0;
}
