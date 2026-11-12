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
extern int fn_00154dd8(ScriptContext *context, s8);
extern int fn_00155084(ScriptContext *context, s8);
extern int fn_00155370(ScriptContext *context, s32);
extern int fn_001553f4(ScriptContext *context, s8);
extern int fn_00155bc0(ScriptContext *context, s32);
extern int fn_00163860(ScriptContext *context, s32);
extern int fn_00163a1c(ScriptContext *context, s32);
extern int fn_001642a4(ScriptContext *context, s32);
extern int fn_001645e0(ScriptContext *context, s8);
extern int fn_00164610(ScriptContext *context, s32);
extern int fn_00164634(ScriptContext *context, s32);
extern int fn_0016561c(ScriptContext *context, s8);
extern int fn_001657c8(ScriptContext *context, s8);
extern int fn_00174d68(ScriptContext *context, s32);
extern int fn_001ec104(ScriptContext *context, s16);
extern void fn_001ec670(ScriptContext *context, s32);
extern void fn_001f0650(ScriptContext *context, u8);
extern void fn_001f125c(ScriptContext *context, s32);
extern void fn_001f5b00(ScriptContext *context, u8);
extern int fn_006abb88(ScriptContext *context, s16);
extern int fn_006ac024(ScriptContext *context, s16);
extern int fn_006ac0c0(ScriptContext *context, s32);
extern int fn_006ac3e0(ScriptContext *context, u8);
extern int fn_006ac508(ScriptContext *context, s32);
extern int fn_006ac540(ScriptContext *context, s8);
extern int fn_006ac688(ScriptContext *context, u8);
extern int fn_006ac738(ScriptContext *context, s32);
extern int fn_006ad0a8(ScriptContext *context, s32);
extern int fn_006ad198(ScriptContext *context, u8);
extern int fn_006ad1b4(ScriptContext *context, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_FieldBgmStop_[];
extern const char kName_FocusIconFromId_[];
extern const char kName_FocusIcon_[];
extern const char kName_GetAccessoryNum_[];
extern const char kName_GetActionCategory_[];
extern const char kName_GetActionEfficacy_[];
extern const char kName_GetActionNo_[];
extern const char kName_GetActorIndex_[];
extern const char kName_GetAllyIndex_[];
extern const char kName_GetEnemyIndex_[];
extern const char kName_GetFieldRideTypeNum_[];
extern const char kName_GetItemFoundRecord_[];
extern const char kName_GetItemNum_[];
extern const char kName_GetMonsterHp_[];
extern const char kName_GetMonsterLinage_[];
extern const char kName_GetNakamaMonsterRankNum_[];
extern const char kName_GetNakamaRecord_[];
extern const char kName_GetOwnerMonsterKind_[];
extern const char kName_GetPartyMonsterNum_[];
extern const char kName_GetRandomDonMoguraEvent_[];
extern const char kName_GetRandomDonMoguraHole_[];
extern const char kName_GetTargetNum_[];
extern const char kName_GetTargetType_[];
extern const char kName_GetUseMp_[];
extern const char kName_GotoMenuScene_[];
extern const char kName_IsDanWinNum_[];
extern const char kName_IsFreezeWave_[];
extern const char kName_IsHaveSpecialDisc_[];
extern const char kName_IsHighRankSpell_[];

/* GetRandom_(s32 value) - 0x0012d8bc, 80 bytes: forwards s32 to fn_00163860. */
int fn_0012d8bc(SqVM *vm)
{
    s32 value;
    if (sq_getinteger(vm, -1, &value) < 0)
        return sq_throwerror(vm, SCRIPT_EMPTY_MESSAGE);
    sq_pushinteger(vm, fn_00163860(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetActionNo_(s32 value) - 0x0013096c, 100 bytes: forwards s32 to fn_001642a4. */
int fn_0013096c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetActionNo_, 0x0497);
    sq_pushinteger(vm, fn_001642a4(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetAllyIndex_(s32 value) - 0x001312dc, 104 bytes: forwards s32 to fn_00154dd8. */
int fn_001312dc(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetAllyIndex_, 0x034e);
    sq_pushinteger(vm, fn_00154dd8(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetMonsterHp_(s32 value) - 0x00131380, 104 bytes: forwards s32 to fn_001645e0. */
int fn_00131380(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetMonsterHp_, 0x0486);
    sq_pushinteger(vm, fn_001645e0(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetTargetNum_(s32 value) - 0x0013160c, 104 bytes: forwards s32 to fn_0016561c. */
int fn_0013160c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetTargetNum_, 0x0501);
    sq_pushinteger(vm, fn_0016561c(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsFreezeWave_(s32 value) - 0x001316b0, 100 bytes: forwards s32 to fn_00164610. */
int fn_001316b0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsFreezeWave_, 0x05af);
    sq_pushbool(vm, fn_00164610(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetActorIndex_(s32 value) - 0x00131e80, 104 bytes: forwards s32 to fn_001657c8. */
int fn_00131e80(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetActorIndex_, 0x04bb);
    sq_pushinteger(vm, fn_001657c8(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetEnemyIndex_(s32 value) - 0x00132048, 104 bytes: forwards s32 to fn_00155084. */
int fn_00132048(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetEnemyIndex_, 0x0359);
    sq_pushinteger(vm, fn_00155084(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetTargetType_(s32 value) - 0x001322f8, 100 bytes: forwards s32 to fn_00164634. */
int fn_001322f8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetTargetType_, 0x04b0);
    sq_pushinteger(vm, fn_00164634(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsHighRankSpell_(s32 value) - 0x00133800, 100 bytes: forwards s32 to fn_00155370. */
int fn_00133800(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsHighRankSpell_, 0x0390);
    sq_pushbool(vm, fn_00155370(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetMonsterLinage_(s32 value) - 0x001342a0, 104 bytes: forwards s32 to fn_001553f4. */
int fn_001342a0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetMonsterLinage_, 0x0246);
    sq_pushinteger(vm, fn_001553f4(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetActionCategory_(s32 value) - 0x001348f8, 100 bytes: forwards s32 to fn_00174d68. */
int fn_001348f8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetActionCategory_, 0x02a4);
    sq_pushinteger(vm, fn_00174d68(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetActionEfficacy_(s32 value) - 0x00134994, 100 bytes: forwards s32 to fn_00163a1c. */
int fn_00134994(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetActionEfficacy_, 0x0299);
    sq_pushinteger(vm, fn_00163a1c(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetUseMp_(s32 value) - 0x0013a00c, 100 bytes: forwards s32 to fn_00155bc0. */
int fn_0013a00c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetUseMp_, 0x0521);
    sq_pushinteger(vm, fn_00155bc0(SCRIPT_CONTEXT(), value));
    return 1;
}

/* FocusIcon_(s32 value) - 0x0027a344, 92 bytes: forwards s32 to fn_001f5b00. */
int fn_0027a344(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_FocusIcon_, 0x0676);
    fn_001f5b00(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* GetItemNum_(s32 value) - 0x0027ac2c, 104 bytes: forwards s32 to fn_006abb88. */
int fn_0027ac2c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetItemNum_, 0x0d3d);
    sq_pushinteger(vm, fn_006abb88(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsDanWinNum_(s32 value) - 0x0027b600, 104 bytes: forwards s32 to fn_001ec104. */
int fn_0027b600(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsDanWinNum_, 0x0f31);
    sq_pushbool(vm, fn_001ec104(SCRIPT_CONTEXT(), value));
    return 1;
}

/* FieldBgmStop_(s32 value) - 0x0027c308, 88 bytes: forwards s32 to fn_001ec670. */
int fn_0027c308(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_FieldBgmStop_, 0x0f06);
    fn_001ec670(SCRIPT_CONTEXT(), value);
    return 0;
}

/* GotoMenuScene_(s32 value) - 0x0027cc5c, 92 bytes: forwards s32 to fn_001f0650. */
int fn_0027cc5c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GotoMenuScene_, 0x0af7);
    fn_001f0650(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* FocusIconFromId_(s32 value) - 0x0027ebd8, 88 bytes: forwards s32 to fn_001f125c. */
int fn_0027ebd8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_FocusIconFromId_, 0x067f);
    fn_001f125c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* GetAccessoryNum_(s32 value) - 0x0027ec68, 104 bytes: forwards s32 to fn_006ac024. */
int fn_0027ec68(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetAccessoryNum_, 0x0d63);
    sq_pushinteger(vm, fn_006ac024(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetNakamaRecord_(s32 value) - 0x0027ed9c, 100 bytes: forwards s32 to fn_006ac0c0. */
int fn_0027ed9c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetNakamaRecord_, 0x0cd3);
    sq_pushbool(vm, fn_006ac0c0(SCRIPT_CONTEXT(), value));
    return 1;
}

/* IsHaveSpecialDisc_(s32 value) - 0x002807f4, 104 bytes: forwards s32 to fn_006ac3e0. */
int fn_002807f4(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_IsHaveSpecialDisc_, 0x0ecb);
    sq_pushbool(vm, fn_006ac3e0(SCRIPT_CONTEXT(), (u8)(value & 0xff)));
    return 1;
}

/* GetItemFoundRecord_(s32 value) - 0x002814c8, 100 bytes: forwards s32 to fn_006ac508. */
int fn_002814c8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetItemFoundRecord_, 0x0cc9);
    sq_pushbool(vm, fn_006ac508(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetPartyMonsterNum_(s32 value) - 0x00281590, 104 bytes: forwards s32 to fn_006ac540. */
int fn_00281590(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterNum_, 0x0bde);
    sq_pushinteger(vm, fn_006ac540(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetFieldRideTypeNum_(s32 value) - 0x00281e98, 104 bytes: forwards s32 to fn_006ac688. */
int fn_00281e98(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetFieldRideTypeNum_, 0x0c5e);
    sq_pushinteger(vm, fn_006ac688(SCRIPT_CONTEXT(), (u8)(value & 0xff)));
    return 1;
}

/* GetOwnerMonsterKind_(s32 value) - 0x00282180, 100 bytes: forwards s32 to fn_006ac738. */
int fn_00282180(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetOwnerMonsterKind_, 0x0bfc);
    sq_pushinteger(vm, fn_006ac738(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetRandomDonMoguraHole_(s32 value) - 0x002848b8, 100 bytes: forwards s32 to fn_006ad0a8. */
int fn_002848b8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetRandomDonMoguraHole_, 0x0f72);
    sq_pushinteger(vm, fn_006ad0a8(SCRIPT_CONTEXT(), value));
    return 1;
}

/* GetNakamaMonsterRankNum_(s32 value) - 0x00285538, 104 bytes: forwards s32 to fn_006ad198. */
int fn_00285538(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetNakamaMonsterRankNum_, 0x0c7d);
    sq_pushinteger(vm, fn_006ad198(SCRIPT_CONTEXT(), (u8)(value & 0xff)));
    return 1;
}

/* GetRandomDonMoguraEvent_(s32 value) - 0x002855d8, 100 bytes: forwards s32 to fn_006ad1b4. */
int fn_002855d8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetRandomDonMoguraEvent_, 0x0f7d);
    sq_pushinteger(vm, fn_006ad1b4(SCRIPT_CONTEXT(), value));
    return 1;
}
