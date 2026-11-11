/* Script-facing native API: the NPC, ride, menu and shadow bindings.
 *
 * These bindings come from FieldScriptFunc.cpp and cover what a script can ask the
 * field engine about the scene around the player: NPC and monster records, ride
 * types, the navi map, the script menu, the field object's direction and opacity,
 * and the shadow switch.  They read the script context at 0x00898898 except for
 * the two that read the object singleton at 0x008977e0 and the one that reads the
 * shadow context at 0x008977d4.
 *
 * One dispatches through a vtable slot and returns nothing; the rest call one or
 * two engine services and push the answer.
 *
 * Status: 11 of 13 bindings byte-identical; 2 drafts, each one identified
 * instruction-selection difference away (the comment on each draft says which).
 */
#include "script_api.h"

/* The object singleton the field bindings read, at its original address. */
#define DRONE_STATE() (*(void **)(__UINTPTR_TYPE__)0x008977e0u)

/* The engine services these bindings call, at their original addresses. */
extern s32 fn_001f37f0(ScriptContext *context, u8 form_id);
extern int fn_001f3a6c(ScriptContext *context, u16 count);
extern int fn_001f3ab4(ScriptContext *context, s32 marker_type);
extern s32 fn_001f497c(ScriptContext *context, const char *point_name);
extern s32 fn_001f5458(ScriptContext *context, const char *npc_name);
/* sets the partner navi-map flag */
extern void fn_0021c4a4(void *state, int enabled);
extern s32 fn_006ad198(ScriptContext *context, u8 rank);
extern s32 fn_006ad1b4(ScriptContext *context, s32 event_id);
extern int fn_006ad1b8(ScriptContext *context, s32 filter);
extern int fn_006ad270(ScriptContext *context, s8 monster_id);
extern int fn_006ad428(ScriptContext *context, s8 monster_id);
extern f32 fn_006ad5f0(ScriptContext *context, s32 object_id);
extern f32 fn_006ad6f4(ScriptContext *context, s32 object_id);
/* reads the drone-mode state singleton */
extern void * fn_006f72b4(void *state);

/* Task_PartnerFormChange_(s32 form_id) - 0x002850ac
 * 104 bytes of code + 52-byte literal pool, 1 call site.
 * Reads the partner form the task changes to from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001f37f0 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2010. */
int fn_002850ac(SqVM *vm)
{
    s32 form_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &form_id), "failed: sq_getinteger",
                 kName_Task_PartnerFormChange_, 0x00a8);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f37f0(context, (u8)form_id));
    return 1;
}

/* GetNakamaMonsterRankNum_(s32 rank) - 0x00285538
 * 104 bytes of code + 56-byte literal pool, 10 call sites.
 * Reads the rank whose party monster count is queried from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ad198 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2e52. */
int fn_00285538(SqVM *vm)
{
    s32 rank;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &rank), "failed: sq_getinteger",
                 kName_GetNakamaMonsterRankNum_, 0x0c7d);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ad198(context, (u8)rank));
    return 1;
}

/* GetRandomDonMoguraEvent_(s32 event_id) - 0x002855d8
 * 100 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the mole event slot drawn from the random table from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ad1b4 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c319f. */
int fn_002855d8(SqVM *vm)
{
    s32 event_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &event_id), "failed: sq_getinteger",
                 kName_GetRandomDonMoguraEvent_, 0x0f7d);
    sq_pushinteger(vm, fn_006ad1b4(SCRIPT_CONTEXT(), event_id));
    return 1;
}

/* IsOpenNaviMapRideFilter_(s32 filter) - 0x002856b4
 * 100 bytes of code + 56-byte literal pool, 3 call sites.
 * Reads the navi map ride filter slot whose open state is read from stack slot
 * -1 with sq_getinteger.
 * Calls fn_006ad1b8 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c273d. */
int fn_002856b4(SqVM *vm)
{
    s32 filter;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &filter), "failed: sq_getinteger",
                 kName_IsOpenNaviMapRideFilter_, 0x06a9);
    sq_pushbool(vm, fn_006ad1b8(SCRIPT_CONTEXT(), filter));
    return 1;
}

/* IsRankingBattleEntryNum_(s32 count) - 0x00285750
 * 104 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the entry count compared with the ranking battle total from stack slot
 * -1 with sq_getinteger.
 * Calls fn_001f3a6c and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c3148. */
int fn_00285750(SqVM *vm)
{
    s32 count;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &count), "failed: sq_getinteger",
                 kName_IsRankingBattleEntryNum_, 0x0f43);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_001f3a6c(context, (u16)count));
    return 1;
}

