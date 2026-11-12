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
extern int fn_00154c7c(ScriptContext *context, s32, s32, s16);
extern int fn_00154e38(ScriptContext *context, s32, s32, s16);
extern int fn_001550fc(ScriptContext *context, s32, s32, s16);
extern int fn_00155a74(ScriptContext *context, s32, s32, s16);
extern int fn_00174b40(ScriptContext *context, s32, s32, s32);
extern int fn_00174d30(ScriptContext *context, s32, s32, s32);
extern void fn_001ec3f0(ScriptContext *context, s32, s32, s32);
extern int fn_006acf10(ScriptContext *context, s8, s32, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_AttachObject_[];
extern const char kName_CheckPartyMonsterSkill_[];
extern const char kName_GetDamageValue_[];
extern const char kName_GetStatusEndFlag_[];
extern const char kName_GetStatusFlag_[];
extern const char kName_IsCritical_[];
extern const char kName_IsGambleBody_[];
extern const char kName_IsMiss_[];

/* IsCritical_(s32 first, s32 second, s32 third) - 0x001303ac, 256 bytes: forwards s32 and s32 and s32 to fn_00154c7c. */
int fn_001303ac(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsCritical_, 0x06a5);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsCritical_, 0x06a8);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsCritical_, 0x06ab);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00154c7c(context, first, second, third));
    return 1;
}

/* IsGambleBody_(s32 first, s32 second, s32 third) - 0x00131750, 256 bytes: forwards s32 and s32 and s32 to fn_00154e38. */
int fn_00131750(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGambleBody_, 0x066a);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGambleBody_, 0x066d);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGambleBody_, 0x0670);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00154e38(context, first, second, third));
    return 1;
}

/* GetStatusFlag_(s32 first, s32 second, s32 third) - 0x001321bc, 248 bytes: forwards s32 and s32 and s32 to fn_00174b40. */
int fn_001321bc(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStatusFlag_, 0x045f);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStatusFlag_, 0x0462);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStatusFlag_, 0x0465);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00174b40(context, first, second, third));
    return 1;
}

/* GetDamageValue_(s32 first, s32 second, s32 third) - 0x001327a4, 256 bytes: forwards s32 and s32 and s32 to fn_001550fc. */
int fn_001327a4(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetDamageValue_, 0x04d3);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetDamageValue_, 0x04d6);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetDamageValue_, 0x04d9);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001550fc(context, first, second, third));
    return 1;
}

/* GetStatusEndFlag_(s32 first, s32 second, s32 third) - 0x00134344, 248 bytes: forwards s32 and s32 and s32 to fn_00174d30. */
int fn_00134344(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStatusEndFlag_, 0x046e);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStatusEndFlag_, 0x0471);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStatusEndFlag_, 0x0474);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00174d30(context, first, second, third));
    return 1;
}

/* IsMiss_(s32 first, s32 second, s32 third) - 0x00139518, 256 bytes: forwards s32 and s32 and s32 to fn_00155a74. */
int fn_00139518(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsMiss_, 0x06b6);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsMiss_, 0x06b9);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsMiss_, 0x06bc);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00155a74(context, first, second, third));
    return 1;
}

/* AttachObject_(s32 first, s32 second, s32 third) - 0x0027c124, 236 bytes: forwards s32 and s32 and s32 to fn_001ec3f0. */
int fn_0027c124(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AttachObject_, 0x03ca);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AttachObject_, 0x03cd);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_AttachObject_, 0x03d0);
    context = SCRIPT_CONTEXT();
    fn_001ec3f0(context, first, second, third);
    return 0;
}

/* CheckPartyMonsterSkill_(s32 first, s32 second, s32 third) - 0x00284458, 252 bytes: forwards s32 and s32 and s32 to fn_006acf10. */
int fn_00284458(SqVM *vm)
{
    ScriptContext *context;
    s32 first;
    s32 second;
    s32 third;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -3, &first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckPartyMonsterSkill_, 0x0c4e);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckPartyMonsterSkill_, 0x0c51);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &third), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_CheckPartyMonsterSkill_, 0x0c54);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006acf10(context, first, second, third));
    return 1;
}
