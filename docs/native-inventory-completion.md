# Native executable inventory reconciliation

This lane starts the complete-inventory work needed before publishing an overall native-code denominator. It adds a base executable census, independently checks address-range accounting, reconciles measured ARM, DSP and GPU program categories, and retains explicit unresolved work. It grants no reconstructed-source credit and does not change recovery acceptance, original inputs or decompiled C.

The first base attempt explicitly timed out at Ghidra's 480-second analysis limit, despite the process exiting zero and exporting metadata. `base-analysis-run.json` remains `failed-analysis-preserved`; `base-incomplete-census.json` is a partial analysis, not a passing full census. The export is still useful for measured range reconciliation. No second long analysis was launched. A future fresh attempt can use `--analyze-base --analysis-budget-seconds 900 --process-budget-seconds 1200`; the failed attempt and its private project/logs remain preserved.

Run the standard-library metadata reconciler after private input materialization:

```powershell
& .\tools\python\Scripts\python.exe toolscripts/native_inventory_complete.py
& .\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_native_inventory_complete.py -v
```

To run a fresh base census as well:

```powershell
& .\tools\python\Scripts\python.exe toolscripts/native_inventory_complete.py --analyze-base
```

The optional analysis uses the unchanged `toolscripts/ghidra/InventoryWave002.java` preparation/export script and the previously qualified Ghidra/JDK files. It copies the hash-verified base image and ExHeader into a new private directory under `work/native-inventory-completion/`. It installs only the base's 66 measured structural seeds, with every ARM/Thumb context checked before disassembly. Update addresses are not transplanted into the base. Child Java settings, project files and logs stay in that private run directory. Default limits are 660 seconds for the process, a 480-second analyzer budget and two CPU cores. A larger bounded budget is available through the explicit options above. Explicit preparation, analysis-completion and export evidence are required; process exit status alone cannot qualify the run.

Reports are under `evidence/lanes/native-inventory-completion/`. The main `report.json` pins its producer and consumed metadata and separates the two builds and their executable categories. Each range report independently reconstructs the union and complement of every candidate function body. It rejects changed image identities, incorrect counts, invalid modes/alignment, duplicate entries, reversed/outside extents, internally overlapping ranges and gap changes that preserve only the total size. Discontiguous bodies retain their individual original ranges. Nothing fills their holes or invents contiguous function extents.

The instruction/data/unclassified byte counts must conserve the entire initialized text segment. That check establishes accounting, not semantic classification. Function-body coverage and defined-instruction coverage remain different measures: instructions outside recognized functions, literal pools inside function bodies, data and padding require further review. Gap reports include addresses, sizes and SHA-256 hashes, with all-zero status as a diagnostic only; they never export game bytes. Zero bytes are not automatically classified as padding. Largest uncovered intervals form a concrete manual-review queue.

The current update census has 25,150 candidate functions and 5,801,981 function-body union bytes inside 7,051,280 initialized text bytes. There are 1,249,299 bytes outside function bodies and 587,905 bytes unclassified by Ghidra's instruction/data listing. Only 800 bytes belong to entirely zero-filled uncovered intervals. Of the candidate functions, 23,207 have single ranges totaling 4,448,498 bytes; 1,943 have multiple ranges totaling 1,353,483 bytes. These are analyzer hypotheses and are not the final instruction denominator. All historical accepted 356 functions and 4,164 bytes are separately reconciled against the cohort chain, exact source hashes, original span hashes, entries, modes and complete extents.

| Build and analysis status | Candidate functions | Function-body union bytes | Bytes outside candidate bodies | Unclassified text bytes |
| --- | ---: | ---: | ---: | ---: |
| Base, timed out and incomplete | 25,108 | 5,801,659 | 1,240,477 | 600,827 |
| Update, qualified analysis with unresolved heuristics | 25,150 | 5,801,981 | 1,249,299 | 587,905 |

Gap triage found a concrete discovery path for many update omissions. Startup at `0x100000` calls the Thumb reader at `0x103180`, which iterates the signed-relative constructor dispatch table at `[0x8864fc, 0x887a0c)`. Each 32-bit entry is added to its own slot address and called through BLX. The metadata-only `constructor-dispatch-findings.json` records all 1,348 address/mode seeds, table/reader hashes and the reviewed reader observation. The reconciler independently redecodes every signed offset, checks target alignment/text bounds and verifies the recorded startup call edge. Of the 1,348 targets, 1,347 are absent from the current census's exact function entries. A subset of 1,344 falls in the two largest gaps: 1,174 in the largest and 170 in the nearby gap. The remaining three absent entries are Thumb targets and require separate body-boundary review. Entry discovery does not close instruction or literal-pool extents, and the census has not yet been rerun with these seeds. A separate eight-entry absolute-pointer dispatch lead in the third gap still needs its caller traced.

The previous container audit establishes one main ARM image per build, one shared 43,748-byte DSP program, 46 distinct base GPU shader images totaling 52,476 code bytes and 30 update images totaling 33,012 bytes. Those categories are not added to ARM progress. Fresh reads of the verified main images recheck all 30 embedded GPU images and DSP segment digests per build; external shader payloads retain the pinned prior container-audit evidence. The content-one manuals have no measured ExeFS entries. Their nested or raw payloads retain the same inspection caveats as other data.

The 13 previously unresolved archive layouts are structurally classified, but marker-based searches do not prove the absence of executable data. The existing audit retains 24,053 opaque unique base payloads and 2,205 opaque unique update payloads; their recursive byte totals are not physical storage percentages. Those counts include recognized or partially parsed data families and are not counts of unknown ARM modules. Nine base marker-only program hits remain unqualified. Unknown compression, raw unmarked programs, custom loader paths, BCH object graphs, GPU bindings and runtime base/update precedence require further evidence.

The separately prepared metadata-only `loader-capability-findings.json` binds both ExHeader identities and an independent pinned CTRTool display. Both service ACLs permit `ldr:ro`, leaving a service-mediated dynamic loading route open even though neither measured capability policy permits syscall IDs `0x70` through `0x73`. No literal loader-name or CRO-name token was found in either main image. That search does not exclude dynamically constructed names or custom formats. Loader permission is not proof that loading actually occurs, and its absence from literal strings is not a scope-closure proof.

Inventory completion requires reviewing every unresolved text interval and function boundary, resolving indirect targets and analyzer overlap repairs, and closing the executable-loading/container scope. Full code/behavior closure and source-only game construction remain separate milestones. `nativeDenominatorComplete` and `wholeExecutableInventoryComplete` remain false until those requirements are actually met.
