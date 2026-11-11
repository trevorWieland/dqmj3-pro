/* Script-facing native API: motion, transform and field-point bindings.
 *
 * The field scripts animate NPCs and gimmicks by name and place objects at
 * named points.  The motion data itself is indexed in the engine; the natives
 * only carry names, ids and scalars across the Squirrel boundary.
 *
 * Observed engine entry points:
 *   fn_001f5bac  set a motion on a field object       (SetMotion_)
 *   fn_001ebcb8  read a motion name for an object     (ReadMotion_)
 *   fn_001f0ebc  set a motion's playback speed        (SetMotionSpeed_)
 *   fn_001f59d0  set an object's alpha                (SetAlpha_)
 *   fn_001f52b8  set an object's facing direction     (SetDir_)
 *   fn_001f2340  arrange a gimmick at a point         (ArrangePointGimmick_)
 *   fn_001ec29c  set a point's position               (SetPointPos_)
 *   fn_001f07e0  set a reactor's message key          (SetReactorMsg_)
 *   fn_001483c0  remove a scheduled task              (DeleteTask_)
 *
 * Behaviour drafts: see script_api.h for why the measurement cannot credit
 * these yet.
 */
#include "script_api.h"

extern void fn_001f5bac(ScriptContext *context, s32 object, const char *motion, s32 mode);
extern const char *fn_001ebcb8(ScriptContext *context, s32 object, const char *motion);
extern void fn_001f0ebc(ScriptContext *context, s32 object, f32 speed);
extern void fn_001f59d0(ScriptContext *context, s32 object, f32 alpha);
extern void fn_001f52b8(ScriptContext *context, s32 object, f32 direction);
extern s32 fn_001f2340(ScriptContext *context, const char *point, s32 gimmick,
                       const char *name);
extern void fn_001ec29c(ScriptContext *context, s32 point, const char *position);
extern void fn_001f07e0(ScriptContext *context, s32 reactor, const char *message_key);
extern void fn_001483c0(ScriptContext *context, s32 task);

#define SCRIPT_FAIL_EMPTY(vm) return sq_throwerror((vm), SCRIPT_EMPTY_MESSAGE)

/* SetMotion_(int object, string motion, int mode) - 0x0027a778, 236 bytes,
 * 5,322 call sites.  The biggest motion binding: it tells one field object to
 * play a named motion.  The third argument selects the playback mode (loop or
 * one-shot); the engine receives object, motion name and mode in that order. */
int fn_0027a778(SqVM *vm)
{
    s32 object;
    const char *motion;
    s32 mode;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -2, &object), "failed: sq_getinteger", "SetMotion_", 0x0302);
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &motion), "failed: sq_getstring", "SetMotion_", 0x0305);
    SCRIPT_CHECK(vm, sq_getinteger(vm, 0, &mode), "failed: sq_getinteger", "SetMotion_", 0x0308);
    context = SCRIPT_CONTEXT();
    fn_001f5bac(context, object, motion, mode);
    return 0;
}

/* ReadMotion_(int object, string motion) - 0x0027af14, 184 bytes, 2,286 sites.
 * Asks the engine which motion an object is playing and pushes its name. */
int fn_0027af14(SqVM *vm)
{
    s32 object;
    const char *motion;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object), "failed: sq_getinteger", "ReadMotion_", 0x031b);
    SCRIPT_CHECK(vm, sq_getstring(vm, 0, &motion), "failed: sq_getstring", "ReadMotion_", 0x031e);
    context = SCRIPT_CONTEXT();
    sq_pushstring(vm, fn_001ebcb8(context, object, motion), -1);
    return 1;
}

/* SetMotionSpeed_(int object, float speed) - 0x0027e380, 172 bytes, 450 sites.
 * Sets the playback rate of the object's current motion. */
