# Native stream 056

This is a public, independently reviewable reconstruction candidate for the two complete fast DEFLATE kernels at ARM `0x00733e28` and `0x00739d08`. It grants no source, exact-match, SDK, game or Android-device credit. Source lives under `src/native/wave056`, its tools use the `native_stream056_` prefix, and metadata lives in `evidence/lanes/native-stream056/stage-v1`. Original inputs and generated binaries/reports remain private under `work/native-stream056/public-stage-v1`; no frozen predecessor or shared registry was changed.

`claim.json` was generated before authored C. It pins the original module/census, all four instruction ranges (1,808 + 1,804 = 3,612 bytes), the compiler integer literals, the three diagnostic strings in each copy, and the actual direct caller instructions. The caller at `0x007332c4` belongs to `0x007321e4`; the caller at `0x00739204` belongs to `0x00738130`. Both callers reload the stream/mode immediately after the call, overwriting returned R0 before using it. The appropriate interface is `void kernel(Stream056 *, uint32_t caller_initial_available_output)`.

The existing gzip036 SDK route enters `0x007321e0` (a leading NOP before census entry `0x007321e4`) and reaches the first kernel. The second kernel is a separate SDK copy. Its source behavior is independently compared; no new wrapper, leading NOP or other SDK body is claimed.

## Authored implementation and measured storage

`src/native/wave056/stream056.c` is ordinary C: it consumes Huffman table entries, decodes literals/matches, copies circular history, preserves overlapping output matches, returns unconsumed whole input bytes, and publishes exact error/mode/bit state. It uses no assembly, executable table blobs, host zlib calls, original helper fallback, allocation, callbacks or cached results. Both canonical entry points use the same measured algorithm. The public C and header are byte-for-byte copies of the frozen private source, with their unchanged canonical symbols; `path-relocation.json` pins that relocation and the compiler-profile predecessor/successor history.

This is an explicit versioned kernel storage contract, not a complete portable zlib SDK structure declaration. A future source caller must use these exact named types or separately qualify an adapter; structurally similar SDK structures must not be cast to them. Untouched fields are reserved storage and gain no semantic interpretation. The fixed-width original 32-bit counters remain 32 bits on native platforms.

| Storage | ARM | Windows/AArch64 |
| --- | ---: | ---: |
| Stream056 size | 56 | 88 |
| StreamState056 size | 7,108 | 7,128 |
| Code op/bits/value | 8/8/16 bits | 8/8/16 bits |
| Input pointer / available input | 0 / 4 | 0 / 8 |
| Output pointer / available output | 12 / 16 | 16 / 24 |
| Message / state pointers | 24 / 28 | 32 / 40 |
| Window size / have / next | 40 / 44 / 48 | 40 / 44 / 48 |
| Window pointer | 52 | 56 |
| Hold / bit count | 56 / 60 | 64 / 68 |
| Length / distance table pointers | 76 / 80 | 88 / 96 |
| Root lookup widths | 84 / 88 | 104 / 108 |
| Sane flag | 7,104 | 7,124 |

Mode is a one-byte store at state offset zero. The adjacent bytes are preserved, including on error. Incoming mode21 is only an initialized fixture sentinel, not a claimed SDK enum identity. `toolscripts/native_stream056_layout.c` is a separate fixture translation unit; its 23 compiled size/offset values are checked against independently declared target/native layouts on all three source platforms. It is not required by production callers.

## Admitted domain

The source requires the real fast-kernel caller contract: at least six available input bytes, at least 258 output bytes, caller start at least the currently available output, and initialized produced-prefix backing. Initial hold contains only its declared zero to seven bits. The generated code entries obey the measured `uint8 op / uint8 bits / uint16 value` format and RFC 1951 limits, including match lengths 3..258 and distances 1..32,768. Root/subtable storage is four-byte aligned, and circular-window backing is initialized and in bounds. Input, output, state, stream, history and tables are distinct objects with no concurrent mutation. Pointer arithmetic remains within the provisioned objects. This fixture provisioner is not a production initializer or complete SDK caller.

The sane flag rejects a distance requiring more history than `window_have`. With sane zero, the original can consume initialized physical window bytes beyond the declared logical history; those bounded cases are tested without fabricating readable memory outside the allocation. Neither source nor harness claims behavior for unallocated tables, impossible cursor/size values, insufficient backing, arbitrary table operations, huge fabricated match lengths, aliasing objects, or the original running big endian.

## Qualification

