# What instruction-shape synthesis can reach, and what it cannot

Measured 2026-11-11 on the `-O3 -Otime` armcc 4.1 profile, against the retained
share of the split (25,319 functions / 5,014,740 text bytes at measurement
time). This note records three bounds so the next pass does not re-derive them.

## 1. The method is bounded below 128 bytes

`toolscripts/native_synth_run.py` was run with `--limit 1024`; raising the limit
from 256 changed the number of classified functions by exactly zero. Every one
of the 945 candidates the classifiers prove is under 128 bytes. The pool model,
the call model and the arithmetic model are size-agnostic -- the instruction
shapes they prove simply do not occur in larger functions.

Retained population by size band, and the part of it with no conditional branch
(the only part a shape emitter can reach):

| band | functions | bytes | straight-line, no branch |
|---|---:|---:|---:|
| 0-127 | 14,632 | 825,012 | 2,552 / 138,076 B |
| 128-255 | 4,910 | 882,068 | 234 / 39,624 B |
| 256-511 | 3,435 | 1,216,972 | 53 / 17,528 B |
| 512-1023 | 1,794 | 1,285,848 | 0 |
| 1024-4095 | 547 | 799,236 | 0 |
| 4096+ | 1 | 5,604 | 0 |

In the 128-1023 bands, 3,327,736 of 3,384,888 bytes (98.3%) contain a
conditional branch. Reconstructing that code requires reproducing control-flow
layout (if/else block order, condition inversion, branch range), which is a
decompiler problem, not an instruction-shape problem. No additional small
family changes this ratio.

## 2. The call/frame band has no volume to transcribe

The reachable call/frame class is 1,621 functions / ~113,000 bytes spread over
1,371 distinct instruction templates -- about 1.2 functions per template, so
there is no repeated shape to name. Four frame shapes do repeat and were
implemented:

| family | candidates | byte-exact |
|---|---:|---:|
| call_store_constant | 46 | 42 |
| call_chain | 29 | 29 |
| call_initialise_record | 17 | 15 |
| call_clear_record_field | 9 | 9 |
| call_return_argument | 5 | 5 |
| call_store_constant_zero | 2 | 2 |

108 candidates, 100 byte-exact, ~2,100 bytes. Beyond this, matching the
original's callee-saved register set and store order from the instruction
pattern is not derivable: armcc's allocation depends on source-level types and
evaluation order that the instructions do not carry.

## 3. Some remaining near-misses are compiler-scheduling choices

`pool_record_store_run` keeps 51 of 119 candidates. The 68 misses are runs where
the original groups adjacent stores into `stm` or orders a zero store before a
constant store, while source-level C with the same fields makes armcc choose
separate `str`s or the opposite order. No readable spelling reaches those
bytes; they are not transcribed by adding variants.

## What the bound leaves

The 2026-11-11 pass credited 810 byte-exact functions / 13,708 instruction
bytes from shapes: 349 already present plus 461 new (8,040 bytes), which is
+1.14 points of `matched_code`. The measured families and their keep rates are
in `work/synth/oracle.json` when the pass is re-run. The next method needs
control-flow reconstruction; extending the shape families further returns
single digits per family and does not change the bound above.
