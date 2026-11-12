/* Script-facing native API: two-argument bindings that read two integers.
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
extern void fn_001f53bc(ScriptContext *context, u8, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_AddCoin_[];

/* AddCoin_(s32 args.first, s32 args.second) - 0x00288238, 176 bytes: forwards s32 and s32 to fn_001f53bc. */
int fn_00288238(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddCoin_, 0x0f0f);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AddCoin_, 0x0f12);
    fn_001f53bc(SCRIPT_CONTEXT(), (u8)(args.second & 0xff), args.first);
    return 0;
}
