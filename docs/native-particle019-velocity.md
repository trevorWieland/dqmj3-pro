# Particle velocity source and callable ownership

The ordinary C callback in `src/native/particle019-velocity` updates three velocity components using `retention + (1 - retention) * (1 - step)`. Intermediate operations preserve the measured single-precision order; algebraic reassociation is deliberately a returning negative control. The ARM interface explicitly places the float argument in the measured VFP calling convention. The two structs expose consumed fields and preserve unknown storage; they do not assert complete owning-class layouts.

The original callback at `0x5354a4` has 60 instruction bytes and a separate four-byte literal. The public intake provides 19 asset-free vectors, including floating-point edge cases. A private original-created particle adds one reference case with its measured incoming-frame provenance. Full, source-only and public-only replays remain distinct. Source-only execution never opens the original executable or constructs its CPU; the additional original-derived object data remains private.

Run the public-only replay from a fresh output directory:

```powershell
tools/python/Scripts/python.exe -B toolscripts/public_particle019_replay.py --public-root . --output work/particle019-example --mode public-only --boundaries
tools/python/Scripts/python.exe -B toolscripts/verify_particle019_replay.py --output work/particle019-example --mode public-only
```

The coordinator replayed all three modes from the actual integrated placements. Six returning wrong-source programs and 20 post-exit boundary programs pass in each mode. The original transport records nine primary objects/executables per build. An exhaustive coordinator check additionally retains the DLL export import library, giving ten raw artifacts per build and 90 checked artifact rows across the three modes and three variants. No compiled bytes are patched.

The separate callable inventory adds ten actually reached entries, including the velocity leaf, two empty return callbacks and a tail-forwarder. Its 2,924 instruction bytes were already classified as instructions; 72 excluded literal bytes were already classified as data. Two independent original caller replays reproduce the transfer/register/frame witnesses. The validator independently walks every declared instruction, verifies returns/tails/fallthrough, literal readers, existing ownership and byte-conserving partitions. The shader-stage proposal's 26,659-entry snapshot is preserved; reviewed heap and teardown layers bring its predecessor to 26,663, then these ten entries produce 26,673.

The initialized-text denominator stays 7,051,280 bytes. Existing owners, exact matches and the 520-function working-C registry stay unchanged. The renderer's outgoing `0x539244` frontier, cached callback callers, physical GPU execution and complete native games remain open. Publishing this source and inventory grants no new source credit; the committed independent replay and later functional admission are separate gates.

`config/replays/particle019.json` reproduces the public-only pipeline from an isolated committed checkout. Its explicit no-private-input producer declarations permit verified original copies to be cleaned after report inputs are retained. Full/source-only modes additionally require the three hash-pinned private object snapshots declared in the public manifest. Those are data fixtures and are never published with the source.
