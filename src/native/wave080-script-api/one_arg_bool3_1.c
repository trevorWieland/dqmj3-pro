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
extern void fn_0015c230(ScriptContext *context, bool);
extern void fn_001ebf08(ScriptContext *context, bool);
extern void fn_001ebfc4(ScriptContext *context, bool);
extern void fn_001f0838(ScriptContext *context, bool);
extern void fn_001f17bc(ScriptContext *context, bool);
extern void fn_001f1b38(ScriptContext *context, bool);
extern void fn_001f2574(ScriptContext *context, bool);
extern void fn_001f2bf0(ScriptContext *context, bool);
extern void fn_002dbbb8(ScriptContext *context, bool);
extern void fn_006abe0c(ScriptContext *context, bool);
extern void fn_006ac2c8(ScriptContext *context, bool);

/* The binding names, each one shared copy in rodata. */
extern const char kName_CreatePartner_[];
extern const char kName_SetBgBlack_[];
extern const char kName_SetClearFlagCrackMap_[];
extern const char kName_SetDispFlightMap_[];
extern const char kName_SetNavimapVisible_[];
extern const char kName_SetPartnerActive_[];
extern const char kName_SetPartnerIconBlink_[];
extern const char kName_SetSepiaColor_[];
extern const char kName_SetStopLod_[];
extern const char kName_SetTargetNameVisible_[];
extern const char kName_SetVisibleScoutGauge_[];

/* SetVisibleScoutGauge_(int value) - 0x001366ec, 96 bytes: forwards int to fn_0015c230. */
int fn_001366ec(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "BattleScriptFunc.cpp", kName_SetVisibleScoutGauge_, 0x07f8);
    context = SCRIPT_CONTEXT();
    fn_0015c230(context, value);
    return 0;
}

/* SetBgBlack_(int value) - 0x0027b03c, 96 bytes: forwards int to fn_001ebf08. */
int fn_0027b03c(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetBgBlack_, 0x0e30);
    context = SCRIPT_CONTEXT();
    fn_001ebf08(context, value);
    return 0;
}

/* SetStopLod_(int value) - 0x0027b238, 96 bytes: forwards int to fn_001ebfc4. */
int fn_0027b238(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetStopLod_, 0x0b6f);
    context = SCRIPT_CONTEXT();
    fn_001ebfc4(context, value);
    return 0;
}

/* CreatePartner_(int value) - 0x0027cafc, 96 bytes: forwards int to fn_006abe0c. */
int fn_0027cafc(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_CreatePartner_, 0x006e);
    context = SCRIPT_CONTEXT();
    fn_006abe0c(context, value);
    return 0;
}

/* SetSepiaColor_(int value) - 0x0027d244, 96 bytes: forwards int to fn_001f0838. */
int fn_0027d244(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetSepiaColor_, 0x0e27);
    context = SCRIPT_CONTEXT();
    fn_001f0838(context, value);
    return 0;
}

/* SetDispFlightMap_(int value) - 0x0027fb3c, 96 bytes: forwards int to fn_001f17bc. */
int fn_0027fb3c(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetDispFlightMap_, 0x06bb);
    context = SCRIPT_CONTEXT();
    fn_001f17bc(context, value);
    return 0;
}

/* SetPartnerActive_(int value) - 0x0027fcd8, 96 bytes: forwards int to fn_006ac2c8. */
int fn_0027fcd8(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetPartnerActive_, 0x0077);
    context = SCRIPT_CONTEXT();
    fn_006ac2c8(context, value);
    return 0;
}

/* SetNavimapVisible_(int value) - 0x00280c68, 96 bytes: forwards int to fn_001f1b38. */
int fn_00280c68(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetNavimapVisible_, 0x0648);
    context = SCRIPT_CONTEXT();
    fn_001f1b38(context, value);
    return 0;
}

/* SetPartnerIconBlink_(int value) - 0x002828c0, 96 bytes: forwards int to fn_001f2574. */
int fn_002828c0(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetPartnerIconBlink_, 0x0f60);
    context = SCRIPT_CONTEXT();
    fn_001f2574(context, value);
    return 0;
}

/* SetClearFlagCrackMap_(int value) - 0x00283208, 96 bytes: forwards int to fn_002dbbb8. */
int fn_00283208(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetClearFlagCrackMap_, 0x0a89);
    context = SCRIPT_CONTEXT();
    fn_002dbbb8(context, value);
    return 0;
}

/* SetTargetNameVisible_(int value) - 0x00283440, 96 bytes: forwards int to fn_001f2bf0. */
int fn_00283440(SqVM *vm)
{
    ScriptContext *context;
    int value;
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &value), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetTargetNameVisible_, 0x055b);
    context = SCRIPT_CONTEXT();
    fn_001f2bf0(context, value);
    return 0;
}
