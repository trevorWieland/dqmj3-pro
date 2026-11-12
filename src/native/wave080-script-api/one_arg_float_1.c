/* Script-facing native API: bindings that read one float.
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
extern void fn_001f0444(ScriptContext *context, f32);
extern void fn_001f075c(ScriptContext *context, f32);
extern void fn_001f0788(ScriptContext *context, f32);
extern void fn_001f07b4(ScriptContext *context, f32);
extern void fn_001f34a4(ScriptContext *context, f32);
extern void fn_001f4af8(ScriptContext *context, f32);
extern void fn_001f56ac(ScriptContext *context, f32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_InhibitMonsterGenerate_[];
extern const char kName_SetCameraDir_[];
extern const char kName_SetFogDensity_[];
extern const char kName_SetFogDistMax_[];
extern const char kName_SetFogDistMin_[];
extern const char kName_SetMonsterGenPlayerInvasionAreaMin_[];
extern const char kName_SetTime_[];

/* SetCameraDir_(f32 value) - 0x0027c5c8, 88 bytes: forwards f32 to fn_001f0444. */
int fn_0027c5c8(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetCameraDir_, 0x0588);
    fn_001f0444(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetFogDensity_(f32 value) - 0x0027cfa4, 88 bytes: forwards f32 to fn_001f075c. */
int fn_0027cfa4(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetFogDensity_, 0x0e4b);
    fn_001f075c(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetFogDistMax_(f32 value) - 0x0027d030, 88 bytes: forwards f32 to fn_001f0788. */
int fn_0027d030(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetFogDistMax_, 0x0e5b);
    fn_001f0788(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetFogDistMin_(f32 value) - 0x0027d0bc, 88 bytes: forwards f32 to fn_001f07b4. */
int fn_0027d0bc(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetFogDistMin_, 0x0e6b);
    fn_001f07b4(SCRIPT_CONTEXT(), value);
    return 0;
}

/* InhibitMonsterGenerate_(f32 value) - 0x00284954, 88 bytes: forwards f32 to fn_001f34a4. */
int fn_00284954(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_InhibitMonsterGenerate_, 0x0801);
    fn_001f34a4(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetMonsterGenPlayerInvasionAreaMin_(f32 value) - 0x00287ddc, 88 bytes: forwards f32 to fn_001f4af8. */
int fn_00287ddc(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetMonsterGenPlayerInvasionAreaMin_, 0x01b3);
    fn_001f4af8(SCRIPT_CONTEXT(), value);
    return 0;
}

/* SetTime_(f32 value) - 0x00288770, 88 bytes: forwards f32 to fn_001f56ac. */
int fn_00288770(SqVM *vm)
{
    f32 value;
    SCRIPT_CHECK_FILE(vm, sq_getfloat(vm, -1, &value), "failed: sq_getfloat",
                      "FieldScriptFunc.cpp", kName_SetTime_, 0x0ce4);
    fn_001f56ac(SCRIPT_CONTEXT(), value);
    return 0;
}
