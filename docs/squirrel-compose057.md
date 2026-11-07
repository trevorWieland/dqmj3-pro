# Source-initialized runtime composition 057

This candidate connects the genuine 049 factory and VM initialization, the 045 typed shared-state/string/memory services, and the 047 execution providers. It creates the actual VM and shared state through source startup. It grants no new source, matching, or SDK credit.

The implementation is in `source/squirrel-wave057/`. Nine predecessor C/header files remain byte-identical to the sealed private snapshot. `component.h` adds an opaque C and C++ API with explicitly probed 32-bit integer types. The 97 selected translation units and 29 exclusions are recorded in `evidence/lanes/squirrel-compose057/stage-v1/providers.json`. Seven own C files participate in the runtime; `layout_probe.c` provides diagnostic layout data.

The compatibility providers use the actual 040 storage. The metamethod-name vector is at target offset 0 and native offset 304; the string table is at target offset 20 and native offset 328. Source execution does not provision fake pointers in the 68 native opaque prefix bytes. A5 and 5A caller seeds remain intact.

## Reproduction

Use the repository-local Python and pinned compiler/runtime dependencies. A fresh reference replay also needs the private, hash-verified original code and ExHeader inputs. They are not public artifacts.

```text
tools/python/Scripts/python.exe toolscripts/squirrel_compose057_replay.py --output work/squirrel-compose057/replay-review
```

The replay rebuilds ARM, Windows, AArch64 and Android components, reruns the seven-step reuse sequence and returning controls, and writes a fresh 14-set packet under the requested work directory. It preserves the sealed public packet. The output directory must not already contain a packet.

The source-only copy shares the pinned tools and copies only the explicit public source/header/Python/metadata closure:

```text
tools/python/Scripts/python.exe toolscripts/squirrel_compose057_tiny.py --copy-name tiny-review
```

Its directory must be new. A file-access guard rejects private project reads outside the copy. The sealed run copied 170 files totaling 483755 bytes, rebuilt four identical component artifacts, and completed 42 source executions. No original image, SDK, CIA, or tool tree was copied.

Run the integrity tests and verify the current recorded identities with:

```text
tools/python/Scripts/python.exe tests/test_squirrel_compose057.py
tools/python/Scripts/python.exe toolscripts/squirrel_compose057_verify.py
```

## Component API

Use `source/squirrel-wave057/component.h`. Supply a 16-byte-aligned caller arena of at least 1048576 bytes, prefilled with an independently known seed, and keep it alive for the whole process. Only one active VM is qualified; VM destruction is not qualified.

Call `sq_compose_boot057(arena,1048576,64)`. `boot057.c` binds the explicit source allocator/services and invokes the genuine 049 factory. The bounded allocator reuses only 045's heap provider, not its VM fixture provisioner.

Call `sq_compose_run057(vm,profile,3,flags,cleanup,out)`. Synthetic prototype and instruction construction is separate in `programs057.c`. Profile 8 calls the actual root-registered array function. Profiles 256 and 257 run nested closures, capture/iteration and real throw/catch paths over integer arrays or signed bytes 65, -128 and -1. Flags 0 selects direct Execute; flags 1 selects generic Call. Cleanup 1 cleans up before returning; cleanup 0 requires a subsequent successful `sq_compose_cleanup057(vm)` before another program.

A successful run returns seven output words. For value 3, profile 8 returns `[1,0x08000040,3,1,0,0,0]`, profile 256 returns `[1,0x05000002,7,1,0,0,0]`, and profile 257 returns `[1,0x05000002,0xffffffc0,1,0,0,0]`. The final four words are the pre-cleanup top, base, call count and trap count.

`sq_compose_observe057(vm,out,capacity)` requires capacity at least 32 and returns 30 words. The first three are pointer, VM and shared-state byte sizes. On native 64-bit targets they are `[8,264,448]`. Words 3 through 13 are top, base, active calls, native depth, stack size, metamethod-name count, interned-string count, GC count, root tag, error tag and trap count. The clean stack-64 state is `[0,0,0,0,64,18,92,98,0x0a000020,0x01000001,0]`.

The Android command is:

```text
tools/python/Scripts/python.exe toolscripts/squirrel_compose057_build.py --profile android
```

The output is `work/squirrel-compose057/session-v2-android/compose057.so`. The frozen library is 137216 bytes with SHA-256 `f904557e2f91ccac65790eb79d388b389c36da23dcc7826490016e4c1ed78c5d`, no undefined symbols, and 16384-byte load alignment. Device execution and coordinator acceptance are separate observations.

## Evidence and limits

The full cold graph agrees across genuine original ARM, authored ARM, actual Windows and high-address AArch64: 92 interned strings with hashes and bucket chains, 14 tables, 83 closures with canonical callback identities and masks, 98 GC members, actual VM/shared fields and all 276 live allocation roles. The registered array handler uses actual source; 56 other callback kinds remain distinct, uninvoked, fail-closed dependencies.

The sealed corpus contains 14 cold sets across four targets, 28 executions in a seven-step same-VM sequence, 13 normally returning controls, and eight integrity tests. The sequence alternates native calls and script throw/catch paths. Wrong metadata-vector, legacy-carrier, caller-top and program-lifetime controls are rejected. A premature retired-instruction read returns with the same result and final graph but is rejected by the ARM/AArch64 read-order observer.

Full post-call graph equality is not claimed. Original native callback return retains different instruction/literal representations, target and root values in inactive frame slot 1. Both raw normalized graphs are retained. Every other observed typed field and owning reference is compared. The bounded reuse trace records every relevant frame read/write, rejects moved or straddled frame allocations, and observes no retired-field read before complete reinitialization on those tested paths. It does not prove that property for arbitrary opcodes, callbacks, debug hooks, or native errors. Per-instruction Windows memory tracing is not claimed.

SDK allocator-private bytes are separate from native typed budgets. For example, the four-slot trap vector requests 64 target bytes and 96 native bytes. A first mixed program retains this legitimate buffer and changes the clean active allocation count from 276 to 277; later native runs retain it too. Whole-memory equivalence is not claimed.

Allocation failure, concurrent VMs, VM destruction, arbitrary caller prototypes, arbitrary native errors/formatting, uninvoked callbacks, the whole interpreter, and the native game remain unqualified. Original executable bytes are mapped only by the private reference oracle. Authored execution maps no original image or SDK helpers. Earlier failures and the exact private predecessor identities remain preserved separately. See `evidence/lanes/squirrel-compose057/stage-v1/relocation.json` for relocation provenance.
