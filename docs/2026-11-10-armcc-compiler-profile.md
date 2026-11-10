# The measured original compiler profile

**Decision (2026-11-10): compile the reconstruction with ARM Compiler 4.1 build
1454 by default.** It is the best-evidenced original compiler for this image,
not a proven one. The default is recorded in `config/compiler-profiles.json`;
`--compiler-profile clang-21` keeps the former Clang build available, and any
unit may name a different declared profile.

## What was pinned, and where

Only the compiler's identity is committed. The compiler itself is not.

| item | value |
| --- | --- |
| archive | `https://github.com/decompme/compilers/releases/download/compilers/armcc.zip` |
| archive size / SHA-256 | 73,315,488 bytes / `bda0cea5b13a9c3f08322fa76f9f9dcda59bda290f57f1a06e05cd80044fafdb` |
| extraction root | `tools/armcc-4.1-b1454/` |
| `bin/armcc.exe` | 12,531,736 bytes / `ce4b6e8f0a12dc9372351d2b559b4f89dc3250c825f0c9c2bb9865c88bff97db` |
| `include/` | 167 files, 3,148,798 bytes, tree manifest SHA-256 `6cd55781a8416c7a7a7475365ddbe24a725f88733b1994875120099ef1a28931` |
| lock entry | `tools.lock.json` → `armccDistribution` |
| bootstrap | `toolscripts/armcc_bootstrap.py` |
| declared identity | `ARM C/C++ Compiler, 4.1 [Build 1454]` |

`armcc_bootstrap.py` verifies the executable, the header-file count, the header
byte count and a manifest digest of every header before a build uses it. A
different build, a modified header or an extra header file fails verification.
The build fetches the archive only when the active profile needs it and the
file is missing; `--no-download` turns the fetch into a failure, and
`--compiler-profile clang-21` never touches armcc.

The compiler is proprietary ARM software hosted publicly by the decomp.me
compilers project. The repository stores URL, size, hashes and provenance and
commits no compiler file. An operator may use it only where entitled to use ARM
Compiler; `THIRD_PARTY.md` records the same limit. The trusted report job
materializes it from the pinned public URL; the public compile jobs do not.

## How a unit selects a compiler

`config/compiler-profiles.json` declares every profile, the default, each
profile's executable, arguments, compatibility preinclude, system include
directories, supported layout scopes and supported public-header scopes, and
whether the profile is the measured original.

A unit in `config/build-units.json` may declare `compilerProfile`. A unit that
declares nothing uses the default. A unit may declare `layoutProfile` and
`publicHeaderProfile` only if the named profile implements them; an unknown or
unsupported declaration is an error, so naming a profile never silently
weakens what the unit asked for. One unit declares Clang:

| unit | reason |
| --- | --- |
| `src/native/wave013/token_properties.c` | Its 132-entry property table spells UTF-16 names with C11 `u"..."` literals. armcc 4.1 has no C11 character-literal prefix, and no preprocessing spelling turns `u"x"` into a 16-bit literal. It contributes no byte-identical function under either compiler today. Converting it is a recorded reconstruction decision, not a compiler-profile change. |

### The armcc shape adapter

armcc emits a translation unit as one `.text`; the project measures, selects
and links per function. `toolscripts/armcc_object.py` rewrites the armcc object
without touching code bytes: each function symbol becomes a `.text.<symbol>`
section running from its address to the next function symbol (or the end of
`.text`), so an inline literal pool stays with the function armcc placed it
after. Relocations are re-based into the new sections, data sections keep their
bytes, switch-table anchors (`__switch$$`, zero-size function symbols) stay
inside their enclosing function at their rebased offset, and only symbols a
retained relocation uses survive. The measurement therefore sees the compiler's
own output and pool placement, not a recompilation in a different mode.

The profile compiles with:

```
armcc --cpu=MPCore --apcs=/interwork --c99 -Otime -c --gnu
      --preinclude config/armcc-4.1-b1454-preinclude.h
```

`--gnu` enables anonymous struct/union members used by two units. It was
measured to change no executable byte: 265 units compiled both with and without
it produced identical `.text` digests. `config/armcc-4.1-b1454-preinclude.h`
translates the C11/Clang spellings the reconstruction uses and completes armcc's
predefined environment (`__SIZEOF_POINTER__ = 4`, `__arm__ = 1`) so the sources
select the 32-bit ARM branch they were written for. Those definitions are
compiler-environment compatibility, not source changes.

## Compile coverage of `src/native`

Measured 2026-11-10 with `toolscripts/armcc_coverage.py` on the 269 native `.c`
files. "Plain" means the armcc profile without the compatibility preinclude;
"compat" means exactly what the build compiles. A file that compiles plain is
already written in armcc's dialect.

