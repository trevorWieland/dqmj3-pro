/* Script-facing native API: bindings that read one integer.
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
extern void fn_00154b30(ScriptContext *context, s32);
extern void fn_00154d0c(ScriptContext *context, s32);
extern void fn_00155268(ScriptContext *context, s32);
extern void fn_001554ac(ScriptContext *context, s32);
extern void fn_0015b0f0(ScriptContext *context, s32);
extern void fn_0016d4c8(ScriptContext *context, s32);
extern void fn_00174c60(ScriptContext *context, u8);
extern void fn_001752d8(ScriptContext *context, u8);
extern void fn_001ebfa0(ScriptContext *context, s32);
extern void fn_001ebff8(ScriptContext *context, s8);
extern void fn_001ec26c(ScriptContext *context, s32);
extern void fn_001f04a8(ScriptContext *context, s32, s32);
extern void fn_001f0848(ScriptContext *context, s32);
extern void fn_001f0f00(ScriptContext *context, s32);
extern void fn_001f162c(ScriptContext *context, s32);
extern void fn_001f1650(ScriptContext *context, s32);
extern int fn_001f2280(ScriptContext *context, s16);
extern int fn_001f37f0(ScriptContext *context, u8);
extern void fn_006ac4d0(ScriptContext *context, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetEventDate_[];
extern const char kName_SetFogType_[];
extern const char kName_SetMonsterDead_[];
extern const char kName_SetMsgSpeed_[];
extern const char kName_SetPartnerPosInfo_[];
extern const char kName_SetPlayerSmell_[];
extern const char kName_SetQueryDefault_[];
extern const char kName_SetReactorEvent_[];
extern const char kName_SetScoutGaugeValue_[];
extern const char kName_SetTalkAction_[];
extern const char kName_SetTolerChainRate_[];
extern const char kName_SetWeather_[];
extern const char kName_ShowActionName_[];
extern const char kName_StartCombo_[];
extern const char kName_Task_EncountEffect_[];
extern const char kName_Task_PartnerFormChange_[];
extern const char kName_UnSettingAllowTarget_[];

/* StopLoopSE_(s32 value) - 0x0012dbdc, 68 bytes: forwards s32 to fn_00154b30. */
int fn_0012dbdc(SqVM *vm)
{
    s32 value;
    if (sq_getinteger(vm, -1, &value) < 0)
        return sq_throwerror(vm, SCRIPT_EMPTY_MESSAGE);
    fn_00154b30(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetExchangeNumber_(s32 value) - 0x0012e208, 68 bytes: forwards s32 to fn_0015b0f0. */
int fn_0012e208(SqVM *vm)
{
    s32 value;
    if (sq_getinteger(vm, -1, &value) < 0)
        return sq_throwerror(vm, SCRIPT_EMPTY_MESSAGE);
    fn_0015b0f0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* StartCombo_(s32 value) - 0x00130814, 88 bytes: forwards s32 to fn_00154d0c. */
int fn_00130814(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_StartCombo_, 0x03fc);
    fn_00154d0c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetMonsterDead_(s32 value) - 0x00133158, 92 bytes: forwards s32 to fn_00174c60. */
int fn_00133158(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetMonsterDead_, 0x0744);
    fn_00174c60(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* ShowActionName_(s32 value) - 0x001334d0, 88 bytes: forwards s32 to fn_00155268. */
int fn_001334d0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_ShowActionName_, 0x03c2);
    fn_00155268(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetTolerChainRate_(s32 value) - 0x00134c5c, 88 bytes: forwards s32 to fn_001554ac. */
int fn_00134c5c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetTolerChainRate_, 0x0765);
    fn_001554ac(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetScoutGaugeValue_(s32 value) - 0x001355c8, 88 bytes: forwards s32 to fn_0016d4c8. */
int fn_001355c8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetScoutGaugeValue_, 0x0811);
    fn_0016d4c8(SCRIPT_CONTEXT(), value);
    return 0;
}

/* UnSettingAllowTarget_(s32 value) - 0x001368b0, 92 bytes: forwards s32 to fn_001752d8. */
int fn_001368b0(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_UnSettingAllowTarget_, 0x0775);
    fn_001752d8(SCRIPT_CONTEXT(), (u8)(value & 0xff));
    return 0;
}

/* SetFogType_(s32 value) - 0x0027b1a8, 88 bytes: forwards s32 to fn_001ebfa0. */
int fn_0027b1a8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetFogType_, 0x0e74);
    fn_001ebfa0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetWeather_(s32 value) - 0x0027b2cc, 92 bytes: forwards s32 to fn_001ebff8. */
int fn_0027b2cc(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetWeather_, 0x0cf4);
    fn_001ebff8(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetMsgSpeed_(s32 value) - 0x0027ba48, 88 bytes: forwards s32 to fn_001ec26c. */
int fn_0027ba48(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMsgSpeed_, 0x04db);
    fn_001ec26c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetEventDate_(s32 value) - 0x0027c68c, 92 bytes: forwards s32 to fn_001f04a8. */
int fn_0027c68c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetEventDate_, 0x0ed5);
    fn_001f04a8(SCRIPT_CONTEXT(), value, 1);
    return 0;
}

/* SetTalkAction_(s32 value) - 0x0027d2d8, 88 bytes: forwards s32 to fn_001f0848. */
int fn_0027d2d8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetTalkAction_, 0x03ae);
    fn_001f0848(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPlayerSmell_(s32 value) - 0x0027e47c, 88 bytes: forwards s32 to fn_001f0f00. */
int fn_0027e47c(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetPlayerSmell_, 0x0937);
    fn_001f0f00(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetQueryDefault_(s32 value) - 0x0027f318, 88 bytes: forwards s32 to fn_001f162c. */
int fn_0027f318(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetQueryDefault_, 0x050d);
    fn_001f162c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetReactorEvent_(s32 value) - 0x0027f3a8, 88 bytes: forwards s32 to fn_001f1650. */
int fn_0027f3a8(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetReactorEvent_, 0x0546);
    fn_001f1650(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPartnerPosInfo_(s32 value) - 0x00280cfc, 88 bytes: forwards s32 to fn_006ac4d0. */
int fn_00280cfc(SqVM *vm)
{
    s32 value;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &value), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetPartnerPosInfo_, 0x008f);
    fn_006ac4d0(SCRIPT_CONTEXT(), value);
    return 0;
}

