/* Script-facing native API: bindings that read one name.
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
extern int fn_00154aec(ScriptContext *context, const char *);
extern void fn_00154cd0(ScriptContext *context, const char *);
extern void fn_001f0dc4(ScriptContext *context, const char *);
extern void fn_001f1864(ScriptContext *context, const char *);
extern void fn_001f1b78(ScriptContext *context, const char *);
extern void fn_001f2700(ScriptContext *context, const char *);
extern void fn_001f2bac(ScriptContext *context, const char *);
extern void fn_001f3070(ScriptContext *context, const char *);
extern int fn_001f3530(ScriptContext *context, const char *);
extern int fn_001f497c(ScriptContext *context, const char *);
extern int fn_001f5458(ScriptContext *context, const char *);
extern void fn_001f5abc(ScriptContext *context, const char *);
extern void fn_0025a2b0(ScriptContext *context, const char *);
extern void fn_0025a37c(ScriptContext *context, const char *);
extern void fn_002dbd60(ScriptContext *context, const char *);
extern void fn_006ac314(ScriptContext *context, const char *);

/* The binding names, each one shared copy in rodata. */
extern const char kName_BossArrangeStealthBox_[];
extern const char kName_ChangeMap_[];
extern const char kName_LoadLayout_[];
extern const char kName_LoadScreenShot_[];
extern const char kName_ReadNpc_[];
extern const char kName_SetCrackNPCMessageNameTag_[];
extern const char kName_SetExchangeMsg_[];
extern const char kName_SetMessage_[];
extern const char kName_SetPartnerStepSe_[];
extern const char kName_SetPointBoxEncountMine_[];
extern const char kName_SetPointBoxEventMineNoFallWait_[];
extern const char kName_SetPointCameraEye_[];
extern const char kName_SetPointCameraTarget_[];
extern const char kName_SetReturnDemoMap_[];
extern const char kName_SetShortcutEventFlg_[];

/* PlayLoopSE_(const char * value) - 0x0012da98, 80 bytes: forwards const char * to fn_00154aec. */
int fn_0012da98(SqVM *vm)
{
    const char * value;
    if (sq_getstring(vm, -1, &value) < 0)
        return sq_throwerror(vm, SCRIPT_EMPTY_MESSAGE);
    sq_pushinteger(vm, fn_00154aec(SCRIPT_CONTEXT(), value));
    return 1;
}

/* SetMessage_(const char * value) - 0x00130678, 88 bytes: forwards const char * to fn_00154cd0. */
int fn_00130678(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "BattleScriptFunc.cpp", kName_SetMessage_, 0x03a2);
    fn_00154cd0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* ChangeMap_(const char * value) - 0x0027a2b4, 88 bytes: forwards const char * to fn_001f5abc. */
int fn_0027a2b4(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_ChangeMap_, 0x0a98);
    fn_001f5abc(SCRIPT_CONTEXT(), value);
    return 0;
}

/* LoadLayout_(const char * value) - 0x0027acf8, 88 bytes: forwards const char * to fn_0025a37c. */
int fn_0027acf8(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_LoadLayout_, 0x0db4);
    fn_0025a37c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* LoadScreenShot_(const char * value) - 0x0027d920, 88 bytes: forwards const char * to fn_0025a2b0. */
int fn_0027d920(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_LoadScreenShot_, 0x0ddb);
    fn_0025a2b0(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetExchangeMsg_(const char * value) - 0x0027df7c, 88 bytes: forwards const char * to fn_001f0dc4. */
int fn_0027df7c(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetExchangeMsg_, 0x04e4);
    fn_001f0dc4(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPartnerStepSe_(const char * value) - 0x0027fd68, 88 bytes: forwards const char * to fn_006ac314. */
int fn_0027fd68(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPartnerStepSe_, 0x0099);
    fn_006ac314(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetReturnDemoMap_(const char * value) - 0x0027fef0, 88 bytes: forwards const char * to fn_001f1864. */
int fn_0027fef0(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetReturnDemoMap_, 0x07ec);
    fn_001f1864(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPointCameraEye_(const char * value) - 0x00280da4, 88 bytes: forwards const char * to fn_001f1b78. */
int fn_00280da4(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointCameraEye_, 0x05a3);
    fn_001f1b78(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetShortcutEventFlg_(const char * value) - 0x00282c40, 88 bytes: forwards const char * to fn_001f2700. */
int fn_00282c40(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetShortcutEventFlg_, 0x0b51);
    fn_001f2700(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPointCameraTarget_(const char * value) - 0x002833b0, 88 bytes: forwards const char * to fn_001f2bac. */
int fn_002833b0(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointCameraTarget_, 0x05ac);
    fn_001f2bac(SCRIPT_CONTEXT(), value);
    return 0;
}

/* BossArrangeStealthBox_(const char * value) - 0x00283704, 88 bytes: forwards const char * to fn_001f3070. */
int fn_00283704(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_BossArrangeStealthBox_, 0x0987);
    fn_001f3070(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPointBoxEncountMine_(const char * value) - 0x00284c9c, 100 bytes: forwards const char * to fn_001f3530. */
int fn_00284c9c(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointBoxEncountMine_, 0x06fb);
    sq_pushinteger(vm, fn_001f3530(SCRIPT_CONTEXT(), value));
    return 1;
}

/* SetCrackNPCMessageNameTag_(const char * value) - 0x002862f4, 88 bytes: forwards const char * to fn_002dbd60. */
int fn_002862f4(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetCrackNPCMessageNameTag_, 0x0a4e);
    fn_002dbd60(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetPointBoxEventMineNoFallWait_(const char * value) - 0x0028791c, 100 bytes: forwards const char * to fn_001f497c. */
int fn_0028791c(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointBoxEventMineNoFallWait_, 0x06f1);
    sq_pushinteger(vm, fn_001f497c(SCRIPT_CONTEXT(), value));
    return 1;
}

/* ReadNpc_(const char * value) - 0x002884fc, 100 bytes: forwards const char * to fn_001f5458. */
int fn_002884fc(SqVM *vm)
{
    const char * value;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &value), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_ReadNpc_, 0x00b2);
    sq_pushinteger(vm, fn_001f5458(SCRIPT_CONTEXT(), value));
    return 1;
}
