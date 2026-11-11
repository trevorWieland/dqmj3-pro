/* Script-facing native API: field progress, party, item and record queries.
 *
 * These bindings come from FieldScriptFunc.cpp.  They are the field scripts'
 * one-argument lookups into the progress store: party records, item and accessory
 * counts, event dates, trophies and the mole random tables.  Each reads stack slot -1
 * and either pushes an integer, a bool or a float answer from one engine service.
 *
 * Ids arrive as Squirrel integers and are narrowed to the width the engine indexes
 * with: a byte, a signed byte or a short.  Those conversions are part of the original
 * instruction stream, not a stylistic choice here.
 *
 * Status: 9 of 10 bindings byte-identical; 1 drafts, each one identified
 * instruction-selection difference away (the comment on each draft says which).
 */
#include "script_api.h"

/* The object singleton the field bindings read, at its original address. */
#define DRONE_STATE() (*(void **)(__UINTPTR_TYPE__)0x008977e0u)

/* The shadow host context this binding dispatches through. */
#define SHADOW_CONTEXT() (*(ScriptContext **)(__UINTPTR_TYPE__)0x008977d4u)

/* The engine services these bindings call, at their original addresses. */
/* applies the forced pause state */
extern void fn_001dcb00(void *state, int enabled);
extern int fn_001ec104(ScriptContext *context, s16 count);
/* opens a script menu */
extern void fn_001f0368(ScriptContext *context, u8 menu_id);
extern int fn_001f14d8(ScriptContext *context, s16 count);
extern s32 fn_006abb88(ScriptContext *context, s16 item_id);
extern int fn_006abc00(ScriptContext *context, u8 trophy_id);
extern int fn_006abec0(ScriptContext *context, s32 date_id);
extern s32 fn_006ac024(ScriptContext *context, s16 accessory_id);
extern int fn_006ac0c0(ScriptContext *context, s32 monster_id);
/* reads the drone-mode state singleton */
extern void * fn_006f7a84(void *state);

/* GetItemNum_(s32 item_id) - 0x0027ac2c
 * 104 bytes of code + 56-byte literal pool, 113 call sites.
 * Reads the item id whose held count is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006abb88 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2f5f. */
int fn_0027ac2c(SqVM *vm)
{
    s32 item_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &item_id), "failed: sq_getinteger",
                 kName_GetItemNum_, 0x0d3d);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006abb88(context, (s16)item_id));
    return 1;
}

/* CheckTrophy_(s32 trophy_id) - 0x0027b410
 * 104 bytes of code + 148-byte literal pool, 1 call site.
 * Reads the trophy id tested for being awarded from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006abc00 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c30f3. */
int fn_0027b410(SqVM *vm)
{
    s32 trophy_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &trophy_id), "failed: sq_getinteger",
                 kName_CheckTrophy_, 0x0ee8);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006abc00(context, (u8)trophy_id));
    return 1;
}

/* IsDanWinNum_(s32 count) - 0x0027b600
 * 104 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the win count compared with the dan win total from stack slot -1 with
 * sq_getinteger.
 * Calls fn_001ec104 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c312a. */
int fn_0027b600(SqVM *vm)
{
    s32 count;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &count), "failed: sq_getinteger",
                 kName_IsDanWinNum_, 0x0f31);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_001ec104(context, (s16)count));
    return 1;
}

/* GotoMenuOpen_(s32 menu_id) - 0x0027c3fc
 * 100 bytes of code + 52-byte literal pool, 5 call sites.
 * Reads the menu opened by the script, then the VM suspends from stack slot -1
 * with sq_getinteger.
 * Opens the menu and then suspends the VM, returning the suspend result.
 * The binding name is the shared rodata copy at 0x007c2c4a.
 * Draft: the original has a nop between the context move and sq_suspendvm */
int fn_0027c3fc(SqVM *vm)
{
    s32 menu_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &menu_id), "failed: sq_getinteger",
                 kName_GotoMenuOpen_, 0x0b00);
    context = SCRIPT_CONTEXT();
    fn_001f0368(context, (u8)menu_id);
    return sq_suspendvm(vm);
}

