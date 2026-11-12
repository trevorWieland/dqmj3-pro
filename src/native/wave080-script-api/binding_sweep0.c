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

extern void fn_0014924c(ScriptContext *context, s32 a0, const char * a1);
extern void fn_001551bc(ScriptContext *context, s32 a0, f32 a1);
extern void fn_00174fc0(ScriptContext *context, s32 a0, f32 a1);

extern const char kName_SetPointPos__2[];
extern const char kName_SetMotionFrame_[];
extern const char kName_SetMotionStepFrame_[];

/* SetPointPos_(sq_getinteger, sq_getstring) - 0x00131028, 176 bytes. */
int fn_00131028(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetPointPos__2, 0x00e4);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_SetPointPos__2, 0x00e7);
    fn_0014924c(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

/* SetMotionFrame_(sq_getinteger, sq_getfloat) - 0x001331f0, 176 bytes. */
int fn_001331f0(SqVM *vm)
{
    s32 a0;
    f32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetMotionFrame_, 0x017b);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a1), "failed: sq_getfloat", "BattleScriptFunc.cpp",
                      kName_SetMotionFrame_, 0x017e);
    fn_001551bc(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

/* SetMotionStepFrame_(sq_getinteger, sq_getfloat) - 0x001354c4, 176 bytes. */
int fn_001354c4(SqVM *vm)
{
    s32 a0;
    f32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetMotionStepFrame_, 0x0193);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a1), "failed: sq_getfloat", "BattleScriptFunc.cpp",
                      kName_SetMotionStepFrame_, 0x0196);
    fn_00174fc0(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

