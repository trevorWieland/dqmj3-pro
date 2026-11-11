# The MPCore scheduling NOP: what emits it, and what it is

**Finding (2026-11-11).** The sequence the original image emits after a
non-first argument check,

    cmp   r0, #0
    nop                 ; encoding 0xE320F000, the ARMv6K NOP hint
    b<cond> ...

is produced by **armcc's instruction scheduler at `-O3 -Otime` with
`--cpu=MPCore`**, and by nothing else among the available builds and flags. The
project's pinned profile is `--cpu=MPCore --apcs=/interwork --c99 -Otime`; it is
missing `-O3`, and `-Otime` alone selects optimization level 2 with time
emphasis. That is why nine 4.1 builds, nine statement spellings and
`__schedule_barrier()` all failed: the compiler was never asked to run the
scheduler that inserts the NOP.

This does not change the compiler *identity*: every armcc build from 4.0 b771
through 5.04 b82 emits the sequence at this profile — fourteen build
directories, thirteen distinct compiler binaries, because 4.1/b561 is a 4.0
b902 binary. It changes the *flags*, and it shows that reconstruction work
fitted to the pinned `-Otime` output has been fitted to the wrong optimisation
level.

## What the NOP is

It is a **pipeline-interlock scheduling NOP**: an explicit NOP placed in the
one-cycle slot between a flag-setting instruction and the conditional branch
that consumes those flags, for a timing model that charges that pair an
interlock. Four measured properties pin it down:

* It is **not alignment**. Scan the 8,159,232 bytes of the original text: the
  branch targets of the 8,318 instances are uniformly spread over mod-16 classes
  (2,127 / 2,164 / 2,065 / 1,961), and so are the fallthrough addresses they
  skip to (2,065 / 2,106 / 2,079 / 2,067); conditional branches *without* a NOP
  have the same uniform spread (6,452 / 6,640 / 6,683 / 6,704). Nothing is being
  aligned.
* It is **not a linker artefact**, and it is not padding over a branch that
  optimised away: none of the 8,318 `cmp r0,#0; nop` NOPs is the target of any
  branch in the image, and the NOP is already present in the relocatable object
  before linking.
* It is **executed**, not a placeholder: it sits in straight-line code between a
  compare and the branch that reads its flags.
* It is **the MPCore model's request**. Of thirteen `--cpu` values tested at
  `-O3 -Otime` (`MPCore`, `ARM1136JF-S`, `ARM1176JZF-S`, `6K`, `6`, `5TE`,
  `7-A`, `XScale`, `ARM926EJ-S`, `ARM1026EJ-S`, `ARM1156T2-S`, `Cortex-A8`,
  `Cortex-A9`), only `MPCore` emits it. The other ARM11-class models are
  silent, so this is not an ARM11 architectural rule; it is the MPCore timing
  table plus the scheduler that reads it.

The instruction scheduler is the part that `-O3` turns on. `-Otime` sets the
emphasis; `-O3 -Otime` runs the scheduler that models the interlock and fills
the slot. That is consistent with the compiler's own internal vocabulary,
which contains an `interlock_count`, a `Scheduler`, and `schedule_cpu`.

The rule for *which* branches get the NOP is the scheduler's, not the source's:
the first check of each binding is exempt and every later check is not, and the
compiler reproduces that exemption from the same source. That is why the matched
functions are byte-identical rather than approximately so.

## Measurements

All commands are in `work/nop-artifact/` (untracked scratch): `nop_measure.py`
compiles one unit with one build and compares a symbol against the original
bytes; `sweep_flags.py` runs the build × profile matrix and records every
object's `cmp r0,#0 ; nop ; b<cond>` count. Target set: `fn_00139738` (SetPop_,
556 bytes), the eight script bindings, and 13 CPU variants.

### Builds: all fourteen directories emit it at `-O3 -Otime`, none at `-Otime`

420 (build, profile) pairs were compiled — fourteen build directories × thirty
profiles. Only the `O3-Otime-MPCore` profile produced a sequence, and **all
fourteen build directories produced all 16 expected sequences** in the nine
target functions (SetPop_ 6/6, SetMotion_ 2/2, ArrangePointGimmick_ 2/2, and
1/1 for the other six).

