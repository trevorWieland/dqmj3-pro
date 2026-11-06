# Executable inventory and script interfaces — wave 001

This lane expands the initial filename scan into loader mapping, native disassembly, a full Ghidra analysis, bounded nested-container inspection and script/native interface queues. Every recovered-source credit remains zero. The executable denominator remains incomplete.

## Measured native extents

| Build | Initialized text gross bytes | Initialized mapped gross bytes | BSS bytes |
|---|---:|---:|---:|
| Base | 7,042,136 | 8,143,784 | 219,220 |
| Update | 7,051,280 | 8,153,568 | 210,988 |

`base-native.json` and `update-native.json` preserve the ExHeader segment addresses, initialized extents and separate page-padding sizes. Gross `.text` includes possible literal pools/data and is not a finalized instruction-only source denominator. Initialized `.rodata`/`.data`, BSS and page padding are not silently added to or removed from a recovery percentage.

The ARM entry at `0x100000` directly calls loader/startup routines and transfers through a Thumb BLX at `0x103180`. `entryGraph` records an intra-procedural CFG and direct callee seeds; it does not claim that every callee or loader branch executes on hardware. Eleven contiguous four-word SQRegFunction-layout candidates were measured in each build. Update tables occupy the region beginning `0x8c3648`; their name hashes, function pointers, mode bits, parameter checks and record hashes are recorded. These layouts require registration call-site confirmation.

The PREL31 structural search found five runs in each build, but all were forward-target/all-extab patterns with no corroborating index-table evidence. They are retained under `unwindSearchUnqualifiedRuns` and excluded from function seeds. No qualified exception-unwind table or exception-derived complete function census is claimed. Absence of a qualified table is not proof that the program has no exception support.

## Ghidra result and preserved preparation failure

The unique `J3UpdateFullWave001` project is under ignored `work/inventory-wave001/Ghidra/`. Ghidra 12.2 used `ARM:LE:32:v6:default`, the independently verified update code/ExHeader, child-only home/settings/cache directories, a two-core limit and a 480-second per-file analysis limit. Actual analyzers completed in 311 seconds, followed by metadata export; the process exited zero without reaching the analysis deadline.

**The pre-script did not complete successfully.** It verified the imported bytes and mapped the text/rodata/data/BSS blocks, then disassembled the entry. While attempting to set a mode register on an already-disassembled seed, it raised `ContextChangeException`. Ghidra continued default full analysis and the post-script exported the result. Therefore the 66 planned native seeds must not be described as fully installed. This is a completed analysis with a preserved preparation error, not an entirely passing preparation run. It has not been silently repaired or rerun.

The analysis also emitted overlapping-function repair failures and warnings about reading uninitialized BSS during decompilation. The private logs, producer and tool qualification hashes are pinned by `ghidra-run.json`. Analyzer heuristics remain fallible.

`ghidra-functions.json` contains 25,091 candidate functions with address, mode, individual address ranges, thunk status and a direct inferred function callgraph. The union of candidate bodies inside initialized text is 5,798,553 bytes, leaving 1,252,727 bytes outside those bodies. These two figures classify analyzer regions only. Neither is accepted reconstructed source or an instruction-coverage percentage. Body ranges can include literal pools/data; uncovered ranges can include missed code, pools, padding and unsupported control flow. Indirect calls, switch repair and custom loaders remain open.

## Nested containers and executable categories

The bounded recursive scan verifies CIA hashes before and after reads and each top-level file against its inventory hash. It handles SARC, ordinary XBB, gzip and a streaming XBB path for the 360,002,432-byte test `fieldPack.xbb` with 3,542 members. It avoids full RomFS extraction, enforces depth/member/expanded-byte bounds, and deduplicates payloads by SHA-256.

