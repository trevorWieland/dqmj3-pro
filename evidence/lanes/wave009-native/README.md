# Wave 009: inclusive interval-set membership

This packet reconstructs the two closed ARM membership routines at update addresses `0x780578` and `0x7805e4`. Each original body has 108 instruction bytes, no literal pool, no outgoing calls and a direct caller witnessed inside the frozen function/instruction census. Their respective callers are `0x4bed30` and `0x4c2494`. Actual four-byte call-site hashes and complete original extents are recorded in `claim.json`.

The ordinary C in `src/native/wave009/interval_set.c` queries a tagged singleton or circular list of inclusive 16-bit intervals. `interval_set.h` models the observed ARM layout naturally: tag at offset 4, singleton value at 6, sentinel node at 8, node next pointer at 4 and interval endpoints at 8 and 10. The unread prefix words stay named `unknown_00`; their purpose, pointer interpretation and original class identity remain unresolved. The fixtures vary these unread words without attributing a role to them.

The measured Clang 21 ARM11 profile produces 104-byte source functions. They differ from the 108-byte originals in branch layout, register allocation and boolean materialization. The genuinely linked source spans equal their compiled object spans at the intended addresses. They do not equal the original spans. **Requested matching-source credit is zero.** The compiler profile and forty additional profile/source-form diagnostics are preserved; similarity counts are not progress.

Each function passes 1,141 original-versus-compiled fixtures plus 64 explicit initial-condition-flag/ARM-or-Thumb-return cross-product checks. Cases include every supported tag category, unknown tags, singleton extremes, empty lists, inclusive endpoints, reversed intervals, overlapping and unordered intervals, queries outside 16 bits, randomized values and a 128-node traversal reaching the final match. Every original instruction is reached. The oracle checks actual return, complete object/stack memory preservation, callee-saved registers, SP/LR, typed memory-read footprint and return interworking.

Four separately compiled wrong-source controls change inclusive upper bounds or singleton equality. They return to the sentinel normally, preserve memory and ABI state, and fail semantically. These are not accepted merely because a malformed candidate crashes or runs out of instructions.

Both functions execute all 1,141 fixtures natively in a Windows x64 DLL against the same semantic model. The same C also builds as an Android ARM64 API 29 shared component with 16 KiB load alignment. Those outputs are function components. No Android device execution or complete native game build is claimed.

`functional.json` proposes the two names with medium confidence for coordinator review. The established domain is valid aligned typed objects, finite well-formed circular lists with up to 128 nodes, arbitrary unsigned 32-bit queries, unsigned 8-bit tags and unsigned 16-bit bounds, with no concurrent mutation. The evidence is bounded and does not establish universal equivalence, malformed-cycle behavior, dangling-pointer behavior, MMIO/service behavior or whole-game execution.

The owner-provided ARM Compiler archive was inspected and extracted only under this lane's private work directory. Its version probe exited with license-related diagnostic `C9511E`; no license configuration or global installation was changed. Only a sanitized availability record is retained here. Original executable bytes, tool binaries, candidate objects, DLL/SO outputs, raw logs and original-reference disassembly remain private.

Reproduce with the project-local tool environment:

```powershell
& .\tools\python\Scripts\python.exe toolscripts/native_wave009.py --work work/wave009-native/replay --output evidence/lanes/wave009-native/replay.json
& .\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_native_wave009.py -v
```

Coordinator admission, the shared source-build configuration, the recovery ledger and report upload remain coordinator-owned. This lane does not self-admit source credit or change another lane's files.
