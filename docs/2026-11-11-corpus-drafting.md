# Drafting source from the decompilation corpus

`work/corpus/` holds a complete Ghidra decompilation of the 26,572 functions of
the measured update image. `toolscripts/corpus_draft*.py` turns those drafts into
compilable translation units, measures them by the project's own rule — the
compiled bytes must equal the original extent, byte for byte — and ships only
the ones that match. `src/native/draft001/` is the first harvest.

Nothing here is credited until `build.py` measures it. A draft that does not
match stays in `work/drafter/runs/*/results.json` as a statistic and is never
written under `src/`.

## Pipeline

```
work/corpus/c/<address>.c          raw Ghidra C, one file per function
        |  corpus_draft.py: rename FUN_ -> fn_, type the data objects,
        |  declare the callees, spell the decompiler's pseudo-types
        v
work/drafter/runs/<run>/tus/*.c    one translation unit per batch of functions
        |  corpus_draft_measure.py: armcc 4.1 b1454, the measured profile
        |  (--cpu=MPCore --apcs=/interwork --c99 -O3 -Otime --split_sections)
        v
per-function sections -> selection screen -> placement link at the split's
addresses -> compare each function's extent with the original bytes
        |  corpus_draft_ship.py: keep the exact ones
        v
src/native/draft001/*.c            declared in config/build-units.json
```

The measurement imports `objdiff_objects`, `placement`, `elf_objects` and
`armcc_object`, so a draft is judged by the same code that judges hand-written
source. The verdict is read from the placed image directly, which screens
thousands of drafts in minutes instead of one full `build.py` run per attempt.
The shipped set is then verified by `build.py` itself.

## What a draft changes, and what it does not

The rewrite changes spelling, never computation:

| corpus | draft | why |
|---|---|---|
| `FUN_00100000` | `fn_00100000` | the split's canonical name; a call then resolves against the split |
| `undefined4`, `undefined1`, `byte`, `bool` | typedefs of the C type of that width | the decompiler names a value by width when it cannot recover a type |
| `CONCAT44`, `SUB41`, `ZEXT24`, `CARRY4`, … | macros spelling the same operation | the decompiler's intrinsic vocabulary |
| `DAT_0085abbc` | an `extern` object whose name carries the address | `toolscripts/data_symbols.py` defines it there |
| `software_interrupt(3)` | `__svc(3)` | Ghidra prints the ARM `swi` as a call |
| a callee | `extern undefined4 fn_x();` | an empty parameter list accepts the argument count each call site uses |

A function keeps its decompiled signature: it is the decompiler's own hypothesis
of the original calling convention.

`toolscripts/data_symbols.py` is a new build input. A reference to a data object
the source addresses by name is defined at the address the name carries, exactly
as the split already places functions, and only when that address falls inside a
segment the ExHeader declares initialized. A wrong address would change the
literal-pool word and fail the comparison, so the mechanism can lose a match but
cannot create one.

## Selection: which functions can be byte-exact at all

| class | functions | why it is excluded or kept |
|---|---|---|
| multi-range | 1,731 (1,331 after the 2026-11-12 promotion) | the split gives the function more than one original range; measured since 2026-11-12, and 0 of 30 sample drafts are exact because the decompilation merges the tail-called helper into the caller (see `docs/2026-11-12-extra-range-inventory.md`) |
| already measured | 1,362 | `src/native` defines them; a draft would be a duplicate definition |
| warned | 1,610 | the decompiler truncated control flow; the C is not the whole function |
| string literal | 505 | the literal is rewritten to its original address; measured in the second pass, and never exact |
| indirect call | 202 | calls through `code *` computed from data |
| data reference | 11,440 | measured at scale in the second pass: 0 exact |
| clean | 9,035 | no data, no literal, no label: the best-evidence shape |
| control flow | 708 | labels, `goto` and switch state machines |

## Measured yield

Two runs, both on the measured profile and the user's own image.

**No-data shapes.** 9,743 functions drafted and compiled; 9,273 compiled
(470 rejected by armcc with a real type error in the decompiled body); 1,415
byte-exact; 50,516 bytes. Shipping merged the matches into files of at most 420
lines, recompiled each file, and split any file that did not compile; 1,372
functions in 170 files survived that merge, and `build.py` credited 1,371.

| shape | processed | compiled | exact | bytes exact |
|---|---|---|---|---|
| clean | 9,035 | 8,701 | 1,414 (15.7 %) | 50,440 |
| control flow | 708 | 567 | 1 (0.1 %) | 76 |

