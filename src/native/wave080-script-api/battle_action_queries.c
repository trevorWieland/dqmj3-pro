/* Script-facing native API: the battle-module action and attack queries.
 *
 * These bindings come from BattleScriptFunc.cpp and answer questions about battle
 * actions: category, efficacy, MP cost, target count and the elemental wave flags.
 * Each reads one Squirrel argument from stack slot -1, checks it, calls one battle
 * module service and pushes the answer as an integer or a bool.
 *
 * The action or actor id is passed unchanged here; the narrowing to a byte or a short
 * appears only where the original instruction stream performs it, and the comment on
 * each binding records which service it reaches.
 *
 * Status: 9 of 14 bindings byte-identical; 5 drafts, each one identified
 * instruction-selection difference away (the comment on each draft says which).
 */
#include "script_api.h"

/* The engine services these bindings call, at their original addresses. */
extern s32 fn_0014a35c(ScriptContext *context, s32 actor_id);
extern s32 fn_001553f4(ScriptContext *context, s8 monster_id);
extern f32 fn_00155b18(ScriptContext *context, u8 actor_id);
extern s32 fn_00155bc0(ScriptContext *context, s32 action_id);
extern int fn_00155c98(ScriptContext *context, u8 actor_id);
extern f32 fn_0015bfb0(ScriptContext *context, s32 actor_id);
extern s32 fn_00163a1c(ScriptContext *context, s32 action_id);
extern s32 fn_00174a8c(ScriptContext *context, u8 monster_id);
extern s32 fn_00174d68(ScriptContext *context, s32 action_id);
extern int fn_00175324(ScriptContext *context, s8 status_id);
extern int fn_001754ac(ScriptContext *context, u8 actor_id);
extern int fn_00175518(ScriptContext *context, s8 actor_id);
extern int fn_00175724(ScriptContext *context, s32 actor_id);
extern int fn_00175778(ScriptContext *context, s32 action_id);

/* GetInitExistType_(s32 monster_id) - 0x001341f8
 * 108 bytes of code + 60-byte literal pool, 22 call sites.
 * Reads the monster id whose initial existence type is read from stack slot -1
 * with sq_getinteger.
 * Calls fn_00174a8c and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc6b7.
 * Draft: same context-into-r2 scheduling as GetMonsterSize_ */
int fn_001341f8(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetInitExistType_, 0x0343);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00174a8c(context, (u8)monster_id));
    return 1;
}

/* GetMonsterLinage_(s32 monster_id) - 0x001342a0
 * 104 bytes of code + 60-byte literal pool, 1 call site.
 * Reads the monster id whose lineage byte is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001553f4 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc553. */
int fn_001342a0(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetMonsterLinage_, 0x0246);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001553f4(context, (s8)monster_id));
    return 1;
}

/* GetActionCategory_(s32 action_id) - 0x001348f8
 * 100 bytes of code + 56-byte literal pool, 3 call sites.
 * Reads the battle action whose category is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00174d68 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc5f1. */
int fn_001348f8(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetActionCategory_, 0x02a4);
    sq_pushinteger(vm, fn_00174d68(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* GetActionEfficacy_(s32 action_id) - 0x00134994
 * 100 bytes of code + 60-byte literal pool, 6 call sites.
 * Reads the battle action whose efficacy class is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00163a1c and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc5de. */
int fn_00134994(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetActionEfficacy_, 0x0299);
    sq_pushinteger(vm, fn_00163a1c(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* GetHighRankEffectSize_(s32 actor_id) - 0x00136b08
 * 100 bytes of code + 60-byte literal pool, 1 call site.
 * Reads the battle actor slot whose high-rank effect scale is read from stack
 * slot -1 with sq_getinteger.
 * Calls fn_0015bfb0 and pushes the float answer.
 * The binding name is the shared rodata copy at 0x007bcea1.
 * Draft: the original has the nop before the float push */
int fn_00136b08(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetHighRankEffectSize_, 0x0af3);
    sq_pushfloat(vm, fn_0015bfb0(SCRIPT_CONTEXT(), actor_id));
    return 1;
}

/* IsStatusChangeVisible_(s32 status_id) - 0x00136d74
 * 104 bytes of code + 60-byte literal pool, 1 call site.
 * Reads the status effect whose visibility is queried from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00175324 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc66f. */
int fn_00136d74(SqVM *vm)
{
    s32 status_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &status_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsStatusChangeVisible_, 0x02fe);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00175324(context, (s8)status_id));
    return 1;
}

/* SetDamageMotion_ScoutAttack_(s32 actor_id) - 0x00138440
 * 100 bytes of code + 60-byte literal pool, 2 call sites.
 * Reads the battle actor slot that plays the scout attack damage motion from
 * stack slot -1 with sq_getinteger.
 * Calls fn_0014a35c and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bcd70. */
int fn_00138440(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_SetDamageMotion_ScoutAttack_, 0x0a29);
    sq_pushinteger(vm, fn_0014a35c(SCRIPT_CONTEXT(), actor_id));
    return 1;
}

