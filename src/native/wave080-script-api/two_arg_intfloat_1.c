/* Script-facing native API: two-argument bindings that read an integer and a float.
 *
 * Every binding here reads two Squirrel arguments through the VM helpers,
 * validates each read with the assertion the original carries, forwards both
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
extern void fn_001551bc(ScriptContext *context, u8, f32);
extern void fn_00174fc0(ScriptContext *context, u8, f32);
extern void fn_001f1b04(ScriptContext *context, s32, f32);
extern void fn_001f2248(ScriptContext *context, s32, f32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetMotionFrame_[];
extern const char kName_SetMotionStepFrame_[];
extern const char kName_SetNaviMapIconDir_[];
extern const char kName_SetSearchableAngle_[];

/* SetMotionFrame_(f32 args.first, s32 args.second) - 0x001331f0, 176 bytes: forwards f32 and s32 to fn_001551bc. */
int fn_001331f0(SqVM *vm)
{
    struct { f32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetMotionFrame_, 0x017b);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.first), "failed: sq_getfloat",
                      "BattleScriptFunc.cpp", kName_SetMotionFrame_, 0x017e);
    fn_001551bc(SCRIPT_CONTEXT(), (u8)(args.second & 0xff), args.first);
    return 0;
}

/* SetMotionStepFrame_(f32 args.first, s32 args.second) - 0x001354c4, 176 bytes: forwards f32 and s32 to fn_00174fc0. */
int fn_001354c4(SqVM *vm)
{
    struct { f32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetMotionStepFrame_, 0x0193);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.first), "failed: sq_getfloat",
                      "BattleScriptFunc.cpp", kName_SetMotionStepFrame_, 0x0196);
    fn_00174fc0(SCRIPT_CONTEXT(), (u8)(args.second & 0xff), args.first);
    return 0;
}

/* SetNaviMapIconDir_(s32 args.first, f32 args.second) - 0x00280b6c, 172 bytes: forwards s32 and f32 to fn_001f1b04. */
int fn_00280b6c(SqVM *vm)
{
    struct { s32 first; f32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetNaviMapIconDir_, 0x066a);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.second), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetNaviMapIconDir_, 0x066d);
    fn_001f1b04(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* SetSearchableAngle_(s32 args.first, f32 args.second) - 0x00281a10, 172 bytes: forwards s32 and f32 to fn_001f2248. */
int fn_00281a10(SqVM *vm)
{
    struct { s32 first; f32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetSearchableAngle_, 0x00fa);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.second), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetSearchableAngle_, 0x00fd);
    fn_001f2248(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}
