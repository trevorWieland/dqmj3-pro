# Loop rotation: no available armcc build or flag removes it

**Result this records.** Fourteen armcc builds (4.0 b771/b821/b865/b902,
4.1 b561/b713/b791/b844/b894/b921/b1049/b1440/b1454, 5.04 b82) and
twenty-four flag sets were measured on a loop-focused corpus and on walk-shape
probes. **No build and no flag produces the original top-tested successor walk
(`ldr; cmp; strne; bne`) from the reconstructed range-erase C.** The pinned
`armcc 4.1 b1454 -O3 -Otime` is already the best of the fourteen: it ties for
fewest differing words and no other build beats it. The build/flag axis is
closed. The loop shape itself is reachable with the pinned build from one C
spelling, so the remaining blocker is the entry store, not the compiler.

## Corpus

Twenty functions were taken from the exported corpus (`work/corpus/`), all from
the families the task names. Every function is ARM, its original extent is
known, and each was compiled from a hand-written C body and placed at its
original address before its words were compared.

| unit | functions | bytes | addresses | C body |
|---|---:|---:|---|---|
| range erase, 320-byte | 6 | 1,920 | `007654a4 00766050 00766828 0076fbfc 0077ba40 0077d8fc` | draft 1 in `docs/2026-11-12-small-clone-families.md` (feat/small-families) |
| range erase, 312-byte | 2 | 624 | `00767a60 00769038` | same document, draft 2 |
| red-black erase, 1,628-byte | 12 | 19,536 | `00764e48 007659f4 007661cc 00769544 0076cd44 0076d89c 0076e2a0 0076f5a0 00777a24 00779a60 0077b3e4 0077d2a0` | `work/clone/draft-pooled_tree_erase.c` |

The 320 family is the case that matters: its original successor walk is the
block at `0x0076554c`-`0x00765584`, and the walk loop is
`ldr r0,[r0,#8]; cmp r0,#0; strne r0,[r4,#0]; bne <ldr>`. The 312 family's
original walk is store-at-head (`str; ldr; cmp; bne`), which is why that family
is short two instructions for other reasons, not rotation. The 1,628-byte draft
compiles to 1,564 bytes, 397 differing words; its gap is body completeness
(64 bytes), not the loop shape, and no build changes that.

**The class behind the corpus.** A scan of all 26,990 exported origins for the
exact `ldr; cmp; strne; bne` loop shape finds **41 functions in 50,228 bytes**:
`320 x 6`, `1836 x 9`, `1948 x 3`, `340 x 3`, `1884 x 2`, `1848 x 2`,
`1900 x 2`, `1880 x 2`, `76 x 2`, and ten singletons. The two named groups in
the task are the 320 and the 176/1836 group; the census's `1836 x 9` is the
only nine-member family of that scale, so it is treated as that group. None of
the 41 is defined under `src/native/`.

## How "same shape" was judged

Two independent measurements, both on the placed function:

1. **Instruction sequence at the loop.** After aligning the compiled body with
   the original at the function's address, the walk site was classified as
   - **ORIG**: `LDR [p,#8]` (loop head) / `CMP` / `STRNE` / `BNE` back to the
     `LDR` - the original shape;
   - **ROT**: `STR` (loop head) / `LDR [p,#8]` / `CMP` / `BNE` back to the
     `STR` - store-at-head rotation;
   - **GUARD**: `CMP` / `STRNE` / `LDRNE` / `BNE` back to the `CMP` - a
     different top-tested form some builds emit for a redundant entry guard.
2. **Exact bytes.** The unit was compiled, split into per-function sections,
   linked with every split symbol at its original address, and the compiled
   section compared to the original bytes at that address. A function is
   reported by its differing 32-bit words, so a shape change that does not
   affect bytes cannot be missed.

The shape classifier and the byte count agree everywhere: every ROT loop shows
up as differing words in the walk region; no ORIG loop appeared outside the one
source spelling below.

## Builds

Command line per build: `--cpu=MPCore --apcs=/interwork --c99 -O3 -Otime
--gnu --split_sections`, then the compiler's own natural split, then placement.
All fourteen builds compile the 320 family to the exact 320-byte extent and the
312 family to 304 bytes.

| builds | 320 words | 312 words | shape of the 320 walk |
|---|---:|---:|---|
| 4.1 b1049, b1440, b1454 | 22 | 36 | ROT |
| 4.1 b713, b791, b844, b894, b921 | 22 | 36 (44 for b713) | ROT |
| 4.1 b561 | 42 | 53 | ROT |
| 4.0 b771, b821, b865, b902 | 42 | 53 | ROT |
| 5.04 b82 | 40 | 54 | ROT |

No build produces ORIG from these bodies, and no build produces a different
word count below the pinned build's 22. The build differences in these bodies
are register naming
(4.0 and b561) and copy propagation (5.04); they do not touch the loop
transformation. On the 1,628-byte body the builds likewise differ only by
`mov` copies and register names (1,564 bytes, 393-397 instructions, 397 words
against a 1,628-byte original), so that family does not discriminate either.

**Probe result that explains the build split.** A reduced probe separates the
builds where the full draft does not. For the doc's spelling *with* the entry
store kept:

```c
p = p->right;
if (p) it->node = p;
while (p) { p = p->left; if (p) it->node = p; }
```