| outcome | files |
| --- | --- |
| compile unmodified, without the preinclude | 18 |
| compile only with the compatibility preinclude | 250 |
| cannot compile at all under armcc 4.1 | 1 |
| compile with the profile (preinclude + `--gnu`) | **268 / 269** |

The one blocking file and construct:

| file | blocking construct |
| --- | --- |
| `src/native/wave013/token_properties.c` | C11 `u"..."` UTF-16 string literal; armcc reports `identifier "u" is undefined` and has no character-literal prefix |

Without `--gnu`, two more files fail on anonymous struct/union members:
`src/native/wave072-construction/device072.c` and `pool072.c`; armcc reports
`expected an identifier` and then `struct ... has no field ...`. All three
constructs are compiler-dialect issues, not source/header inconsistencies.

Configured build coverage is 268 units: 267 compile with armcc, and
`token_properties.c` compiles with its declared Clang profile. No source file
was changed to reach this coverage.

## Measured gain

Both builds use the same source, split, target objects, comparator and image
link; only the compiler profile differs. The Clang figure was re-measured on the
same tree before the switch.

| measure | Clang 21 | armcc 4.1 b1454 | change |
| --- | --- | --- | --- |
| `matched_code` | 5,176 | **7,352** | +2,176 (+42.0 %) |
| `matched_functions` | 415 | **514** | +99 (+23.9 %) |
| units with measured functions | 97 | 97 | — |
| functions placed in the linked image | 497 | 559 | +62 |
| image functions that differ from the original | 82 | 45 | −37 |

Both directions were enumerated by function identity:

| set | functions | bytes |
| --- | --- | --- |
| matched by both compilers | 413 | 5,140 |
| matched by armcc only | **101** | **2,212** |
| matched by Clang only | 2 | 36 |
| union | 516 | 7,388 |

The two Clang-only functions are understood, and neither suggests Clang is the
original compiler:

* `fn_00309c0c` (20 bytes) is the known control miss from the compiler sweep.
  The reconstruction spells `& ~0x1u`; armcc emits `bic #1` where the original
  has `and #0xfe`. Respelling that one constant makes armcc reproduce it and ten
  more functions with no regressions; the difference is the reconstructed
  constant, not the compiler.
* `fn_00235c74` (16 bytes, `src/native/wave001/leaves.c`) is the last function
  in its unit. Its split extent includes trailing literal-pool bytes; the two
  compilers place that pool differently, so armcc's extent does not equal the
  original arrangement. This is a source/pool-placement measure, not evidence
  for Clang.

The gain is therefore not a swap of one arbitrary compiler for another: armcc
reproduces 101 functions Clang cannot, Clang reproduces 2 that armcc cannot, and
the 2 are explained by a known constant spelling and a trailing-pool extent.

## CI and the fallback

* `build.yml` (trusted report job) materializes armcc from the pinned public
  archive and records both compiler identities in `report.json` and
  `object-map.json`: profile id, executable SHA-256, declared identity and the
  compiler's own banner line.
* `compile.yml` and `pr-gate.yml` remain public, source-only, pinned-Clang jobs.
  They neither fetch nor execute armcc, so a fork without the proprietary
  compiler still builds and tests.
* `python build.py --compiler-profile clang-21` reproduces the former Clang
  report and requires no proprietary tool. `--no-download` refuses to fetch a
  missing compiler.
* `toolscripts/check_report.py` now refuses a report that records no compiler
  identity or whose identity differs from the objects it measured.

## Limits

* The verdict is **best-evidenced, not proven**. The evidence is the bounded
  compiler sweep in `work/compiler-sweep/REPORT.md` (untracked): 63 of 526
  Clang-negative corpus functions reproduced exactly by armcc 4.1 b1454 versus
  11–12 by Clang; 411 of 412 accepted control spans reproduced, the twelfth
  being the `~0x1u` spelling above. No armcc build reproduces a corpus function
  of 128 bytes or more, and the build number within the 4.1 line cannot be
  separated by the corpus.
* Profile coverage is a compile-coverage measure, not a byte-match measure. A
  file that compiles under armcc may still be an inexact reconstruction.
* The splitter defines a function's compiled extent as running to the next
  function symbol. That is what a linker places and what includes trailing
  pools, but it is a representation choice recorded here rather than an armcc
  symbol-size claim.
* The compatibility preinclude erases `_Static_assert`, `_Alignas` and
  `_Atomic` spellings. Erasure can only change layout, and a layout change can
  only break a match, never create one; the measured matches are still real
  byte equality.
