/* Script-facing native API: bindings that read two integers and push the engine answer or forward it.
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
extern void fn_001f1c1c(ScriptContext *context, s32, s32);
extern int fn_001f1dd0(ScriptContext *context, s32, s32);
extern int fn_001f22c8(ScriptContext *context, s32, s32);
extern void fn_006abe60(ScriptContext *context, s32, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetTalkCameraType_[];
extern const char kName_SetWalkRadius_[];
extern const char kName_Task_ObjectFadeIn_[];
extern const char kName_Task_ObjectFadeOut_[];

/* SetWalkRadius_(s32 first, s32 second) - 0x0027d468, 168 bytes: forwards two s32 arguments to fn_006abe60. */
int fn_0027d468(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetWalkRadius_, 0x00e2);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetWalkRadius_, 0x00e5);
    fn_006abe60(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* SetTalkCameraType_(s32 first, s32 second) - 0x00280f80, 168 bytes: forwards two s32 arguments to fn_001f1c1c. */
int fn_00280f80(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetTalkCameraType_, 0x05cd);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetTalkCameraType_, 0x05d0);
    fn_001f1c1c(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* Task_ObjectFadeIn_(s32 first, s32 second) - 0x002812c4, 180 bytes: forwards two s32 arguments to fn_001f1dd0. */
int fn_002812c4(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_ObjectFadeIn_, 0x048d);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_ObjectFadeIn_, 0x0490);
    sq_pushinteger(vm, fn_001f1dd0(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* Task_ObjectFadeOut_(s32 first, s32 second) - 0x00281ba4, 180 bytes: forwards two s32 arguments to fn_001f22c8. */
int fn_00281ba4(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_ObjectFadeOut_, 0x049a);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_Task_ObjectFadeOut_, 0x049d);
    sq_pushinteger(vm, fn_001f22c8(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}
