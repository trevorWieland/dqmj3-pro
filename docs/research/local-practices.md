# Local archive and transferable J2 practices — 2026-11-06

## Archive discovery

The personal archive is now at `C:\Users\trevo\Downloads\dqmj3pro.7z`.

- Length: 510,863,073 bytes.
- SHA-256: `8af8156afc1c69c3c3ad90cdd57a204417e27cef07b6b6958270b3c1c128bd7d`.
- Last write time: 2026-11-06 19:18:16 UTC.
- The Windows known Downloads folder resolves to `C:\Users\trevo\Downloads` in the current-user registry.
- During read-only discovery, the same named/length file was first present at `C:\Users\trevo\Documents\MEGA Downloads\dqmj3pro.7z`, disappeared there, and appeared in Downloads. This agent did not move it. The final path above was verified with Get-Item and Get-FileHash.
- Installed 7-Zip is available at `C:\Program Files\7-Zip\7z.exe`; it need not be downloaded.

No archive extraction, executable launch, or game-file interpretation was performed by this worker. The hash identifies an archive, not a retail revision or validated executable identity.

## Local sources inspected

Read-only project: `C:\Users\trevo\Documents\RecProgramming\DQM\dqmj2pro-decomp`.

- `AGENTS.md`.
- `README.md`.
- `docs/2026-11-02-parallel-execution-plan.md`.
- `docs/2026-11-02-reproducibility-status.md`.
- Beginning of `evidence/index.json`, `project.json`, and `tools.lock.json`.
- Observed HEAD: `0da3da2f2eaf3888774e1d2f0cd572c6db3e2cfb`. This is a read-time observation; concurrent project development may advance it.

The J2 README reports accepted cohort 172, 11,482 functions and 1,224,354 initialized module bytes. This worker did not replay or independently certify those figures. The README explicitly says the decompilation is incomplete, the exact ROM rebuild retains executable scaffolding, and initialized native-byte coverage is not an overall game percentage. Its reproducibility document preserves unresolved independent replay history. These qualifications are practices to retain, not debt to import into J3.

## Guidelines worth carrying forward

1. **Separate projects and generated work.** The DQM parent is for actual projects, explicitly including `dqmj3pro-decomp` when created. Every temporary clone, compiler experiment, replay checkout and sandbox belongs under the new repository's `work/`; do not create sibling sandboxes. Preserve historical evidence and input paths.
2. **Private by default.** J2 has no remote. Inputs, assets, binary tools, dependencies, extracted images and build outputs are excluded from Git. No uploads or paid external agents, original-input modifications, ordinary-save writes, audible emulation, global PATH/Java changes, reboots or system-policy edits. Adopt these defaults explicitly for J3 while honoring new user instructions.
3. **Build identity first.** J2 treats its measured modified ROM as authoritative rather than assuming retail identity. J3 should pin archive member hashes, content/title/version metadata, patch state, base versus update identity, compiler/ABI evidence and installed tool identities before selecting an authoritative build.
4. **Evidence categories stay separate.** Track inferred function boundaries, decompiler drafts, exact compiled bytes/relocations, linked-module matches, bounded behavior, container reconstruction, independent clean replay and platform execution as distinct states. Asset parsing and retained original executables receive no reconstructed-source credit. Script bytecode needs its own source-recovery inventory.
5. **Ordinary C/C++ is the target.** Justify assembly only with measured low-level/original-assembly needs. No ordinary-logic instruction patches, object/relocation patching, generated drafts or binary scaffolding as accepted source. J2's authored-code conventions are no comments and at most 500 physical lines per formatted code file; preserve these if the coordinator elects to mirror its guidelines.
6. **Frozen, collision-free packets.** One coordinator owns shared registries, manifests, metrics and acceptance. Workers own disjoint program/module/address/mode identities plus exclusive source/evidence/output paths. Workers may not launch shared-root integration. A worker's final answer is not acceptance.
7. **A packet carries its proof.** Include base revision, input/tool/source hashes, full code/pool extents, ABI/type/global/relocation assumptions, command argv, complete fixtures, rejected attempts, unsupported paths and proposed credit. Use exact executable namespace identities; reused addresses do not identify a common routine.
8. **Build the independent replay path immediately.** A clean replay must use committed source plus explicit pinned private inputs, tools and dependencies, never borrow cached build products, extracted images, research directories or dependency links. Keep generated prerequisite dependencies in a replay graph. Fail if a replay mutates pinned source/registries, even if bytes are restored before the final hash.
9. **Preserve failures and bound searches.** Classify mismatches into boundaries/pools, ABI/width, compiler profile, translation-unit context, control flow, register lifetime and link/layout. Bound blind compiler searches, save negative controls and hand off a concrete blocker. Optimize validation only after demonstrating equivalent failure detection.
10. **Measure useful progress.** Accepted linked bytes per effort, rejection rate, queue age, blocked dependencies and validation duration are more useful than token counts or similarity. Deduplicate aliased intervals and pools. Do not publish a whole-game percentage before executable inventory closure and explicit denominator definition.

## Proposed initial J3 lanes

- Coordinator: authoritative input manifest, project bootstrap, claims, common tooling lock and acceptance publication.
- Format/architecture lane: classify container/exheader/ExeFS/RomFS, load maps, dynamic modules and scripts, produce address-namespace inventory.
- Reconstruction lane: after compiler qualification, recover a small dependency-closed family with original-function oracles.
- Validation lane: immutable replay, differential fixtures and deliberate negative controls, separate from the reconstruction author's own checks.

