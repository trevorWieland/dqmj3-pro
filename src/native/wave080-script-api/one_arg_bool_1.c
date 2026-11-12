/* Script-facing native API: bindings that read one boolean.
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
extern void fn_001f2190(ScriptContext *context, int);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetDiscQuestUIStop_[];

/* SetDiscQuestUIStop_(int value) - 0x002817cc, 88 bytes: forwards int to fn_001f2190. */
int fn_002817cc(SqVM *vm)
{
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetDiscQuestUIStop_, 0x0a6e);
    fn_001f2190(SCRIPT_CONTEXT(), value);
    return 0;
}
