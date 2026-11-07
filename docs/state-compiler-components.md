# Bounded state-compiler components

Wave012 adds ordinary C for the measured update's arena, typed label/state construction and singleton transition-compilation phase. The three frozen packets propose 18 functions and 2,980 original instruction bytes for bounded functional review. They add zero exact matching-source bytes.

| Packet | New functions | Original instruction bytes | Original/source/Windows cases |
| --- | ---: | ---: | ---: |
| Arena allocation and free | 2 | 372 | 317 |
| Label and state constructors | 6 | 392 | 253 |
| Transition graph and byte helpers | 10 | 2,216 | 2,686 |

Each packet records full function boundaries, original modes, caller witnesses, actual object/link relocations, platform checks and normally returning compiled semantic negatives. Every owned original instruction is reached in its declared fixture corpus. Source executions use compiler-produced C dependencies; original executable helpers are not retained. ARM and Thumb return behavior is checked separately from native Windows execution. Android shared components build with 16 KiB load alignment; no device or game execution is claimed.

The arena retains 2,624 logical slots and the original allocation budgets. One physical block is four pointer-width words: 16 bytes on ARM32 and 32 bytes on host64. Range nodes, transitions and compiled states still request one, two and three logical blocks. Raw membership buffers keep their original byte counts. Pointer differences are converted to bounded slot offsets; pointer addresses are not truncated into integers or hidden in padding. Callers must provide suitably aligned untyped arena storage, valid owned block pointers, nonoverlapping metadata and the complete occupancy map.

The graph code preserves first-match behavior, epsilon closure, state interning, deep label ownership and the original partial mutations on allocation failure. It does not add rollback or fix original failure-path leaks. Memory helpers have bounded valid, nonoverlapping buffers; arbitrary aliases, malformed pointers, concurrent mutation and MMIO are outside the qualification. These components do not implement the full pattern parser, remaining range/control phases or outer driver. Wave013 investigates that separate closure.

The coordinator reran 25 component tests and 19 compile-tool guards. At snapshot `7c3c12d`, public compilation declares 46 units, producing 130 unit/target compilations: 42 portable units across ARM32, Windows x64 and Android ARM64, plus four Windows-only fixture runners. All quoted inputs, including `compile_graph.h`, are explicit. Candidate publication is distinct from independent committed replay and functional-registry admission.

See `evidence/lanes/wave012-native/arena`, `constructors` and `transition-graph` for the frozen cases, limits, proofs and reproduction commands. Earlier shared-layout source and proof snapshots remain preserved. The initialized ARM-text denominator and exact matching ledger are unchanged.

Immutable `7c3c12d` passed separate tool/wheel copies, a new offline dependency environment, fresh CIA extraction, all three complete producer packets, 58 unskipped tests and 130 compilations. Every function result and binary hash reproduced. See `evidence/verification/wave012-isolated-7c3c12d.json`. The 18 functions are subsequently approved as medium-confidence functional entries, independently of exact matching progress.