| size band | processed | compiled | exact | rate | bytes exact |
|---|---|---|---|---|---|
| < 32 | 1,860 | 1,823 | 780 | **41.9 %** | 14,868 |
| 32–127 | 4,497 | 4,273 | 619 | 13.8 % | 32,660 |
| 128–511 | 2,869 | 2,743 | 16 | 0.6 % | 2,988 |
| ≥ 512 | 517 | 429 | 0 | 0 % | 0 |

**Data-reference shapes.** Two samples on the small end (≤ 48 bytes): 228
processed, 194 compiled, **0 exact**. The functions compile and place, and the
data address resolves, but armcc schedules the stores differently from the
original. A representative case, `fn_0010a868`:

```
original   push {r4,lr}; bl …; mov r4,r0; ldr r0,[pc,#0x18]; mov r1,#0
           str r0,[r4]; str r1,[r4,#0x20]; bl …; mov r0,r4; pop
compiled   push {r4,lr}; bl …; ldr r2,[pc,#0x18]; mov r1,#0
           str r1,[r0,#0x20]; mov r4,r0; str r2,[r0]; bl …; mov r0,r4; pop
```

Same operations, different register allocation and store order. That is what
limits the data shape, not the declaration or the address.

## Second pass (2026-11-12): the three open levers, measured

The first harvest left three bands unmeasured. All three were measured on the
same profile and image, and two of them are now closed with a number rather than
a hope.

| lever | processed | compiled | exact | bytes | rate |
|---|---|---|---|---|---|
| data reference, < 32 B | 1,328 | 1,291 | **0** | 0 | **0.00 %** |
| string literal | 505 | 501 | **0** | 0 | **0.00 %** |
| no-data census (clean + control) | 8,368 | 8,051 | **50** | 1,792 | 0.60 % |

**Data references under 32 bytes are zero, and structurally so.** 1,353
functions are in the class and 1,328 reach the shape filter (25 carry a
`switch`). In the run where 837 compiled and differed, 560 compiled to exactly
four bytes more than the original -- one extra literal-pool word -- and 233 more
ran past the range the split leaves; only 61 had the original length. The clean
shape's 41.9 % does not transfer: the pool word a data reference needs lands
differently from the original's, and no declaration changes that.

**String literals are zero too.** The rewrite is now wired in:
`string_addresses()` reads the image address Ghidra recorded for each literal,
the draft references `DAT_<address>` instead of embedding a second copy, and
`data_symbols.py` places it there. 501 of 505 compile, and none is byte-exact:
260 compile longer and 49 to the same length with different bytes. A
representative case, `fn_0045a5b0`:

```
placed   08009fe5 0020a0e3 eb10a0e3 8811f4ea 38100000
original 0030a0e3 08009fe5 0320a0e1 eb10a0e1 8711f4ea
```

The original loads the string address into `r0` and moves it to the argument
register `r2`; armcc loads it into `r0` as the first argument and moves the other
two. That is scheduling, not the address. Wide literals (`L"…"`) are not in the
reference map at all; 533 corpus functions carry one, and they embed a copy.

**The no-data census yields 50 more exact functions** (1,792 bytes) in
`src/native/draft002/`; `build.py` credits 45 of them (1,616 bytes), because
regrouping into shipped units recompiles and loses five.

**Compile failures: 470 → 158 on the same population.** A controlled A/B over
the same 8,368 selected functions, with only the declaration and rewrite rules
changed, reports 470 rejections under main's rules and 158 under this branch's.
What was wrong:

* `prep()` called an undefined `draftlib` and never wrote the documented text
  cache; it now writes that cache and a return-type table.
* The failure-isolation loop re-queued single-function failures forever, and
  `pending = following` sat outside the `while`, so a run recompiled the same
  units until it was killed. This is why a drafting run appeared to hang.
* Placement linked ~45,000 split and constant symbols on every attempt and
  bisected one giant link. It now links chunks of 192 functions carrying only the
  symbols that chunk's code refers to, and reading back every placed function
  again costs seconds rather than minutes.
* `CONCAT31` carried `CONCAT13`'s formula, so every corpus function that uses it
  (285) computed the wrong value. Both are now spelled by half-width, high half
  first.
* `._N_M_` byte-field reads and writes are spelled as the shift, mask and
  read-modify-write they are (1,177 sites).
* `&DAT_x` on a name declared as an array is rewritten to the array itself; the
  pointer-to-array it used to make was accepted by nothing and caused 974 "must
  be a pointer" errors in the data band alone.
* A callee that is also defined in the same unit is now declared with the return
  type the corpus spells for it, and stays `undefined4` otherwise, so a caller
  that uses a `void`-decompiled result still compiles.
