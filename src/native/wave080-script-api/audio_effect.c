/* Script-facing native API: timing, audio, fade and effect natives.
 *
 * These bindings are the most-called functions in the game: Wait_ alone has
 * 5,657 call sites in the scripts.  Each one marshals Squirrel arguments,
 * calls one engine service and returns the number of values it pushed.
 *
 * The engine service is reached either through the script context's vtable
 * (play/stop sound, load/scale/delete effects) or through a direct helper
 * (the wait counter, the fade driver).  Behaviour drafts: see script_api.h.
 */
#include "script_api.h"

/* Engine-side entry points, declared with their canonical image symbols.
 * The descriptive name in each comment is inferred from the call sites and the
 * script binding that exercises it. */
extern void fn_0014872c(ScriptContext *context, u8 first, u8 second, f32 frames);
extern void fn_00148418(ScriptContext *context, u8 first, u8 second, f32 frames);

#define SCRIPT_FAIL_EMPTY(vm) return sq_throwerror((vm), SCRIPT_EMPTY_MESSAGE)

/* Wait_(int frames) - 0x0012e46c, 48 bytes, 5,657 script call sites.
 * Arms the context's wait counter and suspends the calling coroutine; the VM
 * resumes it when the counter reaches zero.  The argument check is absent: the
 * original ignores sq_getinteger's status and reads the stack slot anyway. */
int fn_0012e46c(SqVM *vm)
{
    s32 frames;
    (void)sq_getinteger(vm, -1, &frames);
    fn_0014887c(SCRIPT_CONTEXT(), frames);
    return sq_suspendvm(vm);
}

/* IsWaitEnd_() - 0x0012d96c, 40 bytes, 440 scripts.
 * Pushes true when the wait counter is clear and the engine reports it is not
 * busy (vtable slot 0x70).  Returns one value. */
int fn_0012d96c(SqVM *vm)
{
    int finished = fn_00148894(SCRIPT_CONTEXT());
    sq_pushbool(vm, finished);
    return 1;
}

/* PlaySE_(string name) - 0x0012e4f4, 88 bytes, 1,231 call sites.
 * Plays a sound effect and returns the engine's handle as an integer. */
int fn_0012e4f4(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    if (sq_getstring(vm, -1, &name) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, context->host->play_se(context, name));
    return 1;
}

/* StopSE_(string name) - 0x0012e554, 76 bytes.  Stops one sound effect. */
int fn_0012e554(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    if (sq_getstring(vm, -1, &name) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    context->host->stop_se(context, name);
    return 0;
}

/* PlayMe_(string name) - 0x0012e4a0, 76 bytes, 94 call sites.
 * Starts a music event (ME), the short jingle layer above BGM. */
int fn_0012e4a0(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    if (sq_getstring(vm, -1, &name) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    context->host->play_me(context, name);
    return 0;
}

/* WaitMe_() - 0x0012e5a8, 40 bytes.  Waits for the current music event to end:
 * tells the engine, then suspends the coroutine.  The tail branch to
 * sq_suspendvm in the original means the result is sq_suspendvm's. */
int fn_0012e5a8(SqVM *vm)
{
    ScriptContext *context = SCRIPT_CONTEXT();
    context->host->wait_me(context);
    return sq_suspendvm(vm);
}

/* PlayBgm_(string name) - 0x0012e628, 76 bytes.  Starts the background music. */
int fn_0012e628(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    if (sq_getstring(vm, -1, &name) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    context->host->play_bgm(context, name);
    return 0;
}

/* SetFade_(int first, int second, float frames) - 0x0012e67c, 144 bytes.
 * Hands the two 8-bit fade colours and the duration to the fade driver.  Each
 * colour is truncated to a byte at the call, which is where the original's
 * "and r1, r0, #0xff" comes from. */
int fn_0012e67c(SqVM *vm)
{
    s32 first, second;
    f32 frames;
    if (sq_getinteger(vm, -2, &first) < 0 || sq_getinteger(vm, -1, &second) < 0
        || sq_getfloat(vm, 0, &frames) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    fn_0014872c(SCRIPT_CONTEXT(), (u8)(first & 0xff), (u8)(second & 0xff), frames);
    return 0;
}

/* SetFadeSub_(int first, int second, float frames) - 0x0012daf0, 144 bytes.
 * The second fade driver: same arguments, a different engine entry, used for
 * the layered fades (for example a colour flash over a scene transition). */
int fn_0012daf0(SqVM *vm)
{
    s32 first, second;
    f32 frames;
    if (sq_getinteger(vm, -2, &first) < 0 || sq_getinteger(vm, -1, &second) < 0
        || sq_getfloat(vm, 0, &frames) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    fn_00148418(SCRIPT_CONTEXT(), (u8)(first & 0xff), (u8)(second & 0xff), frames);
    return 0;
}

/* WaitFade_() - 0x0012e7c8, 36 bytes.  Arms the fade-completion latch at
 * context+0x69, then suspends until the driver clears it. */
int fn_0012e7c8(SqVM *vm)
{
    fn_00148888(SCRIPT_CONTEXT());
    return sq_suspendvm(vm);
}

/* LoadEffect_(string name) - 0x0012d9e4, 88 bytes, 1,071 call sites.
 * Creates an effect instance and returns whether the engine accepted it. */
int fn_0012d9e4(SqVM *vm)
{
    const char *name;
    ScriptContext *context;
    if (sq_getstring(vm, -1, &name) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    sq_pushbool(vm, context->host->load_effect(context, name));
    return 1;
}

/* SetEffectScale_(int id, float scale) - 0x0012dfe4, 112 bytes. */
int fn_0012dfe4(SqVM *vm)
{
    s32 id;
    f32 scale;
    ScriptContext *context;
    if (sq_getinteger(vm, -1, &id) < 0 || sq_getfloat(vm, 0, &scale) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    context->host->set_effect_scale(context, id, scale);
    return 0;
}

/* DeleteEffect_(int id) - 0x0012dd84, 76 bytes. */
int fn_0012dd84(SqVM *vm)
{
    s32 id;
    ScriptContext *context;
    if (sq_getinteger(vm, -1, &id) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    context->host->delete_effect(context, id);
    return 0;
}

/* DeleteEffectEmitter_(int id) - 0x0012e2d4, 76 bytes.  Deletes one emitter of
 * an effect, leaving the effect instance itself alive. */
int fn_0012e2d4(SqVM *vm)
{
    s32 id;
    ScriptContext *context;
    if (sq_getinteger(vm, -1, &id) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    context->host->delete_effect_emitter(context, id);
    return 0;
}
