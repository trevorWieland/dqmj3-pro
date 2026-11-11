/* Script-facing native API: no-argument context queries (script-module addresses).
 *
 * Each binding here is a script-side query that takes no arguments: the native
 * reads the script context, asks one engine service, and pushes the answer.  The
 * original is forty bytes - push, save the VM, load the context, one call, one
 * push, return 1 - and the literal pool holds only the context address.
 *
 * These bodies are transcribed from that instruction shape: the engine callee is
 * the address the original calls, the pushed type is the push helper it calls,
 * and the binding identifier is the name the script sees.  They take no shared
 * constant and no error path, so nothing here is inferred beyond the call and
 * the pushed value.
 *
 * 22 bindings in this unit; the split gives every one of them an address.
 */
#include "script_api.h"


/* The engine services these queries call, by canonical address. */
extern int fn_001484b4(ScriptContext *context);
extern int fn_0014951c(ScriptContext *context);
extern int fn_00155a3c(ScriptContext *context);
extern int fn_00165d2c(ScriptContext *context);
extern int fn_00155998(ScriptContext *context);
extern int fn_00165248(ScriptContext *context);
extern int fn_001552f4(ScriptContext *context);
extern int fn_0014939c(ScriptContext *context);
extern int fn_00155124(ScriptContext *context);
extern int fn_00165238(ScriptContext *context);
extern int fn_00155a58(ScriptContext *context);
extern int fn_00159d30(ScriptContext *context);
extern int fn_00155af0(ScriptContext *context);
extern int fn_0015543c(ScriptContext *context);
extern int fn_001555d4(ScriptContext *context);
extern int fn_00155424(ScriptContext *context);
extern int fn_0015557c(ScriptContext *context);
extern int fn_0015516c(ScriptContext *context);
extern int fn_001558ec(ScriptContext *context);
extern int fn_0015c220(ScriptContext *context);
extern int fn_0015c270(ScriptContext *context);
extern int fn_00155ba4(ScriptContext *context);

/* DeleteAllTask_() - 0x0012df24: pushes the engine's boolean answer. */
int fn_0012df24(SqVM *vm)
{
    sq_pushbool(vm, fn_001484b4(SCRIPT_CONTEXT()));
    return 1;
}

/* DeleteAllEffect_() - 0x00133590: pushes the engine's boolean answer. */
int fn_00133590(SqVM *vm)
{
    sq_pushbool(vm, fn_0014951c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetMap_() - 0x00139278: pushes the engine's integer answer. */
int fn_00139278(SqVM *vm)
{
    sq_pushinteger(vm, fn_00155a3c(SCRIPT_CONTEXT()));
    return 1;
}

/* IsOpenMessageWindow_() - 0x00135ac8: pushes the engine's boolean answer. */
int fn_00135ac8(SqVM *vm)
{
    sq_pushbool(vm, fn_00165d2c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetFeatTensionBurnFeatId_() - 0x001380e0: pushes the engine's integer answer. */
int fn_001380e0(SqVM *vm)
{
    sq_pushinteger(vm, fn_00155998(SCRIPT_CONTEXT()));
    return 1;
}

/* GetActionNum_() - 0x001312b0: pushes the engine's integer answer. */
int fn_001312b0(SqVM *vm)
{
    sq_pushinteger(vm, fn_00165248(SCRIPT_CONTEXT()));
    return 1;
}

/* GetExecMissType_() - 0x001335ec: pushes the engine's integer answer. */
int fn_001335ec(SqVM *vm)
{
    sq_pushinteger(vm, fn_001552f4(SCRIPT_CONTEXT()));
    return 1;
}

/* GetFallMaster_() - 0x001320ec: pushes the engine's integer answer. */
int fn_001320ec(SqVM *vm)
{
    sq_pushinteger(vm, fn_0014939c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetPreemptSide_() - 0x00132b00: pushes the engine's integer answer. */
int fn_00132b00(SqVM *vm)
{
    sq_pushinteger(vm, fn_00155124(SCRIPT_CONTEXT()));
    return 1;
}

/* GetEnvType_() - 0x001302c8: pushes the engine's integer answer. */
int fn_001302c8(SqVM *vm)
{
    sq_pushinteger(vm, fn_00165238(SCRIPT_CONTEXT()));
    return 1;
}

/* IsFull_() - 0x001394ec: pushes the engine's boolean answer. */
int fn_001394ec(SqVM *vm)
{
    sq_pushbool(vm, fn_00155a58(SCRIPT_CONTEXT()));
    return 1;
}

/* IsEndAppealPointAnim_() - 0x001362c0: pushes the engine's boolean answer. */
int fn_001362c0(SqVM *vm)
{
    sq_pushbool(vm, fn_00159d30(SCRIPT_CONTEXT()));
    return 1;
}

/* IsScout_() - 0x00139c78: pushes the engine's boolean answer. */
int fn_00139c78(SqVM *vm)
{
    sq_pushbool(vm, fn_00155af0(SCRIPT_CONTEXT()));
    return 1;
}

/* GetScoutItemValue_() - 0x00134b58: pushes the engine's integer answer. */
int fn_00134b58(SqVM *vm)
{
    sq_pushinteger(vm, fn_0015543c(SCRIPT_CONTEXT()));
    return 1;
}

/* GetScoutDamageValue_() - 0x001359a0: pushes the engine's integer answer. */
int fn_001359a0(SqVM *vm)
{
    sq_pushinteger(vm, fn_001555d4(SCRIPT_CONTEXT()));
    return 1;
}

/* GetScoutFeatValue_() - 0x00134b2c: pushes the engine's integer answer. */
int fn_00134b2c(SqVM *vm)
{
    sq_pushinteger(vm, fn_00155424(SCRIPT_CONTEXT()));
    return 1;
}

/* IsScoutFirstAttack_() - 0x00135400: pushes the engine's boolean answer. */
int fn_00135400(SqVM *vm)
{
    sq_pushbool(vm, fn_0015557c(SCRIPT_CONTEXT()));
    return 1;
}

/* IsScoutSuccess_() - 0x00132ea8: pushes the engine's boolean answer. */
int fn_00132ea8(SqVM *vm)
{
    sq_pushbool(vm, fn_0015516c(SCRIPT_CONTEXT()));
    return 1;
}

/* IsScoutTargetSideAngry_() - 0x00137540: pushes the engine's boolean answer. */
int fn_00137540(SqVM *vm)
{
    sq_pushbool(vm, fn_001558ec(SCRIPT_CONTEXT()));
    return 1;
}

/* GetScoutGaugeValue_() - 0x00135228: pushes the engine's integer answer. */
int fn_00135228(SqVM *vm)
{
    sq_pushinteger(vm, fn_0015c220(SCRIPT_CONTEXT()));
    return 1;
}

/* IsFinishScoutGaugeAnime_() - 0x00137d0c: pushes the engine's boolean answer. */
int fn_00137d0c(SqVM *vm)
{
    sq_pushbool(vm, fn_0015c270(SCRIPT_CONTEXT()));
    return 1;
}

/* GetRound_() - 0x00139fe0: pushes the engine's integer answer. */
int fn_00139fe0(SqVM *vm)
{
    sq_pushinteger(vm, fn_00155ba4(SCRIPT_CONTEXT()));
    return 1;
}
