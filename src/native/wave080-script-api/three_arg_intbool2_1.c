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
extern int fn_0014989c(ScriptContext *context, s32, s32, bool);
extern int fn_001499f0(ScriptContext *context, s32, s32, bool);
extern int fn_0014a45c(ScriptContext *context, s32, s32, bool);

/* The binding names, each one shared copy in rodata. */
extern const char kName_LineEffect_BAKURETSU_[];
extern const char kName_LineEffect_Substitute_[];
extern const char kName_SetDamageEffect_ExceptionEffect_[];

/* LineEffect_BAKURETSU_(s32 first, s32 second, int third) - 0x001362ec, 264 bytes: forwards s32 and s32 and int to fn_0014989c. */
int fn_001362ec(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    int third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_LineEffect_BAKURETSU_, 0x0a5e);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_LineEffect_BAKURETSU_, 0x0a61);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &third), "failed: sq_getbool",
                      "BattleScriptFunc.cpp", kName_LineEffect_BAKURETSU_, 0x0a64);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_0014989c(context, first, second, third));
    return 1;
}

/* LineEffect_Substitute_(s32 first, s32 second, int third) - 0x00136e18, 264 bytes: forwards s32 and s32 and int to fn_001499f0. */
int fn_00136e18(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    int third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_LineEffect_Substitute_, 0x0a85);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_LineEffect_Substitute_, 0x0a88);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &third), "failed: sq_getbool",
                      "BattleScriptFunc.cpp", kName_LineEffect_Substitute_, 0x0a8b);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001499f0(context, first, second, third));
    return 1;
}

/* SetDamageEffect_ExceptionEffect_(s32 first, s32 second, int third) - 0x00138f18, 264 bytes: forwards s32 and s32 and int to fn_0014a45c. */
int fn_00138f18(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    int third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetDamageEffect_ExceptionEffect_, 0x0b0a);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetDamageEffect_ExceptionEffect_, 0x0b0d);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &third), "failed: sq_getbool",
                      "BattleScriptFunc.cpp", kName_SetDamageEffect_ExceptionEffect_, 0x0b10);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_0014a45c(context, first, second, third));
    return 1;
}
