# Wave 004 — direct typed field getters

Status: ready for coordinator review. This packet proposes 26 independently bounded, standalone exact C functions and 208 initialized instruction bytes. No function is credited as accepted here; shared module integration, regression, replay and publication remain coordinator gates.

## Ownership and interpretation

`claim.json` was written before source work and freezes the exact update module identity, all 26 canonical ARM intervals, byte hashes and caller candidates. It excludes every overlapping wave001/wave002/wave003 claimed interval. Its historical `boundaryReviewPending` flag records the preparation phase; the completed current proof is `boundary.json` and the packet validation result.

The functions return one measured scalar field from an aligned valid record. `src/native/wave004/views.h` defines 17 ordinary partial structural views using unknown padding and offset-labelled fields. Word values retain raw unsigned 32-bit meaning; byte/halfword signedness follows the observed sign-extended return contract. The authored C returns the typed field directly. Original class names, complete object sizes, ownership and game-level field meanings remain unknown. These are readable field-access functions, not instruction/register C, assembly or embedded code.

The strict discovery found 993 raw one-load/BX-LR shapes. Of those, 264 intersect prior ownership, 671 lack an actual direct ARM B/BL reference within a known independent Ghidra caller extent, and 11 have interior direct-branch candidates. Those diagnostic exclusions remain private and unclaimed. This explains why the admitted opportunity is 26 functions rather than a larger pattern count. Most raw shapes can be suffixes of other functions or require indirect-caller/alias analysis.

## Independent boundaries

The full frozen Ghidra census had recognized only one of these 26 starts as a separate eight-byte function. A fresh lane-local raw import therefore independently disassembled each immutable entry, derived its contiguous function body, and checked an actual caller transfer. All 26 derived bodies are two instructions/eight bytes, with no literal pools. Capstone separately checks each unconditional typed load, base/return register, field displacement and BX-LR return; the native original caller word is decoded as B or BL to the claimed entry inside a frozen ARM caller range.

`BoundarySurvey.java` and `boundary-run.json` preserve this distinct review. This pass does not edit the frozen whole-program census or infer that raw pattern matches are accepted functions. It closes the selected bounded entry/caller evidence while leaving unproved indirect entries and aliases explicit.

## Source and genuine linking

The measured open profile is Clang 21, ARM `mpcore`, ARM mode, `-O2`, freestanding function sections, without unwind tables. This is a measured matching configuration, not historical compiler identification. Every complete eight-byte function section matches the original bytes, has zero body relocations and no unresolved symbols. Genuine LLD placement at each original canonical address preserves those full spans. No source instructions, object bytes, relocations or linker output are patched.

The source-only linked ELF contains these owned functions and normal linker spacing only; no original executable gaps are supplied. This is a standalone component proof, not a source-only complete game executable or engine build. Each function row uses the coordinator's canonical identity, source/header/object/symbol/span, relocation, linked and behavior fields.

## Behavioral evidence

Each function has 56 original/C paired cases: signed-width boundary patterns, raw-word edges and deterministic random values at two aligned record geometries, with fresh randomized surrounding record and stack memory and randomized incoming registers/flags. This yields 1,456 actual original returns and 1,456 actual source returns.

The complete typed result agrees with an independent Python signed/unsigned scalar model. The original and compiled observation records agree, both owned instructions execute, the exact single read address/width is checked, writes are forbidden, full record/stack snapshots stay unchanged and callee-save/SP/LR/flags are preserved. The record arena is read-only during execution.

Each function also has genuinely compiled wrong-field C that reads a distinct field 16 bytes later. It executes with that explicit negative-fixture read set, returns to the sentinel, and only then fails the intended semantic contract: 90 is returned where 53 is required. All 26 such semantic controls are rejected after actual returns; they are not compiler failures, early read-guard failures or patched object mutations. Both original and source unmapped-root controls fault without returning, and those 52 faults are not included in the successful-return totals.

These are bounded aligned valid-object fixtures, not universal equivalence, original object-lifetime proofs, full-game runtime tests, Windows execution or Android execution.

## Reproduce

```powershell
& .\tools\python\Scripts\python.exe .\toolscripts\native_wave004.py
```

An independent output namespace is supported with `--output work/wave004-native/NEW_NAME`. Source, claim, semantic layout, boundary and original hashes are checked before and after validation. The boundary metadata is a separately pinned Ghidra diagnostic prerequisite; rerun its fresh-project command from `boundary-run.json` when independently requalifying it. Keep its project/home/cache/settings paths isolated and never restart an existing live process.
