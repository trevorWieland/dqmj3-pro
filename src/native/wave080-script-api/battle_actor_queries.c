/* Script-facing native API: the battle-module actor and action queries.
 *
 * These bindings come from BattleScriptFunc.cpp: each reads one Squirrel argument,
 * checks it, asks the battle module one question and pushes the answer.  The
 * original bodies are 100 to 108 bytes of code followed by a literal pool that holds
 * the operation text, the source file name, the binding-name pointer, the source line
 * and the script-context address.
 *
 * The argument is at stack slot -1 because every binding here takes exactly one.
 * Two of them normalise it before the engine sees it: a Squirrel bool becomes 0/1
 * and a monster or actor id is truncated to its byte.  The engine services are named
 * by their original addresses.
 *
 * Status: 20 of 23 bindings byte-identical; 3 drafts, each one identified
 * instruction-selection difference away (the comment on each draft says which).
 */
#include "script_api.h"

/* The engine services these bindings call, at their original addresses. */
/* engine-specific push helper: builds the script value from the engine answer */
extern int fn_00148a34(SqVM *vm, s32 value);
extern s32 fn_00154dd8(ScriptContext *context, s8 actor_id);
extern int fn_00154e8c(ScriptContext *context, s32 is_master);
extern int fn_00154f50(ScriptContext *context, s32 action_id);
extern s32 fn_00155084(ScriptContext *context, s8 actor_id);
extern int fn_001550bc(ScriptContext *context, s32 is_partner);
extern int fn_00155370(ScriptContext *context, s32 action_id);
/* resolves a named FBX point to its position record */
extern s32 fn_00155e14(ScriptContext *context, const char *point_name);
extern int fn_00155f54(ScriptContext *context, u8 actor_id);
extern int fn_00155f80(ScriptContext *context, s32 actor_id);
extern int fn_00155fd0(ScriptContext *context, u8 actor_id);
extern int fn_00164258(ScriptContext *context, s32 action_id);
extern s32 fn_001642a4(ScriptContext *context, s32 actor_id);
extern s32 fn_001645e0(ScriptContext *context, s8 actor_id);
extern int fn_00164610(ScriptContext *context, s32 action_id);
extern s32 fn_00164634(ScriptContext *context, s32 actor_id);
extern int fn_001648dc(ScriptContext *context, s32 action_id);
/* resolves a named FBX point to its position record */
extern s32 fn_00164a64(ScriptContext *context, const char *point_name);
extern s32 fn_0016561c(ScriptContext *context, s8 actor_id);
extern s32 fn_001657c8(ScriptContext *context, s8 actor_id);
extern s32 fn_00174b04(ScriptContext *context, s32 is_master);
extern int fn_00174b78(ScriptContext *context, s8 actor_id);
extern s32 fn_00174bac(ScriptContext *context, u8 monster_id);
extern s32 fn_00174bf8(ScriptContext *context, s32 is_partner);

/* GetFbxPos_(const char *point_name) - 0x0012f8d4
 * 100 bytes of code + 56-byte literal pool, 5 call sites.
 * Reads the name of an FBX model point from stack slot -1 with sq_getstring.
 * fn_00155e14 resolves the named point and fn_00148a34 pushes the
 * engine-specific answer; the binding returns without a second push.
 * The binding name is the shared rodata copy at 0x007bc6f6. */
int fn_0012f8d4(SqVM *vm)
{
    const char *point_name;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &point_name), "failed: sq_getstring",
                    "BattleScriptFunc.cpp",
                    kName_GetFbxPos_, 0x00fc);
    fn_00148a34(vm, fn_00155e14(SCRIPT_CONTEXT(), point_name));
    return 1;
}

/* IsMonster_(s32 actor_id) - 0x0012fba8
 * 108 bytes of code + 60-byte literal pool, 1 call site.
 * Reads the battle actor slot tested for being a monster from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00155f54 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc719.
 * Draft: same context-into-r2 scheduling as GetMonsterSize_ */
int fn_0012fba8(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsMonster_, 0x036f);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00155f54(context, (u8)actor_id));
    return 1;
}

/* IsPalpnte_(s32 actor_id) - 0x0012fc50
 * 100 bytes of code + 60-byte literal pool, 2 call sites.
 * Reads the battle actor slot tested for the palpitation state from stack slot
 * -1 with sq_getinteger.
 * Calls fn_00155f80 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca68. */
int fn_0012fc50(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsPalpnte_, 0x0599);
    sq_pushbool(vm, fn_00155f80(SCRIPT_CONTEXT(), actor_id));
    return 1;
}

