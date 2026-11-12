/* Script-facing native API: two-argument bindings that read a name and an integer.
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
extern int fn_001f06a8(ScriptContext *context, const char *, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetBoneEffect_[];

/* SetBoneEffect_(const char * args.first, s32 args.second) - 0x0027cd0c, 180 bytes: forwards const char * and s32 to fn_001f06a8. */
int fn_0027cd0c(SqVM *vm)
{
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetBoneEffect_, 0x0b86);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetBoneEffect_, 0x0b89);
    sq_pushinteger(vm, fn_001f06a8(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}
