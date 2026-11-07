# Composed execution 047, stage A

The engine combines measured nongenerator Squirrel script behavior from frozen 035, 041 and 043 on the complete 040 VM/storage ABI. The sealed 040 header and full field probes are pinned in the claim. Frozen041 is gated by its unchanged historical ready plus the coordinator capture041-source-closure-supplement, which pins all12 actual041 source files from the immutable copied checkpoint. The original041 folder-enumeration defect and047 failed missing-body copy remain preserved. Every selected C source is independently enumerated in047 runtime inputs. Target layout remains 168 bytes; native layout is 264 bytes, with stack at 48, top/base at 80/84 and shared owner at 232. Native shared storage is 448 bytes. No older 020, 022 or 028 VM type is cast over that storage.

Every VM field access used by selected algorithms goes through distinct 047 C definitions. The forced quoted binding_names.h maps selected frozen caller declarations/calls at source compilation, preserving original frozen files and avoiding ambiguous repository source definitions. The pre-name-gate qualified attempt remains private under work and is not publication evidence. Shared access uses the genuine 034→030→020→012 first-member chain. Notify reads actual 040 flag 00a9. The separate 045 measurement corrects historical field names: target +0/native304 holds 18 metamethod names, +12/native312 holds 15 type names, while +16/native320 names an allocated auxiliary vector with further semantics unqualified. No mutable 045 C is consumed.

One readable dispatcher runs the preserved script opcodes plus CLOSURE, PUSHTRAP/POPTRAP/THROW and FOREACH. Closure and iteration failure use the measured common error path: actual FOREACH failure at 18fff8 branches to 1906f4, which raises the current error before the common unwind. Direct THROW already publishes its operand and enters unwind. Actual generators, POSTFOREACH, debug hooks, suspension and full opcode/error coverage remain outside this stage. A partial Execute root receives no whole-function credit.

The new mixed programs use actual compact 011 prototypes and 017 closures. Parent creation captures an array or signed-byte string; the child iterates it, throws its sum, and the parent's trap catches and returns that value. Source mode executes frozen source dependencies only. Original mode executes original creation/Execute/FOREACH/destruction bodies, with measured allocation/disposal services at separate authored addresses. There is no original endpoint overwrite, cached answer, ARM interpreter or result patch.

The baseline contract has 1,018 frozen 043 sets. Native raw snapshots explicitly report actual 264-byte storage. The compatibility projection checks pointer/frame/VM metadata before translating only the metadata size word to the old 296-byte validator; all semantic words remain untouched. Original/source ARM target arenas can still be compared directly. Mixed arenas are compared without masks. Native-call programs retain the previously declared inactive original frame cells and their observer exclusion; this is not universal machine-state equality.

The freestanding component ABI is declared in source/squirrel-wave047/component.h:

```c
U32 sq_component_execute047(void *arena, U32 bytes, U32 profile, I32 value,
    U32 flags, U32 cleanup, U32 *output, U32 capacity);
```

Use an arena of at least 1 MiB aligned to 16 bytes and a separate output array of 8,192 U32 words. Invocation is serialized because fixture service state is global. Profile 8 exercises real source native registration/Call/array behavior; profiles 256 and 257 execute the mixed array/string programs. Flags 0/1 select the preserved direct Execute/generic Call scenario; cleanup is 0/1. Recommended qualification input is value 3. Return value is observation-word count; zero rejects invalid parameters or insufficient output storage. These profiles provision named fixture state and are not production initialization or game startup.

For actual Android packaging, compile the explicit `sources(..., normal)` list from squirrel_execute047_build.py with its binding_flags(path), add component_reference_stubs.c, and omit native_fixture.c. Link with ordinary Android shared-library relocation. The component library builder uses PIC AArch64 source and no original-address linker script. Reference-only entry stubs terminate as unsupported if reached; source component execution must not call them. Exported symbols are sq_component_execute047 and sq_component047_abi. The latter reports version, arena requirements, output bound and actual storage/pointer sizes. The root-owned API 36 harness may dynamically load this source-only library; that physical Android result is separate from the high-address AArch64 CPU model and this worker's packet.

Reproduce with project-local Python:

```powershell
.\tools\python\Scripts\python.exe toolscripts/squirrel_execute047.py --output work/squirrel-execute047/stageA
.\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_squirrel_execute047.py -v
.\tools\python\Scripts\python.exe toolscripts/squirrel_execute047_replay.py --report work/squirrel-execute047/stageA/report.json --copy-root work/squirrel-execute047/stageA-copy
```

Tests materialize their own current ARM, Windows and AArch64 fixtures and component library. No historical platform artifact is required. Original game inputs, raw arenas, reports and copied replays stay private under work. Preserved attempts include the reference guard's initially missing declared closure allocation/free service, the source closure service's initially unhandled outer-vector disposal, the fixture's initially wrong array-capacity disposal assumption, and the relocated control's missing header include path. Each was corrected in the fixture/verification boundary without changing original code or frozen providers.

Stage A does not yet requalify all 818 exception or all 136 capture predecessor scenarios. It preserves the consumed source inputs, tests the coherent mixed path and records that remaining predecessor obligation explicitly. Startup 045, generator 044/046/048 and whole-game/platform admission remain separate coordinator decisions.