The first wave should produce inventory and replay infrastructure, then one measured family. A source-only full engine or Joker 1 content port is not an honest first-wave acceptance condition.

## Local constraints and reuse opportunities

The coordinator reported approximately 3.9 GB free on C:. Prefer listing the 7z and selecting necessary members, hashes and bounded extraction before expanding full copies. Do not duplicate J2's extensive private tools/dependencies. Existing J2 tools can be observed for versions/hashes, but the new project must explicitly pin and provision any actual runtime dependency rather than accidentally depending on a mutable neighboring worktree.

J2's `project.json` demonstrates project-relative private input/tool paths; `tools.lock.json` binds exact executable hashes and upstream URLs. Its lock records objdiff CLI 3.8.3, but this is a local observation, not a verified current upstream recommendation. The new 3DS compiler must be identified independently; the DS CodeWarrior profile is not transferable merely because both platforms use ARM.

## Longer-term Joker 1 remake direction

Use separate tracks for faithful J3 engine reconstruction, documented content/asset interfaces, and a later Joker 1 vertical slice. Keep original game data, engine behavior and newly authored remake behavior distinguishable. Early engine abstractions should be learned from measured loaders, serialization and scripting rather than imposed from a remake design. The remake may ultimately require additional gameplay/UI/asset-system development beyond matching the J3 executable.

This report intentionally relies on inspected local project records; other parallel researchers are responsible for current primary-source architecture/tooling and validation research. Local documents cite online papers, but those citations were not reverified by this worker and are not adopted here as evidence.

## Prior J3 fieldnotes: concrete reuse leads

Read-only follow-up inspected `monster-fieldnotes/src/adapters/j3p-rom/`, `src/adapters/j3p-battle-world/format_readers.py`, `src/server/map-archives.ts`, and the dated native-battle and constructor notes. These are parser/oracle implementations and historical claims, not independently rerun evidence for the new archive.

| Local lead | Observed contract | First new-project task |
|---|---|---|
| `j3p-rom/ncch-romfs.ts` and `server/map-archives.ts` | Bounded direct reads from decrypted NCCH; prior captured base SHA256 `44917968f57bab51d16e153cc531fd91db43d84255d024885614ebe24180718e`, update `0ba503aa0ebcbadff6b725f8ae418a381c299cbb534728d91b4291c057ccf845`; update-first path resolution | Compare new content hashes before reusing any address, field meaning, or selected layer. Keep base/update origins on each effective member. |
| `j3p-rom/native-archive.ts` | SARC with little-endian BOM, SFAT/SFNT, bounded named members | Inventory SARC magic and members with offset/length/hash; preserve aliases and unknown layouts. |
| `j3p-rom/map-placements.ts` | XBB version 1 magic `58 42 42 01`; 32-byte header, 16-byte member entries; `_M.bin` FBXD placement payloads with bounded mesh and transform records | Build a conservative XBB inventory and validate geometry/placement schemas against actual members before generalizing. |
| `j3p-battle-world/format_readers.py` | Encounter XBB chunks expected as ENCT/MGRT/SMOT with historical strides 42/88/116 | Re-extract `/data/Field/Table/Encount/ET_*.xbb`; test strides, counts and member hashes. Do not adopt Python assertions as sufficient hostile-input validation. |
| `j3p-rom/map-conditions-native.test.ts` | `/data/Script/Field/FieldCommon.nut` read as Shift-JIS text; test expects WEATHER enum and noon/night constants 0/8700 | Inventory `.nut` files separately as supplied readable script source versus compiled script bytecode. Preserve exact bytes and encoding; neither is new native C recovery. |
| `j3p-rom/messages.ts` | UTF16LE null-terminated text behind key-associated offsets; keys MK, SkillName, DiscCode, TrophyName | Document message-table labels as display joins, not mechanical identities. Verify bounds/counts per build. |
| `j3p-rom/icons.ts`, `map-textures.ts` | SARC icon archives; `FLIM`/`imag` footer; RGBA8 and ETC1/ETC1A4 forms, swizzle/orientation checks | Optional later asset round-trip milestone; preserve texture hashes and explicit supported formats. |
| Battle-world and synthesis adapters | Original native routines invoked under bounded Unicorn fixtures; dated notes say runtime dependencies Unicorn 2.1.4 and pycryptodomex 3.24.1; pyctr/Capstone used for research | Qualify an independent original-function oracle only after exact code identity and memory layout match. Executing original code is not decompiling it. |

Parameters explicitly referenced in inspected local code include `/data/Parameter/FieldMapParam.tp`, `KindParam.tp`, `MonsterParam`, `MonsterPartyTable`, `DiscCodeParameter.tb`, `DiscMonsterParameter.tb`, `DiscAreaParameter.tb` and `DiscItemMonsterParameter.tb`. The notes also identify SKLP/ESKP/SSKP/SPTC skill tables. File names and magic values are practical inventory leads; field semantics and full completeness still require new measured evidence.

Recommended first reconstruction family: a small bounded table accessor, record decoder, or pure arithmetic routine with a known original-call fixture and minimal service dependencies. The existing fieldnotes source can reveal an address candidate and required fixture, but first bind that candidate to the exact selected executable hash and fresh disassembly. The previously noted owned initialization (`0x3585b4`) and event predicate (`0x6c32a8`) are richer later families, not automatic low-risk first targets. Start with their independent leaves if they can be bounded and compiler-qualified.

The inspected `.nut` test shows text script source is an especially promising early inventory lane. It does not establish the VM dialect or that every script is textual. Classify by actual bytes and loader behavior; do not blindly apply a generic Squirrel decompiler based on extension alone.
