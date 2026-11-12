/* Script-facing native API: two-argument bindings that a and   and n and a and m and e and   and a and n and d and   and a and   and b and o and o and l and e and a and n.
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
extern int fn_001f2b50(ScriptContext *context, const char *, int);
extern int fn_001f3628(ScriptContext *context, const char *, int);
extern int fn_001f3af4(ScriptContext *context, const char *, int);
extern void fn_001f3e58(ScriptContext *context, const char *, int);
extern int fn_001f4aa8(ScriptContext *context, const char *, int);
extern void fn_0025a5c4(ScriptContext *context, const char *, int);

/* The binding names, each one shared copy in rodata. */
extern const char kName_SetHitEnableMapChangeNull_[];
extern const char kName_SetLayoutAnime_[];
extern const char kName_SetPointBoxEventMine_[];
extern const char kName_SetPointCircleEventMineNoFallWait_[];
extern const char kName_SetPointCircleEventMine_[];
extern const char kName_Task_ChangeLayoutAnime_[];

/* SetLayoutAnime_(const char * first, int second) - 0x0027e00c, 184 bytes: forwards a name and an s32 to fn_0025a5c4. */
int fn_0027e00c(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetLayoutAnime_, 0x0dc8);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetLayoutAnime_, 0x0dcb);
    context = SCRIPT_CONTEXT();
    fn_0025a5c4(context, args.first, args.second != 0);
    return 0;
}

/* SetPointBoxEventMine_(const char * first, int second) - 0x0028329c, 196 bytes: forwards a name and an s32 to fn_001f2b50. */
int fn_0028329c(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointBoxEventMine_, 0x06e4);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetPointBoxEventMine_, 0x06e7);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f2b50(context, args.first, args.second != 0));
    return 1;
}

/* Task_ChangeLayoutAnime_(const char * first, int second) - 0x00284f98, 196 bytes: forwards a name and an s32 to fn_001f3628. */
int fn_00284f98(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_Task_ChangeLayoutAnime_, 0x0de4);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_Task_ChangeLayoutAnime_, 0x0de7);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f3628(context, args.first, args.second != 0));
    return 1;
}

/* SetPointCircleEventMine_(const char * first, int second) - 0x00285920, 196 bytes: forwards a name and an s32 to fn_001f3af4. */
int fn_00285920(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointCircleEventMine_, 0x06ca);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetPointCircleEventMine_, 0x06cd);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f3af4(context, args.first, args.second != 0));
    return 1;
}

/* SetHitEnableMapChangeNull_(const char * first, int second) - 0x00286414, 184 bytes: forwards a name and an s32 to fn_001f3e58. */
int fn_00286414(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetHitEnableMapChangeNull_, 0x0df8);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetHitEnableMapChangeNull_, 0x0dfb);
    context = SCRIPT_CONTEXT();
    fn_001f3e58(context, args.first, args.second != 0);
    return 0;
}

/* SetPointCircleEventMineNoFallWait_(const char * first, int second) - 0x00287bdc, 196 bytes: forwards a name and an s32 to fn_001f4aa8. */
int fn_00287bdc(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -2, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_SetPointCircleEventMineNoFallWait_, 0x06d7);
    SCRIPT_CHECK_FILE(vm, sq_getbool(vm, -1, &args.second), "failed: sq_getbool",
                      "FieldScriptFunc.cpp", kName_SetPointCircleEventMineNoFallWait_, 0x06da);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f4aa8(context, args.first, args.second != 0));
    return 1;
}
