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

/* IsPalpnte_(s32 value) - 0x0012fc50, 100 bytes: forwards s32 to fn_00155f80. */
int fn_0012fc50(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsPalpnte_, 0x0599);
    sq_pushbool(vm, fn_00155f80(SCRIPT_CONTEXT(), value));
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

/* IsLightWave_(s32 value) - 0x00130c94, 100 bytes: forwards s32 to fn_00164258. */
int fn_00130c94(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsLightWave_, 0x05a4);
    sq_pushbool(vm, fn_00164258(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsTeraAttack_(s32 value) - 0x00131c0c, 100 bytes: forwards s32 to fn_00154f50. */
int fn_00131c0c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsTeraAttack_, 0x05c5);
    sq_pushbool(vm, fn_00154f50(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsPartnerRide_(s32 value) - 0x00132438, 104 bytes: forwards s32 to fn_00174b78. */
int fn_00132438(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsPartnerRide_, 0x06db);
    sq_pushbool(vm, fn_00174b78(SCRIPT_CONTEXT(), value));
    return 1;
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

/* IsTargetSingle_(s32 value) - 0x00132ed4, 100 bytes: forwards s32 to fn_001648dc. */
int fn_00132ed4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsTargetSingle_, 0x0582);
    sq_pushbool(vm, fn_001648dc(SCRIPT_CONTEXT(), value));
    return 1;
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

/* IsStatusChangeVisible_(s32 value) - 0x00136d74, 104 bytes: forwards s32 to fn_00175324. */
int fn_00136d74(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsStatusChangeVisible_, 0x02fe);
    sq_pushbool(vm, fn_00175324(SCRIPT_CONTEXT(), value));
    return 1;
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

/* SetDamageMotion_ScoutAttack_(s32 value) - 0x00138440, 100 bytes: forwards s32 to fn_0014a35c. */
int fn_00138440(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetDamageMotion_ScoutAttack_, 0x0a29);
    sq_pushinteger(vm, fn_0014a35c(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsRide_(s32 value) - 0x0013965c, 104 bytes: forwards s32 to fn_00175518. */
int fn_0013965c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsRide_, 0x06d0);
    sq_pushbool(vm, fn_00175518(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsPasser_(s32 value) - 0x0013a248, 100 bytes: forwards s32 to fn_00175724. */
int fn_0013a248(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsPasser_, 0x058e);
    sq_pushbool(vm, fn_00175724(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsTokugi_(s32 value) - 0x0013a2e8, 100 bytes: forwards s32 to fn_00175778. */
int fn_0013a2e8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsTokugi_, 0x05ba);
    sq_pushbool(vm, fn_00175778(SCRIPT_CONTEXT(), value));
    return 1;
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

/* IsPassingWinNum_(s32 value) - 0x0027ee38, 104 bytes: forwards s32 to fn_001f14d8. */
int fn_0027ee38(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsPassingWinNum_, 0x0f3a);
    sq_pushbool(vm, fn_001f14d8(SCRIPT_CONTEXT(), value));
    return 1;
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

/* IsRideTypeMonster_(s32 value) - 0x00280924, 104 bytes: forwards s32 to fn_006ac3f4. */
int fn_00280924(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsRideTypeMonster_, 0x0c87);
    sq_pushbool(vm, fn_006ac3f4(SCRIPT_CONTEXT(), (u8)(value & 0xff)));
    return 1;
}

/* IsUsedCoinOverNum_(s32 value) - 0x002809c4, 104 bytes: forwards s32 to fn_001f1ac4. */
int fn_002809c4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsUsedCoinOverNum_, 0x0f1b);
    sq_pushbool(vm, fn_001f1ac4(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsPartyMonsterHpMax_(s32 value) - 0x00282678, 104 bytes: forwards s32 to fn_006aca70. */
int fn_00282678(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsPartyMonsterHpMax_, 0x0c3a);
    sq_pushbool(vm, fn_006aca70(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsPartyMonsterMpMax_(s32 value) - 0x00282718, 104 bytes: forwards s32 to fn_006acb24. */
int fn_00282718(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsPartyMonsterMpMax_, 0x0c44);
    sq_pushbool(vm, fn_006acb24(SCRIPT_CONTEXT(), value));
    return 1;
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

/* IsOpenNaviMapRideFilter_(s32 value) - 0x002856b4, 100 bytes: forwards s32 to fn_006ad1b8. */
int fn_002856b4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsOpenNaviMapRideFilter_, 0x06a9);
    sq_pushbool(vm, fn_006ad1b8(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsRankingBattleEntryNum_(s32 value) - 0x00285750, 104 bytes: forwards s32 to fn_001f3a6c. */
int fn_00285750(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsRankingBattleEntryNum_, 0x0f43);
    sq_pushbool(vm, fn_001f3a6c(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsReactorMarkerTypeHide_(s32 value) - 0x002857f0, 100 bytes: forwards s32 to fn_001f3ab4. */
int fn_002857f0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsReactorMarkerTypeHide_, 0x0237);
    sq_pushbool(vm, fn_001f3ab4(SCRIPT_CONTEXT(), value));
    return 1;
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
