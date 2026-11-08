# Independent replay archive access

`toolscripts/isolated_component_replay.py --read-only-originals` runs a fresh committed-tree extraction from the owner's immutable CIA archives without first copying those archives into the replay tree. This option requires a declared code/ExHeader-only cleanup plan. It does not reuse generated game images or previous extraction outputs.

The replay still copies pinned tools and offline wheels, creates a fresh Python environment, extracts both measured original archives, verifies original code and ExHeader hashes, compiles committed sources, runs the plan and standard tests, and generates reports. Each archive is hash-checked before and after the extractor reads it. Cleanup separately verifies the owner archive hashes, fresh extraction metadata and final code/ExHeader copies before removing redundant generated staging. It rejects an unexpected local CIA copy. Original archives remain outside the disposable replay directory.

The receipt records `readOnlyOriginalArchives`, the original archive root, the exact fresh-intake command, copied tools, and the cleanup's `readOnlyOriginalInputs`. Default replay behavior still copies the original archives. A source-only game or additional recovered-source coverage is not established by either intake mode.

For the MD5 stream component, after committing its source and plan:

```powershell
tools/python/Scripts/python.exe -B toolscripts/isolated_component_replay.py --plan config/replays/md5_stream062.json --revision COMMIT --read-only-originals
```

Use a new replay directory per immutable revision. Record failures before repairing them. Archive complete qualified evidence with hash verification before pruning disposable replay trees. The read-only option removes roughly1.6GB of unnecessary archive copies from peak replay storage; it does not justify deleting active proofs or immutable inputs.
