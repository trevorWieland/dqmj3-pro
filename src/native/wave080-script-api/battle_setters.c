/* Script-facing native API: setters that take one integer and one bool.
 *
 * Each binding reads an integer and a bool and forwards both to one engine
 * setter. The bool is narrowed to 0/1 at the call site -- by a comparison the
 * original instructions spell out -- and the binding pushes nothing, so it
 * returns 0.
 */
#include "script_api.h"

extern void fn_00144828(ScriptContext *context, s32 first, int second);
extern void fn_001ec398(ScriptContext *context, s32 first, int second);
extern void fn_001f04c8(ScriptContext *context, s32 first, int second);
extern void fn_001f0504(ScriptContext *context, s32 first, int second);
extern void fn_0025a5c4(ScriptContext *context, const char * first, int second);
extern void fn_001f0ea8(ScriptContext *context, s32 first, int second);
extern void fn_001f15f0(ScriptContext *context, s32 first, int second);
extern void fn_001f1618(ScriptContext *context, s32 first, int second);
extern void fn_001f17e0(ScriptContext *context, s32 first, int second);
extern void fn_001f1af0(ScriptContext *context, s32 first, int second);
extern void fn_001f220c(ScriptContext *context, s32 first, int second);
extern void fn_001f2560(ScriptContext *context, s32 first, int second);
extern void fn_001f331c(ScriptContext *context, s32 first, int second);
extern void fn_001f358c(ScriptContext *context, s32 first, int second);
extern void fn_001f3c74(ScriptContext *context, s32 first, int second);
extern void fn_001f3e58(ScriptContext *context, const char * first, int second);

extern const char kName_SetEventFlg__2[];
extern const char kName_SetTalkTurn_[];
extern const char kName_SetHideIfFar_[];
extern const char kName_SetStepSePan_[];
extern const char kName_SetLayoutAnime_[];
extern const char kName_SetMineLanding_[];
extern const char kName_SetMineHitDrone_[];
extern const char kName_SetMineRejectSN_[];
extern const char kName_SetMineRejectSNM_[];
extern const char kName_SetMinePlayerStop_[];
extern const char kName_SetManualCalcAlpha_[];
extern const char kName_SetChangeWaitMotion_[];
extern const char kName_SetNaviMapIconVisible_[];
extern const char kName_SetSilhouetteHideIfFar_[];
extern const char kName_SetReactorMarkerTypeHide_[];
extern const char kName_SetHitEnableMapChangeNull_[];

/* SetEventFlg_(sq_getinteger, sq_getbool) - 0x00130d34, 184 bytes. */
int fn_00130d34(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetEventFlg__2, 0x09f9);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "BattleScriptFunc.cpp",
                      kName_SetEventFlg__2, 0x09fc);
    context = SCRIPT_CONTEXT();
    fn_00144828(context, first, second == 1);
    return 0;
}

/* SetTalkTurn_(sq_getinteger, sq_getbool) - 0x0027bea0, 184 bytes. */
int fn_0027bea0(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetTalkTurn_, 0x03b7);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetTalkTurn_, 0x03ba);
    context = SCRIPT_CONTEXT();
    fn_001ec398(context, first, second != 0);
    return 0;
}

/* SetHideIfFar_(sq_getinteger, sq_getbool) - 0x0027c720, 184 bytes. */
int fn_0027c720(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetHideIfFar_, 0x021f);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetHideIfFar_, 0x0222);
    context = SCRIPT_CONTEXT();
    fn_001f04c8(context, first, second != 0);
    return 0;
}

/* SetStepSePan_(sq_getinteger, sq_getbool) - 0x0027c828, 184 bytes. */
int fn_0027c828(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetStepSePan_, 0x03f7);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetStepSePan_, 0x03fa);
    context = SCRIPT_CONTEXT();
    fn_001f0504(context, first, second != 0);
    return 0;
}

/* SetLayoutAnime_(sq_getstring, sq_getbool) - 0x0027e00c, 184 bytes. */
int fn_0027e00c(SqVM *vm)
{
    const char * first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &first), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetLayoutAnime_, 0x0dc8);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetLayoutAnime_, 0x0dcb);
    context = SCRIPT_CONTEXT();
    fn_0025a5c4(context, first, second != 0);
    return 0;
}

