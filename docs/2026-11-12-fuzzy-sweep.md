# Fuzzy-first sweep of the whole corpus

The project's report states a `fuzzy_match_percent` for every function it measures.
This sweep makes that number the *selection* signal for the first time: every
decompiled corpus draft is compiled with the measured armcc profile, placed at
its original address, and scored by the pinned objdiff CLI against the original
bytes. The population is 26,989 corpus origins, not a sample.

## What was measured

`toolscripts/fuzzy_sweep.py` compiles the corpus drafts in groups of 60 (4,000
lines), bisecting a failing group until the draft at fault is isolated, and then
places every draft that compiles at the address `config/symbols.txt` gives it.
The placement image is carved into a target object (original bytes) and a base
object (compiled bytes) per chunk and handed to `objdiff-cli report generate`, so
the percentage in `work/fuzzy/rows.jsonl` is the CLI's own number. A function
whose compiled extent runs past the room before the next original range is placed
alone, which keeps the fuzzy measurement without pretending the build could place
it.

| outcome | functions |
|---|---|
| corpus origins attempted | 26,989 |
| compiled and scored by objdiff | **23,491** (87.0 %) |
| compile-failed (decompiler shapes) | 1,229 (4.6 %) |
| unrepresentable (references outside the split) | 2,262 (8.4 %) |

The compile run made 9,130 compiler invocations: 26,987 drafts at 60 per unit plus
the bisection needed to isolate 1,229 failures.

## Fuzzy distribution

Measured population, and the actionable population that excludes functions the
configured source already defines (the 1,473 shipped below are included in the
actionable counts as they were before shipping):

| fuzzy | measured (23,491) | actionable (20,396) |
|---|---|---|
| ≥ 99 % | 4,263 | **1,875** |
| ≥ 95 % | 5,215 | **2,749** |
| ≥ 90 % | 6,495 | 3,919 |
| ≥ 75 % | 10,615 | 7,712 |
| ≥ 50 % | 16,137 | 13,138 |

The band the brief asked about is not tiny: 2,749 unimplemented functions score at
≥ 95 % and 1,875 at ≥ 99 %.

## The first-compile harvest

Applying the project's own credit rule -- instructions equal, compiler-placed tail
equal to the original bytes after them, and the whole extent inside the room the
split leaves -- 1,473 unimplemented functions were already byte-exact on the
first compile. They are small:

| band | exact functions | exact bytes |
|---|---|---|
| < 32 | 555 | 11,516 |
| 32-127 | 916 | 44,712 |
| 128-511 | 2 | 336 |
| ≥ 512 | 0 | 0 |

The 128-511 band -- the project's measured hunting ground -- yields 2 functions,
0.03 % of the 6,875 measured there. The 0.24-0.41 % the project had been getting
by sampling is not improved by sorting; the exact drafts are almost all tiny
functions whose decompiled body is already the original body.

## Permuter conversion by band

`toolscripts/fuzzy_search.py` spent a budget of 64 compiles (depth 2, beam 6) per
function on the non-exact ≥ 95 % near misses, highest percentage first. The clock
stopped after 1,031 attempts; 18 matched.

| starting fuzzy | attempted | matched | bytes | conversion |
|---|---|---|---|---|
| ≥ 99 % | 402 | 4 | 336 | **1.0 %** |
| 98-99 % | 343 | 10 | 488 | **2.9 %** |
| 95-98 % | 286 | 4 | 172 | **1.4 %** |
| **≥ 95 % total** | **1,031** | **18** | **996** | **1.7 %** |

The 95-98 row is partial (286 of 531); the clock ended there. The permuter's
successes were single ordinary rewrites -- `condition-commute` (4), `local-inline`
(4), `swap` (3), and one each of the remaining shapes -- not deep chains.

Cost: 36,732 compiles for 18 matches, 2,041 compiles per match. The first-compile
harvest cost 9,130 compiles for 1,473 matches, 6.2 per match.

## Shipped credit

1,491 functions / **57,560 bytes** are in `src/native/fuzzy001/`, 54 files. Every
one was recompiled inside the exact file it ships in, and dropped if it no longer
matched; none were dropped. Nothing is fitted: the files contain ordinary C
compiled by the measured profile. Declared in `config/build-units.json` with its
true transitive header closure; the component root is in `nativeComponentRoots`.

## Verdict

Fuzzy-first is **not** the consistent-progress engine. The ≥ 95 % band is large
(2,749 actionable functions), but the permuter closes 1.7 % of it at 2,041
compiles per match -- the opposite of the 30-40 % premise. The near misses at
≥ 99 % are dominated by register allocation and instruction scheduling, which the
19 source rewrites cannot express; even at 99 % the band convertes at 1.0 %.

What the sweep did buy is a one-time harvest: 1,473 drafts the project's sampling
never looked at were already byte-exact, worth 56,564 bytes, and the report can
credit them immediately. That is a real 51 % increase over the 110,956 matched
bytes the build report records, but it is a one-off: those functions are exact
because they were trivial, not because the method reached them. On the 128-511
band that matters for volume, fuzzy-first found 2 functions.

The honest summary: use the fuzzy distribution as a **triage and verification
queue** -- it found the 1,473 free matches and it orders what remains -- but do
not budget it as a production converter. The last one to three words are still
armcc's choice of registers and schedule, not the source's.

## Reproduce

```
python -I toolscripts/fuzzy_sweep.py --prep
python -I toolscripts/fuzzy_sweep.py --run --jobs 14
python -I toolscripts/fuzzy_sweep.py --summary
python -I toolscripts/fuzzy_search.py --minimum 95 --budget 64 --jobs 12 --minutes 25
python -I toolscripts/fuzzy_ship.py --component fuzzy001
python -I toolscripts/fuzzy_report.py
python -I run_checks.py --quick --only references compile tests
```

`work/fuzzy/rows.jsonl`, `work/fuzzy/report.json` and `work/fuzzy/summary.json`
hold the per-function measurements; they are gitignored build artifacts.