/* CheckEventDate_(s32 date_id) - 0x0027d738
 * 100 bytes of code + 56-byte literal pool, 7 call sites.
 * Reads the event date slot tested against the current date from stack slot -1
 * with sq_getinteger.
 * Calls fn_006abec0 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c30e3. */
int fn_0027d738(SqVM *vm)
{
    s32 date_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &date_id), "failed: sq_getinteger",
                 kName_CheckEventDate_, 0x0ede);
    sq_pushbool(vm, fn_006abec0(SCRIPT_CONTEXT(), date_id));
    return 1;
}

/* GetAccessoryNum_(s32 accessory_id) - 0x0027ec68
 * 104 bytes of code + 56-byte literal pool, 15 call sites.
 * Reads the accessory id whose held count is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac024 and pushes the answer as an integer.
 * The binding name is the shared rodata copy at 0x007c2f8c. */
int fn_0027ec68(SqVM *vm)
{
    s32 accessory_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &accessory_id), "failed: sq_getinteger",
                 kName_GetAccessoryNum_, 0x0d63);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ac024(context, (s16)accessory_id));
    return 1;
}

/* GetNakamaRecord_(s32 monster_id) - 0x0027ed9c
 * 100 bytes of code + 56-byte literal pool, 2 call sites.
 * Reads the monster id whose party record is read from stack slot -1 with
 * sq_getinteger.
 * Calls fn_006ac0c0 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c2f03. */
int fn_0027ed9c(SqVM *vm)
{
    s32 monster_id;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &monster_id), "failed: sq_getinteger",
                 kName_GetNakamaRecord_, 0x0cd3);
    sq_pushbool(vm, fn_006ac0c0(SCRIPT_CONTEXT(), monster_id));
    return 1;
}

/* IsPassingWinNum_(s32 count) - 0x0027ee38
 * 104 bytes of code + 56-byte literal pool, 1 call site.
 * Reads the win count compared with the passing win total from stack slot -1
 * with sq_getinteger.
 * Calls fn_001f14d8 and pushes the answer as a bool.
 * The binding name is the shared rodata copy at 0x007c3137. */
int fn_0027ee38(SqVM *vm)
{
    s32 count;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &count), "failed: sq_getinteger",
                 kName_IsPassingWinNum_, 0x0f3a);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_001f14d8(context, (s16)count));
    return 1;
}

/* SetShadowEnable_(int enable) - 0x0027f454
 * 108 bytes of code + 52-byte literal pool, 17 call sites.
 * Reads a Squirrel bool enabling or disabling field shadows from stack slot -1
 * with sq_getbool.
 * Dispatches through vtable slot 0x08 of the context at 0x008977d4 and pushes
 * nothing.
 * The binding name is the shared rodata copy at 0x007c3176. */
int fn_0027f454(SqVM *vm)
{
    int enable;
    int flag;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getbool(vm, -1, &enable), "failed: sq_getbool",
                 kName_SetShadowEnable_, 0x0f69);
    flag = enable != 0;
    context = SHADOW_CONTEXT();
    context->host->set_shadow(context, flag);
    return 0;
}

/* PlayerForcePause_(int pause) - 0x0027faa8
 * 100 bytes of code + 48-byte literal pool, 1 call site.
 * Reads a Squirrel bool that forces the player into the pause state from stack
 * slot -1 with sq_getbool.
 * The singleton read is the first argument of the second call, so the two engine
 * services are nested, and the native pushes nothing.
 * The binding name is the shared rodata copy at 0x007c1f9f. */
int fn_0027faa8(SqVM *vm)
{
    int pause;
    SCRIPT_CHECK(vm, sq_getbool(vm, -1, &pause), "failed: sq_getbool",
                 kName_PlayerForcePause_, 0x0064);
    fn_001dcb00(fn_006f7a84(DRONE_STATE()), pause != 0);
    return 0;
}
