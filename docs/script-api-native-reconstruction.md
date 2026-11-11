# Script-facing native API: reconstruction notes

This is what the reconstructed bodies in `src/native/wave080-script-api/` say
about the engine, and what the measurement says about the compiler. Every
statement below comes from real original bytes and from source that the build
credits.

## Result

The directory holds 111 measured definitions. Before this wave, 10 of the 32
definitions then present were byte-identical to the original; after it, 98 of
111 are. The measured totals move from `matched_code=16208
matched_functions=1046` to `matched_code=20480 matched_functions=1134` and
`units=124`, with no unit losing credit. The 13 drafts are each one identified
difference away, and the reasons are recorded per function in the file headers.

| file | measured | credited | drafts |
| --- | --- | --- | --- |
| `audio_effect.c` | 13 | 11 | 2 |
| `flags.c` | 6 | 3 | 3 |
| `message.c` | 4 | 4 | 0 |
| `motion_world.c` | 12 | 4 | 8 |
| `context_queries_early.c` | 22 | 22 | 0 |
| `context_queries_field.c` | 54 | 54 | 0 |

The two `context_queries` units are the generalisation step described at the
end: 76 no-argument bindings whose original is a ten-instruction
"load context, one engine call, push the answer" function. They are transcribed
from that shape, and each is byte-identical.

## How the original refers to a binding's own name

A binding that reports a failed argument read passes four operands to one
formatter at `0x00148918`: the failed-operation text, the source file name, the
binding's own name, and the source line. The instruction evidence fixes that
order - `r0` receives `"failed: sq_get..."`, `r1` receives
`"FieldScriptFunc.cpp"`, `r2` receives the name and `r3` the line - so the
formatter is declared `fn_00148918(message, file, native_name, line)` here.

The file and operation strings are embedded in the binding's own data tail. The
binding name is not: the tail holds a **four-byte pointer to one shared copy in
rodata**, and the registration table elsewhere in `.text` holds its own inline
copy. For `GetFlagID_` that shared copy is the string at `0x007c2ca8`, and the
pool word at `0x0027a4dc` is `0x007c2ca8`.

The rodata copies are packed consecutively - `SetEventFlg_` at `0x007c2c78`,
`GetEventFlg_` at `0x007c2c85`, `SetNumFlg_` at `0x007c2c92`, `GetNumFlg_` at
`0x007c2c9d`, `GetFlagID_` at `0x007c2ca8` - which is what a translation unit's
file-scope `const char name[]` definitions look like after the linker places
them. Each name has exactly one reference in the whole image: the pool word in
its own binding.

Two consequences follow, and both are visible in the bytes:

* If the name is written as a C string literal, armcc embeds the characters in
  the function's data tail. The original function then has 12 bytes less room
  than the compiler wants, and the function cannot be placed at all. That was
  the failure of 15 of the previous attempt's drafts.
* If the name is written as an integer address, armcc folds it and hoists one
  copy into a callee-saved register when a function checks two arguments,
  which changes both the instructions and the pool order. The original has no
  such hoist: it reloads the pool word at every use, which is what a
  **relocatable symbol** reference compiles to.

So the faithful spelling is an `extern const char kName_...[]`, with the
address supplied at link time. `config/script-constants.json` records each
symbol's image address and expected text; `toolscripts/absolute_symbols.py`
checks the bytes against the original image and the placement link defines the
symbol at that address, exactly as it already places functions at split
addresses. This is the same access the original performs, expressed in source.

## The binding ABI

All natives are `int f(SqVM *vm)`. They read arguments through the VM helpers
(`0x00157f58` integer, `0x00157fb0` string, `0x00157eb4` bool, `0x00157f00`
float), push a result, and return the number of values pushed: 0 for setters,
1 for getters.

Argument indexes are relative to the top of the VM stack: a binding with N
arguments reads them at `-N` (first) through `-1` (last). Every draft in the
earlier wave used `-1`, `0`, `1`, which is off by one for every argument after
the first; that alone changed the stack slots and the read indexes.

