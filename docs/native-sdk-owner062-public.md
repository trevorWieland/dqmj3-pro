# Public SDK owner input replay

Seven ordinary C algorithms and two headers from the frozen owner packet are
published under `src/native/wave062-owner`. Four qualification C files stay under
`toolscripts/fixtures/sdk062_owner_v1` and are excluded from production compilation.
The production scope covers configuration initialization/selection, owner
initialization, 88-byte target-node insertion, clearing, destruction and disposal.
Public compilation covers ARM32, Windows x64 and Android ARM64. Compilation grants
no functional or exact source credit.

`toolscripts/public_sdk_owner062_replay.py --output work/sdk-owner062-public-replay-v2`
materializes 51 hash-checked public inputs into one fresh output. It runs the full
original/source comparison, a source-only child, 21 boundary tests and a tiny
source-copy replay. Source-only execution cannot construct or read an original
image. Authored Python is loaded freshly from source; runtime files and inherited
SDK inputs remain explicitly pinned. Original code/exheader inputs stay private.
`config/replays/sdk-owner062.json` records the independent checkout replay recipe.

The v2 gate checks file reads, native libraries and metadata operations, including
`stat`, `lstat`, `listdir`, `scandir` and `Path.resolve`. A caught forbidden attempt
invalidates a positive child. Authorization of pinned file metadata does not
authorize enumeration of its parent. The broader v1 attempt and intermediate v2
failures remain frozen as provenance; see `sdk-owner062-metadata-gate-v2.md`.

The replay requires 27 returning semantic controls, including nine controls with
the same final primary arena. The primary insertion corpus visits 206 of 246
instruction positions; an additional immutable rotation corpus closes the combined
246-position set. The primary corpus alone does not claim complete path coverage.
The tiny source copy must reproduce all 1,236 native artifacts byte for byte; the
original frozen golden subset has 1,133 artifacts. Full primary and copied runs
execute 20 tests, and the separate source-only child executes eight.

Target owner storage is 184 bytes, with typed native storage of 296 bytes. The
target configuration is 208 bytes and native configuration 264 bytes. Native
pointers retain their full width. Default allocator/free paths, the unresolved
52/56-byte record producers, full factory/startup behavior and whole-game builds
remain outside this packet. Any later functional admission requires a separate
coordinator review and independent committed replay; this publication itself
does not change the functional registry or the exact-match report.
