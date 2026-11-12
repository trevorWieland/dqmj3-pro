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

extern s32 fn_00149f38(ScriptContext *context, const char * a0, const char * a1, s32 a2);
extern s32 fn_0014a45c(ScriptContext *context, s32 a0, s32 a1, int a2);
extern int fn_00155a74(ScriptContext *context, s32 a0, s32 a1, s32 a2);
extern void fn_001ebb68(ScriptContext *context, const char * a0, int a1, int a2);
extern void fn_001ec3f0(ScriptContext *context, s32 a0, s32 a1, s32 a2);
extern void fn_001f0e30(ScriptContext *context, s32 a0, const char * a1, int a2);
extern void fn_006ac128(ScriptContext *context, s32 a0, s32 a1, f32 a2);
extern s32 fn_001f1920(ScriptContext *context, s32 a0, f32 a1, f32 a2);
extern void fn_001f1bbc(ScriptContext *context, s32 a0, int a1, s32 a2);
extern s32 fn_001f2670(ScriptContext *context, const char * a0, s32 a1, s32 a2);
extern void fn_006acc94(ScriptContext *context, s32 a0, s32 a1, f32 a2);
extern int fn_006acd18(ScriptContext *context, s32 a0, s32 a1, const char * a2);
extern int fn_006acf10(ScriptContext *context, s32 a0, s32 a1, s32 a2);
extern s32 fn_001f3cb8(ScriptContext *context, s32 a0, const char * a1, f32 a2);
extern s32 fn_001f3e88(ScriptContext *context, const char * a0, s32 a1, s32 a2);

extern const char kName_Task_SetFrameAnimeMoveCamera_[];
extern const char kName_SetDamageEffect_ExceptionEffect_[];
extern const char kName_IsMiss_[];
extern const char kName_OpenDialog_[];
extern const char kName_AttachObject_[];
extern const char kName_SetMeshVisible_[];
extern const char kName_StartEarthQuake__2[];
extern const char kName_Task_RotateToDir_[];
extern const char kName_SetRaSearchTarget_[];
extern const char kName_SetSelectBoneEffect_[];
extern const char kName_StartDecayEarthQuake_[];
extern const char kName_CheckPartyMonsterName_[];
extern const char kName_CheckPartyMonsterSkill_[];
extern const char kName_Task_MoveToPointSetSpeed_[];
extern const char kName_SetSelectBoneEffectPlayer_[];

/* Task_SetFrameAnimeMoveCamera_(sq_getstring, sq_getstring, sq_getinteger) - 0x00138dc8, 248 bytes. */
int fn_00138dc8(SqVM *vm)
{
    const char * a0;
    const char * a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -3, &a0), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_Task_SetFrameAnimeMoveCamera_, 0x099a);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a1), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_Task_SetFrameAnimeMoveCamera_, 0x099d);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_Task_SetFrameAnimeMoveCamera_, 0x09a0);
    sq_pushinteger(vm, fn_00149f38(SCRIPT_CONTEXT(), a0, a1, a2));
    return 1;
}

/* SetDamageEffect_ExceptionEffect_(sq_getinteger, sq_getinteger, sq_getbool) - 0x00138f18, 264 bytes. */
int fn_00138f18(SqVM *vm)
{
    s32 a0;
    s32 a1;
    int a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetDamageEffect_ExceptionEffect_, 0x0b0a);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_SetDamageEffect_ExceptionEffect_, 0x0b0d);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a2), "failed: sq_getbool", "BattleScriptFunc.cpp",
                      kName_SetDamageEffect_ExceptionEffect_, 0x0b10);
    ScriptContext *context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_0014a45c(context, a0, a1, a2 != 0));
    return 1;
}

/* IsMiss_(sq_getinteger, sq_getinteger, sq_getinteger) - 0x00139518, 256 bytes. */
int fn_00139518(SqVM *vm)
{
    s32 a0;
    s32 a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsMiss_, 0x06b6);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsMiss_, 0x06b9);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsMiss_, 0x06bc);
    sq_pushbool(vm, fn_00155a74(SCRIPT_CONTEXT(), a0, a1, (s16)a2));
    return 1;
}

/* OpenDialog_(sq_getstring, sq_getbool, sq_getbool) - 0x0027ad88, 268 bytes. */
int fn_0027ad88(SqVM *vm)
{
    const char * a0;
    int a1;
    int a2;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -3, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_OpenDialog_, 0x04bf);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -2, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_OpenDialog_, 0x04c1);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a2), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_OpenDialog_, 0x04c3);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001ebb68(context, a0, a1 != 0, a2 != 0);
    return 0;
}

/* AttachObject_(sq_getinteger, sq_getinteger, sq_getinteger) - 0x0027c124, 236 bytes. */
int fn_0027c124(SqVM *vm)
{
    s32 a0;
    s32 a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AttachObject_, 0x03ca);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AttachObject_, 0x03cd);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_AttachObject_, 0x03d0);
    fn_001ec3f0(SCRIPT_CONTEXT(), a0, a1, a2);
    return 0;
}

/* SetMeshVisible_(sq_getinteger, sq_getstring, sq_getbool) - 0x0027e114, 252 bytes. */
int fn_0027e114(SqVM *vm)
{
    s32 a0;
    const char * a1;
    int a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetMeshVisible_, 0x034a);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a1), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetMeshVisible_, 0x034d);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &a2), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetMeshVisible_, 0x0350);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001f0e30(context, a0, a1, a2 != 0);
    return 0;
}

