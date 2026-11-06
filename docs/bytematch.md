# ByteMatch progress integration

The measured base title version is 0 (`00040000001acb00`); the measured update title version is 3136 (`0004000e001acb00`). The initial reconstructed native module is `update-content0`. These are measured input identities, not an assertion of retail revision or translation provenance. The base executable remains a separate target with different addresses and bytes.

The reporting configuration is deliberately pending. `config/objdiff-units.json` has `readyForProgress: false` and no units. The executable inventory needs complete review and an explicit mapping to original/source object pairs before a report can represent the project. An accepted-only subset would produce a misleading 100-percent result and must not be uploaded as game progress. Source compilation and the 356 accepted functions do not resolve the whole-game denominator.

## Generate the project configuration

`objdiff.json` is generated; edit the manifest and generator rather than a generated file:

```powershell
python toolscripts/configure_objdiff.py --version update-content0
```

Until readiness is reviewed, this exits unsuccessfully with the configured blockers. It does not create an empty project or substitute source-built objects for missing originals. A successful export requires all of the following:

- `readyForProgress` is explicitly true and the version is configured.
- `reviewedInventory` references a JSON file by repository-relative `path` and `sha256`. That file states `complete: true`, `reviewed: true`, a named `reviewer`, nonempty `scope`, the exact `version`, and exhaustive `unitNames`. A reviewer must establish the inventory independently; setting these fields is not evidence of completeness.
- Every inventory unit appears exactly once in the manifest for that version. Each unit names an existing public `source_path`, an explicit `complete` boolean, and separate `target` and `base` objects, each with `path` and `sha256`. Both objects must already exist as little-endian ARM32 ELF relocatables with symbol tables. Original target objects stay private.
- A unit's `name` is its source-tree path without the file extension, or its source directory. This preserves folder grouping. Paths must remain inside the repository and cannot traverse symlinks or `..` components.
- A true completion flag requires `completionEvidence` with `path` and `sha256`. Its JSON states `matched: true`, `sourceLinked: true`, the exact `version` and `unit`, and `targetSha256`/`baseSha256` matching the supplied objects. The review must establish these claims from real matching and linking; compilation alone cannot grant completion.

The generator emits `target_path`, `base_path`, `metadata.source_path` and `metadata.complete`. It emits no categories because this project has not defined a reviewed game/engine/library progress split. It disables objdiff's implicit builds: the existing project pipeline must first produce the actual objects. Other architectures, missing objects, stale hashes, incomplete inventories and absent source paths fail explicitly.

## CI reports and source links

The trusted `build.yml` workflow follows the public-source/private-original pattern in pokebw2. Public source lives in `trevorWieland/dqmj3-pro`; original CIA inputs live only in the private `trevorWieland/dqmj3-pro-inputs` repository. Its read-only SSH deploy key is stored as `INPUTS_DEPLOY_KEY` in the public repository's Actions secrets. This is input access for CI; ByteMatch needs no token. Fork pull requests run only the separate public source compilation workflow.

The private repository stores ordered XZ parts below GitHub's per-file size limit. CI checks every part and the decompressed CIA hashes against the measured project identities. It extracts both executables, rebuilds the accepted source units with their frozen compiler profiles, compares complete function sections and verifies genuine source integration into the hybrid image. It does not rerun bounded behavior tests or claim a source-only game. Originals, retained gaps, hybrid images, private manifests and raw build logs are never public artifacts.

The workflow runs on pushes to `main` and manual dispatch. While `readyForProgress` is false it verifies the accepted native build, explicitly records the inventory blocker in the Actions summary and uploads no progress report. [Inventory issue #1](https://github.com/trevorWieland/dqmj3-pro/issues/1) tracks the outstanding work. Both the reviewed denominator and the real per-unit object mapping must be finished before enabling reports.

After a reviewed full mapping is available and the build succeeds, run:

```text
objdiff-cli report generate -o build/update-content0/report.json
```

Upload only that report in `update-content0_report` from a successful push run on the default branch. Keep original objects, retained-original gaps, hybrid images and private inputs out of artifacts. Add one separately configured report/artifact for any later supported executable version. ByteMatch downloads reports itself; no ByteMatch token is required. See its [CI artifact requirements](https://bytematch.dev/docs/getting-started).

The reviewed accepted set currently uses exact canonical C symbols for 356 of 356 accepted functions, so a rename header is unnecessary. Future differing source/report symbols need a generated names mapping or another mechanism supported by [ByteMatch source linking](https://bytematch.dev/docs/source-linking). Do not change frozen C solely to satisfy source lookup. No maintained list currently certifies working but nonmatching functions, so no `functional.json` is invented from candidate or bounded-test status. If such a reviewed list is added, export it beside `report.json` with function names and explicit `high`, `medium` or `low` confidence.

Once ByteMatch has ingested a successful default-branch push report, run its [source-link checker](https://github.com/Veradictus/ByteMatch/blob/master/scripts/check-source-links.py) against `trevorWieland/dqmj3-pro`. A local configuration check or exact symbol inventory cannot substitute for that server-side result. Registration, ingestion and the checker remain unverified until that event occurs.

## Local checks

```powershell
python -m unittest discover -s tests -p test_configure_objdiff.py -v
```

The tests compile a small synthetic function using the pinned local Clang under ignored `work/`, then exercise successful configuration and failures for unbuilt objects, missing sources, traversal, stale hashes, wrong object format, missing source-link proof and an omitted inventory unit. They use no original game bytes. Genuine-object cases report a skip when the local compiler is unavailable; the pending production configuration must still fail explicitly.