The engine is reached through one global pointer at `0x00898898`:

* its first word is a vtable pointer, and the vtable slots the bindings use are
  `0x0c` play SE, `0x10` stop SE, `0x18` play ME, `0x1c` wait ME, `0x20` play
  BGM, `0x40` load effect, `0x54` set effect scale, `0x5c` delete effect,
  `0x60` delete effect emitter, `0x70` busy check;
* the context also carries the wait counter at `+0x14` and the fade latch at
  `+0x69`, driven by `0x0014887c`, `0x00148894` and `0x00148888`;
* the shared id/scalar reader `0x001488c4` reads an integer at `-2` and a float
  at `-1` and throws the empty release message itself, so `SetAlpha_` and
  `SetDir_` have no check and no source-file operand of their own.

## Grammar of the native grammar (one global, one error path)

Every argument check compiles to the same four instructions: `bl` the VM
reader, `cmp r0,#0`, a branch, and - on the failure path - the four assertion
operands and `bl 0x00148918`, then `bl sq_throwerror`. The formatter itself
returns the address of the four zero bytes at `0x00148920`, so the message the
script sees is empty in a release build; the operands survive because the
throw is compiled in.

The line numbers in the operands are the original `FieldScriptFunc.cpp` lines,
recovered from the literal each call site passes in `r3` (for example
`0x0b47` for `GetFlagID_`). They are preserved verbatim.

## What the bindings do

Call-site counts are from `config/script-natives.json` (scripts, not calls).

| binding | arguments | engine service | sites |
| --- | --- | --- | --- |
| `Wait_` | frames | arm the wait counter, suspend | 5,657 |
| `SetMotion_` | object, motion, mode | play a named motion | 5,322 |
| `GetFlagID_` | flag name | name to flag id | 4,460 |
| `ShowMsg_` | message key | show a message-table entry | 4,426 |
| `CloseMsgWnd_` | - | close window, suspend | 3,295 |
| `OpenMsgWnd_` | - | open window, push `true` | 2,994 |
| `ReadMotion_` | object, motion | read the current motion name | 2,286 |
| `SetEventFlg_` | name, bool | set/clear an event flag | 1,884 |
| `SetTalkName_` | name key | set the speaker name | 1,859 |
| `GetEventFlg_` | name | read an event flag as bool | 1,560 |
| `ArrangePointGimmick_` | point, gimmick, name | place a gimmick | 1,540 |
| `DeleteTask_` | task | remove a scheduled task | 1,460 |
| `GetNumFlg_` | name | read an 8-bit progress counter | 1,355 |
| `PlaySE_` | name | play a sound effect | 1,231 |
| `LoadEffect_` | name | create an effect instance | 1,071 |
| `ReadGimmick_` | name | read a gimmick value | 979 |
| `SetPointPos_` | point, position | move a field point | 830 |
| `SetNumFlg_` | name, int | write an 8-bit progress counter | 709 |
| `SetAlpha_` | object, float | set opacity | 708 |
| `GetPlayerId_` | - | push `0` | 653 |
| `SetDir_` | object, float | set facing angle | 575 |
| `SetReactorMsg_` | reactor, message key | set a reactor's message | 475 |
| `SetMotionSpeed_` | object, float | set playback rate | 450 |
| `IsWaitEnd_` | - | wait counter and busy check | 440 |

Two engine facts worth keeping: `SetNumFlg_` truncates its value with
`and r2, r1, #0xff`, so number flags are bytes; and `GetPlayerId_` pushes the
constant 0 after reading the context without using it, so the field engine has
one local player.

## The compiler ceiling

