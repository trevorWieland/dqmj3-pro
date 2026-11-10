# Progress measurement

The [project page](https://bytematch.dev/trevorWieland/dqmj3-pro) tracks the measured update main ARM image, `update-content0`. The measured base title version is 0 (`00040000001acb00`); the update title version is 3136 (`0004000e001acb00`). These identify the owner's actual inputs, without asserting unmodified retail or translation provenance. Base and update addresses remain separate.

## One build, one measurement

`python build.py` is the only entry point, and CI runs the same script. It takes the user's own decrypted update CIA, checks it against the identity pinned in `project.json` and stops if it is a different ROM, extracts `generated/update-content0/code.bin` and `exheader.bin`, compiles `src/native`, links the complete image at the original addresses, and writes `build/update-content0/report.json`.

Nothing in the repository records what has been "accepted". A unit is a source file; the functions it implements are the symbols it defines. `config/symbols.txt` gives every function of the image an address, a mode and a size, so `fn_00196b08` places itself. Whatever the compiler emits and objdiff scores is the truth.

## The denominator

The code denominator is every ExHeader-declared initialized main ARM text byte: instructions, literal pools, internal alignment and unclassified text. Page-alignment padding past the initialized extent is excluded. The ExHeader also declares 842,252 initialized rodata bytes, 260,036 initialized data bytes and 210,988 BSS bytes, which form a separate data denominator with zero matched data. DSP firmware, shaders, original interpreted scripts and RomFS assets are not in either denominator.

| Measured image | Initialized ARM text bytes |
| --- | ---: |
| Base | 7,042,136 |
| Update | 7,051,280 |

## Units and credit

`src/native` is compiled with the compiler profile each unit names, defaulting to the best-evidenced original compiler (armcc 4.1 build 1454; `--compiler-profile clang-21` forces the former Clang profile). Each source file that defines at least one function in the split becomes one unit, with a target object holding that function's original bytes carved out of the code image and a base object holding what the compiler emitted for the same file. One further unit, `src/native`, holds every original text byte source does not implement plus all original rodata, data and BSS.

A function earns credit only when its compiled bytes equal its original bytes. Stock objdiff sums code symbols, so `toolscripts/finalize_objdiff_report.py` verifies every object against the split and the image, replaces each unit's code denominator with the bytes its target object really holds, and recomputes the counters. It also checks credit independently: a byte-identical function must be credited, and credit without byte equality is only allowed where the base object still carries relocations that objdiff resolved symbolically. Partial similarity earns nothing and is reported as zero.

## Current state

The update split contains **26,573 functions**. **732** of them have compiled source, of which **415** (5,176 bytes) reproduce the original bytes exactly. **497** functions are placed in the linked image from compiled source; the other **26,076** are retained from the original, and the linked image differs in **82** functions. The reconstruction is therefore not complete: 8,357,276 bytes of the image are still retained.

The retained list is the work queue. `build/update-content0/retained.txt` orders it largest first, then by address; when call counts become available they belong in the same ordering key. The 497 functions compiled from source are the progress in the same file.

`config/symbols.txt` replaced the per-lane Ghidra census, its reviewed supplements and the cohort receipts. The supplements added 103 entries that cannot be regenerated now that their packets are gone; their bytes remain in the denominator and in the retained count, and re-deriving them belongs in a future discovery run that folds the result into `config/symbols.txt` rather than in a separate evidence channel.

## Publication

Only `build/update-content0/report.json` is uploaded, as the `update-content0_report` artifact that ByteMatch ingests. Original objects, the linked image, the linker script, input parts and raw private logs stay under `generated/`, `build/` and `work/`, all gitignored. The report keeps objdiff schema 2 and the explicit measures; no category is invented.
