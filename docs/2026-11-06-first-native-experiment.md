# First bounded native reconstruction experiment

Update ARM address `0x0069180c` is a 20-byte leaf whose observed behavior checks whether an unsigned input lies in the inclusive range 1 through 10. It is bound to decompressed update code SHA-256 `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126`, span SHA-256 `30f7485fe70c574e37434ee2f7d4f42ac7262881f4f302057c6440173b7a11b6`. The inferred name is descriptive, not an original symbol.

Ghidra 12.2 imported the hash-checked update image with the ARMv6 language and ExHeader-derived memory blocks. Restricted function analysis identified a 20-byte body ending at `0x0069181f`, with an unconditional caller at `0x001f9dd8`. The native survey separately found direct-call candidates and a coherent surrounding boundary. This is a concrete first reconstruction target, not a full function census.

The bounded oracle executes original bytes unchanged at their actual virtual address in an ARM1176 Unicorn machine. It independently compiles and links a readable unsigned C predicate and a wrong predicate that accepts 11. The C runs at its own link address; no instruction or object patching forces a match.

All 168 deterministic edge/random fixtures produce actual original and candidate returns and agree with an independent unsigned-domain model. All five original instruction addresses execute. The wrong compiled candidate actually returns for all fixtures and is rejected on both fixtures with input 11. The harness checks callee-saved registers, stack pointer, leaf return behavior, unexpected CPU memory writes, stack and scratch state, instruction count and timeout.

Clang generates 20 bytes for the candidate, but they differ from the original. This is a nonmatching behavior-tested draft with zero accepted reconstructed functions or bytes. The original compiler, full ABI/caller closure, exact object and relocation proof, whole-module source link, universal equivalence and game/platform behavior remain separate work. The Ghidra receipt qualifies boundary evidence; the behavior harness itself has no Ghidra runtime dependency.

See `evidence/verification/game-leaf-behavior.json`, `evidence/native-survey/ghidra-qualification.json` and `evidence/native-survey/findings.md`. Raw disassembly, temporary source variants, objects and decompiler output remain under ignored work/. Reproduce the experiment with:

```powershell
& .\tools\python\Scripts\python.exe toolscripts\behavior_smoke.py --game-leaf
```

The separate synthetic harness tests 228 correct and wrong-source cases plus nonreturn and unexpected-write controls. Those probes validate the infrastructure and receive no game-source credit. The full supported test suite contains 20 unittest cases plus six native-survey boundary controls and independent extraction comparisons. The game receipt derives its update program identity from the measured NCCH inventory, keeping it distinct from the base application namespace.
