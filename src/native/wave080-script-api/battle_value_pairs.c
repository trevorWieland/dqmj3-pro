/* Script-facing native API: two-argument battle and field bindings.
 *
 * Each binding reads two Squirrel values, hands them to one engine entry
 * point and pushes the result. The sequence is the same 180 bytes for every
 * member of this family; what changes is which reader converts each argument,
 * the engine call, the binding's own name string in the error path and the
 * two FieldScriptFunc.cpp / BattleScriptFunc.cpp line numbers.
 *
 * The argument indexes are the VM convention (-2 then -1), the readers are
 * declared with their canonical image symbols, and the error text is the
 * original assertion string, so the data tail the compiler emits is the
 * original one.
 */
#include "script_api.h"

extern int fn_00155f2c(ScriptContext *context, s32 first, s32 second);
extern int fn_0017591c(ScriptContext *context, s32 first, s32 second);
extern int fn_00155ffc(ScriptContext *context, s32 first, s32 second);
extern int fn_00154ca8(ScriptContext *context, s32 first, s32 second);
extern int fn_00164208(ScriptContext *context, s32 first, s32 second);
extern int fn_00164230(ScriptContext *context, s32 first, s32 second);
extern s32 fn_00174a74(ScriptContext *context, s32 first, s32 second);
extern s32 fn_00154e04(ScriptContext *context, s32 first, s32 second);
extern s32 fn_00154e20(ScriptContext *context, s32 first, s32 second);
extern int fn_00154ecc(ScriptContext *context, s32 first, s32 second);
extern int fn_00154f28(ScriptContext *context, s32 first, s32 second);
extern s32 fn_00174aec(ScriptContext *context, s32 first, s32 second);
extern int fn_00155140(ScriptContext *context, s32 first, s32 second);
extern s32 fn_0015532c(ScriptContext *context, s32 first, s32 second);
extern int fn_00155348(ScriptContext *context, s32 first, s32 second);
extern s32 fn_00155548(ScriptContext *context, s32 first, s32 second);
extern s32 fn_00155560(ScriptContext *context, s32 first, s32 second);
extern s32 fn_001493dc(ScriptContext *context, const char * first, const char * second);
extern int fn_00155aa0(ScriptContext *context, s32 first, s32 second);
extern int fn_00155ac8(ScriptContext *context, s32 first, s32 second);
extern int fn_00155c70(ScriptContext *context, s32 first, s32 second);
extern s32 fn_001f06a8(ScriptContext *context, const char * first, s32 second);
extern s32 fn_001f22c8(ScriptContext *context, s32 first, s32 second);
extern s32 fn_001f2598(ScriptContext *context, const char * first, const char * second);
extern s32 fn_001f3f8c(ScriptContext *context, s32 first, const char * second);
extern s32 fn_001f2ab8(ScriptContext *context, s32 first, const char * second);
extern s32 fn_001f2c1c(ScriptContext *context, const char * first, const char * second);

extern const char kName_IsGodTear_[];
extern const char kName_IsReflect_[];
extern const char kName_IsRevival_[];
extern const char kName_IsRezaoral_[];
extern const char kName_IsBraveHart_[];
extern const char kName_IsLastStand_[];
extern const char kName_GetActHitNum_[];
extern const char kName_GetStoleGold_[];
extern const char kName_GetStoleItem_[];
extern const char kName_IsSelfTarget_[];
extern const char kName_IsSwapTarget_[];
extern const char kName_GetDamageType_[];
extern const char kName_IsPoisonDamage_[];
extern const char kName_GetRevivalValue_[];
extern const char kName_IsCriticalGuard_[];
extern const char kName_GetAllyAppealPoint_[];
extern const char kName_GetTeraDamageValue_[];
extern const char kName_Task_AnimeMoveCamera_[];
extern const char kName_IsAngel_[];
extern const char kName_IsGuard_[];
extern const char kName_IsAbsorb_[];
extern const char kName_SetBoneEffect_[];
extern const char kName_Task_ObjectFadeOut_[];
extern const char kName_SetPointWorldEffect_[];
extern const char kName_Task_AnimeMoveNoDir_[];
extern const char kName_Task_AnimeMoveNoFit_[];
extern const char kName_Task_AnimeMoveCamera__2[];