/* IsReactorMarkerTypeHide_(s32 marker_type) - 0x002857f0
 * 100 bytes of code + 56-byte literal pool, no script calls.
 * Reads the reactor marker type tested for being hidden from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001f3ab4 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c21eb. */
int fn_002857f0(SqVM *vm)
{
    s32 marker_type;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &marker_type), "failed: sq_getinteger",
                 kName_IsReactorMarkerTypeHide_, 0x0237);
    sq_pushbool(vm, fn_001f3ab4(SCRIPT_CONTEXT(), marker_type));
    return 1;
}

/* SetPartnerNaviMapActive_(int active) - 0x0028588c
 * 100 bytes of code + 48-byte literal pool, 2 call sites.
 * Reads a Squirrel bool that shows or hides the partner on the navi map from
 * stack slot -1 with sq_getbool.
 * The singleton read is the first argument of the second call, so the two engine
 * services are nested, and the native pushes nothing.
 * The binding name is the shared rodata copy at 0x007c1fe5. */
int fn_0028588c(SqVM *vm)
{
    int active;
    SCRIPT_CHECK(vm, sq_getbool(vm, -1, &active), "failed: sq_getbool",
                 kName_SetPartnerNaviMapActive_, 0x0080);
    fn_0021c4a4(fn_006f72b4(DRONE_STATE()), active != 0);
    return 0;
}

/* CheckPartyMonsterLimitOver_(s32 monster_id) - 0x00286c50
 * 104 bytes of code + 56-byte literal pool, no script calls.
 * Reads the party monster slot checked against the party limit from stack slot
 * -1 with sq_getinteger.
 * Calls fn_006ad270 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2e9c. */
int fn_00286c50(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_CheckPartyMonsterLimitOver_, 0x0ca2);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006ad270(context, (s8)monster_id));
    return 1;
}

/* CheckPartyMonsterChangeColor_(s32 monster_id) - 0x00287244
 * 104 bytes of code + 56-byte literal pool, 2 call sites.
 * Reads the party monster slot checked for a colour change from stack slot -1
 * with sq_getinteger.
 * Calls fn_006ad428 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2e7e. */
int fn_00287244(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_CheckPartyMonsterChangeColor_, 0x0c98);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006ad428(context, (s8)monster_id));
    return 1;
}

/* SetPointBoxEventMineNoFallWait_(const char *point_name) - 0x0028791c
 * 100 bytes of code + 56-byte literal pool, 79 call sites.
 * Reads the point box whose event mine is armed without the fall wait from stack
 * slot -1 with sq_getstring.
 * Calls fn_001f497c and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c27cc. */
int fn_0028791c(SqVM *vm)
{
    const char *point_name;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &point_name), "failed: sq_getstring",
                 kName_SetPointBoxEventMineNoFallWait_, 0x06f1);
    sq_pushinteger(vm, fn_001f497c(SCRIPT_CONTEXT(), point_name));
    return 1;
}

/* GetDir_(s32 object_id) - 0x00287e84
 * 100 bytes of code + 52-byte literal pool, 46 call sites.
 * Reads the field object whose facing angle is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ad5f0 and pushes the float answer.
 * The binding name is the shared rodata copy at 0x007c1f68.
 * Draft: the original has a nop between the engine call and the float push;
 * armcc 4.1 b1454 emits the two calls back to back */
int fn_00287e84(SqVM *vm)
{
    s32 object_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object_id), "failed: sq_getinteger",
                 kName_GetDir_, 0x026c);
    sq_pushfloat(vm, fn_006ad5f0(SCRIPT_CONTEXT(), object_id));
    return 1;
}

/* ReadNpc_(const char *npc_name) - 0x002884fc
 * 100 bytes of code + 52-byte literal pool, 965 call sites.
 * Reads the name of an NPC in the current field from stack slot -1 with
 * sq_getstring.
 * Calls fn_001f5458 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2028. */
int fn_002884fc(SqVM *vm)
{
    const char *npc_name;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &npc_name), "failed: sq_getstring",
                 kName_ReadNpc_, 0x00b2);
    sq_pushinteger(vm, fn_001f5458(SCRIPT_CONTEXT(), npc_name));
    return 1;
}

/* GetAlpha_(s32 object_id) - 0x002888c4
 * 100 bytes of code + 52-byte literal pool, 7 call sites.
 * Reads the field object whose opacity is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ad6f4 and pushes the float answer.
 * The binding name is the shared rodata copy at 0x007c2204.
 * Draft: the original has the nop before the float push */
int fn_002888c4(SqVM *vm)
{
    s32 object_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object_id), "failed: sq_getinteger",
                 kName_GetAlpha_, 0x024c);
    sq_pushfloat(vm, fn_006ad6f4(SCRIPT_CONTEXT(), object_id));
    return 1;
}
