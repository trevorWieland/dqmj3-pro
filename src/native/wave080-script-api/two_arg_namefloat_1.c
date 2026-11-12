/* Script-facing native API: two-argument bindings that read a name and a float.
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
extern int fn_00149ab4(ScriptContext *context, const char *, f32);
extern int fn_0014a258(ScriptContext *context, const char *, f32);
extern int fn_001f3b6c(ScriptContext *context, const char *, f32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_ArrangePointReactorPoint_[];
extern const char kName_Task_PathPointMoveEye_[];
extern const char kName_Task_PathPointMoveTgt_[];

/* Task_PathPointMoveEye_(const char * args.first, f32 args.second) - 0x00137208, 184 bytes: forwards const char * and f32 to fn_00149ab4. */
int fn_00137208(SqVM *vm)
{
    struct { const char * first; f32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "BattleScriptFunc.cpp", kName_Task_PathPointMoveEye_, 0x090a);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.second), "failed: sq_getfloat",
                      "BattleScriptFunc.cpp", kName_Task_PathPointMoveEye_, 0x090d);
    sq_pushinteger(vm, fn_00149ab4(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* Task_PathPointMoveTgt_(const char * args.first, f32 args.second) - 0x00137314, 184 bytes: forwards const char * and f32 to fn_0014a258. */
int fn_00137314(SqVM *vm)
{
    struct { const char * first; f32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "BattleScriptFunc.cpp", kName_Task_PathPointMoveTgt_, 0x0918);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.second), "failed: sq_getfloat",
                      "BattleScriptFunc.cpp", kName_Task_PathPointMoveTgt_, 0x091b);
    sq_pushinteger(vm, fn_0014a258(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* ArrangePointReactorPoint_(const char * args.first, f32 args.second) - 0x00285bd4, 184 bytes: forwards const char * and f32 to fn_001f3b6c. */
int fn_00285bd4(SqVM *vm)
{
    struct { const char * first; f32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_ArrangePointReactorPoint_, 0x016a);
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &args.second), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_ArrangePointReactorPoint_, 0x016d);
    sq_pushinteger(vm, fn_001f3b6c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}
