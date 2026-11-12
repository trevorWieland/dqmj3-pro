# Source-permutation search

A measured method for turning near-miss reconstructions into byte-exact ones:
compile one candidate function with the measured profile, compare its placed
bytes with the original extent, and search the small source rewrites a person
would try until the bytes agree.

The project's failures are not wrong algorithms. They are the same algorithm
written with a declaration two statements earlier, a member expression where the
original held a pointer in a local, a ternary whose arms are the other way round,
a mask written as a complement instead of a byte width, or a range test written
as two comparisons instead of one. A person finds those by reading the diff and
guessing at armcc's habits. This method guesses systematically and lets the
measured compiler decide.

## The scorer

`toolscripts/permute.py` answers one question: how far is this candidate from the
original, in bytes?

* It compiles the candidate with the unit's declared profile from
  `config/compiler-profiles.json` -- by default `armcc-4.1-b1454`, arguments
  `--cpu=MPCore --apcs=/interwork --c99 -O3 -Otime -c --gnu --split_sections`
  plus the profile preinclude and include scope, exactly as `build.py` does.
* It rewrites armcc's single `.text` into one section per function with
  `toolscripts/armcc_object.py`, the same rewrite the build uses.
* It links the candidate's function at the address `config/symbols.txt` gives
  it, with every other split symbol defined as an absolute address. That is what
  turns a `bl` into the bytes the original holds; it is the same placement
  `toolscripts/placement.py` performs for the whole build.
* It compares the placed bytes with the original bytes at that address: the
  instructions, the data the compiler placed after them, and the extent. A
  function is exact only when its instruction size equals the split's size and
  every byte of its compiled extent equals the original. Differing 32-bit words,
  the first differing offset, and the size/extent deltas are reported for the
  search.

The score is the build's own success criterion, not an approximation of it. On
the 3,080 functions this tree's configured source defines, the scorer's exact
set is identical to the set the project's own objdiff report credits as matched
(2,852 functions, zero disagreement in either direction). That report was
produced by `toolscripts/objdiff_objects.py` plus `objdiff-cli report generate`,
the same path `build.py` uses, with the image and ExHeader from a build of the
owner's image.

## The search

`toolscripts/permute_text.py` finds one function definition inside its unit,
splits its blocks into statements, and summarises what each statement reads and
writes so a reorder is only tried when it does not obviously interfere.
`toolscripts/permute_ops.py` and `toolscripts/permute_expr.py` hold the
transformations; `toolscripts/permute_search.py` is the beam search.

| operator | rewrite |
|---|---|
| `swap` | exchange two adjacent statements with no shared write |
| `decl-split`, `decl-join` | one declaration with two declarators, or two declarations |
| `decl-hoist` | move a declaration to the top of its block |
| `local-inline` | put a local's initializer back at its uses and drop the declaration |
| `member-local` | hold a repeated `base->field` base in a pointer local |
| `ternary-swap`, `ternary-negate` | exchange ternary arms, with or without inverting the condition |
| `ternary-if` | `return c ? a : b` as a default assignment plus one guarded assignment |
| `if-swap`, `if-to-ternary`, `if-to-default`, `if-return*` | if/else orientation and forms |
| `range` | `x >= 1 && x <= 32` as `(unsigned)(x - 1) < 32` |
| `mask-shift`, `shift-mask` | `(v >> n) & m` and `(v & (m << n)) >> n` |
| `mask-width` | `& ~1u` as the byte mask the original encodes (`& 0xfeu`) |
| `boolean-compare`, `boolean-ternary` | the mask / comparison / conditional spellings of a 0-or-1 return |
| `commute` | swap the operands of a comparison or arithmetic operator, flipping relationals |
| `sign`, `literal-sign` | signed/unsigned declaration and literal-suffix variants |
| `loop`, `condition-*`, `prefix/postfix` | loop shape and condition spellings |

The first level tries every operator once, the second tries every operator on
each of the best few first-level mutants. A candidate that matches stops the
search. Every mutant is ordinary C written to a candidate translation unit and
compiled; the search never assembles, patches an object, or fits an instruction.

## Candidates

