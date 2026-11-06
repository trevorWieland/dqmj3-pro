# Native wave 006: constant returns

This lane proposes **three complete functions and 24 instruction bytes**. The measured opportunity is small: a scan found 1,315 raw constant-load/return pairs, but only three were direct call targets inside Ghidra-qualified caller bodies. No further complete constant-buildup functions met the initial register-only/no-pool scope. Eight additional Ghidra constant entries lacked independent direct calls and were not claimed. Internal tails and unqualified entries receive no credit.

| Address | Raw return bits | Current source return |
|---|---|---|
| `0x002ff9c0` | `0x00000000` | `u32`, zero |
| `0x0030235c` | `0xffffffff` | `s32`, minus one |
| `0x003023a8` | `0xffffffff` | `s32`, minus one |

The source is ordinary value-level C. The complete bodies read no input registers, stack or data memory. Caller context sets two argument slots before the zero-return entry and an opaque handle slot before the status entries. The source retains those observed slots as explicitly unused arguments; the historical unused argument list is not identified. Signed comparison of a status result in a caller supports using a signed status view rather than letting an unsigned C return silently change future portable comparisons. No original function names or high-level purpose are asserted.

The discovery claim used an unsigned bit-pattern lens with a minimal no-input interface. That discovery description is not the final C prototype. The initial unsigned/no-argument source, producer and diagnostic packet were retained under `work/wave006-native/initial-u32/` before the caller-compatible source interface was qualified. Native object bytes remain unchanged.

`packet.json` pins the current source, producer and helper, public Clang profile, actual compiler/linker/runtime, complete object sections and genuine LLD placements at original virtual addresses. All complete spans match the original update code, with no literal pools, body relocations or unresolved symbols. The historical compiler remains unidentified.

Every function passed 256 original/reference cases. These vary general-register inputs, unrelated memory and stack contents, all sixteen initial NZCV combinations, and both ARM and Thumb return states. The latter matters because observed callers use interworking calls into these ARM entries. The harness verifies the scalar return bits, every other general register, SP/LR, expected final mode/flags, no data-memory access, complete memory snapshots, sentinel return and the exact two-instruction path.

Each function also has an independently compiled wrong constant. The wrong source returned normally, preserved the unrelated register/memory contract, and then triggered the specific `ConstantMismatch` exception with actual and expected return values. An arbitrary failure does not satisfy this control.

`boundary.json` binds each Ghidra extent to direct call witnesses. Private caller disassembly is under `work/wave006-native/caller-contexts.txt`. `review-summary.json` records the opportunity limits, current frozen packet identity, interface evidence and historical diagnostic snapshot. Reproduce with the repository's `tools/python/Scripts/python.exe` and the absolute `toolscripts/native_wave006.py` path from any working directory.

These are exact standalone source packets with bounded behavior checks. Coordinator independent replay, whole-module integration and acceptance remain separate. They do not establish a complete native game build or universal behavior proof.
