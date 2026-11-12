# The full decompilation as the source tree

The owner's direction is that the repository ship the full decompilation and let
the build calculate what percentage of it is byte-identical. This change does
that.

## What the tree is now

`src/native` holds the game's native functions as plain C. Every function is
source, written by the same pipeline, with the same unit role (`source`). There
is no unit role that says exact, draft, candidate or matching, and no
per-function record of match state anywhere in the tree. The old selected
`src/native/draft001` and `draft002` directories are gone: their functions are
now part of the uniform emission, so no unit is a selected subset of the corpus.

The split has 26,992 functions. 1,708 of them are implemented by the earlier
hand-written source that predates this change; 26,989 have a decompiled body in
`work/corpus`. The emitter rewrites and writes every corpus function that the
existing source does not already define, and lists every function it cannot
compile in [the residual document](2026-11-12-corpus-residual.md). Functions the
corpus itself could not decompile are listed there too.

## How the source is generated

The generator is committed with the tree, so this is not a one-off hand edit:

| file | job |
| --- | --- |
| `toolscripts/corpus_full_prep.py` | reads the corpus once and derives data declaration classes, return types and string addresses |
| `toolscripts/corpus_full_shape.py` | classifies data uses, colours functions whose declarations would conflict, packs each colour into units, orders callers before callees |
| `toolscripts/corpus_full_emit.py` | rewrites bodies, declares callees and data, compiles every candidate unit with clang 21 and armcc 4.1, splits or repairs failures, writes only units both compilers accept |
| `toolscripts/corpus_full_declare.py` | declares the written units in `config/build-units.json` under one role, and checks the source census |
| `toolscripts/corpus_full_residual.py` | writes the absent-function document from the emitter's report |

The rewrites are mechanical and documented in `corpus_draft.py` and the emitter:
`FUN_<address>` becomes the split name `fn_<address>`; `DAT_<address>` and
string literals become references to the data symbol carrying the original
address; decompiler byte-fields become shifts and masks; sub-word helpers,
`CONCAT`/`SUB`/`ZEXT`/`SEXT`, `svc`, undefined-width types and the decompiler's
intrinsic names are spelled in the shim every unit includes. No body is fitted,
no instruction is patched and no original byte is embedded.

## What the build reports

`build.py` compiles the whole tree with the measured compiler profile, links the
placed image and compares every function's bytes with the user's own original
image. The report's `matched_code` and `matched_functions` are computed from
those comparisons; they are not maintained anywhere by hand.

| figure | before this change | after |
| --- | ---: | ---: |
| functions measured by the build | 3,131 | FILL |
| functions emitted by this pipeline | 0 | FILL |
| `matched_functions` | 2,904 | FILL |
| `matched_code` (bytes) | 135,872 | FILL |
| units compiled | 339 | FILL |
| build wall time | ~6 min | FILL |

The before figures are the same commit before the emission, measured by the same
`build.py` and the same image.

## What this is and is not

This is a complete native decompilation compiled from source. It is not a
byte-identical recreation: the build reports the real byte-match percentage, and
that percentage is small because a decompiler's C and the original compiler's
code generation are different descriptions of the same behaviour. The repository
claims only what `build.py` measures, and the measurement is reproducible by
supplying the owner's own update image.

## Residual

The functions the emitter cannot compile are not hidden behind a label. They are
absent from `src/native` and enumerated with the split address, mode, size and
the compiler's own reason in
[2026-11-12-corpus-residual.md](2026-11-12-corpus-residual.md).
