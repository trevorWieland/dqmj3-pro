# Script-facing native API: reconstruction notes

This is what the reconstructed bodies in `src/native/wave080-script-api/` say
about the engine, and what the measurement says about the compiler. Every
statement below comes from real original bytes and from source that the build
credits.

## Result

The directory holds 187 measured definitions. Before this wave, 111 definitions
were present and 98 of them were byte-identical; after it, 162 of 187 are. The
measured totals move from `matched_code=20480 matched_functions=1134 units=124`
to `matched_code=27032 matched_functions=1198 units=129`, with no unit losing
credit. The 25 drafts are each one identified instruction-selection difference
away, and the reasons are recorded per function in the file headers.

| file | measured | credited | drafts |
| --- | --- | --- | --- |
| `audio_effect.c` | 13 | 11 | 2 |
| `flags.c` | 6 | 3 | 3 |
| `message.c` | 4 | 4 | 0 |
| `motion_world.c` | 12 | 4 | 8 |
| `context_queries_early.c` | 22 | 22 | 0 |
| `context_queries_field.c` | 54 | 54 | 0 |
| `battle_actor_queries.c` | 23 | 20 | 3 |
| `battle_action_queries.c` | 14 | 9 | 5 |
| `field_progress_queries.c` | 10 | 9 | 1 |
| `field_object_queries.c` | 16 | 15 | 1 |
| `field_scene_queries.c` | 13 | 11 | 2 |

The last five files are this wave: **76 one-argument bindings**, 64 of them
byte-identical. `toolscripts/script_api_shapes.py` classifies 83 one-argument
bindings in the image; 7 of those were already reconstructed elsewhere in the
directory, so the batch is the remaining 76, not the 72 the classifier's summary
first suggested. The two `context_queries` units are the earlier generalisation
step: 76 no-argument bindings whose original is a ten-instruction "load context,
one engine call, push the answer" function.

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
addresses. The table now holds 93 names: 76 from this wave, each recovered from
the pool word in its own binding's error path and verified against the rodata
text at that address before being written to the config.

## The binding ABI

All natives are `int f(SqVM *vm)`. They read arguments through the VM helpers
(`0x00157f58` integer, `0x00157fb0` string, `0x00157eb4` bool, `0x00157f00`
float), push a result, and return the number of values pushed: 0 for setters,
1 for getters.

Argument indexes are relative to the top of the VM stack: a binding with N
arguments reads them at `-N` (first) through `-1` (last). For the whole
one-argument batch the check is therefore `sq_get* (vm, -1, &arg)`, which is
what the original emits (`mvn r1, #0` for the index, `mov r2, sp` for the out
pointer).

The engine is reached through one global pointer at `0x00898898`:

* its first word is a vtable pointer, and the vtable slots the bindings use are
  `0x08` set shadow, `0x0c` play SE, `0x10` stop SE, `0x18` play ME, `0x1c` wait
  ME, `0x20` play BGM, `0x40` load effect, `0x54` set effect scale, `0x5c` delete
  effect, `0x60` delete effect emitter, `0x70` busy check;
* the context also carries the wait counter at `+0x14` and the fade latch at
  `+0x69`, driven by `0x0014887c`, `0x00148894` and `0x00148888`;
* the shared id/scalar reader `0x001488c4` reads an integer at `-2` and a float
  at `-1` and throws the empty release message itself, so `SetAlpha_` and
  `SetDir_` have no check and no source-file operand of their own.

Two more singletons appear in the one-argument batch and are spelled as the
constants they are:

* `0x008977e0` - the field object / drone-mode state. Four bindings read it
  (`PlayerForcePause_`, `SetPartnerNaviMapActive_`, `SetHolyRailLayoutAnim_`,
  `IsHolyRailDemoTreated_`); it answers a state handle, not the script context.
* `0x008977d4` - the shadow host context. Its vtable slot `0x08` is
  `set_shadow(self, enable)`, which is the only virtual dispatch in the batch.

Float answers use the hardware float ABI: `sq_pushfloat` (`0x00158070`) takes
the VM in `r0` and the value in `s0`, and its own body is `str r2,[sp]` (the
tag), `vstr s0,[sp,#4]`, then a call to the shared push helper at `0x00173d1c`.
The original engine services that answer a float return it in `s0`, so the
call site is `mov r0, r4; bl sq_pushfloat` with no core-register move. A
reconstruction that passed the float through a core register would not match.

The bindings in this family call nothing outside the game: the argument helpers
are the Squirrel VM's own functions, declared here with the game's signatures
(out pointer plus status, unlike the public Squirrel 2.2.5 API), and every other
callee is an engine function in the same image. No Nintendo system service,
`nn::`, `nw::` or raw primitive is reached from this batch, so it needs no
`platform/` route; the `platform/` requirement starts at the services these
bindings are a boundary *to*, not from.

## What an original one-argument body contains

Every body in the batch is the same skeleton, and the differences are the
interesting part:

