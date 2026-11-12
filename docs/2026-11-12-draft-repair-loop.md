# The draft-repair loop

The corpus drafter compiles a decompiled body once and keeps it only if that
first compile happens to equal the original. On the clean 128-511 byte band that
is 0.24 %, and the reason is visible in the difference: the decompiler's C
computes the same thing but is shaped differently from what armcc was given. This
document measures what happens when the difference is fed back.

The loop is:

```
corpus C --rewrite--> draft TU --armcc profile--> placed bytes
                                      |
                                      v
                          compare with original extent
                                      |
                         exact? -- yes --> ship
                           |
                           no
                           v
                 classify the difference (register, immediate,
                 condition, opcode, order, size, extent, pool)
                           |
                           v
             choose the source rewrites mapped to that class
                           |
                           v
                 compile the candidates, keep the best,
                 repeat until exact or the compile budget ends
```

Every candidate is ordinary C compiled by the measured profile
(`armcc 4.1 b1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime`) and placed
at the function's original address with every other split symbol defined as an
absolute address. Nothing is fitted, assembled, or patched. The original image
is only the thing the compiled bytes are compared with.

## The signal: difference classes

`toolscripts/repair_diff.py` decodes both extents with Capstone (a decoder, not
an assembler) and pairs instructions. The class is the first fact that decides a
repair:

| class | what it means | rewrites tried first |
|---|---|---|
| `register` | paired instruction differs only in register names | `narrow-read`, `value-cast`, `local-inline`, `member-local`, `pointer-local`, `temp-introduce`, `temp-inline`, `decl-hoist`, `swap`, `store-swap`, `block-reorder`, `commute`, `condition-temp`, `cast-size`, `param-type`, `local-type`, `sign` |
| `immediate` | paired instruction differs only in its literal | `mask-width`, `mask-shift`, `shift-mask`, `range`, `literal-sign`, `sign`, `commute`, `cast-size`, `pointer-local`, `param-type`, `const-hoist` |
| `condition` | the paired instruction's condition suffix differs | `condition-commute`, `condition-not`, `condition-bare`, `ternary-negate`, `if-swap`, `commute`, `if-guarded`, `condition-temp` |
| `opcode` | same operation family, different opcode (`ldr`/`ldrb`, `and`/`bic`) | `narrow-read`, `value-cast`, `commute`, `mask-shift`, `shift-mask`, `boolean-compare`, `boolean-ternary`, `cast-size`, `if-to-ternary`, `if-to-default`, `pointer-local` |
| `operand` | same opcode, different operand text | `narrow-read`, `value-cast`, `commute`, `cast-size`, `pointer-local`, `member-local`, `sign`, `param-type`, `local-type`, `temp-introduce`, `store-swap` |
| `mnemonic` | unrelated mnemonics at the pair | `cast-size`, `narrow-read`, `value-cast`, `boolean-*`, `ternary-if`, `if-to-*`, `if-swap`, `pointer-local`, `condition-temp` |
| `order` | two adjacent independent instructions scheduled the other way | `swap`, `store-swap`, `block-reorder`, `decl-hoist`, `decl-split`, `decl-join`, `temp-introduce` |
| `size` | the instruction count differs | `temp-introduce`, `local-inline`, `temp-inline`, `split-compound`, `block-reorder`, `ternary-if`, `if-to-*`, `decl-split`, `decl-join`, `decl-init-split` |
| `extent` | the compiled section's length differs (pool/alignment) | `local-inline`, `temp-introduce`, `temp-inline`, `split-compound`, `decl-split`, `ternary-if`, `if-to-default`, `decl-init-split` |
| `pool` | instructions agree, a literal-pool word differs | `literal-sign`, `sign`, `mask-width`, `mask-shift`, `commute`, `cast-size` |

An instruction-count difference is classified `size` before the first differing
pair is classified, because an insertion shifts every later pair and the count is
the fact a repair can act on. The mapping orders the candidates; it does not
overrule the compiler. A rewrite outside the mapping is still reachable through
the beam, later in the batch.

## New transformations

