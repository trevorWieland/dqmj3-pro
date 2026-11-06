# DQMJ3 Professional decompilation

Private reconstruction of the owner's measured Dragon Quest Monsters Joker 3 Professional base and update. The project begins on 6 November 2026. No remote is configured. Game archives, executable images, shipped scripts, assets, keys and saves remain outside Git.

**The accepted source cohorts contain 356 native C functions and 4,164 instruction bytes.** Its ordinary C sources compile with the measured open Clang/LLVM profile, genuinely link at the original addresses, preserve the complete hybrid native image, pass bounded original/source tests and replay from an immutable committed tree. The executable inventory remains incomplete, so no overall source percentage is published. Original gaps, assets, embedded script text and unaccepted candidates receive zero reconstructed-source credit. `recovery.json` and finalized cohort receipts are authoritative.

## Established inputs

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

The expanded native pipeline passed from immutable source snapshot `eece4c5` with separately materialized tools, a new Python environment and private CIA copies: 86 unittest cases, fresh original ARM capture, six VM oracle controls, six native-boundary controls, independent extraction, full-image source linking, Windows/Android components, signed diagnostic APK construction and the research-only solver pilot. `evidence/verification/clean-checkout.json` records this replay. The first 267-function receipt is preserved in `clean-checkout-bundle001.json`; both failed expansion attempts are also retained. Ghidra census descriptors are frozen inputs; full Ghidra analysis itself is separate from build replay.

The owner selected an independent public/open-toolchain route. Proprietary compiler or Nintendo SDK availability is not a prerequisite. Historical compiler identification remains separate from the exact measured Clang configurations that establish accepted source. The full objective is 95 percent confirmed validated source coverage and working native Windows and Android games; source-function runners and diagnostic application shells do not satisfy that full objective.

For a fresh source checkout, install with `python setup_tools.py --clang-source PATH_TO_PINNED_MINIMAL_CLANG_DIRECTORY`, then place verified private input copies at `inputs/archive/dqmj3pro/DQMJ3P.cia` and `DQMJ3P_Update.cia`. The Clang directory must contain every pinned Clang/LLD/DLL file. The original owner archive remains external and immutable. Installation verifies downloads before use and leaves global PATH and Java settings unchanged. See [tooling](docs/2026-11-06-tooling.md).

`configure_inputs.py --archive PATH_TO_OWNER_7Z` verifies the pinned archive and materializes only missing expected CIA files, without overwriting existing inputs. `validate_clean_checkout.py --destination work/clean-replay/NEW_NAME` replays a committed source snapshot with explicit private input/tool copies. It requires a new path and sufficient free space.

## Continue reconstruction

Read [AGENTS.md](AGENTS.md), the [project charter](docs/2026-11-06-project-charter.md), [roadmap](docs/2026-11-06-roadmap.md) and [validation design](docs/research/validation.md). Workers prepare disjoint frozen packets; one coordinator publishes acceptance after all gates pass. Preserve exact matching, linked source, bounded behavior, full replay and platform execution as distinct states.

Windows source-function components execute against original ARM fixtures; Android ARM64 components compile with measured 16 KiB segment alignment. These are partial engine components. Native Windows game execution, packaged Android game execution, AYN Thor validation, source-only engine construction and a complete Joker 1 remake remain unproved. The roadmap keeps those requirements separate from native source acceptance.
