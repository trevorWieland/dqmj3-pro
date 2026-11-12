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
extern int fn_00154ca8(ScriptContext *context, s32, s32);
extern int fn_00154e04(ScriptContext *context, s32, s32);
extern int fn_00154e20(ScriptContext *context, s32, s32);
extern int fn_00154e64(ScriptContext *context, s32, s32);
extern int fn_00154ecc(ScriptContext *context, s32, s32);
extern int fn_00154f28(ScriptContext *context, s32, s32);
extern int fn_00155140(ScriptContext *context, s32, s32);
extern int fn_0015532c(ScriptContext *context, s32, s32);
extern int fn_00155348(ScriptContext *context, s32, s32);
extern int fn_00155548(ScriptContext *context, s32, s32);
extern int fn_00155560(ScriptContext *context, s32, s32);
extern int fn_001555bc(ScriptContext *context, s32, s32);
extern int fn_00155aa0(ScriptContext *context, s32, s32);
extern int fn_00155ac8(ScriptContext *context, s32, s32);
extern int fn_00155c70(ScriptContext *context, s32, s32);
extern int fn_00155f2c(ScriptContext *context, s32, s32);
extern int fn_00155ffc(ScriptContext *context, s32, s32);
extern void fn_00159df4(ScriptContext *context, s32, s32);
extern int fn_0015b408(ScriptContext *context, s32, s32);
extern int fn_00164208(ScriptContext *context, s32, s32);
extern int fn_00164230(ScriptContext *context, s32, s32);
extern void fn_0016498c(ScriptContext *context, s32, s32);
extern int fn_00174a74(ScriptContext *context, s32, s32);
extern int fn_00174aec(ScriptContext *context, s32, s32);
extern int fn_001754f0(ScriptContext *context, s32, s32);
extern int fn_0017591c(ScriptContext *context, s32, s32);
extern void fn_001c7264(ScriptContext *context, s32, s32);
extern void fn_001f4300(ScriptContext *context, s32, s32);
extern void fn_001f5524(ScriptContext *context, s32, s32);
extern void fn_006abbcc(ScriptContext *context, s32, s32);

/* The binding names, each one shared copy in rodata. */
extern const char kName_AddAppealPoint_[];
extern const char kName_ChangeBattleDarkLoadRevengeFromARG_[];
extern const char kName_GetActHitNum_[];
extern const char kName_GetAllyAppealPoint_[];
extern const char kName_GetDamageType_[];
extern const char kName_GetEnemyAppealPoint_[];
extern const char kName_GetRevivalValue_[];
extern const char kName_GetStoleGold_[];
extern const char kName_GetStoleItem_[];
extern const char kName_GetTeraDamageValue_[];
extern const char kName_IsAbsorb_[];
extern const char kName_IsAngel_[];
extern const char kName_IsBraveHart_[];
extern const char kName_IsCriticalGuard_[];
extern const char kName_IsDead_[];
extern const char kName_IsGodTear_[];
extern const char kName_IsGuard_[];
extern const char kName_IsLastStand_[];
extern const char kName_IsLivingDead_[];
extern const char kName_IsPoisonDamage_[];
extern const char kName_IsReflect_[];
extern const char kName_IsRevival_[];
extern const char kName_IsRezaoral_[];
extern const char kName_IsSelfTarget_[];
extern const char kName_IsSwapTarget_[];
extern const char kName_RideOff_[];
extern const char kName_SetComMode_[];
extern const char kName_SetDirToObject_[];
extern const char kName_SetParamChange_[];
extern const char kName_SetStateEffect_Init_[];

