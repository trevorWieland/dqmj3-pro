/* Script-facing native API: the message-window bindings.
 *
 * The field scripts drive the dialogue window entirely through these five
 * natives: set the speaker name, show a message key, read a gimmick value into
 * the window, then open, close and suspend.  The window itself lives behind the
 * script context; the natives only pass message keys (romfs message-table ids)
 * and speaker names.
 *
 * Observed engine entry points:
 *   fn_001f56ec  show message key          (ShowMsg_)
 *   fn_001ec348  set the speaker name      (SetTalkName_)
 *   fn_001ebc70  open the message window   (OpenMsgWnd_)
 *   fn_001ec0b8  close the message window  (CloseMsgWnd_)
 *   fn_001ec184  gimmick value by name     (ReadGimmick_)
 *
 * Behaviour drafts: see script_api.h for why the measurement cannot credit
 * these yet.
 */
#include "script_api.h"

extern void fn_001f56ec(ScriptContext *context, const char *message_key);
extern void fn_001ec348(ScriptContext *context, const char *name);
extern void fn_001ebc70(ScriptContext *context);
extern void fn_001ec0b8(ScriptContext *context);
extern s32 fn_001ec184(ScriptContext *context, const char *name);

/* ShowMsg_(string messageKey) - 0x002887fc, 88 bytes, 4,426 call sites.
 * Shows one message-table entry in the dialogue window.  The window has to be
 * open (OpenMsgWnd_) for the key to become visible. */
int fn_002887fc(SqVM *vm)
{
    const char *message_key;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &message_key), "failed: sq_getstring", "ShowMsg_", 0x04b4);
    context = SCRIPT_CONTEXT();
    fn_001f56ec(context, message_key);
    return 0;
}

/* SetTalkName_(string nameKey) - 0x0027be10, 88 bytes, 1,859 call sites.
 * Sets the speaker name shown above the message window.  The argument is a
 * message-table key for the name, not a literal string. */
int fn_0027be10(SqVM *vm)
{
    const char *name_key;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name_key), "failed: sq_getstring", "SetTalkName_", 0x04d2);
    context = SCRIPT_CONTEXT();
    fn_001ec348(context, name_key);
    return 0;
}

/* OpenMsgWnd_() - 0x0027aee8, 40 bytes, 2,994 call sites.
 * Opens the message window and pushes true (the original pushes a constant, not
 * the engine's result).  Returns one value. */
int fn_0027aee8(SqVM *vm)
{
    fn_001ebc70(SCRIPT_CONTEXT());
    sq_pushbool(vm, 1);
    return 1;
}

/* CloseMsgWnd_() - 0x0027b4cc, 56 bytes, 3,295 call sites.
 * Closes the window and suspends the coroutine until the close animation ends.
 * The binding has no split symbol: the script table gives its address but the
 * function census does not start a function there, so the measurement cannot
 * place it even if the compiler reproduced it. */
int fn_0027b4cc(SqVM *vm)
{
    fn_001ec0b8(SCRIPT_CONTEXT());
    return sq_suspendvm(vm);
}

/* ReadGimmick_(string name) - 0x0027b764, 100 bytes, 979 call sites.
 * Reads a field-gimmick value by name and pushes it as an integer. */
int fn_0027b764(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name), "failed: sq_getstring", "ReadGimmick_", 0x0127);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001ec184(context, name));
    return 1;
}
