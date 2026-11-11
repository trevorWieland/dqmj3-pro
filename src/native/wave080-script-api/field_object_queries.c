/* Script-facing native API: the field scene, point-box and encounter bindings.
 *
 * These bindings come from FieldScriptFunc.cpp and act on the field scene: the
 * party store, point-box mines, reactor markers, the holy rail and the mole random
 * tables.  Most read the script context at 0x00898898, but four reach the object
 * singleton at 0x008977e0; that address is the original and is spelled as the
 * constant it is.
 *
 * The engine bridges here are not all "call one service and push the answer": two
 * read the singleton first and pass its result to a second service, and one guards
 * a call on a member handle.
 *
 * Status: 15 of 16 bindings byte-identical; 1 drafts, each one identified
 * instruction-selection difference away (the comment on each draft says which).
 */
#include "script_api.h"

/* The object singleton the field bindings read, at its original address. */
#define DRONE_STATE() (*(void **)(__UINTPTR_TYPE__)0x008977e0u)

/* The field object the holy rail binding reads its handle from. */
typedef struct HolyRailState {
    u8 unknown_000[0x3c];
    s32 handle;                /* +0x3c: rail object handle, 0 when absent */
} HolyRailState;

/* The engine services these bindings call, at their original addresses. */
extern int fn_001f1ac4(ScriptContext *context, s16 count);
extern s32 fn_001f2280(ScriptContext *context, s16 effect_id);
extern s32 fn_001f30d4(ScriptContext *context, s32 menu_id);
extern s32 fn_001f3530(ScriptContext *context, const char *point_name);
/* queries the holy rail demo flag */
extern int fn_003410e0(void *state, s32 actor_id);
/* plays a layout animation */
extern void fn_00342078(s32 handle, const char *anim_name);
extern int fn_006ac3e0(ScriptContext *context, u8 disc);
extern int fn_006ac3f4(ScriptContext *context, u8 ride_type);
extern int fn_006ac508(ScriptContext *context, s32 item_id);
extern s32 fn_006ac540(ScriptContext *context, s8 monster_id);
extern s32 fn_006ac688(ScriptContext *context, u8 ride_type);
extern s32 fn_006ac738(ScriptContext *context, s32 monster_id);
extern int fn_006aca70(ScriptContext *context, s8 monster_id);
extern int fn_006acb24(ScriptContext *context, s8 monster_id);
extern int fn_006accd4(ScriptContext *context, s16 monster_id);
extern s32 fn_006ad0a8(ScriptContext *context, s32 hole_id);
/* reads the holy rail state singleton */
extern void * fn_006f751c(void *state);

/* IsHaveSpecialDisc_(s32 disc) - 0x002807f4
 * 104 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the special disc slot whose ownership is queried from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac3e0 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c30c2. */
int fn_002807f4(SqVM *vm)
{
    s32 disc;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &disc), "failed: sq_getinteger",
                 kName_IsHaveSpecialDisc_, 0x0ecb);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006ac3e0(context, (u8)disc));
    return 1;
}

/* IsRideTypeMonster_(s32 ride_type) - 0x00280924
 * 104 bytes of code + 56-byte literal pool, no script calls.
 * Reads the field ride type tested for being a monster from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac3f4 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2e6b. */
int fn_00280924(SqVM *vm)
{
    s32 ride_type;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &ride_type), "failed: sq_getinteger",
                 kName_IsRideTypeMonster_, 0x0c87);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006ac3f4(context, (u8)ride_type));
    return 1;
}

/* IsUsedCoinOverNum_(s32 count) - 0x002809c4
 * 104 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the coin count compared with the used-coin total from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001f1ac4 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c3117. */
int fn_002809c4(SqVM *vm)
{
    s32 count;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &count), "failed: sq_getinteger",
                 kName_IsUsedCoinOverNum_, 0x0f1b);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_001f1ac4(context, (s16)count));
    return 1;
}

/* GetItemFoundRecord_(s32 item_id) - 0x002814c8
 * 100 bytes of code + 56-byte literal pool, 2 call sites.
 * Reads the item id whose found record is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac508 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2eef. */
int fn_002814c8(SqVM *vm)
{
    s32 item_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &item_id), "failed: sq_getinteger",
                 kName_GetItemFoundRecord_, 0x0cc9);
    sq_pushbool(vm, fn_006ac508(SCRIPT_CONTEXT(), item_id));
    return 1;
}

/* GetPartyMonsterNum_(s32 monster_id) - 0x00281590
 * 104 bytes of code + 56-byte literal pool, 41 call sites.
 * Reads the party monster slot whose accumulated count is read from stack slot
 * -1 with sq_getinteger.
 * Calls fn_006ac540 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2d66. */
int fn_00281590(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_GetPartyMonsterNum_, 0x0bde);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac540(context, (s8)monster_id));
    return 1;
}

/* Task_EncountEffect_(s32 effect_id) - 0x00281b04
 * 104 bytes of code + 56-byte literal pool, 7 call sites.
 * Reads the encounter effect task id from stack slot -1 with sq_getinteger.
 * Calls fn_001f2280 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2f39. */
int fn_00281b04(SqVM *vm)
{
    s32 effect_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &effect_id), "failed: sq_getinteger",
                 kName_Task_EncountEffect_, 0x0d17);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f2280(context, (s16)effect_id));
    return 1;
}

