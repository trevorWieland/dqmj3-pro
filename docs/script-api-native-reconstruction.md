# Script-facing native API: reconstruction notes

This is what the reconstructed bodies in `src/native/wave080-script-api/` say
about the engine, and what the measurement says about the compiler. Every
statement below comes from real original bytes and from source that the build
credits.

## Result

The directory holds 364 measured definitions. 359 are byte-identical to the
original and the five drafts are each one identified instruction-selection
difference away, with the reason recorded in the file headers.  The measured
totals for the whole image are `matched_code=54864` and
`matched_functions=1382`, against `matched_code=20820 matched_functions=1124`
when this branch started from the corrected `-O3 -Otime` profile.  This wave
alone credits 258 script bindings; the sections below describe both the first
batch and the second one.

The first batch (before the profile fix) reconstructed 111 definitions, of which
98 were exact, and moved the totals from `matched_code=16208
matched_functions=1046` to `matched_code=20480 matched_functions=1134`; the
sections after "What generalises" record that work and remain accurate for the
files it describes.  The "Second wave" section at the end records what the
corrected profile changed and how the rest of the two-argument frontier was
carried to exactness.

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

The remaining drafts group into three causes, all reproduced against every
available armcc 4.1 build (b561 through b1454):

1. **A NOP after every argument check but the first** (8 bindings:
   `SetMotion_`, `ReadMotion_`, `SetMotionSpeed_`, `SetPointPos_`,
   `SetReactorMsg_`, `ArrangePointGimmick_`, `SetEventFlg_`, `SetNumFlg_`).
   The original has `cmp r0,#0; nop; bge`. The pinned compiler emits
   `cmp; bge` for every source shape tried: plain `if`, `if/else`, `else if`,
   status in a variable, do/while macro, braces, empty blocks, nested scopes,
   `__schedule_barrier()`, and all nine installed 4.1 builds. The same NOP
   pattern occurs 7,775 times in the image (`cmp r0,#0; nop`), and no credited
   function in the tree contains one, so it is a real compiler behaviour this
   build does not reproduce from C. `__nop()` does emit the exact instruction,
   but inserting it would be fitting an unexplained compiler artefact rather
   than reconstructing source, so these eight stay drafts.
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

## Second wave: the corrected profile and the argument frontier

`fix/profile-o3` added `-O3` to the armcc profile; `-Otime` alone means level 2
with time emphasis.  The scheduler that inserts `cmp r0,#0; nop; bge` after the
second and later argument checks only runs at `-O3 -Otime`, and with the profile
corrected the NOP appears in exactly the places the original has it.  The wave
that followed reconstructed every clean one- and two-argument shape it could
reach, and the totals moved from `matched_code=20820 matched_functions=1124`
(101 of the 109 measured script definitions exact) to `matched_code=54864
matched_functions=1382` (359 of 364 exact).  258 bindings are newly credited and
five remain drafts.

### The three register-allocation cases

The cases named in the task were genuine register-allocation differences, but
the answer was a source shape rather than a compiler artefact.

* `SetMotion_` and `ArrangePointGimmick_` keep their argument locals as **three
  separate variables**, not one struct.  With a struct, armcc hoists `sp` into
  `r5` to hold the aggregate base (`push {r4, r5, lr}`, `mov r5, sp`), which
  makes the compiled extent four bytes longer than the original range.  Separate
  locals let every `&arg` be `sp`-relative directly, and the original's
  `ldm sp, {r1, r2, r3}` argument load comes back unchanged.
* `SetEventFlg_` materialises the context in a local **before** the call:
  `ScriptContext *context = SCRIPT_CONTEXT(); fn_006abc8c(context, name, value != 0);`.
  Without it armcc loads the value and the name before the context address; a
  named context local makes it load `&context` first and the name after the
  compare, exactly as the original does.
* `SetAlpha_` / `SetDir_` (the two argument-address setups) need the same
  separate-locals treatment: the struct form emits `mov r1, sp` before
  `add r2, sp, #4`, while separate locals keep the original order.

The same three rules then carried the family: separate locals for three or more
arguments, a context local wherever the original's first instruction in the call
setup is the context-address load, and a struct for the plain two-argument
readers (where it reproduces the original `ldm sp, {r1, r2}`).

### The compiler rules this wave established

1. **Struct for two argument locals, separate variables for three or more.**  A
   two-field struct reproduces `ldm sp, {r1, r2}`; a three-field struct triggers
   the `r5` stack-pointer hoist described above.