`toolscripts/permute_ops.py` already held the 19 human fixes measured on
hand-shaped source. `toolscripts/repair_ops.py` and `toolscripts/repair_types.py`
add the shapes a decompiled body actually has:

* **temporaries** -- `temp-introduce` names a call result or nested expression
  in a local; `temp-inline` substitutes a single-use local back and drops the
  declaration (the permuter's `local-inline` only accepted a narrow value grammar).
* **struct member as pointer** -- `pointer-local` finds a cast base
  (`*(undefined4 *)(param_1 + 0x10)`) used twice or more and holds it in a typed
  pointer local, so the source spells a member through a pointer.
* **compound splitting** -- `split-compound` turns one braced body under a simple
  guard into two guarded statements; `join-compound` the reverse; and
  `decl-init-split` separates a declaration from its initializer.
* **wider reordering** -- `block-reorder` moves a statement past one or two
  independent neighbours in either direction, `store-swap` exchanges two stores
  to different fields of one base (the conservative `swappable` rule treats both
  as writes to the base and refuses them).
* **if/else as a guarded assignment** -- `if-guarded` turns
  `if (c) x = v;` into `x = c ? v : x;`, the complement of the existing
  `ternary-if` and `if-to-default`.
* **load width and signedness** -- `narrow-read` rewrites a field read spelled as
  an `int` array slot (`(char)param_1[100]`) to the cast dereference its store
  target already uses; `cast-size`, `value-cast`, `param-type` and `local-type`
  try the adjacent type spellings at one site each.
* **condition temporaries** -- `condition-temp` names the dereference a condition
  reads before the guard, which lets the compiler materialise the stored value
  while the load is in flight; `const-hoist` names a guarded constant store.

All of these are source rewrites. The compiler is the oracle: a wrong rewrite
costs one compile and is discarded; only an exact placed extent is credited.

## The search

`toolscripts/repair_loop.py` scores the draft, classifies it, and spends a
per-function compile budget in depth levels (50 % / 30 % / 20 % by default),
keeping the best few candidates by a rank that puts the right extent first, the
differing-word count second. A candidate equal to one already tried is skipped,
so a deeper level explores combinations rather than re-testing the same rewrite.

A draft whose extent is more than 8 bytes (or 40 words) from the original is
**triaged**: a source permutation of depth three does not add or remove a
hundred bytes, and spending the budget there would only inflate the cost per
match. Those functions are reported with their difference class instead.

## Population

The measured band is the largest clean, untouched pool in the corpus inventory:

| measure | value |
|---|---|
| unmeasured corpus functions, 128-511 bytes | 8,264 (2,086,292 bytes) |
| of those, clean shape (no data, string, label, switch, goto, warning, indirect call) | **2,464 (570,754 bytes)** |
| already byte-exact from the first compile | 6 (1,112 bytes, 0.24 %) |
| same instruction count as the original | 291 (11.8 %) |
| placement-failed (references outside the split) | 215 (8.7 %) |
| compile-failed (decompiler shapes) | 24 (1.0 %) |
| instruction-count difference | 1,934 (78.7 %) |
| triaged (extent more than 8 bytes / 40 words away) | 1,928 |
| **reachable by a depth-three source repair** | **530 (82,980 bytes)** |

The clean band is the shape the first drafting pass measured at 0.6 %. "Exact"
means the function the configured source does not define yet, and the measurement
excludes the loop's own shipped output (`src/native/wave084-repair/`); the six
base-exact drafts are new, not re-credited functions. Six earlier candidates
that the first pass defined but did not credit were checked and are not counted.

## Measured yield: the 400-function sample

A deterministic sample of 400 functions (91,412 bytes) from the 2,464, with a
budget of 64 compiles per function, depth 3, beam 6:

| measure | value |
|---|---|
| sample | 400 functions, 91,412 bytes |
| byte-exact | **1 function, 280 bytes** |
| rate by function | **0.25 %** |
| rate by bytes | **0.31 %** |
| reachable in the sample | 71 |
| triaged in the sample | 329 |
| compiles | 4,811 |
| wall time | 489 s (315 s in an uncontended repeat) |
| **compiles per match** | **4,811** |

The one match is `fn_006a1bf0` (280 bytes). Its draft, exactly as Ghidra emitted
it, read

```c
*(char *)(param_1 + 100) = (char)param_1[100] + '\x01';
```

so armcc loaded the field through an `int` slot (`ldr`) and truncated. The
original loaded a byte (`ldrb`). The difference class was `opcode`: `ldrb` against
`ldr` at the same address. `narrow-read` rewrote the read to the cast dereference
the store target already used, and the placed extent became equal to the
original.

Of the 71 reachable functions, the loop improved 35 (49 %) without closing them:

| starting class | improved | examples |
|---|---|---|
| `size` | 26 | eight `-4` drafts became the right instruction count under `block-reorder` |
| `register` | 4 | `fn_006f4e34` 9 words -> 2 (`swap`), `fn_002a9f70` 17 -> 6 |
| `operand` | 2 | `fn_002c1f84` 39 -> 34 (`narrow-read`) |
| `opcode` | 2 | `fn_003920f0` 40 -> 39 |
| `order` | 1 | `fn_00442500` 5 -> 3 (`store-swap`) |

The search is not random: it finds the rewrite that removes a real part of the
difference in half the reachable population. It just does not finish.

## What resisted every repair

The reachable functions that did not improve (35) and the triaged population are
the measured boundary. By first difference class, on the reachable set:

| class | count | the shape that resisted |
|---|---|---|
| `register` | 15 | callee-saved register copies and live ranges: `mov r4, r0` scheduled before `mov r5, r1` where the original had the reverse; the compiler's copy insertion, not the source order |
| `operand` | 10 | a different base register or stack slot survives every cast, declaration and reorder |
| `mnemonic` | 4 | a constant materialisation or a boolean normalisation the pinned compiler removes |
| `size` | 4 | one instruction too few/many with no reachable spelling to add/remove it |
| `order` | 2 | instruction scheduling across an expression the source cannot reorder |
| `immediate` | 1 | a different literal the source does not contain |

Over the whole 2,464-function band the triaged classes are dominated by `size`
(1,615): the draft's machine code is a different length, by more than a
depth-three source rewrite can move. The second largest group is the
placement-failed class (215), which is an inventory boundary (the draft names a
symbol the split cannot place), not a source-shape one; compile-failed (24) is a
decompiler artefact. `register` is only 20 of the triaged functions but 15 of the
resisted reachable ones, and it is the class that decides the yield: a
register-copy order that armcc chooses internally cannot be written from C.

Two near misses show the wall precisely:

* `fn_00382c44` differs in three words: the same three parameter copies in the
  other order (`mov r5,r1; mov r6,r2; mov r4,r0` against
  `mov r4,r0; mov r5,r1; mov r6,r2`). Every one of the 96 candidates kept the
  same three words.
* `fn_00442500` fell from five words to three under `store-swap`; the remaining
  three are `mov r1,#1` hoisted above a byte load by the original and below it by
  the pinned compiler, which is scheduling independent of the source.

## Extended search on the near misses

The sample's cost is dominated by triage. To test whether budget was the limit
rather than the method, a second run took the 122 reachable functions whose draft
was within 16 differing words and gave them a budget of 192 compiles, depth 4 and
a beam of 10:

| measure | value |
|---|---|
| functions | 122 (5.0 % of the band) |
| budget | 192 compiles, depth 4, beam 10 |
| byte-exact | **4 functions, 800 bytes** |
| rate on this subset | **3.3 %** |
| compiles | 19,600 |
| **compiles per match** | **4,900** |
| wall time | 1,564 s |

The four are `fn_0017dbc0` (164 bytes, `condition-commute` then `commute` -- a
depth-two chain), `fn_0042f6e4` (172 bytes, `condition-temp`), `fn_0042f790`
(184 bytes, `condition-temp`) and `fn_006a1bf0` (280 bytes, `narrow-read`). Three
of the four used transformations that did not exist before this loop: the
condition temporary and the narrow read.

An 11-function retry of the run's own infrastructure failures (a multi-line
return type the permuter's span finder did not accept, and three transient
out-of-memory aborts) fixed the span bug and produced no further match: 2,079
compiles.

