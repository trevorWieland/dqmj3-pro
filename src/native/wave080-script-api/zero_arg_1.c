/* Script-facing native API: bindings that forward script arguments.
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
extern int fn_001648cc(ScriptContext *context, s32);
extern int fn_001649dc(ScriptContext *context, s32);
extern const char * fn_006ad3e8(ScriptContext *context);

/* The binding names, each one shared copy in rodata. */

/* GetAllyMaster_() - 0x00131f24, 44 bytes: forwards  to fn_001648cc. */
int fn_00131f24(SqVM *vm)
{
    sq_pushinteger(vm, fn_001648cc(SCRIPT_CONTEXT(), 1));
    return 1;
}

/* GetAllyPartner_() - 0x00132774, 44 bytes: forwards  to fn_001649dc. */
int fn_00132774(SqVM *vm)
{
    sq_pushinteger(vm, fn_001649dc(SCRIPT_CONTEXT(), 1));
    return 1;
}

/* GetEnemyMaster_() - 0x001328e8, 44 bytes: forwards  to fn_001648cc. */
int fn_001328e8(SqVM *vm)
{
    sq_pushinteger(vm, fn_001648cc(SCRIPT_CONTEXT(), 0));
    return 1;
}

/* GetEnemyPartner_() - 0x001335bc, 44 bytes: forwards  to fn_001649dc. */
int fn_001335bc(SqVM *vm)
{
    sq_pushinteger(vm, fn_001649dc(SCRIPT_CONTEXT(), 0));
    return 1;
}

/* GetEnteredMapChangeNullName_() - 0x00286e94, 44 bytes: forwards  to fn_006ad3e8. */
int fn_00286e94(SqVM *vm)
{
    sq_pushstring(vm, fn_006ad3e8(SCRIPT_CONTEXT()), -1);
    return 1;
}