The population is the functions the configured source already defines.
`toolscripts/permute.py --scan` compiles every configured unit once and scores
every split function it defines: 3,081 functions in this tree, of which 2,852
are byte-exact (92.6 %) and 229 are not. Of the 229, 48 were the near-miss
population the first batch targeted -- at most four differing words, and a
compiled extent that fits the range the split leaves them. The rest differ in
more words, do not fit, or name a symbol the split cannot place.

That scan is also the regression check: it is run before and after a batch, so
an applied rewrite that broke a neighbour would be visible. Its per-function
numbers agree exactly with the project's objdiff report, which is the measurement
the build publishes.

Candidates included the drafts the corpus drafter kept in
`src/native/draft001/` and `src/native/draft002/`, the script-API bindings in
`src/native/wave080-script-api/`, the synthesized pool and pointer shapes in
`src/native/synth001/`, and the hand-written wave units.

## Measured yield

| measure | value |
|---|---|
| candidates searched | 48 |
| byte-exact matches | **19** |
| yield on the near-miss population | **39.6 %** |
| original bytes credited, both bands | **484** |
| compiles performed | 582 |
| wall time, all candidates | 69.5 s |
| time per candidate | 1.45 s |
| compiles to a match | median 7 (min 5, max 12) |
| time to a match | median 0.65 s (max 2.99 s) |
| first-level mutants per candidate | median 4, max 13 |

Every match was a single-operator rewrite found in the first-level
neighbourhood. The second level was searched but produced no additional match;
it did reduce the difference on some misses without closing it. A second pass
over the 31 near misses that remained, after the condition-commutation operator
was added, spent 566 compiles and found no further source match.

The corpus band adds one match: 51 near misses searched, 1 exact (2.0 %), 44
bytes, 2,167 compiles, 189 seconds. Across both populations that is 20 matches
from 99 near misses, **20.2 %**.

Matches by unit:

| unit | functions | bytes |
|---|---|---|
| `src/native/wave008/flags_01.c` | 8 | 192 |
| `src/native/wave007/predicates.c` | 5 | 132 |
| `src/native/wave001/leaves.c` | 3 | 52 |
| `src/native/wave008/flags_03.c` | 2 | 44 |
| `src/native/wave008/flags_00.c` | 1 | 24 |
| `src/native/draft002/00123600_0044faec.c` (corpus band) | 1 | 44 |

The winning transformations:

| operator | matches |
|---|---|
| `mask-width` (`& ~0x1u` -> `& 0xfeu`) | 11 |
| `mask-shift` (`(v >> n) & 1` -> `(v & (1 << n)) >> n`) | 3 |
| `ternary-negate` (swap arms and invert the condition) | 2 |
| `ternary-if` (default assignment plus guarded assignment) | 2 |
| `range` (two comparisons -> one subtract-and-compare) | 1 |
| `condition-commute` (corpus band only) | 1 |

After the batch and the corpus function the tree measures 2,852 exact of 3,081
functions (92.6 %). The 20 shipped functions are exactly the difference from the
same tree before the batches (2,832 -> 2,852); the before/after scans show no
regression, and the project's objdiff report credits 2,852, agreeing with the
scanner on every function.

## The corpus band

The project's measured near misses also include the decompiled corpus drafts:
data-reference drafts that compile to the same length with different bytes, and
drafts that compile to one extra literal-pool word. To test the method against
that band directly, `work/permute/corpus_scan.py` (a work-tree harness, not
shipped tooling) builds a candidate translation unit per corpus function from
the raw decompiled body: Ghidra's `FUN_` names mapped to the project's `fn_`
names, the decompiler type vocabulary from `src/native/draft002/decompiled.h`,
and one declaration per callee and data object the body names.

A sample of 1,200 corpus functions between 32 and 128 bytes scored as follows:
949 compiled, 251 did not (207 compile failures from decompiler shapes and 44
unresolvable references), 104 were already byte-exact, and 51 were near misses
(at most four differing words, fitting their range). Searching those 51 cost
2,167 compiles and 189 seconds and produced **one** match: `fn_00176b18`, 44
bytes, found after 11 compiles.