A production sweep over the remaining 400 reachable functions with a budget of 40,
depth 3, beam 6 produced **no match**: 12,875 compiles, 1,457 s. The cheap sweep
is not where the value is; the class-ordered deep search on near misses is.

## The full accounting

| run | functions | compiles | exact | bytes |
|---|---|---|---|---|
| band calibration (first compile only) | 2,464 | 2,464 | 6 | 1,112 |
| formal sample | 400 | 4,811 | 1 | 280 |
| focused near misses | 122 | 19,600 | 4 | 800 |
| infrastructure retry | 11 | 2,079 | 0 | 0 |
| reachable sweep | 400 | 12,875 | 0 | 0 |
| **unique shipped** | **2,464 band** | **41,829** | **10** | **1,912** |

Ten functions of 2,464 is **0.41 % by function**, **0.335 % by bytes**, at
**4,183 compiles per match** and about 64 minutes of wall time for the whole
campaign (eight armcc processes on one host).

## Shipping

Only byte-exact functions are shipped. `toolscripts/repair_ship.py` rebuilds the
unit, recompiles and re-scores every function *inside the shipped file* (a
callee defined in the same unit changes the declaration it needs), drops any
function that no longer matches and any function the configured source already
defines, writes the files and declares them in `config/build-units.json` in
binary mode. The ten functions are in `src/native/wave084-repair/`, one file with
its own declaration header and the shared `decompiled.h`, declared with its true
transitive header closure.

