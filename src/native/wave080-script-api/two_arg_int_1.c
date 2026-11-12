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