/* IsPartner_(s32 actor_id) - 0x0012fcf0
 * 108 bytes of code + 60-byte literal pool, 2 call sites.
 * Reads the battle actor slot tested for being the partner from stack slot -1
 * with sq_getinteger.
 * Calls fn_00155fd0 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc72e.
 * Draft: same context-into-r2 scheduling as GetMonsterSize_ */
int fn_0012fcf0(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsPartner_, 0x0385);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00155fd0(context, (u8)actor_id));
    return 1;
}

/* GetActionNo_(s32 actor_id) - 0x0013096c
 * 100 bytes of code + 60-byte literal pool, 2 call sites.
 * Reads the battle actor slot whose chosen action number is read from stack slot
 * -1 with sq_getinteger.
 * Calls fn_001642a4 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc89b. */
int fn_0013096c(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetActionNo_, 0x0497);
    sq_pushinteger(vm, fn_001642a4(SCRIPT_CONTEXT(), actor_id));
    return 1;
}

/* IsLightWave_(s32 action_id) - 0x00130c94
 * 100 bytes of code + 60-byte literal pool, no script calls.
 * Reads the battle action tested for the light wave effect from stack slot -1
 * with sq_getinteger.
 * Calls fn_00164258 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca73. */
int fn_00130c94(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsLightWave_, 0x05a4);
    sq_pushbool(vm, fn_00164258(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* GetAllyIndex_(s32 actor_id) - 0x001312dc
 * 104 bytes of code + 60-byte literal pool, 60 call sites.
 * Reads the battle actor slot whose ally index is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00154dd8 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc6c9. */
int fn_001312dc(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetAllyIndex_, 0x034e);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00154dd8(context, (s8)actor_id));
    return 1;
}

/* GetMonsterHp_(s32 actor_id) - 0x00131380
 * 104 bytes of code + 60-byte literal pool, no script calls.
 * Reads the battle actor slot whose current HP is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001645e0 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc88d. */
int fn_00131380(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetMonsterHp_, 0x0486);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001645e0(context, (s8)actor_id));
    return 1;
}

/* GetTargetNum_(s32 actor_id) - 0x0013160c
 * 104 bytes of code + 60-byte literal pool, 19 call sites.
 * Reads the battle actor slot whose target count is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_0016561c and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc91a. */
int fn_0013160c(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetTargetNum_, 0x0501);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_0016561c(context, (s8)actor_id));
    return 1;
}

/* IsFreezeWave_(s32 action_id) - 0x001316b0
 * 100 bytes of code + 60-byte literal pool, no script calls.
 * Reads the battle action tested for the freeze wave effect from stack slot -1
 * with sq_getinteger.
 * Calls fn_00164610 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca80. */
int fn_001316b0(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsFreezeWave_, 0x05af);
    sq_pushbool(vm, fn_00164610(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* IsMasterFall_(int is_master) - 0x00131980
 * 108 bytes of code + 56-byte literal pool, 1 call site.
 * Reads a Squirrel bool selecting master or partner from stack slot -1 with
 * sq_getbool.
 * Calls fn_00154e8c and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc574. */
int fn_00131980(SqVM *vm)
{
    int is_master;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &is_master), "failed: sq_getbool",
                    "BattleScriptFunc.cpp",
                    kName_IsMasterFall_, 0x025e);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00154e8c(context, is_master == 1));
    return 1;
}

/* IsTeraAttack_(s32 action_id) - 0x00131c0c
 * 100 bytes of code + 60-byte literal pool, 1 call site.
 * Reads the battle action tested for being a Tera attack from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00154f50 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca98. */
int fn_00131c0c(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsTeraAttack_, 0x05c5);
    sq_pushbool(vm, fn_00154f50(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* GetActorIndex_(s32 actor_id) - 0x00131e80
 * 104 bytes of code + 60-byte literal pool, 131 call sites.
 * Reads the battle actor slot whose index is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001657c8 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc8c6. */
int fn_00131e80(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetActorIndex_, 0x04bb);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001657c8(context, (s8)actor_id));
    return 1;
}

/* GetEnemyIndex_(s32 actor_id) - 0x00132048
 * 104 bytes of code + 60-byte literal pool, 55 call sites.
 * Reads the battle actor slot whose enemy index is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00155084 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc6d7. */
int fn_00132048(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetEnemyIndex_, 0x0359);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00155084(context, (s8)actor_id));
    return 1;
}

/* GetMasterKind_(int is_master) - 0x00132118
 * 108 bytes of code + 56-byte literal pool, 4 call sites.
 * Reads a Squirrel bool: true for the master, false for the partner from stack
 * slot -1 with sq_getbool.
 * Calls fn_00174b04 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc565. */
int fn_00132118(SqVM *vm)
{
    int is_master;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &is_master), "failed: sq_getbool",
                    "BattleScriptFunc.cpp",
                    kName_GetMasterKind_, 0x0252);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00174b04(context, is_master == 1));
    return 1;
}