## Verdict

On the clean 128-511 byte band the loop converts **0.41 %** of functions
(0.335 % of bytes) at **4,183 compiles per match**; the formal sample alone
measured **0.25 %** at **4,811 compiles per match**. It is not the 3-5 % that
would make this the path to volume. It is below the 0.5 % figure, and that has to
be said precisely.

What the measurement says about why:

* The reachable population is only 21.5 % of the band. The other 78.5 % does not
  compile to the original instruction count, and most of it is off by far more
  than a source permutation can move.
* Inside the reachable population the loop works: it improves 49 % of functions
  and closes 4 of 122 near misses. But the last one to three words are register
  allocation and scheduling, and those are chosen by armcc from the whole
  function's dataflow, not from the spelling of one statement. A longer chain
  does not reach them because the operator set cannot express "hold this value in
  r4 across the call" in C.
* The cost per match is the number that decides it. 4,183 compiles and a minute
  of eight-way wall time per match is affordable for a one-off sweep of a few
  hundred functions, but not as the production path for tens of thousands. At
  this rate the 1,423,754 bytes of the wider 128-511 pool would cost roughly
  100,000 compiles and yield a few kilobytes.

Where it is still worth running: `narrow-read`, `condition-temp` and the
condition-operand rewrites. All are decidable from the diff, all are cheap, and
all produced a match here. The first level of the loop (one class-ordered batch,
no beam) over the reachable band costs roughly one compile per function and
captures most of the value this method has; the deep beam doubles the cost per
match to buy a 3.3 % rate on the 5 % of the band that is a near miss. That is a
useful accelerator on a hand-picked queue, not a way to convert the band.

## Reproduce

```
python -I toolscripts/repair_loop.py --calibrate --sample 0 --jobs 8 \
        --out work/repair/calband3
python -I toolscripts/repair_loop.py --shape clean --minimum 128 --maximum 511 \
        --sample 400 --budget 64 --depth 3 --beam 6 --jobs 8 \
        --out work/repair/final400b
python -I toolscripts/repair_loop.py --functions work/repair/focused.json \
        --budget 192 --depth 4 --beam 10 --jobs 8 --out work/repair/focused1
python -I toolscripts/repair_ship.py --run work/repair/final400b \
        --run work/repair/focused1 --calibration work/repair/calband3/calibration.json \
        --component wave084-repair
python -I run_checks.py --quick --only references compile tests
```

The scan needs `generated/update-content0/code.bin` and `exheader.bin` from a
build of the owner's image; nothing here reads `inputs/` or writes outside
`work/` and `src/native/wave084-repair/`.