* `software_interrupt(0x..)` becomes a call to a per-number static helper whose
  body is `__asm { svc #0x.. }`; at -O3 armcc inlines it to the one instruction
  the original has. `__svc` is a function qualifier in armcc 4.1, and the
  embedded assembler does not substitute a macro argument, so a literal helper is
  the only route that puts the operand in the instruction.

The 158 remaining failures are decompiler shapes no declaration repairs: `LAB_`
labels whose target it truncated, `in_r0`/`in_s0` register inputs that name no C
object, and struct-member accesses on an `undefined4`. Inventing those would
change what the function computes, so they stay reported as failures.

## What limits the yield

1. **Instruction scheduling.** A decompiled body is semantically equivalent to
   the original but not scheduled like it. Above ~128 bytes the probability that
   two compilations agree falls to zero: 0 of 517 functions at 512 bytes or more
   matched, against 780 of 1,860 under 32 bytes.
2. **Literal pools.** A function that loads a constant carries its pool at the
   end of its extent, and the pool's position must match too. For small
   functions the pool is small enough to land in the same place; for large ones
   it does not.
3. **Decompiler type guesses.** 470 of 9,743 no-data drafts do not compile at
   all: the decompiler emits stack locals that are never declared, truncated
   `goto` targets and struct member accesses on an `undefined4`. Those are
   properties of the decompiled text, and a compile failure is reported as a
   failure rather than repaired by inventing a type.
4. **Multi-range functions** (1,731 before the 2026-11-12 promotion of 417 verified
   function entries, 1,331 after) were measured for the first time on a
   30-function sample: 25 compiled, 0 exact. The extra ranges are mostly
   tail-called helpers that the decompiler merges into the caller, so a
   single-body draft cannot fit the primary extent. The class is an inventory
   issue, not a drafting one; the correction and the armcc experiment are in
   `docs/2026-11-12-extra-range-inventory.md`.
5. **The `armcc` command line.** With 294 units the placement and whole-image
   links exceed the Windows command-line limit; both now pass their object lists
   through a response file.

## Can the pipeline be pushed further

Yes, and the measurements say where:

* **Data references under 32 bytes** were not measured at scale. The 48-byte
  sample is the hardest end of that class; the class has 1,353 functions under
  32 bytes, and the clean shape matches 42 % there. That is the next run.
* **Compile failures.** 470 no-data functions never reached the comparison. The
  dominant causes are recoverable mechanically (a missing `uint3`/`ushort3`
  typedef, a stack local the decompiler forgot to declare).
* **String literals.** The corpus records the exact image address of every
  string it passed to a call, so 505 string-bearing functions can be rewritten
  to reference the original bytes instead of embedding a copy.
* **Type re-inference for near misses.** 16 of 2,869 functions in the 128–511
  band matched; many of the rest differ by one instruction. Re-deriving the
  decompiler's `undefined4` guesses from the call sites is the obvious next
  lever, but it is inference, and it needs its own evidence rule.

What will not work: the matched fraction above 128 bytes is not a flag problem
and not a type problem. A decompiler that emits a correct but differently
scheduled body cannot be nudged into byte equality by more declarations.

**Supervisor calls are measured and closed.** The 504 corpus functions that
contain an SVC site were drafted with the per-number helper on 2026-11-12: 0
new functions are byte-exact. The helper emits the instruction, but the corpus
does not carry the registers the call reads and preserves, so the compiler
frames the call and allocates around it differently. `--shape svc` reproduces
the run; the failure classes and evidence are in
`docs/2026-11-12-svc-class.md`.

## Reproduce

```
python toolscripts/corpus_draft_measure.py --prep                 # feature cache
python toolscripts/corpus_draft_measure.py --shape clean+control --order address
python toolscripts/corpus_draft_measure.py --shape data --maximum 31 --order address
python toolscripts/corpus_draft_measure.py --shape string --order bytes
python toolscripts/corpus_draft_ab.py                             # 470 -> 158 A/B
python toolscripts/corpus_draft_ship.py --run work/drafter/runs/nodata \
       --component draft002 --declare
python build.py --image <your update CIA>
```

`work/drafter/corpus-text.json` is a one-file cache of the corpus C: reading
26,572 small files once costs more than the rest of the pipeline together on
Windows. The A/B in the second pass is `toolscripts/corpus_draft_ab.py`: it
compiles the same 8,368 functions twice, once with main's declaration rules and
once with this branch's, and writes the two failure lists to
`work/drafter/ab-legacy.json` and `ab-branch.json`.
