# Wave013 typed NFA construction component

The packet reconstructs 40 complete original functions (9,564 instruction bytes) for NFA construction, range insertion/union/intersection/complement, property expansion, recursive graph cloning and repetition. Frozen tokenizer, fixed-arena and label operations are linked source dependencies. The new `pattern_compile_nfa` convenience API is source glue with zero original-function credit. The outer caller at `0x004c3c20`, remaining DFA range compilation, fast path and game remain separate work.

The source is ordinary typed C. The builder owns a real state-ring subobject. Frozen `NfaState` retains separate transition-head and owner members: new helpers receive a `NfaState*` and name those members directly. No cast treats adjacent frozen members as an `IntervalRing`. ARM member encodings stay out of native data; dispatch uses typed C control flow.

## Caller and storage contract

`pattern_compile_nfa(builder, lexer, arena, input)` constructs a fresh lexer, tokenizes the explicit UTF16 span, constructs the builder, and builds the NFA when tokenization succeeds. The return is the original lexer or NFA status. Owned partial graphs, allocator state and error positions remain on failure. Constructors return full-width input pointers where original callers consume R0.

The caller supplies a valid arena and keeps storage alive. Its 2624 logical slots remain 16 target bytes or 32 host64 bytes each. Token/range/clone-entry requests remain one block; states/edges remain two. Raw UTF16 lengths and range/property counts are not doubled. Target/host64 builder sizes are 28/56, NFA states 24/48, clone entries 16/32 and UTF16-span descriptors 8/16. Compiler ABI probes measure these fields for ARM and actual Windows64. Android arm64 uses the widened pointer view. All predecessor wave009-012 sources and proofs remain unchanged.

## Nonexecutable data service

The host binds `PatternUnicodeData` before construction and retains the provider and its arrays immutably while bound: 1398 four-u16 case records, 132 property start/count records and 2574 u16 interval pairs. The producer extracts only three measured, hash-checked initialized-data regions from the private owner image. ExHeader scope evidence places them in nonexecutable `rodata` or `data`, never text. No original executable image/helper is mapped during source execution.

Source validates case ordering, interval bounds and every property index. Its only mutable global is the typed provider pointer. Binding is host setup; concurrent rebinding is excluded. Invalid binding preserves the previous service. Original whole-program immutability is not asserted: this component consumes the measured initialized contents immutably, including records originally in `.data`.

Original table payloads remain private and receive zero source-byte credit. The public Unicode version is unidentified. A replacement requires complete comparisons of case groups and all property classes, blocks, aggregates and engine-specific sets.

## Memory and lifetime observations

The primary comparison executes original ARM, linked source ARM and the actual Windows64 DLL. Source execution consists entirely of compiled recovered C and qualified nonexecutable arrays. The observer rejects instructions outside owned code, including execution of read-only/literal data. Read/write bounds, callee-save registers, SP and ARM/Thumb returns are checked.

Windows expectations replay every original write through reviewed allocation-callsite roles and measured native layouts. The complete translated 262,144-byte fixture is compared, including allocator bitmap/cursor, live fields, padding, unused arena and non-private retired payload. Actual source output is never patched. Native pointers above 32 bits and constructor returns are checked independently.

Freed clone-map and temporary-range nodes may retain private stack-sentinel links. Raw differences and hashes are retained privately. Exclusion requires a measured pointer field at the first/second word of a free slot, with original/source ARM values in their private stacks. Native values must lie in the current Windows thread stack. Every other byte is compared.

The observer quarantines all retired bytes. Reads while free are rejected; reallocation does not permit reading a field until its relevant bytes are initialized. Writes while free do not restore a lifetime. 1800 complement cycles force arena-wide reuse and verify initialization before reads. A wrong C cleanup loads `next` after freeing its entry: ARM and actual Windows still return the expected final defined graph, while the observer rejects the normally returning stale reads.

These comparisons are lifetime-qualified and bounded. They claim no universal or whole-memory equivalence. Unhit instruction addresses remain explicit. Immutable zero-flag dispatch arms and the literal hyphen's absent case record have separate measured exclusion proofs. Each claimed function has a complete source body.

## Validation and limits

Fixtures cover literals, alternation, groups/classes, repetition forms, all 128 named properties, malformed input, allocation pressure, cursor wrapping, callback errors, range operations and reuse. Case lookup separately compares all 65,536 UTF16 value plus four larger u32 inputs against original ARM, source ARM and actual Windows64.

Nine wrong-source mutations must return normally and fail semantic comparison on both platforms after guard/immutable checks. The separate read-order mutation must keep the same final defined state and fail the observer. Failed harness/control attempts remain in `evidence/lanes/wave013-native/nfa/attempts.json`.

Windows x64 and Android arm64/API29 source components build; Android uses 16 KiB load alignment and requires the data service. No Android device execution or whole-game build is claimed. Ranges ending at 65535 are outside the terminating class-range fixture domain. Malformed pointers/tables, arbitrary ownership aliases, concurrent rebinding, MMIO and unbounded recursion are excluded.

## Reproduction

```powershell
& .\tools\python\Scripts\python.exe toolscripts/native_wave013_nfa.py
& .\tools\python\Scripts\python.exe toolscripts/native_wave013_nfa_verify.py
```

The first command rebuilds the complete source graph and runs fixtures, controls, case sweep and platform/ABI checks under the owned wave013 work directory. The second verifies pins and runs owned tests. Private owner inputs and project-local tools are required. The coordinator owns independent replay, acceptance, registry updates and publication.
