/* Script-facing native API: two-argument bindings that a and n and   and i and n and t and e and g and e and r and   and a and n and d and   and a and   and n and a and m and e.
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
extern void fn_001f0704(ScriptContext *context, s32, const char *);
extern int fn_001f111c(ScriptContext *context, s32, const char *);
extern void fn_001f17f4(ScriptContext *context, s32, const char *);
extern void fn_001f1888(ScriptContext *context, s32, const char *);
extern int fn_001f2ab8(ScriptContext *context, s32, const char *);
extern int fn_001f2d7c(ScriptContext *context, s32, const char *);
extern int fn_001f3cb0(ScriptContext *context, s32, const char *);
extern int fn_001f3f8c(ScriptContext *context, s32, const char *);
extern void fn_001f5660(ScriptContext *context, s32, const char *);
extern void fn_001f5cfc(ScriptContext *context, s32, const char *);
extern void fn_002dbbf8(ScriptContext *context, s32, const char *);

/* The binding names, each one shared copy in rodata. */
extern const char kName_ArrangePointNpc_[];
extern const char kName_SetCrackNPCMessageTag_[];
extern const char kName_SetDirToPoint_[];
extern const char kName_SetFace_[];
extern const char kName_SetPointPosNoFit_[];
extern const char kName_SetStepSe_[];
extern const char kName_SetTargetNameKey_[];
extern const char kName_Task_AnimeMoveNoDirNoFit_[];
extern const char kName_Task_AnimeMoveNoDir_[];
extern const char kName_Task_AnimeMoveNoFit_[];
extern const char kName_Task_AnimeMove_[];

/* SetStepSe_(s32 first, const char * second) - 0x0027a9bc, 168 bytes: forwards an s32 and a name to fn_001f5cfc. */
int fn_0027a9bc(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetStepSe_, 0x03e2);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetStepSe_, 0x03e5);
    fn_001f5cfc(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* SetDirToPoint_(s32 first, const char * second) - 0x0027cea8, 168 bytes: forwards an s32 and a name to fn_001f0704. */
int fn_0027cea8(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetDirToPoint_, 0x0282);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetDirToPoint_, 0x0285);
    fn_001f0704(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* Task_AnimeMove_(s32 first, const char * second) - 0x0027e63c, 180 bytes: forwards an s32 and a name to fn_001f2d7c. */
int fn_0027e63c(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMove_, 0x043d);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMove_, 0x0440);
    sq_pushinteger(vm, fn_001f2d7c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* ArrangePointNpc_(s32 first, const char * second) - 0x0027e740, 180 bytes: forwards an s32 and a name to fn_001f111c. */
int fn_0027e740(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ArrangePointNpc_, 0x00c9);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_ArrangePointNpc_, 0x00cc);
    sq_pushinteger(vm, fn_001f111c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* SetPointPosNoFit_(s32 first, const char * second) - 0x0027fdf4, 168 bytes: forwards an s32 and a name to fn_001f17f4. */
int fn_0027fdf4(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetPointPosNoFit_, 0x01f3);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointPosNoFit_, 0x01f6);
    fn_001f17f4(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* SetTargetNameKey_(s32 first, const char * second) - 0x0027ff80, 168 bytes: forwards an s32 and a name to fn_001f1888. */
int fn_0027ff80(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetTargetNameKey_, 0x054f);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetTargetNameKey_, 0x0552);
    fn_001f1888(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* Task_AnimeMoveNoDir_(s32 first, const char * second) - 0x00282d74, 180 bytes: forwards an s32 and a name to fn_001f3f8c. */
int fn_00282d74(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveNoDir_, 0x0423);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveNoDir_, 0x0426);
    sq_pushinteger(vm, fn_001f3f8c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* Task_AnimeMoveNoFit_(s32 first, const char * second) - 0x00282e7c, 180 bytes: forwards an s32 and a name to fn_001f2ab8. */
int fn_00282e7c(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveNoFit_, 0x044a);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveNoFit_, 0x044d);
    sq_pushinteger(vm, fn_001f2ab8(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* SetCrackNPCMessageTag_(s32 first, const char * second) - 0x00283e9c, 168 bytes: forwards an s32 and a name to fn_002dbbf8. */
int fn_00283e9c(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetCrackNPCMessageTag_, 0x0a58);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetCrackNPCMessageTag_, 0x0a5a);
    fn_002dbbf8(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* Task_AnimeMoveNoDirNoFit_(s32 first, const char * second) - 0x00285e3c, 180 bytes: forwards an s32 and a name to fn_001f3cb0. */
int fn_00285e3c(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveNoDirNoFit_, 0x0430);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_AnimeMoveNoDirNoFit_, 0x0433);
    sq_pushinteger(vm, fn_001f3cb0(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* SetFace_(s32 first, const char * second) - 0x00288674, 168 bytes: forwards an s32 and a name to fn_001f5660. */
int fn_00288674(SqVM *vm)
{
    struct { s32 first; const char * second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetFace_, 0x033e);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.second), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetFace_, 0x0341);
    fn_001f5660(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}