1. `push {r3, r4, r5, lr}` and `mov r4, r0` - save the VM in a callee-saved
   register, `r3`/`r5` are pushed to keep the stack eight-byte aligned and give
   the literal pool a home;
2. `mov r2, sp; mvn r1, #0; bl sq_get*` - read stack slot -1 into a stack
   temporary;
3. `cmp r0, #0; bge <body>` - a negative status is failure;
4. on failure, the four formatter operands and `bl 0x00148918`, then
   `bl sq_throwerror`, then return;
5. the body: load the context (or a singleton), marshal the argument, call one
   engine service, push or discard the answer, return 0 or 1.

The measured split gives the *code* extent of a binding, not its whole
placement: the literal pool follows the last instruction and the next split
symbol starts after it. So a 100-byte binding with a 56-byte pool occupies 156
bytes, and the pooled words are, in order, the line, the binding-name pointer,
the operation text, the source file name and the context address - the compiler
lays them out in first-use order, and that order is part of the comparison.
`placement.slots()` computes the room; `build.py` places the compiled section
into it.

The line number and the operation text are recovered from the pool, not
guessed: `mov r3,#line` when the constant is encodable, `ldr r3,[pc]` when it is
not, and `add r0/r1, pc, #off` for the two strings. `toolscripts/script_api_args.py`
reports those words for every binding, together with the shared name address,
the argument helper and its narrowing, the engine service, the push helper and
the return convention, and can print the `config/script-constants.json` entries
directly. The documented line is therefore the line the original throws.

## The four argument shapes

The batch reads an integer, a string or a bool, and the integer is sometimes
narrowed before the engine sees it. Each shape has one source spelling that
reproduces the original instruction selection:

| shape | argument | example | count |
| --- | --- | --- | --- |
| plain | `s32` passed through, no narrowing | `GetActorIndex_` | 36 |
| byte | `(u8)` mask `and r1,r1,#0xff` | `IsHaveSpecialDisc_` | 14 |
| signed | `(s8)` `sxtb`, `(s16)` `sxth`, `(u16)` `uxth` | `GetAllyIndex_` | 22 |
| equality | Squirrel bool normalised with `cmp #1; movne #0` | `IsMasterFall_` | 4 |

The equality group is inside the plain group: those four bindings take a
Squirrel bool and pass `value == 1` to the engine, which is the same
normalisation the engine's own bool parameters expect.

The byte shape needs the script context materialised in a local before the
call (`context = SCRIPT_CONTEXT();`) or the compiler masks the argument before
loading the context and the register order changes. The equality shape needs the
same local: `sq_pushbool(vm, fn_00154e8c(context, is_master == 1))`. The
`!= 0` normalisation (`cmp #0; movne #1`) appears in the two nested bridges and
in the vtable dispatch, and there the argument is computed *before* the
receiver, which is what a C++ member call compiles to.

## The engine bridges in the batch

Not every binding is "call one service and push the answer". The four
non-uniform bridges are worth naming because they show the engine's shape:

| binding | reads | does |
| --- | --- | --- |
| `GetFbxPos_`, `GetFbxPointPos_` | point name | `fn_00155e14`/`fn_00164a64` resolve the point, `fn_00148a34` pushes the engine-specific value; the binding returns 1 without pushing itself |
| `PlayerForcePause_` | bool | `fn_001dcb00(fn_006f7a84(state), pause != 0)` - the singleton read is the first argument of the second call |
| `SetPartnerNaviMapActive_` | bool | `fn_0021c4a4(fn_006f72b4(state), active != 0)`, same nesting |
| `SetHolyRailLayoutAnim_` | anim name | `fn_006f751c(state)` answers an object whose `+0x3c` handle may be zero; the call to `fn_00342078(handle, name)` is guarded on it |
| `SetShadowEnable_` | bool | vtable slot `0x08` of `0x008977d4`, argument computed before the receiver |
| `GotoMenuOpen_` | menu id (byte) | `fn_001f0368(context, menu_id)` then `return sq_suspendvm(vm)` - the return value is the suspend status |

`fn_00148a34` is a push helper rather than an engine query: it takes the VM and
one value and builds the script value itself, which is why those two bindings
have no `sq_push*` call.

## What the bindings do

Call-site counts are from `config/script-natives.json` (scripts, not calls).
The 64 credited one-argument bindings cover the battle module's actor and
action queries and the field progress and object queries; the table below keeps
the earlier wave's most-called bindings and adds the busiest of this one.

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
| `ReadNpc_` | NPC name | read an NPC's field value | 965 |
| `SetPointBoxEventMineNoFallWait_` | point name | arm an event mine | 79 |
| `GetMonsterSize_` | monster id | model size class | 71 |
| `GetAllyIndex_` | actor id | ally index | 60 |
| `GetEnemyIndex_` | actor id | enemy index | 55 |
| `GetDir_` | object id | facing angle (draft) | 46 |
| `GetPartyMonsterNum_` | monster id | accumulated count | 41 |
| `SetPointBoxEncountMine_` | point name | arm an encounter mine | 34 |
| `GetInitExistType_` | monster id | initial existence type (draft) | 22 |
| `GetTargetNum_` | actor id | target count | 19 |
| `SetShadowEnable_` | bool | vtable `0x08` shadow enable | 17 |
| `GetAccessoryNum_` | accessory id | held count | 15 |

