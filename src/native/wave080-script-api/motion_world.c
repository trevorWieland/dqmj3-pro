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
 * Argument indexes follow the VM convention: a binding with N arguments reads
 * them at -N (first) through -1 (last).  SetAlpha_ and SetDir_ share the
 * VM helper fn_001488c4, which reads an integer id at -2 and a float at -1 and
 * throws by itself, so those two bindings have no check of their own and no
 * FieldScriptFunc.cpp cursor.
 *
 * Status: 4 of these 12 bindings are byte-identical to the original
 * (DeleteTask_, GetActive_, GetMotion_, IsMotionEnd_).  The other eight are
 * drafts: SetMotion_, ReadMotion_, SetMotionSpeed_, SetPointPos_,
 * SetReactorMsg_ and ArrangePointGimmick_ differ only by the compiler NOP the
 * original emits after a non-first argument check, and SetAlpha_/SetDir_ differ
 * by the order of the two argument-address setups.
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
extern int fn_006ad72c(ScriptContext *context, s32 object);
extern int fn_001ec148(ScriptContext *context, s32 object);
extern s32 fn_006ad788(ScriptContext *context, s32 object);

/* GetMotion_(int object) - 0x0027a510, 100 bytes.
 * Pushes the numeric id of the motion the object is currently playing. */
int fn_0027a510(SqVM *vm)
{
    s32 object;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object), "failed: sq_getinteger",
                 kName_GetMotion_, 0x0311);
    sq_pushinteger(vm, fn_006ad788(SCRIPT_CONTEXT(), object));
    return 1;
}

/* GetActive_(int object) - 0x0027a3d8, 100 bytes.
 * Pushes whether a field object is active (shown and participating in the
 * field), as the engine's own boolean. */
int fn_0027a3d8(SqVM *vm)
{
    s32 object;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object), "failed: sq_getinteger",
                 kName_GetActive_, 0x0215);
    sq_pushbool(vm, fn_006ad72c(SCRIPT_CONTEXT(), object));
    return 1;
}

/* IsMotionEnd_(int object) - 0x0027b6cc, 100 bytes.
 * Pushes whether the object's current motion has finished playing. */
int fn_0027b6cc(SqVM *vm)
{
    s32 object;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &object), "failed: sq_getinteger",
                 kName_IsMotionEnd_, 0x0328);
    sq_pushbool(vm, fn_001ec148(SCRIPT_CONTEXT(), object));
    return 1;
}

/* SetMotion_(int object, string motion, int mode) - 0x0027a778, 236 bytes,
 * 5,322 call sites.  The biggest motion binding: it tells one field object to
 * play a named motion.  The third argument selects the playback mode (loop or
 * one-shot); the engine receives object, motion name and mode in that order. */
int fn_0027a778(SqVM *vm)
{
    struct { s32 object; const char *motion; s32 mode; } args;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -3, &args.object), "failed: sq_getinteger",
                 kName_SetMotion_, 0x0302);
    SCRIPT_CHECK(vm, sq_getstring(vm, -2, &args.motion), "failed: sq_getstring",
                 kName_SetMotion_, 0x0305);
    SCRIPT_CHECK(vm, sq_getinteger(vm, -1, &args.mode), "failed: sq_getinteger",
                 kName_SetMotion_, 0x0308);
    fn_001f5bac(SCRIPT_CONTEXT(), args.object, args.motion, args.mode);
    return 0;
}

/* ReadMotion_(int object, string motion) - 0x0027af14, 184 bytes, 2,286 sites.
 * Asks the engine which motion an object is playing and pushes its name. */
int fn_0027af14(SqVM *vm)
{
    struct { s32 object; const char *motion; } args;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -2, &args.object), "failed: sq_getinteger",
                 kName_ReadMotion_, 0x031b);
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &args.motion), "failed: sq_getstring",
                 kName_ReadMotion_, 0x031e);
    sq_pushstring(vm, fn_001ebcb8(SCRIPT_CONTEXT(), args.object, args.motion), -1);
    return 1;
}

/* SetMotionSpeed_(int object, float speed) - 0x0027e380, 172 bytes, 450 sites.
 * Sets the playback rate of the object's current motion. */
