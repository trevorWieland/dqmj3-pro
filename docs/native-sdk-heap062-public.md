# Bounded SDK heap source replay

Ten ordinary production C units and one header reconstruct the measured heap
objects, splitting, allocation/free, size, proxy, defaults, registry and SDK
environment paths. The source manifest separates two qualification C fixtures
and support/driver Python from production code. Its 29 authored inputs total
88,600 bytes. Existing SDK synchronization/header helpers remain separately
pinned. These candidates receive no new working-C or exact-match admission.

Run `python -B toolscripts/public_sdk_heap062_replay.py --output work/heap062-public-replay-v1`
with the pinned local dependencies and measured
private original code/extended header available. The parent creates an exclusive
output and copies only the small authored inputs. It executes full original/C,
source-only and copied-source runs, then unchanged sealed comparison and boundary
producers. `config/replays/sdk-heap062.json` declares every required report and
terminal receipt for a later independent committed replay.

Local preflight passed 17 tests in each full root, 117 source-only profiles,
284 byte-identical full/copied native artifacts and 43 source-only artifacts
identical to their baseline. The new production units also passed 30 standalone
ARM32, Windows x64 and Android ARM64 target compilations. Native Windows execution
and high-address AArch64 reference execution remain distinct from physical
Android execution. No physical heap component run is claimed here.

Nine normally returning wrong-source controls reject on all three targets.
Another control preserves equal final arena bytes while intermediate observations
detect its error. Per-run raw addresses and arena hashes remain preserved; each
runtime arena undergoes a complete byte check before the report is written.
Cross-run comparisons remove explicitly declared per-run arena hashes/addresses;
two named allocation-selection exception fields use an independently checked
allocation model and ownership offsets. No arbitrary pointer-looking word scan or
blanket integer/address normalization is used.

Eleven caught-attempt probes remain terminal failures, including a real child
that catches a forbidden metadata access at shutdown after writing a passed
receipt and exits zero. The external supervisor rejects its persistent journal.
Source-only runs construct no original interpreter and read no generated original
inputs; their profile corpus is separate from the original-dependent tests.

The linked closure selects the new `heap_sdk062ac.c` environment definition and
excludes the old `wave062-sdk/context/allocate062s.c` translation unit. Both remain
standalone compilation targets for their separately qualified historical cohorts.
Default SDK selection retains its measured global-flag precondition and writer;
whole startup, owner/task coupling and general allocator safety are unproved.
All original entries retain explicit instruction/pool and predicate boundaries.
This batch does not establish overall confirmed source coverage or native games.