**Resolved 2026-11-11: the ceiling in cause 1 was a missing flag, not a compiler
the image cannot be reproduced with.** The NOP after an argument check is
armcc's pipeline-interlock scheduling NOP, emitted only at `-O3 -Otime` with
`--cpu=MPCore`. The project compiled with `-Otime` (level 2 plus time emphasis),
which never runs the scheduler that inserts it. With `-O3 -Otime`, five of the
eight bindings below become byte-identical in the linked image; all eight
contain the original's NOPs, five at the original size. The three that still
differ do so in register allocation, a source-shape difference. The full measurement
is in `docs/2026-11-11-mpcore-scheduling-nop.md`. Everything below is the
`-Otime` observation this resolved.

The remaining drafts group into three causes, all reproduced against every
available armcc 4.1 build (b561 through b1454) at the then-pinned `-Otime`
profile:

1. **A NOP after every argument check but the first** (8 bindings:
   `SetMotion_`, `ReadMotion_`, `SetMotionSpeed_`, `SetPointPos_`,
   `SetReactorMsg_`, `ArrangePointGimmick_`, `SetEventFlg_`, `SetNumFlg_`).
   The original has `cmp r0,#0; nop; bge`. The pinned compiler emits
   `cmp; bge` for every source shape tried: plain `if`, `if/else`, `else if`,
   status in a variable, do/while macro, braces, empty blocks, nested scopes,
   `__schedule_barrier()`, and all nine installed 4.1 builds. The same NOP
   pattern occurs 7,775 times in the image (`cmp r0,#0; nop`), and no credited
   function in the tree contained one. **Cause: the missing `-O3`; see above.**
   `__nop()` also emits the exact instruction, but inserting it is fitting an
   artefact, not reproducing the compiler, and it is no longer needed.
2. **Argument setup order** (`SetAlpha_`, `SetDir_`): the original materialises
   `r2 = sp+4` before `r1 = sp`; every declaration order, struct, pointer
   temporary and helper tried emits the opposite order. Same size, same
   layout, two instructions transposed.
3. **Register allocation** (`Wait_`, `SetEffectScale_`): the original keeps the
   context address in `r2` (`Wait_`) and `&scale` in `r5` with the vm in `r4`
   (`SetEffectScale_`); this compiler uses `r0` and swaps `r4`/`r5`. Four source
   shapes for `Wait_` all allocate `r0`.
4. **One dead load** (`GetPlayerId_`): the original reads the context pointer
   and discards it; no non-volatile expression keeps that load, and making the
   global volatile changes the load order in the functions that do credit.

None of these is a semantic difference. What the scripts observe is already
reproduced by the drafts; only the instruction selection differs.

## What generalises to the other 628 bindings

The name-address technique is not specific to the 32 original definitions: the
rodata name pool lists the binding names consecutively, so every binding's
shared name address is recoverable, and `config/script-constants.json` grows one
entry per name. The argument-index rule, the `fn_00148918` operand order, the
context global and the vtable slots are shared by the whole family.

The batch that follows from that is measurable. A classifier over all 628
bindings (`toolscripts/script_api_shapes.py`) found **77** functions whose
original is exactly ten instructions: save the VM, load the script context, call
one engine service, push its answer, return 1. All 77 callees are split symbols,
so all 77 can be placed. 76 of them are in the two `context_queries` units
(`IsWaitEnd_` was already reconstructed in `audio_effect.c`); each one is
byte-identical. That is the cheap end of the remaining work: no arguments, no
shared constant, no error path.

The same classifier reports 72 one-argument bindings (34 integer-returning, 38
boolean-returning, plus 4 float-returning and 7 whose push helper it does not
name) that read one Squirrel argument through a VM helper, check its status,
call one engine service and push the answer. Those need the shared-name
technique as well, because most of them report a failed read; they are the
obvious next batch, and the pattern for extracting name address, line number and
operation text is already implemented in this wave's tooling.

Beyond that the family stops being uniform: each binding's engine service,
argument roles and line numbers must be read from its own bytes. That is why
this wave reconstructed 111 definitions and not the full 628.