int fn_0027e380(SqVM *vm)
{
    struct { s32 object; f32 speed; } args;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -2, &args.object), "failed: sq_getinteger",
                 kName_SetMotionSpeed_, 0x0332);
    SCRIPT_CHECK(vm, sq_getfloat(vm, -1, &args.speed), "failed: sq_getfloat",
                 kName_SetMotionSpeed_, 0x0335);
    fn_001f0ebc(SCRIPT_CONTEXT(), args.object, args.speed);
    return 0;
}

/* SetAlpha_(int object, float alpha) - 0x0028895c, 52 bytes, 708 call sites.
 * Sets an object's opacity.  fn_001488c4 reads both arguments and throws on
 * failure, so the binding ignores its status and always calls the engine. */
int fn_0028895c(SqVM *vm)
{
    struct { s32 object; f32 alpha; } args;
    fn_001488c4(vm, &args.object, &args.alpha);
    fn_001f59d0(SCRIPT_CONTEXT(), args.object, args.alpha);
    return 0;
}

/* SetDir_(int object, float direction) - 0x00288150, 52 bytes, 575 sites.
 * Sets the object's facing angle in the same id/scalar form as SetAlpha_. */
int fn_00288150(SqVM *vm)
{
    struct { s32 object; f32 direction; } args;
    fn_001488c4(vm, &args.object, &args.direction);
    fn_001f52b8(SCRIPT_CONTEXT(), args.object, args.direction);
    return 0;
}

/* ArrangePointGimmick_(string point, int gimmick, string name) - 0x00281c94,
 * 248 bytes, 1,540 call sites.  Places a gimmick at a named field point and
 * returns the engine's placement handle as an integer. */
int fn_00281c94(SqVM *vm)
{
    struct { const char *point; s32 gimmick; const char *name; } args;
    SCRIPT_CHECK(vm, sq_getstring(vm, -3, &args.point), "failed: sq_getstring",
                 kName_ArrangePointGimmick_, 0x0141);
    SCRIPT_CHECK(vm, sq_getinteger(vm, -2, &args.gimmick), "failed: sq_getinteger",
                 kName_ArrangePointGimmick_, 0x0144);
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &args.name), "failed: sq_getstring",
                 kName_ArrangePointGimmick_, 0x0147);
    sq_pushinteger(vm, fn_001f2340(SCRIPT_CONTEXT(), args.point, args.gimmick, args.name));
    return 1;
}

/* SetPointPos_(int point, string position) - 0x0027bad8, 168 bytes, 830 sites.
 * Moves a named field point (the coordinate source is a field-position name). */
int fn_0027bad8(SqVM *vm)
{
    struct { s32 point; const char *position; } args;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -2, &args.point), "failed: sq_getinteger",
                 kName_SetPointPos_, 0x01e7);
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &args.position), "failed: sq_getstring",
                 kName_SetPointPos_, 0x01ea);
    fn_001ec29c(SCRIPT_CONTEXT(), args.point, args.position);
    return 0;
}

/* SetReactorMsg_(int reactor, string messageKey) - 0x0027d148, 168 bytes, 475
 * sites.  Sets the message a field reactor shows when it is examined. */
int fn_0027d148(SqVM *vm)
{
    struct { s32 reactor; const char *message_key; } args;
    SCRIPT_CHECK(vm, sq_getinteger(vm, -2, &args.reactor), "failed: sq_getinteger",
                 kName_SetReactorMsg_, 0x053a);
    SCRIPT_CHECK(vm, sq_getstring(vm, -1, &args.message_key), "failed: sq_getstring",
                 kName_SetReactorMsg_, 0x053d);
    fn_001f07e0(SCRIPT_CONTEXT(), args.reactor, args.message_key);
    return 0;
}

/* DeleteTask_(int task) - 0x0012d998, 68 bytes, 1,460 call sites.
 * Removes a scheduled task.  The failure path throws the empty release message
 * directly, without the FieldScriptFunc.cpp assertion operands. */
int fn_0012d998(SqVM *vm)
{
    s32 task;
    if (sq_getinteger(vm, -1, &task) < 0)
        return sq_throwerror(vm, SCRIPT_EMPTY_MESSAGE);
    fn_001483c0(SCRIPT_CONTEXT(), task);
    return 0;
}
