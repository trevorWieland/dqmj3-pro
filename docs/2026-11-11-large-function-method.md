# Large-function reconstruction: the method that finished the 1,064-byte unpack

**Result this records.** `fn_001b1548` (0x001b1548, 1,064 bytes, 266
instructions, packed stat-record unpack) is byte-identical to the original
under the `armcc-4.1-b1454 -O3 -Otime` profile. It was 1,056 bytes before, so
the profile change alone did not finish it: the last two instructions came from
matching the original's **statement shapes**, not from the compiler. The earlier
large-function sample concluded from this same function that the difference was
"instruction selection and register allocation" and therefore a compiler wall.
It was neither; it was four source-shape facts, and each one is mechanical.

This document is the checklist. It is written so the next lane does not have to
rediscover them.

## The loop that works

1. Read the complete original disassembly, not a decompiler's output. Every
   branch target, stack slot, PC-relative load and callee address is in it.
2. Write the body from the disassembly, then compile it with the build's own
   profile: a single file, the build's `compiler_argv`, `armcc_object.split`,
   and a diff of the compiled function's instructions against the original's.
   Do not run the full build for shape iteration.
3. Diff. Classify every difference as one of:
   * **reconstruction error** — wrong offset, wrong constant, wrong order;
   * **shape** — the same operation written differently in C;
   * **compiler choice** — the same C produced different registers/schedule.
   Almost every difference that survives a complete reconstruction is shape.
4. Change one statement at a time and re-diff. A change that moves the aligned
   count up is a shape fact; keep it and write it down.

## Shape facts that generalise

These four closed `fn_001b1548`; they are the first things to try on any large
function that is "two instructions short".

### 1. A pointer live across a call must stay live in the source

The original keeps the record pointer in a callee-saved register because it
reads `record[0x18]` **after** the `fn_006f94f4` call. The draft had introduced
`const StatWord18 *word18 = record + 0x18` and used it after the call, so armcc
kept *that* pointer instead (in r6) and let the record pointer die in r1. The
fix is not to add a callee-saved local: it is to express the post-call read
through the same pointer the original used, i.e. inline the cast at each use.
Rule: **if the original reads a base pointer after a call, express every later
use through that same base pointer; do not cache derived pointers.**

### 2. `and`+`lsr` versus `lsl`+`lsr`

An unsigned bitfield read compiles to `lsl #(32-s-w); lsr #(32-w)`. The original
uses `and #mask; lsr #s` for three one-bit fields. Write those as
`(word & mask) >> shift` — the mask is a constant the assembler can encode, and
armcc emits the `and`+`lsr` pair. Multi-bit fields stay bitfields; a field that
starts at bit 0 is just `word & mask` with no shift.
Rule: **single-bit and bit-0-aligned fields are masks, not bitfields.**

### 3. An adjacent pair copied together is one copy in the source

Two adjacent word moves compile to two `ldr`/`str` pairs. The original has
`ldrd r2, r3, [r5, #4]; stm ip, {r2, r3}` — one 8-byte transfer through a base
register. Writing the pair as one `u64` assignment (or one struct assignment)
reproduces exactly that: armcc materialises the destination base in a scratch
register and emits `ldrd` + `stm`.
Rule: **two adjacent words copied from one object to another are one 8-byte
copy; write it as one.**

### 4. Call arguments are hoisted at the original's statements, not at the call

The original computes `out + 0x108` and `record + 0x0c` at particular points
far from the `bl`. The draft computed them at the call, so the register
allocator chose different registers for the whole surrounding block. Declaring
the two pointers as locals **at the source position where the original computes
them** reproduced both the hoisting and the register allocation.
Rule: **when the region around a call differs only by registers, move the
argument's pointer computation to the statement position the original uses.**

## Two more, from the same family

* **A signed comparison is a type, not a cast.** The clamp was `clamped > 3`.
  With `u32 clamped` armcc emits `movhi`; with `s32 clamped` it emits `movgt`,
  which is what the original has. Match the comparison's signedness first.
* **Store twice, unconditionally.** The original stores the clamped value, then
  `movgt`s the clamp, then stores again unconditionally. Writing
  `if (x > 3) x = 3;` and then one store emits a conditional store (`strgt`).
  Writing `store(x); if (x > 3) x = 3; store(x);` emits the original's
  unconditional pair.

## What is not a shape fact: the aggregate-address wall

SetPop_ (`fn_00139738`, 556 bytes) stays a draft and is worth recording as a
genuine compiler wall. Its argument block is a declared aggregate (the stack
slot map 0x0c..0x24 is the declaration order of the fields), and the original
addresses every out-parameter as a direct `add r2, sp, #imm` in a 0x28 frame
saving only r4. armcc 4.1 b1454 instead caches the aggregate base
(`add r5, sp, #0xc`, frame 0x2c, saves r5) for every aggregate form tried:
declared struct, byte buffer, two structs, `s32` array, C++ mode, -O1/-O2/-O3,
with and without `--gnu` and `--split_sections`. Separate locals do not cache a
base, but armcc places the first address-taken local in the top slot, and that
is the `-7` argument, so separate locals cannot reproduce the original's slot
map either. That is one code-shape decision the pinned profile does not
reproduce; it is not a comprehension failure and it should be re-tested only if
the measured compiler changes.

## Cost

For `fn_001b1548`: two hours of the five-hour window, of which roughly one
third was understanding (record layout from the shifts, the two conditional
paths, the call's two-argument copy) and two thirds was the four shape facts
above, found by about fifteen compile-and-diff iterations. Once the facts are
known, the same work on a function of this family is mostly transcription:
`fn_002eccc8` (580 bytes, 142 stores) was reconstructed and matched in one pass
by generating the stores in disassembly order.
