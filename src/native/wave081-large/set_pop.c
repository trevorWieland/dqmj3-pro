/* SetPop_(int modelType, int slot, int mode, bool flag, int offsetA, int offsetB,
 *         float scale) - 0x00139738, 556 bytes, BattleScriptFunc.cpp lines
 * 0x1d0..0x1e2.
 *
 * Battle scripts (BattleScriptFunc.cpp in the original build) run during
 * battles the way field scripts run on the map.  SetPop_ reads seven script
 * arguments and forwards them to the battle engine's pop-marker service
 * fn_001755cc: which model, which slot on it, two engine integers, a placement
 * flag, two offset integers the engine converts to floats, and a scale.
 *
 * The engine entry point takes its trailing float in s0 rather than on the
 * stack, so the binding's argument words land as r1, r2, r3, three stack words
 * and s0 - exactly the shape the original's "ldrd r2,r3,[sp,#0xc]" shows.  The
 * first argument narrows to a byte at the call and the fourth arrives as a
 * Squirrel bool, which the VM reader already converts to 0/1.
 *
 * The argument block is declared in the order that gives the original's stack
 * slots (slot, mode, offsetA, offsetB, scale, modelType, flag from the lowest
 * address); armcc lays struct members out in declaration order, and the
 * original took the address of each Squirrel out-parameter at those offsets.
 * Every check has its own error path, operation string and source line, which
 * is why the data tail holds the file name, two operation strings and four
 * line words.
 *
 * STATUS: draft, not byte-identical.  Under the reconstructed -O3 profile the
 * compiled function is now the original's 556 bytes and 139 instructions, and
 * every check, error path, source line, operation string, data-tail word, stack
 * slot and call argument reproduces: the six `cmp r0,#0; nop; bge` sequences
 * that the earlier -O2 profile omitted are emitted, so that part of the
 * difference is closed.  77 of 139 instruction positions still differ, all
 * through one code-shape decision: armcc keeps the address of the argument
 * aggregate in a callee-saved register (`add r5, sp, #0xc`, frame 0x2c, push
 * {r4,r5,lr}) and addresses the members as `r5 + k`, while the original pushes
 * only r4, keeps the 0x28 frame and computes every out-pointer directly as
 * `add r2, sp, #imm`.  That is what armcc does for *separate* locals, but the
 * original's slot map (0x0c..0x24 in the order slot, mode, offsetA, offsetB,
 * scale, modelType, flag) is the map of the declared aggregate, and separate
 * locals cannot produce it: armcc places the first local whose address is
 * taken in the top slot, and that is necessarily modelType (the -7 check),
 * not flag.  So the original's own source declared the block as an aggregate
 * and its compiler addressed the members sp-relative; no source shape tried
 * here (aggregate, separate locals, byte buffer, two aggregates, array, C++
 * mode, -O1/-O2/-O3, with and without --gnu/--split_sections) reproduces both
 * properties at once.  Nothing is claimed as measured.
 */
#include "battle_script_api.h"

int fn_00139738(SqVM *vm)
{
    struct {
        s32 slot;
        s32 mode;
        s32 offset_a;
        s32 offset_b;
        f32 scale;
        s32 model_type;
        s32 flag;
    } args;
    BATTLE_CHECK(vm, sq_getinteger(vm, -7, &args.model_type), "failed: sq_getinteger",
                 kName_SetPop_, 0x1d0);
    BATTLE_CHECK(vm, sq_getinteger(vm, -6, &args.slot), "failed: sq_getinteger",
                 kName_SetPop_, 0x1d3);
    BATTLE_CHECK(vm, sq_getinteger(vm, -5, &args.mode), "failed: sq_getinteger",
                 kName_SetPop_, 0x1d6);
    BATTLE_CHECK(vm, sq_getbool(vm, -4, &args.flag), "failed: sq_getbool",
                 kName_SetPop_, 0x1d9);
    BATTLE_CHECK(vm, sq_getinteger(vm, -3, &args.offset_a), "failed: sq_getinteger",
                 kName_SetPop_, 0x1dc);
    BATTLE_CHECK(vm, sq_getinteger(vm, -2, &args.offset_b), "failed: sq_getinteger",
                 kName_SetPop_, 0x1df);
    BATTLE_CHECK(vm, sq_getfloat(vm, -1, &args.scale), "failed: sq_getfloat",
                 kName_SetPop_, 0x1e2);
    fn_001755cc(SCRIPT_CONTEXT(), (u8)args.model_type, args.slot, args.mode,
                args.flag != 0, args.offset_a, args.offset_b, args.scale);
    return 0;
}
