The literal fast-path batch closes four complete seeded functions: UTF16 length at 0x00100b58 (18 Thumb bytes), case-aware token comparison at 0x004bffa8 (184 bytes), supported-pattern recognition and matching at 0x004c0060 (800 bytes), and its constructor at 0x004c0380 (16 bytes). All 1,018 original instruction bytes are accounted for. The constructor is a complete exact object/linked-span candidate with no relocations; the other three are nonmatching behavior candidates. This packet grants no admission or source credit.

The matcher distinguishes unsupported patterns (0), supported matches (1) and supported nonmatches (2). It recognizes literal runs with the measured start/end controls and leading/trailing dot-star forms. It retains the original fallback for an empty dot-star pattern and more complex syntax. Its comparison helper advances the token cursor only for successful characters and keeps the original unsigned offset-plus-count behavior. Character equivalence uses the frozen typed Unicode case-group service; no original executable helper is mapped during source execution.

All 699 fixture cases pass original/source ARM and actual Windows64 execution. They include supported and unsupported forms, seventeen BMP character values crossed with one another, cursor side effects, bounded allocation failures, malformed lexical input, embedded NUL candidates and non-dereferencing unsigned-wrap cases. All 259 original instructions are reached. There are no excluded or unhit instructions and no retired/private-pointer masks in these fixtures. Every ARM fixture byte agrees exactly. Native comparison replays every original typed write through measured pointer-width layouts and compares the full fixture, unused storage, padding and guards; actual source output is never patched. This is still a finite observation domain, not universal or whole-memory equivalence.

The 64 ARM/Thumb return-state and flag combinations pass. Six normally returning semantic mutations are rejected on ARM and Windows: a missing case group treated as a match, a skipped first case alternative, prefix length treated as exact, substring search skipping its first position, doubled UTF16 length, and inverted supported-match result. Memory guards and immutable input are checked before reporting semantic mismatch.

The 16-field ARM/native ABI probe checks the literal matcher, token/lexer, arena/block, links and the separately proposed borrowed rule prefix. Native pointers are wider than 32 bits and the constructor returns the complete input pointer. The Android API 29 component links with 16-KiB load alignment. This does not establish Android device execution or a native game build. The prefix describes only measured fields, not the full owning game class. The remaining outer caller, arena setup and zero-fill functions remain a separate uncredited batch.

The source graph uses 119 canonical functions from the closed source dependencies. Validated owner-derived case/property arrays remain a non-executable data service with zero source-byte credit; their public Unicode version is not established. Original bytes, extracted tables, private disassembly and full fixture buffers remain under ignored paths.

Run the project-local producer and verifier:

```
tools/python/Scripts/python.exe toolscripts/native_wave013_literal.py
tools/python/Scripts/python.exe toolscripts/native_wave013_literal_verify.py
```

The first run rebuilds actual source objects and executes the bounded fixtures and mutations. The verifier checks the current pins and 15 dedicated tests. The functional proposal contains the three non-exact functions (1,002 bytes); the exact 16-byte constructor remains excluded pending separate coordinator admission. No shared registry, inventory denominator, CI or acceptance ledger is changed by this worker.
