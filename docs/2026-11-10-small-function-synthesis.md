# Pattern-directed synthesis of small native functions

Small functions dominate the measured image: 14,939 still-retained functions are
under 128 bytes, but they hold only about 12% of the text. They are also the
functions whose instruction extent is short enough to prove a shape from, so
they are the batch where source can be produced without knowing the engine.

The synthesiser treats a function's **complete instruction extent** as the
claim. A shape is proved only when every instruction from the entry to the
`bx lr` matches one pattern: no literal-pool load, no call, no branch, no stack
frame, no system or floating-point instruction, and no partial match. The record
offsets, access widths, strides and constants the emitted C uses are read from
those instructions, never guessed. A candidate then has to compile to the
original bytes with the measured compiler profile; a candidate that does not is
deleted from the source, not kept as a draft.

## Tooling

| file | role |
| --- | --- |
| `toolscripts/native_synth_shapes.py` | instruction-pattern classifier for the fixed-size families |
| `toolscripts/native_synth_arithmetic.py` | linear-form evaluator for address arithmetic (index, stride, offset, pointer chains) |
| `toolscripts/native_synth_emit.py` | canonical C, one file per family, sharded under the line limit |
| `toolscripts/native_synth_run.py` | `census` / `emit` / `oracle` / `manifest` steps |

The oracle compiles with the build's own profile, argument vector and armcc
split, and compares each function's compiled bytes with its original extent.
Byte equality is the only acceptance test; there is no similarity threshold.

## Result

| step | functions |
| --- | --- |
| retained functions under 128 bytes | 14,939 |
| classified into a proved shape | 263 |
| emitted candidates | 263 |
| matched byte-for-byte and kept | **227** |
| matched bytes | 4,084 |

The build reports the change directly:

| measure | before | after |
| --- | --- | --- |
| `matched_functions` | 673 | **900** |
| `matched_code` | 9,556 | **13,640** |
| retained functions | 25,855 | 25,628 |

## Families and success rate

| family | candidates | matched | rate |
| --- | --- | --- | --- |
| indexed getter (record + index * stride + offset, then load) | 57 | 54 | 94.7% |
| zero-store run (one constant, ordered stores, mixed widths) | 51 | 46 | 90.2% |
| indexed address (returns record + index * stride + offset) | 29 | 29 | 100% |
| empty function (body is only `bx lr`) | 19 | 19 | 100% |
| pointer store (through a pointer held in the record) | 14 | 4 | 28.6% |
| record address advanced by a constant | 14 | 14 | 100% |
| store through a pointer, constant value | 13 | 9 | 69.2% |
| single-field setter | 12 | 10 | 83.3% |
| adjacent two-word setter (`stm` of two arguments) | 12 | 12 | 100% |
| single-field getter | 11 | 9 | 81.8% |
| conditional field store (read, compare, store) | 9 | 9 | 100% |
| pointer getter (pointer field, then load) | 8 | 3 | 37.5% |
| field equality test (conditional moves to 1/0) | 6 | 6 | 100% |
| field increment in place | 3 | 2 | 66.7% |
| two-word copy (`ldm`/`stm` from a source argument) | 3 | 0 | 0% |
| constant store run | 1 | 1 | 100% |
| indexed store | 1 | 0 | 0% |

What the table says about extending further: fixed-shape record access and
address arithmetic pay; anything that depends on armcc's register allocation
(pointer fields, pointer stores) does not, because the source cannot spell the
register choice the original made. The two 0% families need a structure
assignment or a different base form than the emitted expressions used.

## Why the well is shallower than "under 128 bytes" suggests

Of the 14,939 retained functions under 128 bytes:

| shape | functions |
| --- | --- |
| not a leaf (ends in `pop`, or a tail call) | 10,129 |
| loads from the literal pool (needs a global this tree does not own) | 2,336 |
| leaf, but no proved pattern | 1,112 |
| classified | 263 |
| uses a system or floating-point instruction | 311 |
| contains a call or branch | 306 |
| Thumb mode (not modelled) | 205 |
| uses a stack frame | 187 |
| operand form the fixed matchers reject | 90 |

Only 1,333 of the population are position-independent straight-line leaves at
all, and most of those compute an address rather than reading a plain field.
The mechanical batch is real, but it is the address-arithmetic half of that
subset, not the whole size band.

For the same reason the 128–256 byte band was not extended: of its 4,942
retained functions, 4,643 are not leaves, 123 use a stack frame, 65 load from
the literal pool, 57 use VFP or a system instruction, 21 are Thumb, 21 contain
a call or branch, and 11 are plain leaves with no proved pattern. The
classifier proved **zero** candidates there, so the band was left alone.

## Rejections

36 of the 263 candidates failed the oracle: 27 compiled to a different extent
than the original and 9 to the same extent with different bytes. Both are
compiler choices the source cannot force:

* armcc reorders and coalesces stores, so a mixed-width zero-store run in an
  order the original used cannot always be reproduced;
* for a constant stored through a pointer field, armcc picks the opposite
  register allocation from the original unless a return value pins a register;
* a two-word copy is emitted as `ldm`/`stm` for a structure assignment, not for
  two scalar assignments, so the scalar spelling used here is 8 bytes longer.

The per-function verdicts, with the family and the reason, are written to
`work/synth/oracle.json` by the oracle step. They are not committed: they name
original addresses and are working data, like every other build product.

## Reproducing the run

```sh
python toolscripts/native_synth_run.py census  --limit 128
python toolscripts/native_synth_run.py emit    --limit 128
python toolscripts/native_synth_run.py oracle  --limit 128
python toolscripts/native_synth_run.py manifest
python build.py --image PATH/TO/DQMJ3P_Update.cia
python -I run_checks.py --quick
```

`census` and `emit` rewrite the whole candidate tree from the image; `oracle`
re-emits, compiles, compares and deletes everything that does not match;
`manifest` (re)declares the surviving files in `config/build-units.json`.

## Limits

A shape is a claim about instruction pattern, not about meaning. The generated
signatures say `record`, `index` and `value` because those are the argument
registers the instructions use; they do not claim which game record is at the
address. The family table is a measurement of one compiler profile, and the
yield would change with the profile rather than with the pattern set.