The full producer executes 366 genuine synthetic compressed programs through each canonical entry: 732 case sets and 2,928 original ARM / authored ARM / actual Windows DLL / authored AArch64 CPU-model observations. Windows uses actual high native pointers; the AArch64 code and data are linked/mapped above 4 GiB. The source is compiled by the pinned project Clang/LLD with strict freestanding C11 warnings.

The independently generated fixed and complete 15-bit dynamic Huffman trees encode actual RFC 1951 symbols. No original table data is copied into authored state. An independent model uses a list of bits and a materialized chronological history, rather than the C hold-register/ring-index representation. It checks every byte of the initialized arena, including unchanged counters, reserved/padding bytes, input, tables, history, output canaries, cursor pointers, exact diagnostic-string identity, remaining bits and mode. Raw comparisons happen before report-only pointer projection. ARM/AArch64 execution additionally checks measured/source instruction closure, initialized stack reads, permitted memory accesses, normal return, stack restoration, integer/FP callee saves, and the initialized FP environment.

Native pointer values and DLL ASLR are retained in a separate private raw observation file. The deterministic report hashes a separate copy with only seven known pointer slots zeroed after exact expected-byte equality; it separately checks cursor offsets and diagnostic roles. It never patches execution memory or accepts a result using normalized byte equality alone.

All 413 and 412 instructions reachable in the admitted domain are exercised. The remaining 39 PCs per copy are six compiler scalar-copy alternatives. Their pending counts are bounded by the current match, at most 258, or by its at-most-255 remainder. The actual `CMN count,0x80000001` sets carry and zero false, so `BLS` always skips those alternatives. `proof056.py` checks each exact instruction, branch target, skipped extent and all intervening flag-preserving instructions against the pinned module. No flags or original code were forced. This is a domain-qualified static proof, not a proof about arbitrary malformed tables.

Ten wrong-source controls compile and normally return on ARM, Windows and AArch64 for both entries (60 rejected target/symbol checks): omitted input rewind, wrong literal, ignored window cursor, wrong overlap distance, ignored distance extras, wrong error mode, missed end code, overwritten inactive mode bytes, changed caller total, and ignored logical history. The last control retains an unreferenced diagnostic string solely so the observer can keep the same independent string-identity contract; no endpoint is replaced or result supplied.

Eight tests build fresh copied C/header fixtures rather than opening historical platform artifacts. They check target/native layouts, representative genuine execution, invalid provisioner domains, prefix-code properties, the guard proof, a newly compiled normally returning rewind control, and stable pointer-field diagnostics despite ASLR byte coincidences. The full copied producer/control replay is separate from these tests. Tests, observed PC coverage and the static domain reasoning do not constitute universal equivalence.

The first public control-report replay preserved a Windows ASLR diagnostic mismatch: a wrong message pointer differed from the expected pointer in different individual bytes. The successor still requires exact raw whole-arena rejection after a normal return. It retains every raw mismatching offset and arena hash privately, while its deterministic report identifies the affected typed pointer field and retains exact offsets for every other changed byte. Product C, controls and acceptance criteria are unchanged; the first public snapshot remains immutable.

## Reproduction

Run from the repository using the project-local Python:

```
.\tools\python\Scripts\python.exe toolscripts/native_stream056_measure.py
.\tools\python\Scripts\python.exe toolscripts/native_stream056_proof.py
.\tools\python\Scripts\python.exe toolscripts/native_stream056_verify.py --output work/native-stream056/public-stage-v1/final
.\tools\python\Scripts\python.exe toolscripts/native_stream056_controls.py --output work/native-stream056/public-stage-v1/controls
.\tools\python\Scripts\python.exe tests/test_native_stream056.py
```

The primary references are the [zlib 1.2.7 fast decoder](https://github.com/madler/zlib/blob/v1.2.7/inffast.c) and [RFC 1951](https://www.rfc-editor.org/rfc/rfc1951). Their role is algorithm/format context. No unmodified public decoder is counted as newly recovered source, and compatibility with that public source does not prove a historical SDK/compiler identity. `primary-references.json` pins the exact public decoder bytes consulted.

`development-attempts.json` retains the incomplete first coverage cohort and instrumentation/test failures. The first copied replay had identical observations and linked binaries but different Windows object timestamps. Its immutable snapshot remains preserved. The successor compiler profile uses the documented `-mno-incremental-linker-compatible` option to suppress those COFF timestamps at compilation; no object bytes are patched. Exact objects, full SDK root composition, universal malformed-stream behavior, production startup and physical Android execution remain unclaimed. Root owns independent replay, publication and any subsequent admission.
