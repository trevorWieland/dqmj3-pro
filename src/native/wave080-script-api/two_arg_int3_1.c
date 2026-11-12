/* Script-facing native API: bindings that read two integers.
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
extern int fn_00174f10(ScriptContext *context, s8, s32);
extern int fn_00175108(ScriptContext *context, s8, s32);
extern int fn_001f3444(ScriptContext *context, s16, s32);
extern int fn_006ac78c(ScriptContext *context, s8, s32);
extern int fn_006ac81c(ScriptContext *context, s8, s32);
extern int fn_006ac8b4(ScriptContext *context, s8, s32);
extern int fn_006ac978(ScriptContext *context, s8, s32);
extern int fn_006ad00c(ScriptContext *context, s8, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_GetAllEffectFrame_[];
extern const char kName_GetPartyMonsterKind_[];
extern const char kName_GetPartyMonsterLineAge_[];
extern const char kName_GetPartyMonsterPlus_[];
extern const char kName_GetPartyMonsterRank_[];
extern const char kName_GetPartyMonsterSize_[];
extern const char kName_GetSingleEffectFrame_[];
extern const char kName_Task_AddAccessoryFlow_[];

/* GetAllEffectFrame_(s32 args.first, s32 args.second) - 0x00134a34, 184 bytes: forwards s32 and s32 to fn_00174f10. */
int fn_00134a34(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetAllEffectFrame_, 0x02ef);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetAllEffectFrame_, 0x02f2);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00174f10(context, args.first, args.second));
    return 1;
}

/* GetSingleEffectFrame_(s32 args.first, s32 args.second) - 0x00136114, 184 bytes: forwards s32 and s32 to fn_00175108. */
int fn_00136114(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetSingleEffectFrame_, 0x02d1);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetSingleEffectFrame_, 0x02d4);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00175108(context, args.first, args.second));
    return 1;
}

/* GetPartyMonsterKind_(s32 args.first, s32 args.second) - 0x0028221c, 184 bytes: forwards s32 and s32 to fn_006ac78c. */
int fn_0028221c(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterKind_, 0x0bef);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterKind_, 0x0bf2);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac78c(context, args.first, args.second));
    return 1;
}

/* GetPartyMonsterPlus_(s32 args.first, s32 args.second) - 0x00282310, 184 bytes: forwards s32 and s32 to fn_006ac81c. */
int fn_00282310(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterPlus_, 0x0c13);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterPlus_, 0x0c16);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac81c(context, args.first, args.second));
    return 1;
}

/* GetPartyMonsterRank_(s32 args.first, s32 args.second) - 0x00282404, 184 bytes: forwards s32 and s32 to fn_006ac8b4. */
int fn_00282404(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterRank_, 0x0c06);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterRank_, 0x0c09);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac8b4(context, args.first, args.second));
    return 1;
}

/* GetPartyMonsterSize_(s32 args.first, s32 args.second) - 0x002824f8, 184 bytes: forwards s32 and s32 to fn_006ac978. */
int fn_002824f8(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterSize_, 0x0c20);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterSize_, 0x0c23);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac978(context, args.first, args.second));
    return 1;
}

/* Task_AddAccessoryFlow_(s32 args.first, s32 args.second) - 0x00284368, 184 bytes: forwards s32 and s32 to fn_001f3444. */
int fn_00284368(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AddAccessoryFlow_, 0x0d90);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AddAccessoryFlow_, 0x0d93);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f3444(context, args.first, args.second));
    return 1;
}

/* GetPartyMonsterLineAge_(s32 args.first, s32 args.second) - 0x002847c8, 184 bytes: forwards s32 and s32 to fn_006ad00c. */
int fn_002847c8(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterLineAge_, 0x0c2d);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_GetPartyMonsterLineAge_, 0x0c30);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ad00c(context, args.first, args.second));
    return 1;
}