- Base: 26,755 unique inspected payloads, with 3,576,704 expanded gzip bytes. Thirteen external-index-like XBB layouts remain explicitly unresolved, including five nested test-container members.
- Update: 2,215 unique inspected payloads, with no unresolved recognized-container extents.
- Five DVLB shader candidates were identified in the base: the original four `.shbin` files plus a DVLB payload within `nwh3d_SilhouetteShader.bch`.
- No new CRO0/CRR0/CRS0/FIXD/ELF/NCCH/FIRM header-marker candidates appeared in this bounded scan.

GPU shader code is tracked independently of ARM native code and original scripts. Unknown compression/custom loaders, unrecognized payload formats, raw native code without a known header and additional embedded BCH programs prevent executable-inventory closure. A marker scan does not prove that all executable content has been found.

## Original scripts and native interfaces

All 752 base and 12 update `.nut` files passed the new bounded lexical index with zero decoding/lexical failures. An update-first path view contains 753 original files and 11,572,304 bytes. The index records hashes of function/call identifiers, script file identities, candidate resource-name references and resolved script paths; it stores no original script text.

The effective view has 1,074 definition identifiers, 1,583 call identifiers and 583 unresolved identifiers. There are 8,401 resource-name literal candidates resolving to script paths, including names without `.nut`; these are not asserted to be executed import/load operations. Scope/receiver distinctions, dynamic calls and reachability require a real VM parser/loader analysis. Original embedded source receives zero newly reconstructed-script credit.

571 script-call identifier hashes also appear as identifier strings in the update binary. Aligned native pointer-word references are retained as actionable addresses. Six lexical call identifiers intersect the candidate SQRegFunction tables. Frequent API wrapper candidates have literal-pool references near `0x130xxx` and `0x27bxxx`; a private disassembly probe found actual argument conversion/call/return code adjacent to those pools. This is useful reconstruction guidance, not native-binding or ABI proof.

`reconstruction-queue.json` binds the Ghidra and script reports, groups the inferred callgraph into 25,033 candidate strongly connected components, and prioritizes 300 candidate functions. It associates 392 functions with nearby hashed script interface references. Candidate ranges, calls, caller counts and pool distance are included. The queue reserves no source ownership and grants no acceptance; workers must exclude already claimed/accepted ranges, review full boundaries/pools/ABI and close genuine dependencies before dispatch. The remaining candidate functions are available through the full Ghidra report.

## Reproduction and controls

```powershell
& .\tools\python\Scripts\python.exe .\toolscripts\executable_inventory.py
& .\tools\python\Scripts\python.exe .\toolscripts\script_interfaces.py
& .\tools\python\Scripts\python.exe .\toolscripts\executable_inventory.py
& .\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_inventory_wave001.py -v
```

The second executable-inventory command binds the fresh script report into the reconstruction queue. The optional Ghidra analysis requires the pinned external tool installation and explicit invocation captured in `ghidra-run.json`; the Python commands do not recreate that analysis automatically. Missing Ghidra/script reports leave the optional queue absent rather than inventing function coverage.

Thirteen unittest cases pass, covering PREL31 signed offsets, initialized versus padding mappings, malformed XBB extents, unnamed XBB entries, gzip expansion/truncation/trailing-stream controls, lexical comment/string shielding, escaped quotes, function definitions, dependency traversal rejection and SCC/interface counting. These tests qualify the bounded inventory helpers. They establish no universal script semantics, whole-game behavior, source-only build, Windows game execution or Android game execution.

Primary format references: [Arm EHABI32](https://github.com/ARM-software/abi-aa/blob/main/ehabi32/ehabi32.rst), [Arm AAELF32](https://github.com/ARM-software/abi-aa/blob/main/aaelf32/aaelf32.rst), [Squirrel public API structures](https://github.com/albertodemichelis/squirrel/blob/master/include/squirrel.h), [3DS extended header](https://www.3dbrew.org/wiki/NCCH/Extended_Header), [3DS CRO format](https://www.3dbrew.org/wiki/CRO0). Current upstream Squirrel is a layout reference, not proof that the shipped 2.2.5 engine matches a modern source version.
