# Additional Ghidra census, wave002

This is analysis only. It grants zero recovered-source credit, leaves the executable/function denominator unlocked, and replaces neither the old inventory nor any source-cohort boundary input. The target remains the hash-pinned owner update `0004000e001acb00`, decompressed content0 code at `0x00100000`, with the measured ExHeader mapping.

The previous preparation error occurred because the script set one seed's TMode and immediately recursively disassembled from it. That flow could create code at another seed before the script tried to change that seed's context. `InventoryWave002.java` instead validates all seeds, requires a fresh raw program with zero instructions/functions, installs every reviewed context, and verifies every context while the instruction count remains zero. Only then does it disassemble and create functions. Contradictory duplicate ARM/Thumb modes fail before context mutation or disassembly.

## Observed preparation and execution

The manifest contains the original 66 entry/binding-table candidates plus 412 exact-byte qualified native entries from frozen waves1–8, using the ABI-qualified wave003 packet. These 478 addresses are unique and have no conflicting modes. Forty-eight nonmatching source drafts were excluded: fourteen wave001, three wave005, thirty-one wave008. The legacy inventory seeds remain candidates; adding source-byte proposal addresses does not admit their source.

Preparation explicitly succeeded: all 478 contexts were set before any instruction existed; all 478 seeds subsequently had instructions and function entries; no disassembly or function-creation attempts failed. After automatic analysis, all 478 entries and requested modes remain present. The driver requires the fresh preparation JSON, matching context counts and success markers before publishing an export. It does not infer preparation success from process exit status.

The headless process completed in 346.47 seconds. Ghidra reported 315 analyzer seconds and successful analysis, post-analysis and saving, within the requested 480-second analysis budget and maximum two analysis CPUs. Java properties isolate settings, cache and user home under this lane's work directory; JAVA_HOME and JAVA_TOOL_OPTIONS are child-process values only. The Ghidra installation in the neighboring project is read-only. The complete copied local JDK has the same 431 files and bytes as the previously qualified JDK. A private whole-installation manifest fingerprints all 5,459 Ghidra files and all JDK files; selected effective runtime/language/decompiler files are also checked against the prior qualification.

## Additional census and comparison

The new census has 25,150 function candidates versus 25,091 previously: 65 added entries, six removed entries, 28 changed common boundaries and zero changed common modes. Fifty-five added entries were explicit seeds; ten were additional analyzer discoveries. Function-body union coverage increases from 5,798,553 to 5,801,981 bytes: 3,428 bytes gained and zero lost. These ranges can contain pools/data and are not recovered-source coverage.

For the 7,051,280 initialized text bytes, the listing contains 6,122,220 instruction bytes, 341,155 defined-data bytes and 587,905 unclassified bytes. Function bodies cover a different set from all listing instructions. Unclassified or function-uncovered bytes can include padding, data, missed code and unsupported analysis; none is presumed code or excluded from a final denominator without review.

All 267 functions in the frozen bundle001 acceptance and all 356 functions in the frozen bundle002 proposal retain their expected entry, mode and complete range. All 412 qualified native proposal entries also agree exactly. These are seeded analysis comparisons, not independent source proofs, acceptance grants or revocations. The input cohort snapshots are pinned individually and are historical comparison sets rather than an assertion about later global acceptance totals.

The six removed entries remain visible in `comparison.json` and `additional-census.json`, with the new containing functions and old ranges. Four binding-table-area entries are now included in functions beginning eight bytes earlier. Another is included in a function beginning sixteen bytes earlier; another is absorbed into a noncontiguous body. These are changed analyzer hypotheses needing manual review, not automatic corrections of source history.

## Negative controls and remaining limitations

A deliberately contradictory Python metadata fixture was rejected before Ghidra launch. A separate fresh raw Ghidra project with analysis disabled received the same Java script and a manifest containing a duplicate address in both modes. Java produced `preparationSucceeded=false`, one explicit conflict, zero initial instructions, zero installed contexts and no census. Ghidra still exited with code 0. `java-conflict-negative.json` therefore demonstrates why exit status cannot certify preparation.

The run retained eight warnings about reads of uninitialized memory and seven function-body overlap-repair errors, matching the old warning counts. Every warning/error line and full log is pinned. These limitations remain unresolved despite the successful context preparation. Function starts, modes, body tails, shared code, literal pools, indirect calls and loader behavior are fallible analysis results. This run does not establish complete coverage of the base executable, nested executable formats, custom loaders, other content or platform-specific code.

The old `evidence/lanes/inventory-wave001/ghidra-functions.json` hash remains `424ae7c002d030733468d4f8b583114ef2475fc10c26233fa0565ed31a0ce2d4`. It and all accepted/source boundary inputs remain unchanged. Formal-equivalence and native-wave007 outputs were not modified.

## Reproduction and artifacts

Run `tools/python/Scripts/python.exe toolscripts/ghidra_inventory_wave002.py` from the repository, or invoke that script by absolute path. Each launch creates a new numbered project under `work/inventory-wave002/`; an active owned run blocks another launch. `--prepare-only` stages and pins inputs without launching Ghidra. The successful analysis is run002; run001 was preparation-only. The intentionally invalid Java experiment is separately isolated under `negative-conflict-001` and has no automatic analysis.

The public tool installation, local copied JDK, original generated code/ExHeader, frozen source packets/cohorts and old inventory are prerequisites. No global environment, application settings, shared lock, source ledger or old project was edited. Raw imported databases, copied private fixture inputs and logs remain under work. `packet.json` pins the authored scripts, manifest, preparation receipt, census, comparison and exact run inputs; `review-summary.json` also pins the negative controls, tool installation manifests and observed analysis-completion qualification.