/* IsAlly_(s32 actor_id) - 0x00139358
 * 108 bytes of code + 56-byte literal pool, 90 call sites.
 * Reads the battle actor slot tested for ally ownership from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001754ac and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc340.
 * Draft: same context-into-r2 scheduling as GetMonsterSize_ */
int fn_00139358(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsAlly_, 0x0364);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_001754ac(context, (u8)actor_id));
    return 1;
}

/* IsRide_(s32 actor_id) - 0x0013965c
 * 104 bytes of code + 56-byte literal pool, 7 call sites.
 * Reads the battle actor slot tested for riding from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00175518 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc358. */
int fn_0013965c(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsRide_, 0x06d0);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00175518(context, (s8)actor_id));
    return 1;
}

/* GetPitch_(s32 actor_id) - 0x00139f38
 * 108 bytes of code + 60-byte literal pool, no script calls.
 * Reads the battle actor slot whose facing pitch is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00155b18 and pushes the float answer.
 * The binding name is the shared rodata copy at 0x007bc4ad.
 * Draft: both differences of this batch together: the nop before the float push
 * and the context-into-r2 scheduling of GetMonsterSize_ */
int fn_00139f38(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetPitch_, 0x0143);
    context = SCRIPT_CONTEXT();
    sq_pushfloat(vm, fn_00155b18(context, (u8)actor_id));
    return 1;
}

/* GetUseMp_(s32 action_id) - 0x0013a00c
 * 100 bytes of code + 60-byte literal pool, 4 call sites.
 * Reads the battle action whose MP cost is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00155bc0 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc936. */
int fn_0013a00c(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetUseMp_, 0x0521);
    sq_pushinteger(vm, fn_00155bc0(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* IsMaster_(s32 actor_id) - 0x0013a1a0
 * 108 bytes of code + 60-byte literal pool, no script calls.
 * Reads the battle actor slot tested for being the master from stack slot -1
 * with sq_getinteger.
 * Calls fn_00155c98 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc724.
 * Draft: same context-into-r2 scheduling as GetMonsterSize_ */
int fn_0013a1a0(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsMaster_, 0x037a);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00155c98(context, (u8)actor_id));
    return 1;
}

/* IsPasser_(s32 actor_id) - 0x0013a248
 * 100 bytes of code + 60-byte literal pool, 2 call sites.
 * Reads the battle actor slot tested for being a passer from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00175724 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca5e. */
int fn_0013a248(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsPasser_, 0x058e);
    sq_pushbool(vm, fn_00175724(SCRIPT_CONTEXT(), actor_id));
    return 1;
}

/* IsTokugi_(s32 action_id) - 0x0013a2e8
 * 100 bytes of code + 60-byte literal pool, 2 call sites.
 * Reads the battle action tested for being a special skill from stack slot -1
 * with sq_getinteger.
 * Calls fn_00175778 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca8e. */
int fn_0013a2e8(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsTokugi_, 0x05ba);
    sq_pushbool(vm, fn_00175778(SCRIPT_CONTEXT(), action_id));
    return 1;
}
