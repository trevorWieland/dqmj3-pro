/* Script-facing native API: bindings that read an integer and a name.
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
extern void fn_00149e50(ScriptContext *context, u8, const char *);
extern void fn_0014a1bc(ScriptContext *context, u8, const char *);
extern void fn_00155808(ScriptContext *context, u8, const char *);
extern int fn_001f3898(ScriptContext *context, u8, const char *);

/* The binding names, each one shared copy in rodata. */
extern const char kName_ArrangePointNaviMapIcon_[];
extern const char kName_ReadMonsterAddMotion_[];
extern const char kName_SetSceneOffsetFromMove_[];
extern const char kName_SetSceneOffsetFromPoint_[];

/* ReadMonsterAddMotion_(const char * args.first, s32 args.second) - 0x0013644c, 176 bytes: forwards const char * and s32 to fn_00155808. */
int fn_0013644c(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_ReadMonsterAddMotion_, 0x014e);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.first), "failed: sq_getstring",
                      "BattleScriptFunc.cpp", kName_ReadMonsterAddMotion_, 0x0151);
    context = SCRIPT_CONTEXT();
    fn_00155808(context, (u8)(args.second & 0xff), args.first);
    return 0;
}

/* SetSceneOffsetFromMove_(const char * args.first, s32 args.second) - 0x00137724, 176 bytes: forwards const char * and s32 to fn_00149e50. */
int fn_00137724(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetSceneOffsetFromMove_, 0x031a);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.first), "failed: sq_getstring",
                      "BattleScriptFunc.cpp", kName_SetSceneOffsetFromMove_, 0x031d);
    context = SCRIPT_CONTEXT();
    fn_00149e50(context, (u8)(args.second & 0xff), args.first);
    return 0;
}

/* SetSceneOffsetFromPoint_(const char * args.first, s32 args.second) - 0x00137eb0, 176 bytes: forwards const char * and s32 to fn_0014a1bc. */
int fn_00137eb0(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetSceneOffsetFromPoint_, 0x0327);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.first), "failed: sq_getstring",
                      "BattleScriptFunc.cpp", kName_SetSceneOffsetFromPoint_, 0x032a);
    context = SCRIPT_CONTEXT();
    fn_0014a1bc(context, (u8)(args.second & 0xff), args.first);
    return 0;
}

/* ArrangePointNaviMapIcon_(const char * args.first, s32 args.second) - 0x002852dc, 188 bytes: forwards const char * and s32 to fn_001f3898. */
int fn_002852dc(SqVM *vm)
{
    ScriptContext *context;
    struct { const char * first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ArrangePointNaviMapIcon_, 0x0651);
    SCRIPT_CHECK_FILE(vm, sq_getstring(vm, -1, &args.first), "failed: sq_getstring",
                      "FieldScriptFunc.cpp", kName_ArrangePointNaviMapIcon_, 0x0654);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f3898(context, (u8)(args.second & 0xff), args.first));
    return 1;
}
