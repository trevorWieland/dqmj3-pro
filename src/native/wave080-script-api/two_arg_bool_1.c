/* Script-facing native API: two-argument bindings that a and n and   and i and n and t and e and g and e and r and   and a and n and d and   and a and   and b and o and o and l and e and a and n.
 *
 * Every binding here reads two Squirrel arguments, validates each read with the
 * release-build assertion the original carries, forwards both values to one
 * engine service and either returns 0 or pushes that service's answer.  The
 * locals are named for argument position because the binding itself only
 * forwards them; the engine service in each comment is the recovered callee.
 *
 * Status: transcribed from the original instruction shapes.  The build
 * measures each body against the original bytes; only exact ones remain.
 */
#include "script_api.h"

/* The engine services the original calls, by canonical image symbol. */
extern void fn_001ec398(ScriptContext *context, s32, int);
extern void fn_001f04c8(ScriptContext *context, s32, int);
extern void fn_001f0504(ScriptContext *context, s32, int);
extern void fn_001f0898(ScriptContext *context, s32, int);
extern void fn_001f0ea8(ScriptContext *context, s32, int);
extern int fn_001f10cc(ScriptContext *context, s32, int);
extern void fn_001f15f0(ScriptContext *context, s32, int);
extern void fn_001f1604(ScriptContext *context, s32, int);
extern void fn_001f1618(ScriptContext *context, s32, int);
extern void fn_001f17e0(ScriptContext *context, s32, int);
extern void fn_001f1af0(ScriptContext *context, s32, int);
extern void fn_001f220c(ScriptContext *context, s32, int);
extern void fn_001f2560(ScriptContext *context, s32, int);
extern void fn_001f331c(ScriptContext *context, s32, int);
extern void fn_001f34fc(ScriptContext *context, s32, int);
extern void fn_001f358c(ScriptContext *context, s32, int);
extern void fn_001f3c74(ScriptContext *context, s32, int);
extern void fn_001f5b70(ScriptContext *context, s32, int);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetActive_[];
extern const char kName_SetChangeWaitMotion_[];
extern const char kName_SetGimmickMapHitEnable_[];
extern const char kName_SetHideIfFar_[];
extern const char kName_SetManualCalcAlpha_[];
extern const char kName_SetMineHitDrone_[];
extern const char kName_SetMineLanding_[];
extern const char kName_SetMinePlayerStop_[];
extern const char kName_SetMineRejectGT_[];
extern const char kName_SetMineRejectSNM_[];
extern const char kName_SetMineRejectSN_[];
extern const char kName_SetNaviMapIconVisible_[];
extern const char kName_SetReactorMarkerTypeHide_[];
extern const char kName_SetSilhouetteHideIfFar_[];
extern const char kName_SetStepSePan_[];
extern const char kName_SetTalkEnable_[];
extern const char kName_SetTalkTurn_[];
extern const char kName_Task_AddFellow_[];

/* SetActive_(s32 first, int second) - 0x0027a674, 184 bytes: forwards two s32 arguments to fn_001f5b70. */
int fn_0027a674(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetActive_, 0x0209);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetActive_, 0x020c);
    context = SCRIPT_CONTEXT();
    fn_001f5b70(context, args.first, args.second != 0);
    return 0;
}

/* SetTalkTurn_(s32 first, int second) - 0x0027bea0, 184 bytes: forwards two s32 arguments to fn_001ec398. */
int fn_0027bea0(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetTalkTurn_, 0x03b7);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetTalkTurn_, 0x03ba);
    context = SCRIPT_CONTEXT();
    fn_001ec398(context, args.first, args.second != 0);
    return 0;
}

/* SetHideIfFar_(s32 first, int second) - 0x0027c720, 184 bytes: forwards two s32 arguments to fn_001f04c8. */
int fn_0027c720(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetHideIfFar_, 0x021f);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetHideIfFar_, 0x0222);
    context = SCRIPT_CONTEXT();
    fn_001f04c8(context, args.first, args.second != 0);
    return 0;
}

/* SetStepSePan_(s32 first, int second) - 0x0027c828, 184 bytes: forwards two s32 arguments to fn_001f0504. */
int fn_0027c828(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetStepSePan_, 0x03f7);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetStepSePan_, 0x03fa);
    context = SCRIPT_CONTEXT();
    fn_001f0504(context, args.first, args.second != 0);
    return 0;
}

/* SetTalkEnable_(s32 first, int second) - 0x0027d368, 184 bytes: forwards two s32 arguments to fn_001f0898. */
int fn_0027d368(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetTalkEnable_, 0x00ee);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetTalkEnable_, 0x00f1);
    context = SCRIPT_CONTEXT();
    fn_001f0898(context, args.first, args.second != 0);
    return 0;
}

/* SetMineLanding_(s32 first, int second) - 0x0027e278, 184 bytes: forwards two s32 arguments to fn_001f0ea8. */
int fn_0027e278(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMineLanding_, 0x0749);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetMineLanding_, 0x074c);
    context = SCRIPT_CONTEXT();
    fn_001f0ea8(context, args.first, args.second != 0);
    return 0;
}