With the entry store kept, every build emits **ROT** under `-O3 -Otime`. Under
`-O3 -Ospace`, b713 and later plus 5.04 emit **GUARD**, while 4.0 and 4.1 b561
stay **ROT**. None emits ORIG. A redundant double guard
(`if (p) { it->node = p; if (p) while (p) ... }`) makes b713+ emit GUARD under
plain `-O3`; 4.0/b561/5.04 stay ROT. So the build difference is real but it is
ROT-vs-GUARD, never ROT-vs-original.

## Flags

`armcc --help` b1454 lists no loop, rotation, peeling or unrolling option.
`--loop_optimization_level` (0/1/2), `--no_loop_unroll`, `--loop_unroll`,
`--manual_unroll`, `--unroll`, `--peel_rotation`, `--no_peel_rotation`,
`-Vpeel_rotation` and `--Wo=-Vpeel_rotation` are all rejected as unrecognized.
The binary contains the internal strings `-Vpeel_rotation`,
`loop_unroll_was_ever_enabled` and `vast_lp_unroll_rotate`, but no user-facing
spelling reaches them.

Measured on `fn_007654a4`, `armcc 4.1 b1454`:

| flag set | code | extent | words | shape |
|---|---:|---:|---:|---|
| `-O3 -Otime` (pinned) | 320 | 320 | 22 | ROT |
| `-O2` | 284 | 284 | 80 | ROT |
| `-O1` | 308 | 308 | 76 | ROT |
| `-Ospace -Otime` | 320 | 320 | 40 | ROT |
| `-O3 -Ospace` | 284 | 284 | 78 | ROT |
| `-Ospace` | 284 | 284 | 80 | ROT |
| `-O2 -Ospace` | 284 | 284 | 80 | ROT |
| `--no_inline`, `--no_autoinline`, `--restrict`, `--no_restrict`, `--no_vectorize`, `--vectorize`, `--c90`, `--no_gnu` | 320 | 320 | 22 | ROT |
| `--cpu=ARM1136JF-S`, `--cpu=ARM1176JZF-S` | 320 | 320 | 22 | ROT |
| `--cpu=Cortex-A8` | 320 | 320 | 32 | ROT |

Every accepted flag either changes nothing or loses the extent or the words.
`-Ospace` is strictly worse: 40 words with `-Otime`, 80 without it, and 284
bytes instead of the original 320.

## Whole tree

Baseline, re-measured in the worktree with `build.py` on the measured image:
`total_code=7,051,280 matched_code=124,436 matched_functions=2,890`, 2,931
functions compiled from source, 41 differing functions. This reproduces the
recorded profile exactly.

`-Ospace` as the default profile (same build, arguments `--cpu=MPCore
--apcs=/interwork --c99 -Ospace -c --gnu --split_sections`; the one clang-21
unit keeps its declared profile):

| measure | pinned `-O3 -Otime` | `-Ospace` | delta |
|---|---:|---:|---:|
| matched functions | 2,890 | 2,169 | -721 |
| matched bytes | 124,436 | 58,628 | -65,808 |
| differing functions | 41 | 348 | +307 |
| functions gained | - | 15 (356 bytes) | +15 |
| functions lost | - | 736 (66,164 bytes) | -736 |

The gain is real but scattered and tiny (15 functions, 356 bytes); the loss is
736 functions and 66,164 bytes. The arithmetic closes exactly:
2,890 - 736 + 15 = 2,169 and 124,436 - 66,164 + 356 = 58,628. No function in
the 41-function loop class is under `src/native/`, so none of the 15 gains is a
loop-class function; `-Ospace` buys nothing for this class and costs the tree
two thirds of its matched code.

## Per-unit profile

Not justified. A per-unit profile only helps when some profile wins on the
units that need it and loses elsewhere. Here every build ties or loses on the
loop corpus (b1454 is already the best), and no build produces the shape at
all, so splitting units by compiler would add machinery without adding a
single loop. The same applies to `-Ospace`: it does not fix the walk and is
worse even on the one function it was expected to help.

## Verdict

**Definitive on the compiler axis: no available armcc build and no available
flag set produces the original top-tested if-converted successor walk. Do not
spend more time looking for a build that does not rotate loops; none of the
fourteen in `work/compiler-tools/armcc/` does, and the flag that would control
it is not exposed.**

The class is not unreachable, and the blame is narrower than "the compiler
rotates every while form":

* `p = p->right; while (p) { p = p->left; if (p) it->node = p; }` compiles to
  the **exact original four-instruction loop** on all fourteen builds and on
  the pinned one. The doc's claim on this point is correct.
* The 320-byte body additionally has to store the right child once at entry
  (`strne r1,[r4,#0]` at `0x0076556c`). Adding that store to any probed spelling
  makes the compiler merge it into the loop head (ROT), or turn the whole
  entry into GUARD; it never leaves the entry store separate and the loop
  top-tested. The lane's forty in-function variants did not find a spelling
  that prevents this merge, and this sweep does not either.

So the actionable target is the entry-store merge in C (or an equivalent
restructuring), not a different compiler. The 41-function, 50,228-byte class
is worth keeping open for that work; the build search is closed.

## Reproduce

The measurements were made in a throwaway worktree. The corpus bodies are the
two drafts on `feat/small-families` and `work/clone/draft-pooled_tree_erase.c`;
each was compiled with the profile's exact command line, split with
`toolscripts/armcc_object.split`, placed with `toolscripts/placement.place` at
the original addresses, and compared with `permute.compare`. The build sweep is
one compile per build per unit; the flag sweep is one compile per flag set. The
whole-tree `-Ospace` run temporarily replaced the default profile's arguments;
the committed configuration is unchanged.