| profile | object sequences across the eight bindings | original |
| --- | --- | --- |
| `-Otime` (pinned) | 0 | 10 |
| `-O2` | 0 | 10 |
| `-O3` | 0 | 10 |
| `-O3 -Ospace` | 0 | 10 |
| `-O2 -Otime` | 0 | 10 |
| `-Ospace`, `-O1`, `-O0` | 0 | 10 |
| **`-O3 -Otime`** | **10** | **10** |

`--fpmode=fast/std/none/ieee_full`, `--gnu` on/off, `-g`, `--no_inline`,
`--forceinline`, `--autoinline`, `--no_autoinline`, `--vectorize`,
`--no_vectorize`, `--apcs=/interwork/noswst`, `--c90`/`--c99`,
`--split_sections` and `-Ospace` do not change the sequence count. `--c90` and
`-O0`/`-O1` change other code, as the 2026-11-10 sweep recorded.

### The eight bindings

Compiled with `--cpu=MPCore --apcs=/interwork --c99 -O3 -Otime -c --gnu
--split_sections`, then linked at the original addresses by the project's own
`image_link`, five of the eight are **byte-identical in the linked image**:

| binding | symbol | bytes | result |
| --- | --- | --- | --- |
| `ReadMotion_` | `fn_0027af14` | 184 | exact |
| `SetMotionSpeed_` | `fn_0027e380` | 172 | exact |
| `SetPointPos_` | `fn_0027bad8` | 168 | exact |
| `SetReactorMsg_` | `fn_0027d148` | 168 | exact |
| `SetNumFlg_` | `fn_0027a8b8` | 176 | exact |
| `SetMotion_` | `fn_0027a778` | 236 | differs by one callee-saved register (`push {r4,r5,lr}`, `mov r5,sp`) |
| `ArrangePointGimmick_` | `fn_00281c94` | 248 | same |
| `SetEventFlg_` | `fn_0027b940` | 184 | differs after instruction 35 |

All eight now contain the original's NOPs. The three remaining differences are
source-shape register allocation: the drafts were written against the `-Otime`
allocation and need the same local-variable spelling that recovers the synth
functions below. `SetEventFlg_` is already the original size and differs only in
the load order of the final call's arguments; `SetMotion_` and
`ArrangePointGimmick_` are 4 bytes longer because of the extra callee-saved
register.

### SetPop_ (`fn_00139738`, 0x00139738, 556 bytes)

At `-O3 -Otime` the draft compiles to **556 bytes with all 6 sequences**, which
is the original size. Its struct spelling still costs a callee-saved register:
`push {r4,r5,lr}` / `sub sp,sp,#0x2c` / `mov r5,sp` against the original's
`push {r4,lr}` / `sub sp,sp,#0x28`. Replacing the `args` struct with seven
locals removes that difference — the prologue, frame, all seven checks and all
six NOPs then match instruction for instruction, and **18 instructions remain**
(all in the argument marshalling for the final `fn_001755cc` call, which the
original lays out in a different order). So the NOP ceiling is gone for SetPop_;
what is left is ordinary source-shape work on one call site.

### Whole-build effect

`build.py` was run in the worktree against the owner's update image, once with
the pinned profile and once with `-O3` added to it.

| measure | pinned `-Otime` | `-O3 -Otime` |
| --- | --- | --- |
| `matched_code` | 20,480 | **20,820** |
| `matched_functions` | 1,134 | **1,124** |
| credited under both profiles | 1,119 | 1,119 |
| credited only under the pinned profile | 15 | — |
| credited only under `-O3 -Otime` | — | **5** (the five bindings above) |
| source functions placed | 1,175 | 1,181 |
| linked functions that differ from the original | 41 | 57 |

