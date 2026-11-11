/* Script-facing native API: setters that take two integers.
 *
 * Each binding reads two integers and forwards both to one engine entry point;
 * nothing is pushed, so the binding returns 0.
 */
#include "script_api.h"

extern void fn_00159df4(ScriptContext *context, s32 first, s32 second);
extern void fn_0016498c(ScriptContext *context, s32 first, s32 second);
extern void fn_001f5cfc(ScriptContext *context, s32 first, const char * second);
extern void fn_0025a42c(ScriptContext *context, const char * first, const char * second);
extern void fn_001f0704(ScriptContext *context, s32 first, const char * second);
extern void fn_001c7264(ScriptContext *context, s32 first, s32 second);
extern void fn_001f17f4(ScriptContext *context, s32 first, const char * second);
extern void fn_001f1888(ScriptContext *context, s32 first, const char * second);
extern void fn_002dbbf8(ScriptContext *context, s32 first, const char * second);
extern void fn_001f4300(ScriptContext *context, s32 first, s32 second);
extern void fn_001f5660(ScriptContext *context, s32 first, const char * second);

extern const char kName_AddAppealPoint_[];
extern const char kName_SetParamChange_[];
extern const char kName_SetStepSe_[];
extern const char kName_LoadLayoutEx_[];
extern const char kName_SetDirToPoint_[];
extern const char kName_SetDirToObject_[];
extern const char kName_SetPointPosNoFit_[];
extern const char kName_SetTargetNameKey_[];
extern const char kName_SetCrackNPCMessageTag_[];
extern const char kName_ChangeBattleDarkLoadRevengeFromARG_[];
extern const char kName_SetFace_[];

/* AddAppealPoint_(sq_getinteger, sq_getinteger) - 0x0013268c, 168 bytes. */
int fn_0013268c(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_AddAppealPoint_, 0x0797);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_AddAppealPoint_, 0x079a);
    fn_00159df4(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetParamChange_(sq_getinteger, sq_getinteger) - 0x001333e8, 168 bytes. */
int fn_001333e8(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetParamChange_, 0x0759);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetParamChange_, 0x075c);
    fn_0016498c(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetStepSe_(sq_getinteger, sq_getstring) - 0x0027a9bc, 168 bytes. */
int fn_0027a9bc(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetStepSe_, 0x03e2);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetStepSe_, 0x03e5);
    fn_001f5cfc(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* LoadLayoutEx_(sq_getstring, sq_getstring) - 0x0027c4e4, 168 bytes. */
int fn_0027c4e4(SqVM *vm)
{
    const char * first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &first), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_LoadLayoutEx_, 0x0dbd);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_LoadLayoutEx_, 0x0dbf);
    fn_0025a42c(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetDirToPoint_(sq_getinteger, sq_getstring) - 0x0027cea8, 168 bytes. */
int fn_0027cea8(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetDirToPoint_, 0x0282);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetDirToPoint_, 0x0285);
    fn_001f0704(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetDirToObject_(sq_getinteger, sq_getinteger) - 0x0027de08, 168 bytes. */
int fn_0027de08(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetDirToObject_, 0x0297);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetDirToObject_, 0x029a);
    fn_001c7264(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetPointPosNoFit_(sq_getinteger, sq_getstring) - 0x0027fdf4, 168 bytes. */
int fn_0027fdf4(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetPointPosNoFit_, 0x01f3);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetPointPosNoFit_, 0x01f6);
    fn_001f17f4(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetTargetNameKey_(sq_getinteger, sq_getstring) - 0x0027ff80, 168 bytes. */
int fn_0027ff80(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetTargetNameKey_, 0x054f);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetTargetNameKey_, 0x0552);
    fn_001f1888(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetCrackNPCMessageTag_(sq_getinteger, sq_getstring) - 0x00283e9c, 168 bytes. */
int fn_00283e9c(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetCrackNPCMessageTag_, 0x0a58);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetCrackNPCMessageTag_, 0x0a5a);
    fn_002dbbf8(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* ChangeBattleDarkLoadRevengeFromARG_(sq_getinteger, sq_getinteger) - 0x00287cf0, 168 bytes. */
int fn_00287cf0(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_ChangeBattleDarkLoadRevengeFromARG_, 0x0784);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_ChangeBattleDarkLoadRevengeFromARG_, 0x0786);
    fn_001f4300(SCRIPT_CONTEXT(), first, second);
    return 0;
}

/* SetFace_(sq_getinteger, sq_getstring) - 0x00288674, 168 bytes. */
int fn_00288674(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetFace_, 0x033e);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetFace_, 0x0341);
    fn_001f5660(SCRIPT_CONTEXT(), first, second);
    return 0;
}

