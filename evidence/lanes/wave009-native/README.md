# Wave 009: inclusive interval-set membership

This packet reconstructs the two closed ARM membership routines at update addresses `0x780578` and `0x7805e4`. Each original body has 108 instruction bytes, no literal pool, no outgoing calls and a direct caller witnessed inside the frozen function/instruction census. Their respective callers are `0x4bed30` and `0x4c2494`. Actual four-byte call-site hashes and complete original extents are recorded in `claim.json`.

The ordinary C in `src/native/wave009/interval_set.c` queries a tagged singleton or circular list of inclusive 16-bit intervals. `interval_set.h` models the observed ARM layout naturally: tag at offset 4, singleton value at 6, sentinel node at 8, node next pointer at 4 and interval endpoints at 8 and 10. Caller evidence identifies the interval-set prefix as a destination-state pointer. Later verified unlink evidence identifies the interval-node previous/next pointers. The sentinel is modeled separately as a link head plus an arena-owner pointer; its storage is not interval endpoint data. Character and control payloads use a two-byte tagged union. Original class names remain unclaimed.

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

## Reviewed v2 pointer promotion

The v1 baseline is preserved byte for byte in `v1-packet.json` and `v1-verification.json`, with full source revision `fac2f01381fea91ea25d025f316a640e437dd76d` in `v1-provenance.json`. V2 changes only the interval-set prefix type from an unknown 32-bit word to `void *destination`; the interval-node unknown word remains unchanged. Two hash-bound caller spans show the set address passed to membership and its first word subsequently loaded as the cursor's current-state pointer.

`pointer-promotion.json` records actual compiler-checked ARM layout, true host64 layout and invariance of both 104-byte ARM source bodies. ARM offsets remain destination0/kind4/value6/intervals8. Host64 offsets are destination0/kind8/value10/intervals16, with a 40-byte set and 24-byte interval node. Native test instances store real host pointers; no pointer is encoded in a 32-bit word or padding.

V2 repeats the 1141 cases per function, ARM flag/return-mode cross-product and all-instruction coverage, then adds genuine native Windows executions of both wrong-source mutations for both functions. The four ARM and four Windows controls all return normally, preserve the checked memory, and fail semantically. The ARM oracle rejects every executed address outside the complete owned function span. Windows checks memory before reporting a different result, and its failure details claim native return and memory checks rather than ARM SP/LR or emulated-sentinel checks.

The v2 focused suite has 10 tests, including a genuine compiler/linker branch to an undeclared executable address and a simultaneous wrong-result/memory-write ordering control. Matching credit remains zero. These are function components with finite behavior evidence, not native game builds.

## Verified v3 shared types

The exact v2 packet and verification are preserved as `v2-packet.json` and `v2-verification.json`, with immutable published source revision `88de9588e48d44ef931e96554e515d325bff1713` in `v2-provenance.json`. The earlier v1 history remains intact. V3 supersedes the deliberately opaque node prefix and sentinel endpoint view described in the historical v2 section.

Qualified original unlink, construction, destruction and tagged-copy spans establish true previous/next links, a separate sentinel arena owner and distinct unsigned 16-bit character/unsigned 8-bit control payload members. The set remains 20 ARM bytes/40 host bytes; a node remains 12/24 bytes. The ring is 12/24 bytes, with its owner at ring+8/+16, or set+16/+32. No native pointer is stored in an endpoint, scalar prefix or padding.

Both 104-byte ARM membership bodies remain byte-identical to v2 despite the C accessor changes. Their empty body relocation sets remain invariant. The dedicated producer `toolscripts/native_wave012_type_invariance.py` measures those facts alongside both matcher/control bodies; the evidence and original witness hashes are pinned by `pointer-promotion.json`. The complete original/source, flag/return, Windows, actual semantic-negative and Android component checks are repeated for the expanded types. This is a type qualification update with no matching or functional byte-count increase.
