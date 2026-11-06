# Host64 memory-source component qualification

This lane validates 257 wave 002 typed getters and 58 ABI-qualified wave 003 typed setters as actual native Windows C, with matching Android ARM64 compilation. It uses the production source definitions unchanged. Generated code is test glue only and earns no reconstructed-source credit. The earlier void setter sources and all prior platform reports remain untouched.

## Observations

The original ARM fixture corpus contains 24 cases per function: 12 width/sign boundaries and bit patterns, each with two aligned pointer geometries. The getter oracle captures the original R0 result and checks full state/read effects. The setter oracle checks complete memory snapshots, exact read/write effects, actual return and R0 equal to the loaded record pointer. Capture imports the frozen lane helper functions without running their publication entrypoints or modifying their outputs.

On Windows, the same value/geometry inputs construct real host C objects using the actual partial-structure headers. A typed preparation wrapper assigns `handle->record` to the allocated host record. No ARM32 pointer word is copied into an eight-byte host pointer. Member offsets and widths are obtained from host C `offsetof`/`sizeof`, while compile-time assertions retain the scalar-field layout contract. The selected objects occupy two elements of appropriately aligned arrays, providing two valid host geometries.

Each native invocation must return. Getter results are compared with original ARM outputs. Setter observations compare the stored field's bytes and the identity of the returned logical record pointer. Entire allocated record and handle arrays are checked against expected state, so neighboring objects and padding are guarded. Raw ARM virtual addresses are deliberately absent from the cross-platform equality relation: the logical record and field are the shared observation.

The Windows corpus completes 7,560 source-function invocations. Host pointer width is eight bytes; 144 functions have a different host pointer-member offset from ARM32 and still satisfy their typed memory contracts. The setter return-pointer checks cover 1,392 invocations. This is bounded component evidence, not universal equivalence or a playable game build.

Private wrong C variants flip the returned getter bit or the stored setter bit. They are compiled and linked separately, complete all 7,560 invocations, preserve logical pointer-return/alignment guards, and are rejected semantically in every case. Setter wrong variants intentionally fail 1,392 expected-memory comparisons after returning; those are semantic control failures, not successful memory-equivalence results. Invalid function IDs, truncated records and invalid geometry IDs fail closed.

## Android and exclusions

The identical production sources plus test glue build as an API-29 ARM64 Bionic PIE and shared library. ELF inspection requires AArch64 and at least 16 KiB alignment for every load segment, and checks all 315 qualified native symbols in the shared library. No APK, device execution, dual-display behavior or full-game functionality is claimed.

The three setters `fn_0055a368`, `fn_0055a370` and `fn_0055a558` remain excluded because their independent indirect interfaces are unqualified. They are neither dispatched nor compiled by this lane. All source-credit decisions remain with the native lane/coordinator; this platform proof adds zero duplicate credit.

## Reproduction and closure

All manifest, corpus, source, header, helper and tool paths used by this lane are project-relative. `platform/memory-wave001/inputs.json` freezes production sources, native receipts/helpers, original module and compiler/runtime dependencies. Any missing function or changed source/tool pin fails before compilation. The corpus freezes its input-manifest hash. Compiler/linker invocations, generated glue and resulting artifacts are retained under the selected work root.

From any working directory:

```powershell
& C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\tools\python\Scripts\python.exe C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\toolscripts\platform_memory_build.py --capture-native --workers 3
& C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\tools\python\Scripts\python.exe C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\tests\test_platform_memory_build.py
```

Omit `--capture-native` to rebuild native platform artifacts against the frozen original corpus. `--output` selects a fresh root beneath `work/platform-memory-wave001/`. The test suite rebuilds into `unittest/` and checks function completeness, changed-input rejection, host64 pointer geometry, typed setter returns, wrong-source controls and Android ELF constraints. A source/ABI amendment requires an explicit new manifest and recaptured corpus; existing evidence must not be relabeled to fit it.
