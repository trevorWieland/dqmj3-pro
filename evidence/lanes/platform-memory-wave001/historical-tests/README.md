# Historical component tests

test_platform_memory_build.py is preserved byte-for-byte from source snapshot 6e2e4d7. It belongs to that historical source layout; use a private checkout of that revision to reproduce it at its original tests/ location.

The old platform manifest pinned complete runtime reports containing build-root paths. Fresh report generation legitimately changes those paths, so that manifest cannot serve as the current portable replay contract. The original C sources, input manifest, captured corpus and evidence remain unchanged in memory-wave001. Current discovery uses test_platform_memory_wave002.py, which retains the meaningful component checks and adds canonical-identity and runtime-report independence checks.
