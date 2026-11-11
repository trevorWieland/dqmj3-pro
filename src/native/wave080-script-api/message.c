/* Script-facing native API: the message-window bindings.
 *
 * The field scripts drive the dialogue window entirely through these natives:
 * set the speaker name, show a message key, read a gimmick value into the
 * window, then open and close.  The window itself lives behind the script
 * context; the natives only pass message keys (romfs message-table ids) and
 * speaker names.
 *
 * Observed engine entry points:
 *   fn_001f56ec  show message key          (ShowMsg_)
 *   fn_001ec348  set the speaker name      (SetTalkName_)
 *   fn_001ebc70  open the message window   (OpenMsgWnd_)
 *   fn_001ec184  gimmick value by name     (ReadGimmick_)
 *
 * Every message-taking binding reads its one argument at index -1 and returns
 * the number of values it pushed: 0 for the setters, 1 for the readers.
 *
 * Status: all four measured bindings are byte-identical to the original.
 * CloseMsgWnd_ (0x0027b4cc) has a registration entry but no split function, so
 * it cannot be measured and is not defined here.
 */
#include "script_api.h"

extern void fn_001f56ec(ScriptContext *context, const char *message_key);
extern void fn_001ec348(ScriptContext *context, const char *name);
extern void fn_001ebc70(ScriptContext *context);
extern s32 fn_001ec184(ScriptContext *context, const char *name);

/* ShowMsg_(string messageKey) - 0x002887fc, 88 bytes, 4,426 call sites.
 * Shows one message-table entry in the dialogue window.  The window has to be
 * open (OpenMsgWnd_) for the key to become visible. */
int fn_002887fc(SqVM *vm)
{
    const char *message_key;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &message_key), "failed: sq_getstring",
                 kName_ShowMsg_, 0x04b4);
    fn_001f56ec(SCRIPT_CONTEXT(), message_key);
    return 0;
}

/* SetTalkName_(string nameKey) - 0x0027be10, 88 bytes, 1,859 call sites.
 * Sets the speaker name shown above the message window.  The argument is a
 * message-table key for the name, not a literal string. */
int fn_0027be10(SqVM *vm)
{
    const char *name_key;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name_key), "failed: sq_getstring",
                 kName_SetTalkName_, 0x04d2);
    fn_001ec348(SCRIPT_CONTEXT(), name_key);
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

/* ReadGimmick_(string name) - 0x0027b764, 100 bytes, 979 call sites.
 * Reads a field-gimmick value by name and pushes it as an integer. */
int fn_0027b764(SqVM *vm)
{
    const char *name;
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &name), "failed: sq_getstring",
                 kName_ReadGimmick_, 0x0127);
    sq_pushinteger(vm, fn_001ec184(SCRIPT_CONTEXT(), name));
    return 1;
}