/* IsGodTear_(s32 first, s32 second) - 0x0012fab4, 180 bytes: forwards two s32 arguments to fn_00155f2c. */
int fn_0012fab4(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGodTear_, 0x0632);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGodTear_, 0x0635);
    sq_pushbool(vm, fn_00155f2c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsReflect_(s32 first, s32 second) - 0x0012fd98, 180 bytes: forwards two s32 arguments to fn_0017591c. */
int fn_0012fd98(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsReflect_, 0x05fa);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsReflect_, 0x05fd);
    sq_pushbool(vm, fn_0017591c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsRevival_(s32 first, s32 second) - 0x0012fe8c, 180 bytes: forwards two s32 arguments to fn_00155ffc. */
int fn_0012fe8c(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsRevival_, 0x0608);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsRevival_, 0x060b);
    sq_pushbool(vm, fn_00155ffc(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsRezaoral_(s32 first, s32 second) - 0x001304f0, 180 bytes: forwards two s32 arguments to fn_00154ca8. */
int fn_001304f0(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsRezaoral_, 0x0616);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsRezaoral_, 0x0619);
    sq_pushbool(vm, fn_00154ca8(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsBraveHart_(s32 first, s32 second) - 0x00130aac, 180 bytes: forwards two s32 arguments to fn_00164208. */
int fn_00130aac(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsBraveHart_, 0x064e);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsBraveHart_, 0x0651);
    sq_pushbool(vm, fn_00164208(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsLastStand_(s32 first, s32 second) - 0x00130ba0, 180 bytes: forwards two s32 arguments to fn_00164230. */
int fn_00130ba0(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsLastStand_, 0x065c);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsLastStand_, 0x065f);
    sq_pushbool(vm, fn_00164230(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetActHitNum_(s32 first, s32 second) - 0x001311bc, 180 bytes: forwards two s32 arguments to fn_00174a74. */
int fn_001311bc(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetActHitNum_, 0x0513);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetActHitNum_, 0x0516);
    sq_pushinteger(vm, fn_00174a74(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetStoleGold_(s32 first, s32 second) - 0x00131424, 180 bytes: forwards two s32 arguments to fn_00154e04. */
int fn_00131424(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStoleGold_, 0x055e);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStoleGold_, 0x0561);
    sq_pushinteger(vm, fn_00154e04(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetStoleItem_(s32 first, s32 second) - 0x00131518, 180 bytes: forwards two s32 arguments to fn_00154e20. */
int fn_00131518(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStoleItem_, 0x056c);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetStoleItem_, 0x056f);
    sq_pushinteger(vm, fn_00154e20(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsLivingDead_(s32 first, s32 second) - 0x00131890, 180 bytes: forwards two s32 arguments to fn_00154e64. */
int fn_00131890(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsLivingDead_, 0x0640);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsLivingDead_, 0x0643);
    sq_pushbool(vm, fn_00154e64(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsSelfTarget_(s32 first, s32 second) - 0x00131a24, 180 bytes: forwards two s32 arguments to fn_00154ecc. */
int fn_00131a24(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsSelfTarget_, 0x0ae6);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsSelfTarget_, 0x0ae9);
    sq_pushbool(vm, fn_00154ecc(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsSwapTarget_(s32 first, s32 second) - 0x00131b18, 180 bytes: forwards two s32 arguments to fn_00154f28. */
int fn_00131b18(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsSwapTarget_, 0x0697);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsSwapTarget_, 0x069a);
    sq_pushbool(vm, fn_00154f28(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetDamageType_(s32 first, s32 second) - 0x00131f54, 180 bytes: forwards two s32 arguments to fn_00174aec. */
int fn_00131f54(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetDamageType_, 0x04a2);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetDamageType_, 0x04a5);
    sq_pushinteger(vm, fn_00174aec(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* AddAppealPoint_(s32 first, s32 second) - 0x0013268c, 168 bytes: forwards two s32 arguments to fn_00159df4. */
int fn_0013268c(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddAppealPoint_, 0x0797);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_AddAppealPoint_, 0x079a);
    fn_00159df4(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* IsPoisonDamage_(s32 first, s32 second) - 0x00132db4, 180 bytes: forwards two s32 arguments to fn_00155140. */
int fn_00132db4(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsPoisonDamage_, 0x0689);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsPoisonDamage_, 0x068c);
    sq_pushbool(vm, fn_00155140(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* SetParamChange_(s32 first, s32 second) - 0x001333e8, 168 bytes: forwards two s32 arguments to fn_0016498c. */
int fn_001333e8(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetParamChange_, 0x0759);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetParamChange_, 0x075c);
    fn_0016498c(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* GetRevivalValue_(s32 first, s32 second) - 0x00133618, 180 bytes: forwards two s32 arguments to fn_0015532c. */
int fn_00133618(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetRevivalValue_, 0x04f2);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetRevivalValue_, 0x04f5);
    sq_pushinteger(vm, fn_0015532c(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsCriticalGuard_(s32 first, s32 second) - 0x0013370c, 180 bytes: forwards two s32 arguments to fn_00155348. */
int fn_0013370c(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsCriticalGuard_, 0x067b);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsCriticalGuard_, 0x067e);
    sq_pushbool(vm, fn_00155348(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetAllyAppealPoint_(s32 first, s32 second) - 0x00135134, 180 bytes: forwards two s32 arguments to fn_00155548. */
int fn_00135134(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetAllyAppealPoint_, 0x0542);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetAllyAppealPoint_, 0x0545);
    sq_pushinteger(vm, fn_00155548(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetTeraDamageValue_(s32 first, s32 second) - 0x00135254, 180 bytes: forwards two s32 arguments to fn_00155560. */
int fn_00135254(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetTeraDamageValue_, 0x04e4);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetTeraDamageValue_, 0x04e7);
    sq_pushinteger(vm, fn_00155560(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* GetEnemyAppealPoint_(s32 first, s32 second) - 0x001358b0, 180 bytes: forwards two s32 arguments to fn_001555bc. */
int fn_001358b0(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetEnemyAppealPoint_, 0x0550);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_GetEnemyAppealPoint_, 0x0553);
    sq_pushinteger(vm, fn_001555bc(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* SetStateEffect_Init_(s32 first, s32 second) - 0x00135d1c, 180 bytes: forwards two s32 arguments to fn_0015b408. */
int fn_00135d1c(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetStateEffect_Init_, 0x0afd);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_SetStateEffect_Init_, 0x0b00);
    sq_pushinteger(vm, fn_0015b408(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsDead_(s32 first, s32 second) - 0x001393fc, 180 bytes: forwards two s32 arguments to fn_001754f0. */
int fn_001393fc(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsDead_, 0x05d0);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsDead_, 0x05d3);
    sq_pushbool(vm, fn_001754f0(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsAngel_(s32 first, s32 second) - 0x00139a90, 180 bytes: forwards two s32 arguments to fn_00155aa0. */
int fn_00139a90(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsAngel_, 0x0624);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsAngel_, 0x0627);
    sq_pushbool(vm, fn_00155aa0(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsGuard_(s32 first, s32 second) - 0x00139b84, 180 bytes: forwards two s32 arguments to fn_00155ac8. */
int fn_00139b84(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGuard_, 0x05de);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsGuard_, 0x05e1);
    sq_pushbool(vm, fn_00155ac8(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* IsAbsorb_(s32 first, s32 second) - 0x0013a0ac, 180 bytes: forwards two s32 arguments to fn_00155c70. */
int fn_0013a0ac(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsAbsorb_, 0x05ec);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "BattleScriptFunc.cpp", kName_IsAbsorb_, 0x05ef);
    sq_pushbool(vm, fn_00155c70(SCRIPT_CONTEXT(), args.first, args.second));
    return 1;
}

/* SetComMode_(s32 first, s32 second) - 0x0027b0cc, 168 bytes: forwards two s32 arguments to fn_006abbcc. */
int fn_0027b0cc(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetComMode_, 0x00d6);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetComMode_, 0x00d9);
    fn_006abbcc(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* SetDirToObject_(s32 first, s32 second) - 0x0027de08, 168 bytes: forwards two s32 arguments to fn_001c7264. */
int fn_0027de08(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetDirToObject_, 0x0297);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_SetDirToObject_, 0x029a);
    fn_001c7264(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* ChangeBattleDarkLoadRevengeFromARG_(s32 first, s32 second) - 0x00287cf0, 168 bytes: forwards two s32 arguments to fn_001f4300. */
int fn_00287cf0(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeBattleDarkLoadRevengeFromARG_, 0x0784);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_ChangeBattleDarkLoadRevengeFromARG_, 0x0786);
    fn_001f4300(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}

/* RideOff_(s32 first, s32 second) - 0x00288594, 168 bytes: forwards two s32 arguments to fn_001f5524. */
int fn_00288594(SqVM *vm)
{
    struct { s32 first; s32 second; } args;
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -2, &args.first), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_RideOff_, 0x039c);
    SCRIPT_CHECK_FILE(vm, sq_getinteger(vm, -1, &args.second), "failed: sq_getinteger",
                      "FieldScriptFunc.cpp", kName_RideOff_, 0x039f);
    fn_001f5524(SCRIPT_CONTEXT(), args.first, args.second);
    return 0;
}
