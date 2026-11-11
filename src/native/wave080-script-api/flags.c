/* Script-facing native API: the event-flag and progress-flag bindings.
 *
 * The field scripts address both kinds of flag by name, not by number.  The
 * engine keeps a name table and the natives look the name up on every call:
 *
 *   fn_006ad760  flag id from name          (GetFlagID_)
 *   fn_006abc14  event-flag value from name (GetEventFlg_)
 *   fn_006abc8c  set event flag by name     (SetEventFlg_)
 *   fn_006ad7c4  number-flag value from name(GetNumFlg_)
 *   fn_006ad81c  set number flag by name    (SetNumFlg_)
 *
 * The validation sites are the ones that still carry FieldScriptFunc.cpp
 * assertion text in the image, so the "failed: sq_get..." message and the line
 * number passed to the error formatter are the original ones.
 *
 * Behaviour drafts: see script_api.h for why the measurement cannot credit
 * these yet.
 */
#include "script_api.h"

extern s32 fn_006ad760(ScriptContext *context, const char *name);
extern int fn_006abc14(ScriptContext *context, const char *name);
extern void fn_006abc8c(ScriptContext *context, const char *name, int value);
extern s32 fn_006ad7c4(ScriptContext *context, const char *name);
extern void fn_006ad81c(ScriptContext *context, const char *name, u8 value);

/* GetFlagID_(string flagId) - 0x0027a474, 100 bytes, 4,460 call sites.
 * Resolves a flag name to the numeric id the engine uses, and returns it.  This
 * is the bridge the scripts use before storing a flag id in a variable. */
int fn_0027a474(SqVM *vm)
{
    const char *flag_id;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &flag_id), "failed: sq_getstring", "GetFlagID_", 0x0b47);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ad760(context, flag_id));
    return 1;
}

/* SetEventFlg_(string name, bool value) - 0x0027b940, 184 bytes, 1,884 sites.
 * Sets or clears one event flag.  The second argument is a Squirrel bool, which
 * the VM reader converts to 0/1 before the engine sees it. */
int fn_0027b940(SqVM *vm)
{
    const char *name;
    int value;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name), "failed: sq_getstring", "SetEventFlg_", 0x0b1b);
    SCRIPT_CHECK(vm, sq_getbool(vm, 0, &value), "failed: sq_getbool", "SetEventFlg_", 0x0b1e);
    context = SCRIPT_CONTEXT();
    fn_006abc8c(context, name, value != 0);
    return 0;
}

/* GetEventFlg_(string name) - 0x0027b50c, 100 bytes, 1,560 sites.
 * Pushes the current value of one event flag as a bool. */
int fn_0027b50c(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name), "failed: sq_getstring", "GetEventFlg_", 0x0b27);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, fn_006abc14(context, name));
    return 1;
}

/* SetNumFlg_(string name, int value) - 0x0027a8b8, 176 bytes, 709 sites.
 * Sets one number flag, the 8-bit counters the field scripts advance for
 * progress, defeats and collection counts.  The value is truncated to a byte,
 * which is what the original's "and r2, r1, #0xff" does. */
int fn_0027a8b8(SqVM *vm)
{
    const char *name;
    s32 value;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name), "failed: sq_getstring", "SetNumFlg_", 0x0b31);
    SCRIPT_CHECK(vm, sq_getinteger(vm, 0, &value), "failed: sq_getinteger", "SetNumFlg_", 0x0b34);
    context = SCRIPT_CONTEXT();
    fn_006ad81c(context, name, (u8)(value & 0xff));
    return 0;
}

/* GetNumFlg_(string name) - 0x0027a5ac, 100 bytes, 1,355 sites.
 * Pushes one number flag as an integer. */
int fn_0027a5ac(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name), "failed: sq_getstring", "GetNumFlg_", 0x0b3d);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_006ad7c4(context, name));
    return 1;
}

/* GetPlayerId_() - 0x0027b5a8, 40 bytes, 653 sites.
 * Pushes the local player index.  The original still reads the script context
 * into r0 and then overwrites it before the push, so the read has no effect on
 * the returned value; the constant 0 is what every call site sees. */
int fn_0027b5a8(SqVM *vm)
{
    ScriptContext *context = SCRIPT_CONTEXT();
    (void)context;
    sq_pushinteger(vm, 0);
    return 1;
}