/* StartEarthQuake_(sq_getinteger, sq_getinteger, sq_getfloat) - 0x0027f4f4, 240 bytes. */
int fn_0027f4f4(SqVM *vm)
{
    s32 a0;
    s32 a1;
    f32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_StartEarthQuake__2, 0x05fe);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_StartEarthQuake__2, 0x0601);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a2), "failed: sq_getfloat", "FieldScriptFunc.cpp",
                      kName_StartEarthQuake__2, 0x0604);
    fn_006ac128(SCRIPT_CONTEXT(), a0, a1, a2);
    return 0;
}

/* Task_RotateToDir_(sq_getinteger, sq_getfloat, sq_getfloat) - 0x002801f0, 256 bytes. */
int fn_002801f0(SqVM *vm)
{
    s32 a0;
    f32 a1;
    f32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_RotateToDir_, 0x02dc);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -2, &a1), "failed: sq_getfloat", "FieldScriptFunc.cpp",
                      kName_Task_RotateToDir_, 0x02df);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a2), "failed: sq_getfloat", "FieldScriptFunc.cpp",
                      kName_Task_RotateToDir_, 0x02e2);
    sq_pushinteger(vm, fn_001f1920(SCRIPT_CONTEXT(), a0, a1, a2));
    return 1;
}

/* SetRaSearchTarget_(sq_getinteger, sq_getbool, sq_getinteger) - 0x00280e34, 252 bytes. */
int fn_00280e34(SqVM *vm)
{
    s32 a0;
    int a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetRaSearchTarget_, 0x0118);
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -2, &a1), "failed: sq_getbool", "FieldScriptFunc.cpp",
                      kName_SetRaSearchTarget_, 0x011b);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetRaSearchTarget_, 0x011e);
    ScriptContext *context = SCRIPT_CONTEXT();
    fn_001f1bbc(context, a0, a1 != 0, a2);
    return 0;
}

/* SetSelectBoneEffect_(sq_getstring, sq_getinteger, sq_getinteger) - 0x00282af0, 248 bytes. */
int fn_00282af0(SqVM *vm)
{
    const char * a0;
    s32 a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -3, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetSelectBoneEffect_, 0x0b94);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetSelectBoneEffect_, 0x0b97);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetSelectBoneEffect_, 0x0b9a);
    sq_pushinteger(vm, fn_001f2670(SCRIPT_CONTEXT(), a0, a1, a2));
    return 1;
}

/* StartDecayEarthQuake_(sq_getinteger, sq_getinteger, sq_getfloat) - 0x002834d4, 240 bytes. */
int fn_002834d4(SqVM *vm)
{
    s32 a0;
    s32 a1;
    f32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_StartDecayEarthQuake_, 0x060d);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_StartDecayEarthQuake_, 0x0610);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a2), "failed: sq_getfloat", "FieldScriptFunc.cpp",
                      kName_StartDecayEarthQuake_, 0x0613);
    fn_006acc94(SCRIPT_CONTEXT(), a0, a1, a2);
    return 0;
}

/* CheckPartyMonsterName_(sq_getinteger, sq_getinteger, sq_getstring) - 0x00283a94, 260 bytes. */
int fn_00283a94(SqVM *vm)
{
    s32 a0;
    s32 a1;
    const char * a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_CheckPartyMonsterName_, 0x0cb9);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_CheckPartyMonsterName_, 0x0cbc);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &a2), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_CheckPartyMonsterName_, 0x0cbf);
    sq_pushbool(vm, fn_006acd18(SCRIPT_CONTEXT(), (s8)a0, (s16)a1, a2));
    return 1;
}

/* CheckPartyMonsterSkill_(sq_getinteger, sq_getinteger, sq_getinteger) - 0x00284458, 252 bytes. */
int fn_00284458(SqVM *vm)
{
    s32 a0;
    s32 a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_CheckPartyMonsterSkill_, 0x0c4e);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_CheckPartyMonsterSkill_, 0x0c51);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_CheckPartyMonsterSkill_, 0x0c54);
    sq_pushbool(vm, fn_006acf10(SCRIPT_CONTEXT(), (s8)a0, a1, a2));
    return 1;
}

/* Task_MoveToPointSetSpeed_(sq_getinteger, sq_getstring, sq_getfloat) - 0x00285f40, 252 bytes. */
int fn_00285f40(SqVM *vm)
{
    s32 a0;
    const char * a1;
    f32 a2;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -3, &a0), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_MoveToPointSetSpeed_, 0x0413);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &a1), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_MoveToPointSetSpeed_, 0x0416);
    SCRIPT_CHECK_IN(vm, sq_getfloat(vm, -1, &a2), "failed: sq_getfloat", "FieldScriptFunc.cpp",
                      kName_Task_MoveToPointSetSpeed_, 0x0419);
    sq_pushinteger(vm, fn_001f3cb8(SCRIPT_CONTEXT(), a0, a1, a2));
    return 1;
}

/* SetSelectBoneEffectPlayer_(sq_getstring, sq_getinteger, sq_getinteger) - 0x0028651c, 256 bytes. */
int fn_0028651c(SqVM *vm)
{
    const char * a0;
    s32 a1;
    s32 a2;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -3, &a0), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetSelectBoneEffectPlayer_, 0x0bb9);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &a1), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetSelectBoneEffectPlayer_, 0x0bbc);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &a2), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetSelectBoneEffectPlayer_, 0x0bbf);
    sq_pushinteger(vm, fn_001f3e88(SCRIPT_CONTEXT(), a0, (u8)a1, a2));
    return 1;
}

