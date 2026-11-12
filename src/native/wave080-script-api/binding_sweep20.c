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

extern s32 fn_00175108(ScriptContext *context, s32 a0, s32 a1);
extern void fn_006abbcc(ScriptContext *context, s32 a0, s32 a1);
extern void fn_001ec3c4(ScriptContext *context, s32 a0, s32 a1);
extern void fn_001f0898(ScriptContext *context, s32 a0, int a1);
extern void fn_006abe60(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_001f111c(ScriptContext *context, s32 a0, const char * a1);

extern const char kName_GetSingleEffectFrame_[];
extern const char kName_SetComMode_[];
extern const char kName_AddAccessory_[];
extern const char kName_SetTalkEnable_[];
extern const char kName_SetWalkRadius_[];
extern const char kName_ArrangePointNpc_[];

/* GetSingleEffectFrame_(sq_getinteger, sq_getinteger) - 0x00136114, 184 bytes. */
int fn_00136114(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetSingleEffectFrame_, 0x02d1);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetSingleEffectFrame_, 0x02d4);
    sq_pushinteger(vm, fn_00175108(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* SetComMode_(sq_getinteger, sq_getinteger) - 0x0027b0cc, 168 bytes. */
int fn_0027b0cc(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetComMode_, 0x00d6);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetComMode_, 0x00d9);
    fn_006abbcc(SCRIPT_CONTEXT(), a0, a1);
    return 0;
}

/* AddAccessory_(sq_getinteger, sq_getinteger) - 0x0027bfa8, 172 bytes. */
int fn_0027bfa8(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AddAccessory_, 0x0d57);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AddAccessory_, 0x0d5a);
    fn_001ec3c4(SCRIPT_CONTEXT(), (s16)a0, a1);
    return 0;
}

/* SetTalkEnable_(sq_getinteger, sq_getbool) - 0x0027d368, 184 bytes. */
int fn_0027d368(SqVM *vm)
{
    s32 a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetTalkEnable_, 0x00ee);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetTalkEnable_, 0x00f1);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001f0898(context, a0, a1 != 0);
    return 0;
}

/* SetWalkRadius_(sq_getinteger, sq_getinteger) - 0x0027d468, 168 bytes. */
int fn_0027d468(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetWalkRadius_, 0x00e2);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetWalkRadius_, 0x00e5);
    fn_006abe60(SCRIPT_CONTEXT(), a0, a1);
    return 0;
}

/* ArrangePointNpc_(sq_getinteger, sq_getstring) - 0x0027e740, 180 bytes. */
int fn_0027e740(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_ArrangePointNpc_, 0x00c9);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_ArrangePointNpc_, 0x00cc);
    sq_pushinteger(vm, fn_001f111c(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