/* IsGodTear_(s32, s32) - 0x0012fab4, 180 bytes. */
int fn_0012fab4(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsGodTear_, 0x0632);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsGodTear_, 0x0635);
    sq_pushbool(vm, fn_00155f2c(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsReflect_(s32, s32) - 0x0012fd98, 180 bytes. */
int fn_0012fd98(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsReflect_, 0x05fa);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsReflect_, 0x05fd);
    sq_pushbool(vm, fn_0017591c(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsRevival_(s32, s32) - 0x0012fe8c, 180 bytes. */
int fn_0012fe8c(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsRevival_, 0x0608);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsRevival_, 0x060b);
    sq_pushbool(vm, fn_00155ffc(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsRezaoral_(s32, s32) - 0x001304f0, 180 bytes. */
int fn_001304f0(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsRezaoral_, 0x0616);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsRezaoral_, 0x0619);
    sq_pushbool(vm, fn_00154ca8(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsBraveHart_(s32, s32) - 0x00130aac, 180 bytes. */
int fn_00130aac(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsBraveHart_, 0x064e);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsBraveHart_, 0x0651);
    sq_pushbool(vm, fn_00164208(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsLastStand_(s32, s32) - 0x00130ba0, 180 bytes. */
int fn_00130ba0(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsLastStand_, 0x065c);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsLastStand_, 0x065f);
    sq_pushbool(vm, fn_00164230(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetActHitNum_(s32, s32) - 0x001311bc, 180 bytes. */
int fn_001311bc(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetActHitNum_, 0x0513);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetActHitNum_, 0x0516);
    sq_pushinteger(vm, fn_00174a74(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetStoleGold_(s32, s32) - 0x00131424, 180 bytes. */
int fn_00131424(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetStoleGold_, 0x055e);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetStoleGold_, 0x0561);
    sq_pushinteger(vm, fn_00154e04(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetStoleItem_(s32, s32) - 0x00131518, 180 bytes. */
int fn_00131518(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetStoleItem_, 0x056c);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetStoleItem_, 0x056f);
    sq_pushinteger(vm, fn_00154e20(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsSelfTarget_(s32, s32) - 0x00131a24, 180 bytes. */
int fn_00131a24(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsSelfTarget_, 0x0ae6);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsSelfTarget_, 0x0ae9);
    sq_pushbool(vm, fn_00154ecc(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsSwapTarget_(s32, s32) - 0x00131b18, 180 bytes. */
int fn_00131b18(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsSwapTarget_, 0x0697);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsSwapTarget_, 0x069a);
    sq_pushbool(vm, fn_00154f28(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetDamageType_(s32, s32) - 0x00131f54, 180 bytes. */
int fn_00131f54(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetDamageType_, 0x04a2);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetDamageType_, 0x04a5);
    sq_pushinteger(vm, fn_00174aec(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsPoisonDamage_(s32, s32) - 0x00132db4, 180 bytes. */
int fn_00132db4(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsPoisonDamage_, 0x0689);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsPoisonDamage_, 0x068c);
    sq_pushbool(vm, fn_00155140(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetRevivalValue_(s32, s32) - 0x00133618, 180 bytes. */
int fn_00133618(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetRevivalValue_, 0x04f2);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetRevivalValue_, 0x04f5);
    sq_pushinteger(vm, fn_0015532c(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsCriticalGuard_(s32, s32) - 0x0013370c, 180 bytes. */
int fn_0013370c(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsCriticalGuard_, 0x067b);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsCriticalGuard_, 0x067e);
    sq_pushbool(vm, fn_00155348(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetAllyAppealPoint_(s32, s32) - 0x00135134, 180 bytes. */
int fn_00135134(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetAllyAppealPoint_, 0x0542);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetAllyAppealPoint_, 0x0545);
    sq_pushinteger(vm, fn_00155548(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* GetTeraDamageValue_(s32, s32) - 0x00135254, 180 bytes. */
int fn_00135254(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetTeraDamageValue_, 0x04e4);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_GetTeraDamageValue_, 0x04e7);
    sq_pushinteger(vm, fn_00155560(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* Task_AnimeMoveCamera_(const char *, const char *) - 0x001367a0, 180 bytes. */
int fn_001367a0(SqVM *vm)
{
    const char * first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &first), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_Task_AnimeMoveCamera_, 0x098c);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "BattleScriptFunc.cpp",
                      kName_Task_AnimeMoveCamera_, 0x098f);
    sq_pushinteger(vm, fn_001493dc(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsAngel_(s32, s32) - 0x00139a90, 180 bytes. */
int fn_00139a90(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsAngel_, 0x0624);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsAngel_, 0x0627);
    sq_pushbool(vm, fn_00155aa0(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsGuard_(s32, s32) - 0x00139b84, 180 bytes. */
int fn_00139b84(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsGuard_, 0x05de);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsGuard_, 0x05e1);
    sq_pushbool(vm, fn_00155ac8(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* IsAbsorb_(s32, s32) - 0x0013a0ac, 180 bytes. */
int fn_0013a0ac(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsAbsorb_, 0x05ec);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "BattleScriptFunc.cpp",
                      kName_IsAbsorb_, 0x05ef);
    sq_pushbool(vm, fn_00155c70(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* SetBoneEffect_(const char *, s32) - 0x0027cd0c, 180 bytes. */
int fn_0027cd0c(SqVM *vm)
{
    const char * first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &first), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetBoneEffect_, 0x0b86);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_SetBoneEffect_, 0x0b89);
    sq_pushinteger(vm, fn_001f06a8(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* Task_ObjectFadeOut_(s32, s32) - 0x00281ba4, 180 bytes. */
int fn_00281ba4(SqVM *vm)
{
    s32 first;
    s32 second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_ObjectFadeOut_, 0x049a);
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &second), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_ObjectFadeOut_, 0x049d);
    sq_pushinteger(vm, fn_001f22c8(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* SetPointWorldEffect_(const char *, const char *) - 0x00282950, 180 bytes. */
int fn_00282950(SqVM *vm)
{
    const char * first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &first), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetPointWorldEffect_, 0x0b78);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_SetPointWorldEffect_, 0x0b7b);
    sq_pushinteger(vm, fn_001f2598(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* Task_AnimeMoveNoDir_(s32, const char *) - 0x00282d74, 180 bytes. */
int fn_00282d74(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveNoDir_, 0x0423);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveNoDir_, 0x0426);
    sq_pushinteger(vm, fn_001f3f8c(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* Task_AnimeMoveNoFit_(s32, const char *) - 0x00282e7c, 180 bytes. */
int fn_00282e7c(SqVM *vm)
{
    s32 first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -2, &first), "failed: sq_getinteger", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveNoFit_, 0x044a);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveNoFit_, 0x044d);
    sq_pushinteger(vm, fn_001f2ab8(SCRIPT_CONTEXT(), first, second));
    return 1;
}

/* Task_AnimeMoveCamera_(const char *, const char *) - 0x00283614, 180 bytes. */
int fn_00283614(SqVM *vm)
{
    const char * first;
    const char * second;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -2, &first), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveCamera__2, 0x0623);
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &second), "failed: sq_getstring", "FieldScriptFunc.cpp",
                      kName_Task_AnimeMoveCamera__2, 0x0626);
    sq_pushinteger(vm, fn_001f2c1c(SCRIPT_CONTEXT(), first, second));
    return 1;
}