int fn_0027e380(SqVM *vm)
{
    s32 object;
    f32 speed;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object), "failed: sq_getinteger", "SetMotionSpeed_", 0x0332);
    SCRIPT_CHECK(vm, sq_getfloat(vm, 0, &speed), "failed: sq_getfloat", "SetMotionSpeed_", 0x0335);
    context = SCRIPT_CONTEXT();
    fn_001f0ebc(context, object, speed);
    return 0;
}

/* SetAlpha_(int object, float alpha) - 0x0028895c, 52 bytes, 708 call sites.
 * The two arguments are read by the shared id/scalar helper fn_001488c4, which
 * throws by itself when either read fails, so this binding has no check of its
 * own and no cursor into FieldScriptFunc.cpp. */
int fn_0028895c(SqVM *vm)
{
    s32 object;
    f32 alpha;
    ScriptContext *context;
    if (fn_001488c4(vm, &object, &alpha) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    fn_001f59d0(context, object, alpha);
    return 0;
}

/* SetDir_(int object, float direction) - 0x00288150, 52 bytes, 575 sites.
 * Sets the object's facing angle in the same id/scalar form as SetAlpha_. */
int fn_00288150(SqVM *vm)
{
    s32 object;
    f32 direction;
    ScriptContext *context;
    if (fn_001488c4(vm, &object, &direction) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    fn_001f52b8(context, object, direction);
    return 0;
}

/* ArrangePointGimmick_(string point, int gimmick, string name) - 0x00281c94,
 * 248 bytes, 1,540 call sites.  Places a gimmick at a named field point and
 * returns the engine's placement handle as an integer. */
int fn_00281c94(SqVM *vm)
{
    const char *point;
    s32 gimmick;
    const char *name;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getstring(vm, -2, &point), "failed: sq_getstring", "ArrangePointGimmick_", 0x0141);
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &gimmick), "failed: sq_getinteger", "ArrangePointGimmick_", 0x0144);
    SCRIPT_CHECK(vm, sq_getstring(vm, 0, &name), "failed: sq_getstring", "ArrangePointGimmick_", 0x0147);
    context = SCRIPT_CONTEXT();
    sq_pushinteger(vm, fn_001f2340(context, point, gimmick, name));
    return 1;
}

/* SetPointPos_(int point, string position) - 0x0027bad8, 168 bytes, 830 sites.
 * Moves a named field point (the coordinate source is a field-position name). */
int fn_0027bad8(SqVM *vm)
{
    s32 point;
    const char *position;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &point), "failed: sq_getinteger", "SetPointPos_", 0x01e7);
    SCRIPT_CHECK(vm, sq_getstring(vm, 0, &position), "failed: sq_getstring", "SetPointPos_", 0x01ea);
    context = SCRIPT_CONTEXT();
    fn_001ec29c(context, point, position);
    return 0;
}

/* SetReactorMsg_(int reactor, string messageKey) - 0x0027d148, 168 bytes, 475
 * sites.  Sets the message a field reactor shows when it is examined. */
int fn_0027d148(SqVM *vm)
{
    s32 reactor;
    const char *message_key;
    ScriptContext *context;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &reactor), "failed: sq_getinteger", "SetReactorMsg_", 0x053a);
    SCRIPT_CHECK(vm, sq_getstring(vm, 0, &message_key), "failed: sq_getstring", "SetReactorMsg_", 0x053d);
    context = SCRIPT_CONTEXT();
    fn_001f07e0(context, reactor, message_key);
    return 0;
}

/* DeleteTask_(int task) - 0x0012d998, 68 bytes, 1,460 call sites.
 * Removes a scheduled task.  The failure path throws the empty release message
 * directly, without the FieldScriptFunc.cpp assertion operands. */
int fn_0012d998(SqVM *vm)
{
    s32 task;
    ScriptContext *context;
    if (sq_getinteger(vm, -1, &task) < 0)
        SCRIPT_FAIL_EMPTY(vm);
    context = SCRIPT_CONTEXT();
    fn_001483c0(context, task);
    return 0;
}