/* GetTargetType_(s32 actor_id) - 0x001322f8
 * 100 bytes of code + 56-byte literal pool, 7 call sites.
 * Reads the battle actor slot whose target type is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00164634 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc8b7. */
int fn_001322f8(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetTargetType_, 0x04b0);
    sq_pushinteger(vm, fn_00164634(SCRIPT_CONTEXT(), actor_id));
    return 1;
}

/* IsPartnerFall_(int is_partner) - 0x00132394
 * 108 bytes of code + 56-byte literal pool, 1 call site.
 * Reads a Squirrel bool selecting partner or master from stack slot -1 with
 * sq_getbool.
 * Calls fn_001550bc and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc592. */
int fn_00132394(SqVM *vm)
{
    int is_partner;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &is_partner), "failed: sq_getbool",
                    "BattleScriptFunc.cpp",
                    kName_IsPartnerFall_, 0x0276);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_001550bc(context, is_partner == 1));
    return 1;
}

/* IsPartnerRide_(s32 actor_id) - 0x00132438
 * 104 bytes of code + 60-byte literal pool, 4 call sites.
 * Reads the battle actor slot tested for the partner riding from stack slot -1
 * with sq_getinteger.
 * Calls fn_00174b78 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bca41. */
int fn_00132438(SqVM *vm)
{
    s32 actor_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsPartnerRide_, 0x06db);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_00174b78(context, (s8)actor_id));
    return 1;
}

/* GetFbxPointPos_(const char *point_name) - 0x00132918
 * 100 bytes of code + 56-byte literal pool, 3 call sites.
 * Reads the name of an FBX model point from stack slot -1 with sq_getstring.
 * fn_00164a64 resolves the named point and fn_00148a34 pushes the
 * engine-specific answer; the binding returns without a second push.
 * The binding name is the shared rodata copy at 0x007bc6e6. */
int fn_00132918(SqVM *vm)
{
    const char *point_name;
    SCRIPT_CHECK_IN(vm, sq_getstring(vm, -1, &point_name), "failed: sq_getstring",
                    "BattleScriptFunc.cpp",
                    kName_GetFbxPointPos_, 0x00f1);
    fn_00148a34(vm, fn_00164a64(SCRIPT_CONTEXT(), point_name));
    return 1;
}

/* GetMonsterSize_(s32 monster_id) - 0x001329b4
 * 108 bytes of code + 60-byte literal pool, 71 call sites.
 * Reads the monster id whose model size class is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00174bac and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc52d.
 * Draft: the original loads the context address into r1, masks the byte argument
 * into r1 and moves the context from r2 to r0; this compiler masks the argument
 * into r1 first and loads the context into r0 directly. Same registers at the
 * call, one instruction and one schedule apart */
int fn_001329b4(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_GetMonsterSize_, 0x020b);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00174bac(context, (u8)monster_id));
    return 1;
}

/* GetPartnerKind_(int is_partner) - 0x00132a5c
 * 108 bytes of code + 56-byte literal pool, 3 call sites.
 * Reads a Squirrel bool selecting partner or master from stack slot -1 with
 * sq_getbool.
 * Calls fn_00174bf8 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007bc582. */
int fn_00132a5c(SqVM *vm)
{
    int is_partner;
    ScriptContext *context;
    SCRIPT_CHECK_IN(vm, sq_getbool(vm, -1, &is_partner), "failed: sq_getbool",
                    "BattleScriptFunc.cpp",
                    kName_GetPartnerKind_, 0x026a);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_00174bf8(context, is_partner == 1));
    return 1;
}

/* IsTargetSingle_(s32 action_id) - 0x00132ed4
 * 100 bytes of code + 60-byte literal pool, 7 call sites.
 * Reads the battle action tested for a single target from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001648dc and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc985. */
int fn_00132ed4(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsTargetSingle_, 0x0582);
    sq_pushbool(vm, fn_001648dc(SCRIPT_CONTEXT(), action_id));
    return 1;
}

/* IsHighRankSpell_(s32 action_id) - 0x00133800
 * 100 bytes of code + 56-byte literal pool, 4 call sites.
 * Reads the battle action tested for a high-rank spell from stack slot -1 with
 * sq_getinteger.
 * Calls fn_00155370 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007bc739. */
int fn_00133800(SqVM *vm)
{
    s32 action_id;
    SCRIPT_CHECK_IN(vm, sq_getinteger(vm, -1, &action_id), "failed: sq_getinteger",
                    "BattleScriptFunc.cpp",
                    kName_IsHighRankSpell_, 0x0390);
    sq_pushbool(vm, fn_00155370(SCRIPT_CONTEXT(), action_id));
    return 1;
}
