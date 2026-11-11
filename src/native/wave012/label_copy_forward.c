/*
 * Forwarder for a copied interval set.
 *
 * The rebuild keeps this call in its own translation unit because the original
 * image does: fn_00755720 is 28 bytes, loads the source's destination pointer
 * onto the stack and branches to fn_007555f0, which is a separate 304-byte
 * body immediately before it. With both functions in one translation unit the
 * measured -O3 -Otime profile inlines the callee and the wrapper disappears;
 * armcc only inlines within a translation unit, so the original build cannot
 * have seen both bodies at once. Compiling the forwarder alone reproduces the
 * original seven instructions exactly.
 */
#include "compile_graph.h"

int fn_007555f0(IntervalSet *destination, const IntervalSet *source, void *const *target, FixedArena *arena);

int fn_00755720(IntervalSet *destination, const IntervalSet *source, FixedArena *arena)
{
    void *target = source->destination;
    return fn_007555f0(destination, source, &target, arena);
}
