/* Script-facing native API: bindings reconstructed from the original
 * instructions.
 *
 * Each function reads its arguments through the VM helpers, reports a failure
 * through the release-build error formatter, then makes one engine call and
 * either pushes the result or returns nothing. The argument indexes, binding
 * names, source lines, file names and engine entry points are the ones the
 * original instruction stream carries, and the reader for each argument is the
 * helper the original calls.
 */
#include "script_api.h"

extern s32 fn_006ac78c(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_006ac81c(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_006ac8b4(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_006ac978(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_001f2b50(ScriptContext *context, const char * a0, int a1);
extern s32 fn_001f3444(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_006ad00c(ScriptContext *context, s32 a0, s32 a1);
extern void fn_001f34fc(ScriptContext *context, s32 a0, int a1);
extern s32 fn_001f3628(ScriptContext *context, const char * a0, int a1);
extern s32 fn_001f3898(ScriptContext *context, s32 a0, const char * a1);
extern s32 fn_001f3af4(ScriptContext *context, const char * a0, int a1);
extern s32 fn_001f3b6c(ScriptContext *context, const char * a0, f32 a1);
extern s32 fn_001f3cb0(ScriptContext *context, s32 a0, const char * a1);
extern void fn_001f4358(ScriptContext *context, s32 a0, s32 a1);
extern s32 fn_001f4aa8(ScriptContext *context, const char * a0, int a1);
extern void fn_001f53bc(ScriptContext *context, s32 a0, s32 a1);

extern const char kName_GetPartyMonsterKind_[];
extern const char kName_GetPartyMonsterPlus_[];
extern const char kName_GetPartyMonsterRank_[];
extern const char kName_GetPartyMonsterSize_[];
extern const char kName_SetPointBoxEventMine_[];
extern const char kName_Task_AddAccessoryFlow_[];
extern const char kName_GetPartyMonsterLineAge_[];
extern const char kName_SetGimmickMapHitEnable_[];
extern const char kName_Task_ChangeLayoutAnime_[];
extern const char kName_ArrangePointNaviMapIcon_[];
extern const char kName_SetPointCircleEventMine_[];
extern const char kName_ArrangePointReactorPoint_[];
extern const char kName_Task_AnimeMoveNoDirNoFit_[];
extern const char kName_SetExchangePartyMonsterName_[];
extern const char kName_SetPointCircleEventMineNoFallWait_[];
extern const char kName_AddCoin_[];

/* GetPartyMonsterKind_(sq_getinteger, sq_getinteger) - 0x0028221c, 184 bytes. */
int fn_0028221c(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterKind_, 0x0bef);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterKind_, 0x0bf2);
    sq_pushinteger(vm, fn_006ac78c(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* GetPartyMonsterPlus_(sq_getinteger, sq_getinteger) - 0x00282310, 184 bytes. */
int fn_00282310(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterPlus_, 0x0c13);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterPlus_, 0x0c16);
    sq_pushinteger(vm, fn_006ac81c(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* GetPartyMonsterRank_(sq_getinteger, sq_getinteger) - 0x00282404, 184 bytes. */
int fn_00282404(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterRank_, 0x0c06);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterRank_, 0x0c09);
    sq_pushinteger(vm, fn_006ac8b4(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* GetPartyMonsterSize_(sq_getinteger, sq_getinteger) - 0x002824f8, 184 bytes. */
int fn_002824f8(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterSize_, 0x0c20);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterSize_, 0x0c23);
    sq_pushinteger(vm, fn_006ac978(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* SetPointBoxEventMine_(sq_getstring, sq_getbool) - 0x0028329c, 196 bytes. */
int fn_0028329c(SqVM *vm)
{
    const char * a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetPointBoxEventMine_, 0x06e4);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetPointBoxEventMine_, 0x06e7);
    ScriptContext *context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f2b50(context, a0, a1 != 0));
    return 1;
}

/* Task_AddAccessoryFlow_(sq_getinteger, sq_getinteger) - 0x00284368, 184 bytes. */
int fn_00284368(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AddAccessoryFlow_, 0x0d90);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AddAccessoryFlow_, 0x0d93);
    sq_pushinteger(vm, fn_001f3444(SCRIPT_CONTEXT(), (s16)a0, a1));
    return 1;
}

/* GetPartyMonsterLineAge_(sq_getinteger, sq_getinteger) - 0x002847c8, 184 bytes. */
int fn_002847c8(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterLineAge_, 0x0c2d);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_GetPartyMonsterLineAge_, 0x0c30);
    sq_pushinteger(vm, fn_006ad00c(SCRIPT_CONTEXT(), (s8)a0, a1));
    return 1;
}

/* SetGimmickMapHitEnable_(sq_getinteger, sq_getbool) - 0x00284a8c, 184 bytes. */
int fn_00284a8c(SqVM *vm)
{
    s32 a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetGimmickMapHitEnable_, 0x0151);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetGimmickMapHitEnable_, 0x0154);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001f34fc(context, a0, a1 != 0);
    return 0;
}