/* Task_AddFellow_(s32 first, int second) - 0x0027e528, 196 bytes: forwards two s32 arguments to fn_001f10cc. */
int fn_0027e528(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AddFellow_, 0x0d03);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_Task_AddFellow_, 0x0d06);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f10cc(context, args.first, args.second != 0));
    return 1;
}

/* SetMineHitDrone_(s32 first, int second) - 0x0027f004, 184 bytes: forwards two s32 arguments to fn_001f15f0. */
int fn_0027f004(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMineHitDrone_, 0x0755);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetMineHitDrone_, 0x0758);
    context = SCRIPT_CONTEXT();
    fn_001f15f0(context, args.first, args.second != 0);
    return 0;
}

/* SetMineRejectGT_(s32 first, int second) - 0x0027f10c, 184 bytes: forwards two s32 arguments to fn_001f1604. */
int fn_0027f10c(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMineRejectGT_, 0x073d);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetMineRejectGT_, 0x0740);
    context = SCRIPT_CONTEXT();
    fn_001f1604(context, args.first, args.second != 0);
    return 0;
}

/* SetMineRejectSN_(s32 first, int second) - 0x0027f210, 184 bytes: forwards two s32 arguments to fn_001f1618. */
int fn_0027f210(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMineRejectSN_, 0x0732);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetMineRejectSN_, 0x0735);
    context = SCRIPT_CONTEXT();
    fn_001f1618(context, args.first, args.second != 0);
    return 0;
}

/* SetMineRejectSNM_(s32 first, int second) - 0x0027fbd0, 184 bytes: forwards two s32 arguments to fn_001f17e0. */
int fn_0027fbd0(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMineRejectSNM_, 0x0726);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetMineRejectSNM_, 0x0729);
    context = SCRIPT_CONTEXT();
    fn_001f17e0(context, args.first, args.second != 0);
    return 0;
}

/* SetMinePlayerStop_(s32 first, int second) - 0x00280a64, 184 bytes: forwards two s32 arguments to fn_001f1af0. */
int fn_00280a64(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetMinePlayerStop_, 0x070e);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetMinePlayerStop_, 0x0711);
    context = SCRIPT_CONTEXT();
    fn_001f1af0(context, args.first, args.second != 0);
    return 0;
}

/* SetManualCalcAlpha_(s32 first, int second) - 0x00281908, 184 bytes: forwards two s32 arguments to fn_001f220c. */
int fn_00281908(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetManualCalcAlpha_, 0x0256);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetManualCalcAlpha_, 0x0259);
    context = SCRIPT_CONTEXT();
    fn_001f220c(context, args.first, args.second != 0);
    return 0;
}

/* SetChangeWaitMotion_(s32 first, int second) - 0x002827b8, 184 bytes: forwards two s32 arguments to fn_001f2560. */
int fn_002827b8(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetChangeWaitMotion_, 0x071a);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetChangeWaitMotion_, 0x071d);
    context = SCRIPT_CONTEXT();
    fn_001f2560(context, args.first, args.second != 0);
    return 0;
}

/* SetNaviMapIconVisible_(s32 first, int second) - 0x002840e4, 184 bytes: forwards two s32 arguments to fn_001f331c. */
int fn_002840e4(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetNaviMapIconVisible_, 0x065e);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetNaviMapIconVisible_, 0x0661);
    context = SCRIPT_CONTEXT();
    fn_001f331c(context, args.first, args.second != 0);
    return 0;
}

/* SetGimmickMapHitEnable_(s32 first, int second) - 0x00284a8c, 184 bytes: forwards two s32 arguments to fn_001f34fc. */
int fn_00284a8c(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetGimmickMapHitEnable_, 0x0151);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetGimmickMapHitEnable_, 0x0154);
    context = SCRIPT_CONTEXT();
    fn_001f34fc(context, args.first, args.second != 0);
    return 0;
}

/* SetSilhouetteHideIfFar_(s32 first, int second) - 0x00284d38, 184 bytes: forwards two s32 arguments to fn_001f358c. */
int fn_00284d38(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetSilhouetteHideIfFar_, 0x037e);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetSilhouetteHideIfFar_, 0x0381);
    context = SCRIPT_CONTEXT();
    fn_001f358c(context, args.first, args.second != 0);
    return 0;
}

/* SetReactorMarkerTypeHide_(s32 first, int second) - 0x00285d34, 184 bytes: forwards two s32 arguments to fn_001f3c74. */
int fn_00285d34(SqVM *vm)
{
    ScriptContext *context;
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetReactorMarkerTypeHide_, 0x022b);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetReactorMarkerTypeHide_, 0x022e);
    context = SCRIPT_CONTEXT();
    fn_001f3c74(context, args.first, args.second != 0);
    return 0;
}