/* GetFieldRideTypeNum_(s32 ride_type) - 0x00281e98
 * 104 bytes of code + 88-byte literal pool, no script calls.
 * Reads the field ride type whose monster count is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac688 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2e3d. */
int fn_00281e98(SqVM *vm)
{
    s32 ride_type;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &ride_type), "failed: sq_getinteger",
                 kName_GetFieldRideTypeNum_, 0x0c5e);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac688(context, (u8)ride_type));
    return 1;
}

/* GetOwnerMonsterKind_(s32 monster_id) - 0x00282180
 * 100 bytes of code + 56-byte literal pool, 3 call sites.
 * Reads the monster id whose owner kind is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac738 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2d8f. */
int fn_00282180(SqVM *vm)
{
    s32 monster_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_GetOwnerMonsterKind_, 0x0bfc);
    sq_pushinteger(vm, fn_006ac738(SCRIPT_CONTEXT(), monster_id));
    return 1;
}

/* IsPartyMonsterHpMax_(s32 monster_id) - 0x00282678
 * 104 bytes of code + 56-byte literal pool, no script calls.
 * Reads the party monster slot tested for full HP from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006aca70 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2dfb. */
int fn_00282678(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_IsPartyMonsterHpMax_, 0x0c3a);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006aca70(context, (s8)monster_id));
    return 1;
}

/* IsPartyMonsterMpMax_(s32 monster_id) - 0x00282718
 * 104 bytes of code + 56-byte literal pool, no script calls.
 * Reads the party monster slot tested for full MP from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006acb24 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2e10. */
int fn_00282718(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_IsPartyMonsterMpMax_, 0x0c44);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006acb24(context, (s8)monster_id));
    return 1;
}

/* BossTaskGuideFlowMenu_(s32 menu_id) - 0x002837c0
 * 100 bytes of code + 52-byte literal pool, 2 call sites.
 * Reads the boss guide flow menu to show from stack slot -1 with sq_getinteger.
 * Calls fn_001f30d4 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2a7a. */
int fn_002837c0(SqVM *vm)
{
    s32 menu_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &menu_id), "failed: sq_getinteger",
                 kName_BossTaskGuideFlowMenu_, 0x09d0);
    sq_pushinteger(vm, fn_001f30d4(SCRIPT_CONTEXT(), menu_id));
    return 1;
}

/* CheckFieldRideMonster_(s32 monster_id) - 0x002839f8
 * 104 bytes of code + 52-byte literal pool, 1 call site.
 * Reads the monster id checked against the field ride table from stack slot -1
 * with sq_getinteger.
 * Calls fn_006accd4 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c1f88. */
int fn_002839f8(SqVM *vm)
{
    s32 monster_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_CheckFieldRideMonster_, 0x0045);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006accd4(context, (s16)monster_id));
    return 1;
}

/* IsHolyRailDemoTreated_(s32 actor_id) - 0x00283d6c
 * 108 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the actor slot tested for holy rail demo treatment from stack slot -1
 * with sq_getinteger.
 * The singleton read is nested as the first argument of fn_003410e0.
 * The binding name is the shared rodata copy at 0x007c2a46.
 * Draft: the original has a nop between the actor id load and the engine call */
int fn_00283d6c(SqVM *vm)
{
    s32 actor_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &actor_id), "failed: sq_getinteger",
                 kName_IsHolyRailDemoTreated_, 0x0901);
    sq_pushbool(vm, fn_003410e0(fn_006f751c(DRONE_STATE()), actor_id));
    return 1;
}

/* SetHolyRailLayoutAnim_(const char *anim_name) - 0x00283f98
 * 100 bytes of code + 56-byte literal pool, 5 call sites.
 * Reads the layout animation played on the holy rail from stack slot -1 with
 * sq_getstring.
 * The singleton answers an object whose +0x3c handle may be zero; the call is
 * guarded on that handle and the native pushes nothing.
 * The binding name is the shared rodata copy at 0x007c2a02. */
int fn_00283f98(SqVM *vm)
{
    const char *anim_name;
    HolyRailState *state;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &anim_name), "failed: sq_getstring",
                 kName_SetHolyRailLayoutAnim_, 0x08ba);
    state = fn_006f751c(DRONE_STATE());
    if (state->handle)
        fn_00342078(state->handle, anim_name);
    return 0;
}

/* GetRandomDonMoguraHole_(s32 hole_id) - 0x002848b8
 * 100 bytes of code + 56-byte literal pool, 3 call sites.
 * Reads the mole hole slot drawn from the random table from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ad0a8 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c3187. */
int fn_002848b8(SqVM *vm)
{
    s32 hole_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &hole_id), "failed: sq_getinteger",
                 kName_GetRandomDonMoguraHole_, 0x0f72);
    sq_pushinteger(vm, fn_006ad0a8(SCRIPT_CONTEXT(), hole_id));
    return 1;
}

/* SetPointBoxEncountMine_(const char *point_name) - 0x00284c9c
 * 100 bytes of code + 56-byte literal pool, 34 call sites.
 * Reads the point box whose encounter mine is armed from stack slot -1 with
 * sq_getstring.
 * Calls fn_001f3530 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c27ec. */
int fn_00284c9c(SqVM *vm)
{
    const char *point_name;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &point_name), "failed: sq_getstring",
                 kName_SetPointBoxEncountMine_, 0x06fb);
    sq_pushinteger(vm, fn_001f3530(SCRIPT_CONTEXT(), point_name));
    return 1;
}
