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

/* FocusIcon_(s32 value) - 0x0027a344, 92 bytes: forwards s32 to fn_001f5b00. */
int fn_0027a344(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_FocusIcon_, 0x0676);
    fn_001f5b00(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
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

