# Effect CPU foundation 065

This checkpoint recovers six complete CPU bodies, totaling 1,144 original instruction bytes. It is a review candidate with no self-admitted source or matching credit. The surrounding effect loader, resource construction, finalization and GPU execution remain open.

| Original ARM entry | Bytes | Authored source | Observed role |
| --- | ---: | --- | --- |
| `0053a688` | 24 | `effect_shader.c` | Initialize shader-binding fields and return the caller-used object pointer |
| `0053e2c4` | 296 | `effect_shader.c` | Select one of 30 existing command-buffer bindings from measured keys |
| `0017db84` | 60 | `effect_shader.c` | Release nonempty owned commands through the supplied allocator |
| `002a41c4` | 716 | `effect_preview.c` | Copy fixed records, append preview pointers and add three translation components |
| `005e6a68` | 32 | `effect_preview.c` | Copy one 320-byte serialized record |
| `005e7318` | 16 | `effect_preview.c` | Read the two-word little-endian record header |

The source lives under `src/native/wave065`. Its types describe the measured component views. They do not establish complete game classes or initialization. Shader commands are immutable opaque inputs and are never executed by these tests. The selector sets a borrowed-command flag; it is not a readiness flag. The source derives the selector formula instead of embedding the original lookup bytes.

The preview API receives its three floats in ARM S0-S2, independently witnessed in the actual outer caller. Its ARM declaration uses `aapcs-vfp`; the proof build explicitly enables VFP. Native Windows and AArch64 use their own platform aggregate/float ABI. Fixed preview records remain 320 bytes. Pointer-vector allocations preserve the original logical four-byte slot budget while using actual native pointer storage. Target-address words and native pointers are not interchangeable.

The stage runs 16,544 shader initialization/selection sets and 93 release sets on actual original ARM, authored ARM, native Windows and high-address AArch64. It checks all 80 canonical constructor/selector instruction PCs. Twenty of 21 normally returning shader mutations fail their semantic observations; pointer truncation is correctly inapplicable to ARM32.

Preview qualification contains 14 fresh sessions through count 129 and a seven-step same-cache lifecycle. It compares every 320-byte record, live and retired pointer slots, allocation budgets, ordered releases, caller bytes, guards, provider padding and unused provider storage. Machine execution checks saved integer/float registers, stack restoration and reads of retired allocations. Native Windows checks returned state and memory; it does not provide an instruction-level memory-read trace. Seventeen of 18 normally returning preview mutations fail; the incorrect native slot-budget control is inapplicable to ARM32. Ten observer regressions test truncation, guard, ownership, budget and unused-byte failures.

The preview denominator remains 179 instruction PCs. The corpus visits 141. Exact hash-bound witnesses classify the other 38 under the explicit well-formed-vector and nonmutating-provider contract: 28 belong to an inner insertion alternative whose compared sizes are equal after the outer end/capacity equality; seven belong to an empty suffix copy; three belong to a destruction loop skipped when begin is at or below end. The complete list remains in the packet. Allocation failure, huge or overflowing counts, invalid pointer triples and general floating-point regimes are unqualified.

Repeated nonnull loading retains the original overwritten-primary behavior. Null input releases only the current primary and preserves the appended vector. Physical storage is retained after logical release for observation. This is a bounded lifetime contract, not a claim that all ownership paths are safe. Reference-only SDK allocation and copying receive no source credit.

The tiny source-only check copies 35,009 bytes of selected C and quoted headers, reuses the installed toolchain, forbids construction of the original image and replays the 14 fresh cases on three source targets. It copies no CIA, executable image, asset or tool tree. This is component execution, not a playable native game or a hardware Android result.

Reproduce a fresh stage from the repository root with:

```powershell
& tools/python/Scripts/python.exe toolscripts/native_effect065_stage.py --output work/native-effect065/replay-v1
```

The private intake needs only the authenticated update `code.bin` and `exheader.bin` at their standard generated paths, the committed inventory/overlay evidence and existing public tool/runtime installations. No shader or effect asset payload is needed. The fresh destination must not exist. The stage preserves failed attempts rather than overwriting them.

The larger measured path remains `2a4674 -> 2a47cc -> 5f0974 -> 53ea1c -> 5411a4 -> 53fe5c`, with `2a4a48` providing caller-specific file selection. Its complete 4,572-byte resource constructor, resource finalizer, texture/primitive ownership, file tasks and device services still require source closure. The frozen foundation does not substitute for that work or for the separate executable-category inventory in lane 064.