Two engine facts worth keeping from the earlier wave: `SetNumFlg_` truncates
its value with `and r2, r1, #0xff`, so number flags are bytes; and
`GetPlayerId_` pushes the constant 0 after reading the context without using
it, so the field engine has one local player.

The one-argument batch adds two more: every id that reaches an engine index is
narrowed at the call (`u8`, `s8`, `s16`, `u16`), so the script-visible id space
is wider than the engine's tables; and the engine services that answer a bool
return 0/1 in `r0`, so a script-side bool is the same value the engine stores.

## The compiler ceiling

The remaining drafts group into four causes, all reproduced against every
available armcc 4.1 build (b561 through b1454):

1. **A NOP after every argument check but the first** (8 bindings from the
   earlier wave: `SetMotion_`, `ReadMotion_`, `SetMotionSpeed_`, `SetPointPos_`,
   `SetReactorMsg_`, `ArrangePointGimmick_`, `SetEventFlg_`, `SetNumFlg_`).
   The original has `cmp r0,#0; nop; bge`. The same NOP appears in this wave in
   a different position - between the last argument load and the final call -
   in six bindings: `GetDir_`, `GetPitch_`, `GetHighRankEffectSize_`,
   `GetAlpha_` (all four float-answer bindings), `IsHolyRailDemoTreated_` and
   `GotoMenuOpen_`. All four float bindings show `mov r0,r4; nop; bl
   sq_pushfloat`, so the artefact is attached to the float call sequence, not
   to a particular argument shape. The pinned compiler emits `cmp; bge` and the
   two calls back to back for every source shape tried: plain `if`, `if/else`,
   `else if`, status in a variable, do/while macro, braces, empty blocks,
   nested scopes, `__schedule_barrier()`, a float temporary, a two-statement
   call, and all nine installed 4.1 builds. `__nop()` does emit the exact
   instruction, but inserting it would be fitting an unexplained compiler
   artefact rather than reconstructing source, so these stay drafts.
2. **Argument-first scheduling of a narrowed byte** (6 bindings:
   `GetMonsterSize_`, `GetInitExistType_`, `IsAlly_`, `IsMonster_`, `IsMaster_`,
   `IsPartner_`, and `GetPitch_` again). The original is `ldr r1,[pc]`
   (context address), `ldr r0,[sp]` (argument), `ldr r2,[r1]` (context),
   `and r1,r0,#0xff`, `mov r0,r2`, `bl`. This compiler instead masks into the
   argument register first and loads the context into `r0` directly - the same
   registers at the call, one instruction and one schedule earlier. Every
   statement order, byte/word temporary, engine-parameter type and cast
   spelling tried produces the same cleaner sequence; the original's `mov r0,r2`
   is a scheduling artefact of the original build.
3. **Argument setup order** (`SetAlpha_`, `SetDir_`): the original materialises
   `r2 = sp+4` before `r1 = sp`; every declaration order, struct, pointer
   temporary and helper tried emits the opposite order. Same size, same
   layout, two instructions transposed.
4. **Register allocation** (`Wait_`, `SetEffectScale_`): the original keeps the
   context address in `r2` (`Wait_`) and `&scale` in `r5` with the vm in `r4`
   (`SetEffectScale_`); this compiler uses `r0` and swaps `r4`/`r5`. Four source
   shapes for `Wait_` all allocate `r0`.

None of these is a semantic difference. What the scripts observe is already
reproduced by the drafts; only the instruction selection differs.

## What generalises to the other 628 bindings

The name-address technique is not specific to the 32 original definitions: the
rodata name pool lists the binding names consecutively, so every binding's
shared name address is recoverable from the pool word in its own error path, and
`config/script-constants.json` now carries 93 of them. The argument-index rule,
the `fn_00148918` operand order, the context global, the two singletons and the
vtable slot are shared by the whole family.

The measurement now covers 187 of the 628 bindings: all 76 no-argument
`context-get` shapes and all 83 one-argument shapes the classifier finds, of
which 76 were new. That is the whole cheap end; the classifier reports no other
one-argument shape.

Beyond it the family stops being uniform in two ways. First, the remaining
bindings take two or three arguments, and the two-argument bodies that have been
attempted all carry the compiler NOP after the second check, so they are drafts
by construction until an armcc build that emits that NOP is identified - the
one-argument batch shows the same compiler-version boundary from the other side.
Second, the multi-argument bindings introduce argument setup orders and
`fn_001488c4`-style shared readers that must be read from each binding's own
bytes. `toolscripts/script_api_shapes.py` classifies only the two shapes above;
extending it to two arguments is the next tooling step, and the per-binding
facts the generator in this wave used (name address, line, operation text, file
text, cast, normalisation, engine callee, push helper, return) are the fields it
needs to report.