2. **A context local controls argument-load order.**  Declaring
   `ScriptContext *context;` and assigning `SCRIPT_CONTEXT()` immediately before
   the engine call makes the compiler load the context address before the
   argument registers.  This is what the original does in every family whose
   first setup instruction is `ldr r0, [pc, #...]`.
3. **Narrow engine parameter types are part of the interface.**  Declaring the
   engine service with `u8`, `s8`, `s16` parameters and passing the local
   unchanged emits the original `and rX, rX, #0xff` / `sxtb` / `sxth`
   conversions.  Writing the casts at the call site instead produces a different
   load/conversion schedule and loses the function.
4. **Two boolean conversion forms exist and are distinguishable.**  The
   `int, bool` two-argument family converts with `cmp r1, #0; movne r2, #1;
   moveq r2, #0`, which is the C `value != 0` expression with an `int`
   parameter.  The one-argument boolean setters convert in place with
   `cmp r1, #0; movne r1, #1` (or the C++ `cmp r1, #1; movne r1, #0`), which is
   a `bool` parameter with the local passed unchanged.
5. **The assertion file operand is not always `FieldScriptFunc.cpp`.**  The
   one-argument readers live in two original translation units; the prompt in
   each error path names `BattleScriptFunc.cpp` or `FieldScriptFunc.cpp`.  The
   body carries the file string the original uses, which is why `script_api.h`
   gained `SCRIPT_CHECK_FILE`.

### Coverage

The wave added twenty-four units, each a shape family measured as a whole and
then cut down to the bodies that are byte-identical.  Per unit:

| unit | credited | measured |
| --- | --- | --- |
| `zero_arg_1.c` | 5 | 5 |
| `one_arg_int_1..4.c` | 109 | 109 |
| `one_arg_name_1.c` | 16 | 16 |
| `one_arg_float_1.c` | 7 | 7 |
| `one_arg_bool_1.c`, `one_arg_bool3_1.c` | 12 | 12 |
| `two_arg_int_1..3.c`, `two_arg_int2_1.c` | 43 | 43 |
| `two_arg_bool_1.c` | 18 | 18 |
| `two_arg_name_1.c`, `two_arg_name2_1.c` | 15 | 15 |
| `two_arg_namebool_1.c` | 6 | 6 |
| `two_arg_namefloat_1.c`, `two_arg_namename_1.c` | 6 | 6 |
| `two_arg_intfloat_1.c` | 4 | 4 |
| `two_arg_nameint_1.c` | 1 | 1 |
| `three_arg_int2_1.c` | 8 | 8 |
| `three_arg_intbool2_1.c` | 3 | 3 |
| `audio_effect.c` (changed) | 9 | 13 |
| `flags.c` (changed) | 5 | 6 |
| `motion_world.c` (changed) | 12 | 12 |
| `context_queries_early.c`, `context_queries_field.c`, `message.c` | 80 | 80 |

The engine services are named per function in each generated unit, and the
binding name constants are registered in `config/script-constants.json` from the
address the original's own pool word pointed at.  The bodies are ordinary C:
VM readers, the assertion macro, one engine call with the recovered parameter
types, and the push the original performs.  Nothing is patched or synthesised;
the build still decides which bodies are exact, and only exact ones are kept.

### What is still open

* Four-argument families (`integer,integer,bool,bool` and the four-integer
  group): the frame and argument setup differ from the two- and three-argument
  templates; they need per-family bytes read before another batch.
* The `bool, integer` family (`ShowBattleEventMessage_` and siblings): the
  original relies on C++ range information for its in-place boolean
  normalisation; the C spellings tried produce either the two-instruction
  conversion or a different load order.
* `SetFade_` and `SetFadeSub_`: under `-O3` the scheduler hoists the context
  address before the argument conversions; under the previous profile they were
  exact.  Their argument order and byte truncations are already right.
* `Wait_` and `SetEffectScale_`: the original keeps the context address in `r2`
  and `&scale` in `r5`; the C compiler chooses `r0` and swaps `r4`/`r5`.
* `GetPlayerId_`: the original reads the context pointer and discards it.  No
  non-volatile expression keeps that load, and making the global volatile would
  change the load order in the functions that now credit.
* Bindings whose engine service is called indirectly through the context vtable
  (`SetEffectFrame_`, `SetEffectRotateY_`) or whose body returns a constant
  after an unused context read (the `CheckDefine*` group) need their own shape
  analysis.

