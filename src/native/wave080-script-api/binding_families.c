/* Script-facing native API: bindings reconstructed from the original
 * instructions.
 *
 * Each function reads its arguments through the VM helpers, reports a failure
 * through the release-build error formatter, then makes one engine call and
 * either pushes the result or returns nothing. The argument indexes, binding
 * names, source lines, file names and engine entry points are the ones the
 * original instruction stream carries, and the reader for each argument is the
 * helper the original calls.
 */
#include "script_api.h"

extern int fn_00154e64(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_00174f10(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_001555bc(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_00149844(ScriptContext *context, const char * a0, const char * a1);
extern s32 fn_0015b408(ScriptContext *context, s32 a0, s32 a1);
extern void fn_00155808(ScriptContext *context, s32 a0, const char * a1);
extern s32 fn_00149ab4(ScriptContext *context, const char * a0, f32 a1);
extern s32 fn_0014a258(ScriptContext *context, const char * a0, f32 a1);
extern void fn_00149e50(ScriptContext *context, s32 a0, const char * a1);
extern void fn_0014a1bc(ScriptContext *context, s32 a0, const char * a1);
extern int fn_001754f0(ScriptContext *context, s32 a0, s32 a1);
extern void fn_001f5b70(ScriptContext *context, s32 a0, int a1);
extern s32 fn_001f10cc(ScriptContext *context, s32 a0, int a1);
extern s32 fn_001f2d7c(ScriptContext *context, s32 a0, const char * a1);
extern void fn_001f1604(ScriptContext *context, s32 a0, int a1);

extern const char kName_IsLivingDead_[];
extern const char kName_GetAllEffectFrame_[];
extern const char kName_GetEnemyAppealPoint_[];
extern const char kName_SetPointWorldEffect__2[];
extern const char kName_SetStateEffect_Init_[];
extern const char kName_ReadMonsterAddMotion_[];
extern const char kName_Task_PathPointMoveEye_[];
extern const char kName_Task_PathPointMoveTgt_[];
extern const char kName_SetSceneOffsetFromMove_[];
extern const char kName_SetSceneOffsetFromPoint_[];
extern const char kName_IsDead_[];
extern const char kName_SetActive_[];
extern const char kName_Task_AddFellow_[];
extern const char kName_Task_AnimeMove_[];
extern const char kName_SetMineRejectGT_[];

/* IsLivingDead_(sq_getinteger, sq_getinteger) - 0x00131890, 180 bytes. */
int fn_00131890(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsLivingDead_, 0x0640);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsLivingDead_, 0x0643);
    sq_pushbool(vm, fn_00154e64(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* GetAllEffectFrame_(sq_getinteger, sq_getinteger) - 0x00134a34, 184 bytes. */
int fn_00134a34(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetAllEffectFrame_, 0x02ef);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetAllEffectFrame_, 0x02f2);
    sq_pushinteger(vm, fn_00174f10(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* GetEnemyAppealPoint_(sq_getinteger, sq_getinteger) - 0x001358b0, 180 bytes. */
int fn_001358b0(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetEnemyAppealPoint_, 0x0550);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetEnemyAppealPoint_, 0x0553);
    sq_pushinteger(vm, fn_001555bc(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* SetPointWorldEffect_(sq_getstring, sq_getstring) - 0x00135c2c, 180 bytes. */
int fn_00135c2c(SqVM *vm)
{
    const char * a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_SetPointWorldEffect__2, 0x01a0);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_SetPointWorldEffect__2, 0x01a3);
    sq_pushinteger(vm, fn_00149844(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* SetStateEffect_Init_(sq_getinteger, sq_getinteger) - 0x00135d1c, 180 bytes. */
int fn_00135d1c(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetStateEffect_Init_, 0x0afd);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetStateEffect_Init_, 0x0b00);
    sq_pushinteger(vm, fn_0015b408(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* ReadMonsterAddMotion_(sq_getinteger, sq_getstring) - 0x0013644c, 176 bytes. */
int fn_0013644c(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_ReadMonsterAddMotion_, 0x014e);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_ReadMonsterAddMotion_, 0x0151);
    fn_00155808(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

/* Task_PathPointMoveEye_(sq_getstring, sq_getfloat) - 0x00137208, 184 bytes. */
int fn_00137208(SqVM *vm)
{
    const char * a0;
    f32 a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_Task_PathPointMoveEye_, 0x090a);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a1), "failed: sq_getfloat", "BattleScriptFunc.cpp",
                      kName_Task_PathPointMoveEye_, 0x090d);
    sq_pushinteger(vm, fn_00149ab4(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* Task_PathPointMoveTgt_(sq_getstring, sq_getfloat) - 0x00137314, 184 bytes. */
int fn_00137314(SqVM *vm)
{
    const char * a0;
    f32 a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_Task_PathPointMoveTgt_, 0x0918);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a1), "failed: sq_getfloat", "BattleScriptFunc.cpp",
                      kName_Task_PathPointMoveTgt_, 0x091b);
    sq_pushinteger(vm, fn_0014a258(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* SetSceneOffsetFromMove_(sq_getinteger, sq_getstring) - 0x00137724, 176 bytes. */
int fn_00137724(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetSceneOffsetFromMove_, 0x031a);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_SetSceneOffsetFromMove_, 0x031d);
    fn_00149e50(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

/* SetSceneOffsetFromPoint_(sq_getinteger, sq_getstring) - 0x00137eb0, 176 bytes. */
int fn_00137eb0(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetSceneOffsetFromPoint_, 0x0327);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_SetSceneOffsetFromPoint_, 0x032a);
    fn_0014a1bc(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

/* IsDead_(sq_getinteger, sq_getinteger) - 0x001393fc, 180 bytes. */
int fn_001393fc(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsDead_, 0x05d0);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsDead_, 0x05d3);
    sq_pushbool(vm, fn_001754f0(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* SetActive_(sq_getinteger, sq_getbool) - 0x0027a674, 184 bytes. */
int fn_0027a674(SqVM *vm)
{
    s32 a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetActive_, 0x0209);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetActive_, 0x020c);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001f5b70(context, a0, a1 != 0);
    return 0;
}

/* Task_AddFellow_(sq_getinteger, sq_getbool) - 0x0027e528, 196 bytes. */
int fn_0027e528(SqVM *vm)
{
    s32 a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AddFellow_, 0x0d03);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_Task_AddFellow_, 0x0d06);
    ScriptContext *context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f10cc(context, a0, a1 != 0));
    return 1;
}

/* Task_AnimeMove_(sq_getinteger, sq_getstring) - 0x0027e63c, 180 bytes. */
int fn_0027e63c(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMove_, 0x043d);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMove_, 0x0440);
    sq_pushinteger(vm, fn_001f2d7c(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* SetMineRejectGT_(sq_getinteger, sq_getbool) - 0x0027f10c, 184 bytes. */
int fn_0027f10c(SqVM *vm)
{
    s32 a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMineRejectGT_, 0x073d);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMineRejectGT_, 0x0740);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001f1604(context, a0, a1 != 0);
    return 0;
}

