/* Script-facing native API: two-argument bindings that read two names.
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
extern int fn_001f2598(ScriptContext *context, const char *, const char *);
extern int fn_001f2c1c(ScriptContext *context, const char *, const char *);
extern void fn_0025a42c(ScriptContext *context, const char *, const char *);

/* The binding names, each one shared copy in rodata. */
extern const char kName_LoadLayoutEx_[];
extern const char kName_SetPointWorldEffect_[];
extern const char kName_Task_AnimeMoveCamera_[];

/* LoadLayoutEx_(const char * args.first, const char * args.second) - 0x0027c4e4, 168 bytes: forwards const char * and const char * to fn_0025a42c. */
int fn_0027c4e4(SqVM *vm)
{
    struct { const char * first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_LoadLayoutEx_, 0x0dbd);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_LoadLayoutEx_, 0x0dbf);
    fn_0025a42c(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* SetPointWorldEffect_(const char * args.first, const char * args.second) - 0x00282950, 180 bytes: forwards const char * and const char * to fn_001f2598. */
int fn_00282950(SqVM *vm)
{
    struct { const char * first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointWorldEffect_, 0x0b78);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointWorldEffect_, 0x0b7b);
    sq_pushinteger(vm, fn_001f2598(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* Task_AnimeMoveCamera_(const char * args.first, const char * args.second) - 0x00283614, 180 bytes: forwards const char * and const char * to fn_001f2c1c. */
int fn_00283614(SqVM *vm)
{
    struct { const char * first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveCamera_, 0x0623);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveCamera_, 0x0626);
    sq_pushinteger(vm, fn_001f2c1c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}
