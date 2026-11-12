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
| multi-range | 1,710 | the split gives the function two or more original ranges; a relocatable object emits one contiguous body, so it cannot match |
| already measured | 1,362 | `src/native` defines them; a draft would be a duplicate definition |
| warned | 1,610 | the decompiler truncated control flow; the C is not the whole function |
| string literal | 505 | the literal has to live at its original address; the reference map exists but is not wired in yet |
| indirect call | 202 | calls through `code *` computed from data |
| data reference | 11,440 | measured, and almost never exact: see below |
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
4. **Multi-range functions** (1,710) can never be byte-exact under this
   measurement, because a relocatable object emits one contiguous body while the
   original splits the function.
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

## Reproduce

```
python toolscripts/corpus_draft_measure.py --prep            # feature cache
python toolscripts/corpus_draft_measure.py --shape clean+control --order bytes
python toolscripts/corpus_draft_ship.py --run work/drafter/runs/nodata --declare
python build.py --image <your update CIA>
```

`work/drafter/corpus-text.json` is a one-file cache of the corpus C: reading
26,572 small files once costs more than the rest of the pipeline together on
Windows.
