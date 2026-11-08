# DQMJ3 Professional decompilation

[![Progress](https://bytematch.dev/trevorWieland/dqmj3-pro.svg)](https://bytematch.dev/trevorWieland/dqmj3-pro)

Reconstruction of the owner's measured Dragon Quest Monsters Joker 3 Professional base and update. The project begins on 6 November 2026. The owner permits publishing reconstructed source, tooling and derived progress reports. Original game archives, executable images, shipped scripts/assets, keys, saves and hybrid builds containing retained original bytes remain outside publication.

**The accepted source cohorts contain 412 native C functions and 5,128 instruction bytes.** ByteMatch measures them against all **7,051,280 initialized ARM text bytes** in the measured update image: **0.0727%**. This conservative byte baseline includes literal pools, internal alignment and unclassified text; every unreconstructed byte remains unmatched. Function totals count discovered canonical entries, not a proven historical function census. The ordinary C sources compile with the measured open Clang/LLVM profile, genuinely link at the original addresses, preserve the complete hybrid image and pass bounded tests and independent replay. Assets, original scripts, imported reference code and unaccepted candidates receive zero reconstructed-source credit. `recovery.json` and finalized cohort receipts remain authoritative for source acceptance. See [the reporting contract](docs/bytematch.md).

The separate working-C registry contains **467 functions** (453 medium confidence, 14 low), qualified under the domains recorded in their proofs. These bounded behavior results do not increase the exact source-linked byte total or establish overall confirmed coverage. The [SDK context, arbitration, object and task/clock replay](docs/native-sdk062-public-replay.md) independently qualifies 43 bounded functions; 128 pipeline tests, 99 returning wrong-source controls and all 1,761 raw rebuilt artifacts passed, with no forbidden work accesses. The [effect foundation](docs/native-effect065-public-replay.md) passed independent committed-source replay and 124 pipeline tests for six bounded functions; the complete effect graph remains open. The [context and cache constructors](docs/native-init78-public-replay.md) passed independent replay and 113 pipeline tests; resource helpers retain separate limits. The [complete graphics dispatcher](docs/native-dispatcher6-public-replay.md) passed independent committed-source replay and 112 pipeline tests, with all 18,296 canonical instruction bytes accounted for and five instruction PCs explicitly invariant-only. Its source-only Android component builds reproducibly; Android execution remains separate. The [resource-provider replay](docs/native-asset062-public-replay.md) has passed independent coordinator review for 20 bounded helper functions; the complete resource caller remains unqualified. The [standalone SDK word provider](docs/native-sdk063-public-replay.md) separately checks the Thumb entry and its preserved global state. The [asset-decoder replay](docs/native-stream061-public-replay.md) preserves complete canonical instruction extents, including two newly reviewed callback entries. Source-only component execution on the physical Thor is recorded for the [VM composition](evidence/verification/thor-compose057-physical.json), [inflater](evidence/verification/thor-inflater059-physical.json), and [controller](evidence/verification/thor-controller055-physical.json); complete native game builds remain unproved.

The [public SDK sources](docs/native-sdk062-public-replay.md) contain 19 production C units; their committed independent replay and 43-function bounded admission are complete. The [binding inventory](docs/native-binding-inventory.md) adds seven measured entries while preserving the initialized-text denominator and source-credit totals.

## Established inputs

The [resource CPU replay](docs/native-resource065-public-replay.md) independently qualifies nine bounded kernels with complete canonical extents, including discontiguous cold fragments. It passed 141 pipeline tests, 39 returning controls and byte-identical reproduction of all 461 native artifacts; the main resource constructor/finalizer and complete effect graph remain open.

The [SDK runtime replay](docs/native-sdk-runtime062-public-replay.md) independently qualifies nineteen additional bounded functions in eighteen production C units. The committed replay passed 137 pipeline tests, 69 predecessor tests, six guard tests, 165 returning controls and all 2,809 raw artifact comparisons. Two already credited bodies receive no duplicate credit; complete SDK owners and native game builds remain unqualified.

The owner archive `dqmj3pro.7z` has SHA-256 `8af8156afc1c69c3c3ad90cdd57a204417e27cef07b6b6958270b3c1c128bd7d` and contains a base CIA plus update CIA. All four NCCH contents match their TMD content hashes. Their ExeFS files also match recorded hashes. Independent CTRTool extraction reproduces both decompressed code images and extended headers exactly. These checks establish internal integrity and extraction agreement; signature authenticity and unmodified retail provenance have not been established.

| Input | Title ID | Raw title version | Decompressed code SHA-256 |
|---|---|---:|---|
| Base | `00040000001acb00` | 0 | `a9cbe1be5e860d6a3d72ceb7f2fba680169276ebf6d50f30586d589af3a89554` |
| Update | `0004000e001acb00` | 3136 | `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126` |

The base executable content has 13,560 RomFS files; the update has 125. An update-first path view has 753 original `.nut` script paths, of which 752 are clean decodable text and one contains embedded controls. Native strings identify Squirrel 2.2.5 stable, subject to native-binding and loader confirmation. Finding shipped script source is useful engine evidence and is not newly decompiled source. See [asset evidence](evidence/assets/README.md).

The update image is the initial native investigation target. Keep the base executable independent; addresses and layouts differ. A derived update-first asset view still needs runtime precedence verification. Previous Monster Fieldnotes container hashes differ from these inputs, so its parsers and fixtures supply leads only.

## Run locally

Use Python 3.13.5 on Windows. Tools and dependencies are repository-local. `tools.lock.json` pins wheel URLs and upstream hashes, native-library identities, CTRTool, objdiff and the minimal Clang distribution. The measured Clang/LLVM profiles build recovered sources and behavior candidates; the game's original compiler is unidentified.

```powershell
& .\tools\python\Scripts\python.exe setup_tools.py --verify
& .\tools\python\Scripts\python.exe run_checks.py
```

`run_checks.py` refreshes intake, compares independent extraction, inventories assets and native candidates, runs bounded behavior diagnostics and malformed-input controls, and records a source/tool/input-bound receipt. It does not assert a source-only build, complete decompilation, whole-game behavior or independent clean replay.

The latest accepted native batch passed from immutable snapshot `eb8e1b6` with separately copied tools, a new environment and private CIA inputs. It adds 56 functions and 964 instruction bytes after original/source fixtures, returning semantic controls and genuine full-image linking. The full suite passed 267 tests; the two production-report classes omitted before object construction were separately covered by all 45 reporting tests in successful GitHub CI on the same commit. The prior failed replay is retained. See `evidence/cohorts/bundle003/acceptance.json`, `evidence/verification/clean-checkout-bundle003.json` and `bundle003-reporting-ci.json`. Historical cohort receipts remain unchanged. The seeded whole-image Ghidra census remains frozen; the separate formal research audit reran raw P-code export from the copied local runtime.

Bounded C components for Squirrel array lifecycle and native/generic calls are documented in [Squirrel source components](docs/squirrel-source-components.md). They pass original/source and native Windows checks; Android builds, modeled services, inactive-frame limits and pending committed replay are recorded separately. They add no exact matching bytes.

Native Windows and Android scene components, including reconstructed material construction, are described in [native scene components](docs/native-scene-components.md). They render measured owner resources and preserve explicit device, renderer and game limits.

The owner selected an independent public/open-toolchain route. Proprietary compiler or Nintendo SDK availability is not a prerequisite. Historical compiler identification remains separate from the exact measured Clang configurations that establish accepted source. The full objective is 95 percent confirmed validated source coverage and working native Windows and Android games; source-function runners and diagnostic application shells do not satisfy that full objective.

For a fresh full verification checkout, provide the pinned minimal Clang and Ghidra distributions with `python setup_tools.py --clang-source PATH_TO_PINNED_MINIMAL_CLANG_DIRECTORY --ghidra-source PATH_TO_PINNED_GHIDRA_DIRECTORY`, then place verified private input copies at `inputs/archive/dqmj3pro/DQMJ3P.cia` and `DQMJ3P_Update.cia`. The Clang directory must contain every pinned Clang/LLD/DLL file. The original owner archive remains external and immutable. Installation verifies downloads before use and leaves global PATH and Java settings unchanged. See [tooling](docs/2026-11-06-tooling.md) and [formal replay inputs](docs/formal-audit-reproducibility.md).

`configure_inputs.py --archive PATH_TO_OWNER_7Z` verifies the pinned archive and materializes only missing expected CIA files, without overwriting existing inputs. `validate_clean_checkout.py --destination work/clean-replay/NEW_NAME` replays a committed source snapshot with explicit private input/tool copies. It requires a new path and sufficient free space.

## Continue reconstruction

Read [AGENTS.md](AGENTS.md), the [project charter](docs/2026-11-06-project-charter.md), [roadmap](docs/2026-11-06-roadmap.md) and [validation design](docs/research/validation.md). Workers prepare disjoint frozen packets; one coordinator publishes acceptance after all gates pass. Preserve exact matching, linked source, bounded behavior, full replay and platform execution as distinct states.

Windows source components execute against original ARM fixtures. The recovered scene component also runs on Windows and in the Android007 APK. Its [Android OS qualification](evidence/verification/android-os007-coordinator.json) covers dual-display lifecycle and sampled surface pixels on the API36 emulator, including ARM64 execution through its translation bridge. CPU-model checks, Android OS execution and physical handheld validation are distinct. These remain partial engine components: playable Windows/Android games, complete-game validation on the physical AYN Thor, a complete source engine and a complete Joker 1 remake remain unproved.

## Contributing and progress

Read [CONTRIBUTING.md](CONTRIBUTING.md) before starting, claim a bounded task in the [issue queue](https://github.com/trevorWieland/dqmj3-pro/issues), and follow the [naming evidence rules](docs/semantic-understanding.md). [Public source compilation](docs/ci-source-builds.md) runs without game inputs. Trusted CI verifies the originals and accepted source integration, then publishes only the [ByteMatch report](docs/bytematch.md). [Executable scope](docs/executable-scope.md) and [inventory accounting](docs/native-inventory-completion.md) explain what is measured and what remains unknown.
