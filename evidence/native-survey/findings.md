# Native survey, 2026-11-06

This is measured layout, component-string and candidate evidence. Recovered-source acceptance remains zero. Compiler identity and complete native executable inventory remain unproven.

`toolscripts/native_survey.py` resolves its repository from its own path and reproduces from an unrelated working directory. Its six synthetic controls passed, including rejection of conditional early-return truncation, memory access, calls, unterminated instruction sequences and callee-saved register mutation. Raw code listings and context are private under `work/native-survey/`; tracked JSON contains addresses, hashes and findings only. The scanner proposes twenty short leaf candidates for each executable; this is neither a function census nor a complete ARM/Thumb mode map.

The measured base code SHA-256 is `a9cbe1be5e860d6a3d72ceb7f2fba680169276ebf6d50f30586d589af3a89554`; the update code is `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126`. Their initialized text sizes are 7,042,136 and 7,051,280 bytes respectively. Both entrypoints decode as ARM and contain an immediate BLX to Thumb code, confirming that a single-mode import is insufficient. Segment maps, stack and BSS extents are in `survey.json`.

The executable contains the residual component string `Squirrel 2.2.5 stable` and repeated `1.2.7.f-NINTENDO-CTR-SDK-v1`. These provide component-identification leads, not an ARM compiler identity or a definitive whole-SDK version. The survey does not use generic prologues or arithmetic idioms to assert a compiler version.

No standalone CRO/CRS/CRR/ELF/AXF/DLL filename candidate or first-sixteen-byte module magic was identified in the inventoried base/update RomFS contents. Nested/compressed containers, alternate extensions, raw binaries and custom executable loaders remain unexcluded. Native denominators must stay unlocked pending that review.

Three update ARM candidates have especially simple closed instruction dependencies:

| Address | Extent | Instruction/pool bytes | Semantic hypothesis | Span SHA-256 |
|---|---|---|---|---|
| `0x0069180c` | Through `0x0069181f` | 20 / 0 | Unsigned input lies in 1 through 10 | `30f7485fe70c574e37434ee2f7d4f42ac7262881f4f302057c6440173b7a11b6` |
| `0x0069ccf8` | Through `0x0069cd0b` | 20 / 0 | Unsigned input lies in 1 through 32 | `1d235fb506403890206e05055464348b1e5ed0dd0099a9ee6339aa8526849b21` |
| `0x003453a8` | Through `0x003453b3` | 12 / 0 | Multiply the 32-bit input by 500, modulo 2^32 | `97907aa4eb5afb43f2d03858906cb6823238c1ddc1b453d180d8ee259eb0b67c` |

All three have no calls, memory operands, stack accesses or PC-relative pools in the proposed extent, and terminate with unconditional BX LR. Neighboring boundaries and caller context support these extents. They remain address-named candidates; the game-level purpose has not been recovered.

The first candidate received a separate Ghidra 12.2 qualification using `ARM:LE:32:v6`, `-noanalysis` and explicit restricted disassembly followed by automatic function creation. The imported raw memory matched the entire update code hash, text/rodata/data were split using the exact exheader, and BSS was created at the initialized-data end. Ghidra independently formed a 20-byte function body and confirmed an unconditional call from `0x001f9dd8`. Its private decompiler output agrees with the unsigned range predicate. This is corroborating boundary/behavior evidence; selecting Ghidra's `default` compiler specification does not identify the original compiler.

`ghidra-qualification.json` pins the Java runtime, relevant Ghidra jars/native decompiler, ARM language/compiler specifications and analysis script. It records reproduction argv and child-only Java environment overrides. The default OSGi cache failed before import with a Felix data-directory error; a second attempt rejected a nonexistent isolated home. Those attempts are recorded, and the successful run used precreated settings/cache/home directories inside `work/native-survey/ghidra`. Full failure and success logs remain private.

Only `0x0069180c` has this Ghidra boundary corroboration. The other candidates still require separate Ghidra/caller and ABI review. Exact original-compiler output, source-linked byte matching, independent replay, platform execution and source-only executable/container construction are pending. A separate validation lane owns bounded execution against the first actual game leaf; its result must be read independently of this survey.