/* Task_ChangeLayoutAnime_(sq_getstring, sq_getbool) - 0x00284f98, 196 bytes. */
int fn_00284f98(SqVM *vm)
{
    const char * a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_ChangeLayoutAnime_, 0x0de4);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_Task_ChangeLayoutAnime_, 0x0de7);
    ScriptContext *context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f3628(context, a0, a1 != 0));
    return 1;
}

/* ArrangePointNaviMapIcon_(sq_getinteger, sq_getstring) - 0x002852dc, 188 bytes. */
int fn_002852dc(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_ArrangePointNaviMapIcon_, 0x0651);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_ArrangePointNaviMapIcon_, 0x0654);
    sq_pushinteger(vm, fn_001f3898(SCRIPT_CONTEXT(), (u8)a0, a1));
    return 1;
}

/* SetPointCircleEventMine_(sq_getstring, sq_getbool) - 0x00285920, 196 bytes. */
int fn_00285920(SqVM *vm)
{
    const char * a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetPointCircleEventMine_, 0x06ca);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetPointCircleEventMine_, 0x06cd);
    ScriptContext *context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f3af4(context, a0, a1 != 0));
    return 1;
}

/* ArrangePointReactorPoint_(sq_getstring, sq_getfloat) - 0x00285bd4, 184 bytes. */
int fn_00285bd4(SqVM *vm)
{
    const char * a0;
    f32 a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_ArrangePointReactorPoint_, 0x016a);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a1), "failed: sq_getfloat", "FieldScriptFunc.cpp",
                      kName_ArrangePointReactorPoint_, 0x016d);
    sq_pushinteger(vm, fn_001f3b6c(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* Task_AnimeMoveNoDirNoFit_(sq_getinteger, sq_getstring) - 0x00285e3c, 180 bytes. */
int fn_00285e3c(SqVM *vm)
{
    s32 a0;
    const char * a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveNoDirNoFit_, 0x0430);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a1), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveNoDirNoFit_, 0x0433);
    sq_pushinteger(vm, fn_001f3cb0(SCRIPT_CONTEXT(), a0, a1));
    return 1;
}

/* SetExchangePartyMonsterName_(sq_getinteger, sq_getinteger) - 0x00286f5c, 172 bytes. */
int fn_00286f5c(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetExchangePartyMonsterName_, 0x04ed);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetExchangePartyMonsterName_, 0x04f0);
    fn_001f4358(SCRIPT_CONTEXT(), (s8)a0, a1);
    return 0;
}

/* SetPointCircleEventMineNoFallWait_(sq_getstring, sq_getbool) - 0x00287bdc, 196 bytes. */
int fn_00287bdc(SqVM *vm)
{
    const char * a0;
    int a1;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetPointCircleEventMineNoFallWait_, 0x06d7);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetPointCircleEventMineNoFallWait_, 0x06da);
    ScriptContext *context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f4aa8(context, a0, a1 != 0));
    return 1;
}

/* AddCoin_(sq_getinteger, sq_getinteger) - 0x00288238, 176 bytes. */
int fn_00288238(SqVM *vm)
{
    s32 a0;
    s32 a1;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AddCoin_, 0x0f0f);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AddCoin_, 0x0f12);
    fn_001f53bc(SCRIPT_CONTEXT(), (u8)a0, a1);
    return 0;
}