That function's draft read `(param_2 & 0xffffff) < *puVar1`, which made armcc
compare the operand registers the other way round from the original; the
condition-operand commutation `*puVar1 > (param_2 & 0xffffff)` reproduces the
original `cmp r2,r1` exactly. It is shipped in
`src/native/draft002/00123600_0044faec.c`.

The other 50 near misses are dominated by register allocation and scheduling
rather than source order: for example `00121054` differs only in which register
holds the loaded field (`ldr r0` versus `ldr r1`), and `001177a4` differs in the
operand order of a single `cmp` that the pinned compiler emits identically for
both source orders. A second pass over all 51 with the added commutation
operator cost 2,167 compiles and found the one match; the rest stayed misses.

The 78 same-length and 639 one-extra-pool-word figures in
`docs/2026-11-11-corpus-drafting.md` were measured on the drafting pipeline's
*rewritten* text, which lives in that pipeline's cache and is not in this tree.
This harness measures the raw decompiled bodies, so it is a related population
rather than the identical one. On the population it could build, the yield was
1 of 51.

## What did not convert

The 29 misses are honest negatives, and their shapes say where permutation
stops:

* **Frame shape.** Two `draft002` functions (`fn_0028c2e8`, `fn_006e3464`) differ
  only in prologue and epilogue: the original saves one register
  (`str lr,[sp,#-4]!` / `pop {pc}`), the pinned profile saves two
  (`push {r4,lr}` / `pop {r4,pc}`) for every source spelling tried, including a
  minimal single-function translation unit. That is a compiler configuration
  question, not a source-permutation one.
* **A different constant or field.** `fn_0017d8f8` writes `0` where the original
  loads `-1`; several `synth001` pointer-field shapes address a different field
  offset. No reordering of a wrong constant reaches the original.
* **Boolean normalisation the compiler removes.** `fn_00309afc` and its
  neighbours need the `ands` + `movne` normalisation the original has; the pinned
  compiler proves the mask already yields 0 or 1 and drops it for every
  equivalent comparison or conditional form tried.
* **Register allocation.** `fn_0012e46c` loads its literal into a different
  register than the original. None of the local-grouping rewrites tried changed
  the choice.
* **Larger bodies.** `fn_00130d34` (184 bytes) and `fn_004c10f4` (120 bytes) need
  changes the operator set does not express; the search reduced neither below
  their starting difference.

## Verdict

Permutation is a real, general method for this project, with a measured yield
and a measured boundary.

* It converted 19 of 48 near misses (39.6 %) into byte-exact source, 440 bytes,
  with ordinary C and no fitting. On the population it was given, that is a
  better rate than any other method the project has applied to the same band, and
  it took 70 seconds of compiler time.
* Across both measured populations it converted 19 of 99 near misses (19.2 %):
  the hand-shaped source band converted at 39.6 %, the raw decompiler-draft band
  at 0 of 51. The difference is the shape of the difference, not the search
  budget: the source band's misses are source-shape choices, the corpus band's
  are register allocation and scheduling.
* It is general because the transformations are not specific to these functions:
  the same five operators that won here are the ones the project's human fixes
  used on larger bodies, including the 1,064-byte statement reshape and the
  620-byte predicate that needed a pointer local.
* It is not a substitute for understanding a scheduling difference. More than
  half the near misses, and essentially all of the wider non-exact population,
  need a shape outside this operator set -- a frame choice, a constant, a
  register allocation, or a body rewrite that is not a local permutation. The
  search can only find what it can spell.
* The economics are good where it applies: the first-order neighbourhood is tiny
  (median four mutants) and every match in this run was inside it. A batch of
  hundreds of near misses is minutes of compiler time, not hours.

The honest summary: on the narrow near-miss band the method is worth running
before a person looks at a diff; on the whole remaining population it is not the
method that closes the gap.

## Reproduce

```
python -I toolscripts/permute.py --scan --json work/permute/score/scan.jsonl
python -I toolscripts/permute_search.py --source src/native/wave001/leaves.c \
        --function fn_001648cc --budget 260
python -I toolscripts/permute.py --scan --json work/permute/score/scan-after.jsonl
```

The scan needs `generated/update-content0/code.bin` and `exheader.bin` from a
build of the owner's image; nothing here reads `inputs/` or writes outside
`work/` and `build/`.
