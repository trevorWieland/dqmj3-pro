# Native wave 001

The frozen update executable is SHA-256 `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126`. This lane proposes ten standalone exact C functions covering 124 original instruction bytes. Coordinator source acceptance and complete-module integration are separate decisions.

`packet.json` pins the source files, producer, compiler, linker, objects, source-linked ELF files, complete function spans, body relocations, unresolved-symbol checks and reproduction argv. It records all five optimization configurations and distinguishes fourteen behavior-only nonmatching functions from the ten exact candidates. No original instruction bytes are embedded in the authored C, and no compiler output is modified.

The exact scalar functions multiply an unsigned 32-bit input by 500, divide a signed 32-bit input by two with truncation toward zero, and compute the corresponding signed remainder. Seven adjacent functions read unsigned 32-bit fields through an observed handle-to-record pointer chain. `record_access.c` uses an intentionally partial structure with unknown fields labeled by offset; no original class or gameplay purpose is asserted.

| Original ARM address | Bytes | Source symbol |
|---|---:|---|
| `0x0017481c` | 12 | `fn_0017481c` |
| `0x00174828` | 12 | `fn_00174828` |
| `0x00174834` | 12 | `fn_00174834` |
| `0x00174840` | 12 | `fn_00174840` |
| `0x0017484c` | 12 | `fn_0017484c` |
| `0x00174858` | 12 | `fn_00174858` |
| `0x00174864` | 12 | `fn_00174864` |
| `0x00235c5c` | 12 | `fn_00235c5c` |
| `0x00235c74` | 16 | `fn_00235c74` |
| `0x003453a8` | 12 | `fn_003453a8` |

The identified matching configuration is the local Clang 21 toolchain targeting ARM MPCore in ARM mode at `-O2`, with function sections and the flags recorded in the packet. This is an experimentally verified matching configuration for these functions, not identification of the historical compiler.

The producer executed 516 edge and seeded-random input pairs for each of seventeen scalar functions, totaling 8,772 original-reference outputs. Each original and genuine source-linked body agreed with a separate Python arithmetic model. Seven getter functions each passed 128 randomized object-memory trials, with exactly two declared four-byte reads and no writes. The harness checks return to a sentinel, instruction budget, preserved callee-saved registers, SP and LR, and observed memory effects. Bounded trials do not prove every input or platform behavior.

Three wrong arithmetic sources and one wrong record field were compiled independently. All four executed to the return sentinel and raised the specific `BehaviorMismatch` exception with actual and expected values recorded in `packet.json`. The invalid record-pointer control specifically raised `UC_ERR_READ_UNMAPPED`; an unrelated exception cannot satisfy these checks. `runtime-negative-identity.json` pins the actual runtime DLLs and wrong-source artifacts. `failed-mutation.json` preserves a rejected malformed setup mutation separately.

`boundary.json` contains Ghidra 12.2 corroboration for all ten exact spans. Automatic function creation agrees with every complete extent, and selected direct-call instructions reference each entry. The raw loaded image matches the original module hash. Ghidra does not force the expected function body: it disassembles from the entry within a wider bounded region and computes the body, then checks the resulting size. The descriptor pins the analysis script, language files, Java and Ghidra components, records reproduction arguments and preserves failed attempts. Direct-call references are static evidence, not observed runtime hits. Private code listings, neighboring contexts and all Ghidra project/log output remain under `work/wave001-native/`.

Reproduce the scalar/memory/object/link/negative packet from any working directory by invoking the repository's `tools/python/Scripts/python.exe` with the absolute `toolscripts/native_wave001.py` path. The producer uses project-local tools and outputs. `corpus.json` is the scalar reference interface consumed independently by the platform lane. Ghidra boundary reproduction uses the stored descriptor's argv/environment and its manifest entries; its settings, cache and home must be precreated under the private work directory.

The next useful family is the 299 provisional sequential-load getter entries in private `work/wave001-native/memory-leaves.json`. These remain unaccepted address/offset candidates until complete boundaries, typed structure access, real linked bytes, ABI/memory effects and meaningful negative controls are validated. Wave 002 owns that family outside this lane's explicit intervals.
