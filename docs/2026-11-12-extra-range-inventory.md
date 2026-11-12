# The extra-range inventory: tail-called helpers, not cold blocks

`config/symbols.txt` recorded 2,343 original ranges outside their owner's
contiguous extent (the `+` form) on 1,731 functions. `docs/2026-11-11-corpus-drafting.md`
called that class unreachable because "a relocatable object emits one contiguous
body". That explanation was wrong, and the measurement that followed the
correction is bigger than a drafting rate.

## The experiment: what armcc 4.1 can and cannot express

Compiled with the measured profile (`--cpu=MPCore --apcs=/interwork --c99 -O3
-Otime --gnu --split_sections`):

| source shape | object result |
|---|---|
| ordinary function with calls and a cold branch | one `i.ordinary` section |
| `__attribute__((section(".text.attr_fn")))` | the whole function in `.text.attr_fn` |
| `#pragma arm section code=".text.pragma_fn"` | the whole function in `.text.pragma_fn` |
| a `noinline` helper called by a wrapper | one `i.` section per function |
| `return tail_body(x, 5);` | `mov r1,#5; b tail_body` (relocatable `R_ARM_JUMP24`) |

So **one C function is exactly one section**: the attribute and the pragma move a
whole function, and `--split_sections` gives every function its own section, but
no attribute or pragma splits a function's own code. A single contiguous body can
therefore never fill two extents.

That does not close the class, because the two extents are not two halves of one
function. `fn_00106908` is the minimal example:

```
0x00106908  ldr r0, [pc]      ; 8-byte primary
0x0010690c  b   #0x10b2a4     ; tail branch
0x0010b2a4  ldr r1, [pc, #4]  ; 12-byte "+" extra
0x0010b2a8  str r0, [r1]
0x0010b2ac  bx  lr
```

The first loads an address and tail-calls; the second stores it and returns.
Compiled as two source functions -- the wrapper plus a `noinline` helper -- and
linked at those two addresses, both ranges are byte-identical, including their
literal pools (12/12 and 16/16 bytes). The extra's entry is not a cold block: it
is a function the original source had, which the census folded into its caller
because a tail call is a `b`, not a `bl`. Nothing in the image `bl`s an extra
range (2,343 of 2,343 are branch-only), which is exactly why Ghidra never saw the
entry.

## Why the corpus cannot produce the split

Ghidra decompiles the caller and the tail-called helper as one function, so a
corpus draft is one body containing both. Measured on 30 multi-range functions
drawn from `work/corpus` (smallest, address-spread and most-extra-ranges), after
the drafter stopped excluding the class:

| verdict | functions | exact remaining difference |
|---|---|---|
| exact | **0** | none |
| unrepresentable | 21 | 11 compile past the primary range; 10 reference symbols the split does not place |
| differs | 4 | lengths +4/-4/-8/+36, first differing byte at 0x08/0x00/0x00/0x48 |
| compile failed | 5 | armcc rejected the decompiled text (unrelated decompiler artefacts) |

The 25 that compiled are the merged body: they cannot fit an 8- or 12-byte
primary extent, and they never will. The class is not blocked by the object
format; it is blocked by the decompiler's function boundary.

## The inventory correction

`toolscripts/extras_inventory.py` tests each extra against the difference that
matters. An extra is a function entry when a branch from a function body lands on
its first byte, it does not branch back into its owner's extent, every
callee-saved register it uses is saved by its own prologue, it does not write a
frame it did not create, and it ends in a return or a tail branch. A range that
fails on the frame tests is the owner's own code. The test is conservative: a
range that can be read both ways stays an extra.

| category | ranges | bytes |
|---|---:|---:|
| function entry, promoted | **417** | 19,616 |
| continuation (owner's frame, back-edge or interior branch) | 1,720 | 728,616 |
| unreferenced: no branch from any function body lands on it | 95 | 4,472 |
| return island (a bare `bx lr`/`pop {pc}` shared by callers) | 65 | 260 |
| other (ends uncleanly, no frame evidence) | 28 | 512 |
| interworking veneer (`add ip, pc, #n` / `bx ip`) | 6 | 48 |
| absolute jump slot (`ldr pc, [pc, #-4]`) | 6 | 24 |
| entered by fallthrough | 4 | 60 |
| undecodable | 2 | 188 |
| **total** | **2,343** | **753,796** |

The 417 promotions re-partition the split; they do not move a byte:

| | functions | primary bytes | extra bytes | owned bytes |
|---|---:|---:|---:|---:|
| before | 26,573 | 5,107,786 | 753,796 | 5,861,582 |
| after | **26,990** | 5,127,402 | 734,180 | **5,861,582** |

`config/promoted-extras.json` records every promoted range and its owner, and
`tests/test_promoted_extras.py` checks the arithmetic and that each entry is now
a primary of the same address, mode and size. The remaining 1,926 extras are
ownership-only and never earn source credit; the count is the stated residual.

The corrected denominator is **26,990 functions**. Every published function
percentage measured against 26,573 was measuring against a denominator the image
does not support; `project.json`, `config/symbols.md` and the README carry the
corrected figure. Historical snapshot documents keep their own dated numbers.

## Re-baselined measurement

`build.py` against the measured image, with the corrected split:

```
split:     26,990 functions (5,127,402 primary bytes, 734,180 extra-range bytes)
compiled:  2,891 functions from source (115,664 instruction bytes, 19,700 data bytes),
           2,832 byte-identical
retained:  24,099 functions, 6,915,916 text bytes, 1,313,276 data and bss bytes
image:     differs from the original in 59 functions
report:    total_code=7,051,280 matched_code=112,572 matched_functions=2,832
```

## What remains

The promoted entries have no corpus text: the corpus was exported for the old
entry set. `toolscripts/extras_inventory.py --seed-from-manifest
config/promoted-extras.json --seeds work/corpus-export-promoted-seeds.json`
writes the 417 entries in the corpus-export seed schema; the Ghidra export then
needs the same `analyze`/`export` phases with that seed file, because defining a
function at a promoted address also shortens its parent's body in the database.
The exported corpus is gitignored, so the split change does not depend on it --
but the drafter cannot reach the 417 until the export has run.

They are the easy end of the yield: 19,616 bytes over 417 entries, median 40
bytes, clean leaves and setters. The residual 1,926 need a different argument:
they are continuations of an owner's body, and the evidence that they are not
function entries is their own use of a frame they did not create.

## Reproduce

```
python toolscripts/extras_inventory.py --report work/extras.json
python toolscripts/extras_inventory.py --seed-from-manifest config/promoted-extras.json \
       --seeds work/promoted-seeds.json
python -m unittest tests.test_promoted_extras
python build.py --image <your update CIA>
```