The 15 functions credited only at `-Otime` are the real cost, and they are
source shapes fitted to the wrong level, not evidence for it. Nine of them are
16-byte `pointer_field_writes` functions whose original is

    ldr r0, [r0, #4]      mov r1, #0      strb r1, [r0, #0x1c]     bx lr

At `-O3` the existing one-liner spelling gives `ldr r1,[r0,#4]; mov r0,#0;
strb r0,[r1,#0x1c]` — a different register allocation, same semantics. Extracting
the loaded pointer into a named local,

    u32 p = *(const u32 *)(record + 0x4);
    *(u8 *)((u8 *)(uptr)p + 0x1c) = 0x0u;

gives the original bytes back at `-O3`: **9 of the 9 functions in that unit
recover exactly** with that respelling (the same form works for its one u32
store). The other six lost functions (two 144-byte audio bindings, two
`flags_02` leaves, one `label_copy` leaf, one `field_setters` store) differ in
scheduling or register choice on a small leaf and have not yet been shown
recoverable. The 2026-11-10 corpus ranking (−Otime 63 strict vs −O3 −Otime 49)
cannot settle this: that corpus was itself fitted against `-Otime` output, so it
measures which profile the existing sources were written for, not which profile
the image was built with.

### How many functions the old profile could never credit

Scanning the split ARM functions only (26,326 functions, primary extents): 5,146
`cmp r0,#0 ; nop ; b<cond>` sequences in 2,803 functions, and 5,912 functions
contain at least one NOP hint. The whole-image scan is larger — 8,318 sequences
and 33,913 NOP hints — because 1.9 MB of text lies outside the split. No
`-Otime` build can emit any of them, so those functions were unreachable by
construction, whatever their source said.

## What the public 3DS decomp projects pin

* **`zeldaret/oot3d`** (Ocarina of Time 3D, ARM11) pins **RVCT 4.0 Build 821**
  for Windows and compiles with

      --apcs=//interwork --cpu=MPCore --fpmode=fast --vfe ... --split_sections
      --forceinline -O3 -Otime

  That is the same CPU and the same `-O3 -Otime` pair this finding derives, on a
  public project whose matching target is also a Nintendo ARM11 image. The tree
  does **not** contain the original instruction stream: `baserom.3ds`, `*.s`,
  `asm/` and `baserom/` are all gitignored; `baserom.s` is generated from the
  user's own ROM by `n3dsdisasm` and split at build time, and unmatched
  functions are `GLOBAL_ASM("asm/...s")` stubs. So the pattern is not greppable
  in the repository, and the useful evidence is the pinned flags, not the tree.
* **smt4-decomp**: no public repository of that name exists; GitHub searches
  for SMT4 return fusion calculators, `smt4tool`, and a static-recompilation
  glue project (`Invictus-potens/smt4-recomp`), none of which is an armcc
  decompilation. There is no public tree to check.
* The 4.0 build oot3d pins was tested here: at `-O3 -Otime` it emits the NOP
  (1/1 and 2/2 on the motion bindings) but does not reproduce the bindings
  exactly — it folds the script-context global into `ldr r0,[r0,#0x898]` where
  the original and 4.1 emit `ldr r0,[r0]`. The 4.1 line reproduces the
  bindings. The compiler is the pinned one; only the flags were wrong.

## What the project should do

1. **Pin `-O3 -Otime`** in `config/compiler-profiles.json` for
   `armcc-4.1-b1454`: add `-O3` before `-Otime`. This is measured, not guessed;
   it is the only available configuration that can emit an instruction the
   image contains 8,318 times.
2. **Respell the 15 functions** that were fitted to `-Otime` before or with the
   profile change, so the change is not a net regression. The `pointer_field_writes`
   family is demonstrated; the rest are ordinary register-allocation work.
3. **Re-derive the corpus and control measurements under the new profile.**
   The old ranking measured the corpus's fit, not the image's compiler.
4. **Do not** put `__nop()` or `__schedule_barrier()` in the source. Both were
   only ever workarounds for the missing flag; with `-O3 -Otime` the NOP is the
   compiler's own output.

Until the profile change lands, a unit may name a profile that carries
`-O3 -Otime` explicitly. The eight bindings need it; the rest of the tree is
fitted to `-Otime` and needs respelling before a global switch.

## Reproduction

    # the committed probe: compile one tracked unit at the declared profile and
    # at -O3 -Otime, and report the sequences and exactness per binding
    tools/python/Scripts/python.exe toolscripts/nop_artifact_probe.py

The probe needs `generated/update-content0/code.bin`, which `build.py` writes
after the owner supplies their own image. It exits 0 when `-O3 -Otime` emits the
original's sequences for both bindings and the declared profile emits none.

The finer-grained harness behind the tables here is untracked scratch under
`work/nop-artifact/`, in the same spirit as `work/compiler-sweep/`:
`nop_measure.py` compiles one unit with one build, and `sweep_flags.py` runs the
fourteen-build × thirty-profile matrix. Their output is
`work/nop-artifact/flag-sweep.json` and `work/nop-artifact/measure.json`.