/* SetMineLanding_(sq_getinteger, sq_getbool) - 0x0027e278, 184 bytes. */
int fn_0027e278(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMineLanding_, 0x0749);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMineLanding_, 0x074c);
    context = SCRIPT_CONTEXT();
    fn_001f0ea8(context, first, second != 0);
    return 0;
}

/* SetMineHitDrone_(sq_getinteger, sq_getbool) - 0x0027f004, 184 bytes. */
int fn_0027f004(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMineHitDrone_, 0x0755);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMineHitDrone_, 0x0758);
    context = SCRIPT_CONTEXT();
    fn_001f15f0(context, first, second != 0);
    return 0;
}

/* SetMineRejectSN_(sq_getinteger, sq_getbool) - 0x0027f210, 184 bytes. */
int fn_0027f210(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMineRejectSN_, 0x0732);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMineRejectSN_, 0x0735);
    context = SCRIPT_CONTEXT();
    fn_001f1618(context, first, second != 0);
    return 0;
}

/* SetMineRejectSNM_(sq_getinteger, sq_getbool) - 0x0027fbd0, 184 bytes. */
int fn_0027fbd0(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMineRejectSNM_, 0x0726);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMineRejectSNM_, 0x0729);
    context = SCRIPT_CONTEXT();
    fn_001f17e0(context, first, second != 0);
    return 0;
}

/* SetMinePlayerStop_(sq_getinteger, sq_getbool) - 0x00280a64, 184 bytes. */
int fn_00280a64(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMinePlayerStop_, 0x070e);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMinePlayerStop_, 0x0711);
    context = SCRIPT_CONTEXT();
    fn_001f1af0(context, first, second != 0);
    return 0;
}

/* SetManualCalcAlpha_(sq_getinteger, sq_getbool) - 0x00281908, 184 bytes. */
int fn_00281908(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetManualCalcAlpha_, 0x0256);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetManualCalcAlpha_, 0x0259);
    context = SCRIPT_CONTEXT();
    fn_001f220c(context, first, second != 0);
    return 0;
}

/* SetChangeWaitMotion_(sq_getinteger, sq_getbool) - 0x002827b8, 184 bytes. */
int fn_002827b8(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetChangeWaitMotion_, 0x071a);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetChangeWaitMotion_, 0x071d);
    context = SCRIPT_CONTEXT();
    fn_001f2560(context, first, second != 0);
    return 0;
}

/* SetNaviMapIconVisible_(sq_getinteger, sq_getbool) - 0x002840e4, 184 bytes. */
int fn_002840e4(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetNaviMapIconVisible_, 0x065e);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetNaviMapIconVisible_, 0x0661);
    context = SCRIPT_CONTEXT();
    fn_001f331c(context, first, second != 0);
    return 0;
}

/* SetSilhouetteHideIfFar_(sq_getinteger, sq_getbool) - 0x00284d38, 184 bytes. */
int fn_00284d38(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetSilhouetteHideIfFar_, 0x037e);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetSilhouetteHideIfFar_, 0x0381);
    context = SCRIPT_CONTEXT();
    fn_001f358c(context, first, second != 0);
    return 0;
}

/* SetReactorMarkerTypeHide_(sq_getinteger, sq_getbool) - 0x00285d34, 184 bytes. */
int fn_00285d34(SqVM *vm)
{
    s32 first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetReactorMarkerTypeHide_, 0x022b);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetReactorMarkerTypeHide_, 0x022e);
    context = SCRIPT_CONTEXT();
    fn_001f3c74(context, first, second != 0);
    return 0;
}

/* SetHitEnableMapChangeNull_(sq_getstring, sq_getbool) - 0x00286414, 184 bytes. */
int fn_00286414(SqVM *vm)
{
    const char * first;
    int second;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &first), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetHitEnableMapChangeNull_, 0x0df8);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &second), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetHitEnableMapChangeNull_, 0x0dfb);
    context = SCRIPT_CONTEXT();
    fn_001f3e58(context, first, second != 0);
    return 0;
}

