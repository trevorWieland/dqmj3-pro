# Execute035 structured exceptions

This is a versioned, partial successor to Execute031 at original update entry `0x0018d65c`. It adds measured PUSHTRAP (56), POPTRAP (57), THROW (58), nongenerator error unwinding and the error-handler controller at `0x00198320`. The whole Execute entry still has zero whole-function or matching credit. Qualification is limited to the explicit synthetic bytecode and provider contracts; this is not a playable game or a complete VM.

Select the 035 `execute_core.c` and `call_adapter.c` instead of their 031 counterparts. Reuse the frozen 031 extensions, collections and numbers, the frozen 028 storage/StartCall/Return helpers, and the exact frozen 011–025 production provider selection returned by `squirrel_exception035_build.sources()`. Add 035 `storage.c`, `traps.c`, `handler.c`, `unwind.c` and `dispatch_call.c`. Exclude every fixture translation unit. Provide `sq_exception_reallocate035` as successful, aligned, nonoverlapping storage with the declared copy semantics; the deliberate generator-unsupported boundary remains terminal.

Traps retain the actual typed 028 record: base, top, resume instruction pointer and target register. Its target/native sizes are 16/24 bytes. The vector is read through the existing 028 VM storage contract, with no reinterpretation of partial VM objects. The notify byte is target shared offset 169, the measured byte in the provisioned 020 shared storage; its native binding is offset 257. This does not establish an unrestricted shared-state layout.

The error handler pushes the root and the error as two real arguments, then invokes the reloaded callable through frozen Call022 with raw raise-error zero. It ignores the Boolean result, pops both arguments with fresh top reads, and only then releases the discarded result. The error slot and handler slot use byte-copy bindings. Handlers in this corpus are actual 013 native closures or 017 script closures; other non-NULL callable families are excluded. The actual object raiser is the frozen, alias-safe 022 provider; no duplicate interval credit is requested.

Unwinding pins the original error across handlers and release callbacks. Notify-before-catch may leave a handler's replacement in the VM error slot while the trap receives the pinned original value. Uncaught propagation restores that pinned original error. Frame removal decrements the call count before releasing the old closure, while current still names that cleared frame; only then is current republished. The final-owner program drops the caller's real script-closure owner from an actual native callback and validates that destructor observation.

The corpus includes the 314 frozen 031 baseline programs and 504 exception profiles: integer and actual compact-prototype throws, caught and uncaught propagation, nested script unwind, multiple traps, vector growth, normal pops, raw nonzero raise-error patterns, notify behavior, real native and script error handlers, failed handler calls, handler self-removal, final-owner cleanup and discarded fresh arrays. The preserved baseline requires both the structured prefix and the complete source arena to equal a fresh 031 build. New profiles execute genuine synthetic Squirrel bytecode through the actual Execute/Call entries. No ARM instruction interpreter, original source-mode fallback, original endpoint replacement or cached result is used.

NativeCall's four original inactive frame fields can contain dead-stack residue. Raw original/source differences remain recorded; the comparison excludes only the exact declared cells and every other initialized arena byte must agree. A lifetime read monitor follows native-frame slots after return, and a deliberately compiled callback that reads the inactive target field must be rejected by that monitor. Callbacks observing those raw fields remain outside the semantic contract. This is not universal machine-state equality. VFP/FP controls and callee saves are checked separately from sticky exception status.

Generators, debug hooks, suspension/resume, invalid trap bytecode, malformed object graphs, arbitrary call targets, allocation failure and unrestricted reentrant mutation of frame/stack storage remain excluded. The inherited 031 arithmetic/lookup restrictions remain in force. Trap storage persists after the test and does not establish VM teardown. Native Windows execution and high-address Android-target AArch64 CPU models are separate from physical Android or AYN Thor execution.

All 818 sets pass original ARM, source ARM, real Windows and the high-address AArch64 model (3,272 comparisons). All 314 predecessor source arenas and observation prefixes are preserved. Seven deliberately wrong compiled implementations return normally and are rejected on all three compiled targets; two preserve the exact normal-source final ARM arena and are detected through ordered callbacks. Ten fresh and ten copied-tree tests pass. The copied report and all three binaries are byte-identical to the primary.

The corpus visits 1,306 of 3,296 original Execute instruction locations (5,224 observed bytes) and 40 dispatch-table entries, including shared handlers. The separate actual error-handler entry visits all 60 instruction locations. These observations grant no whole-Execute or matching credit.

Reproduction uses local immutable original inputs:

```text
tools/python/Scripts/python.exe toolscripts/squirrel_exception035.py --output work/squirrel-exception035/final-countbound818
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_exception035.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_exception035_replay.py --report work/squirrel-exception035/final-countbound818/report.json --copy-root work/squirrel-exception035/replay818-copy
```

The replay destination must be new. Raw reports, originals and disassembly remain private under `work/`. No source admission, duplicate physical credit or whole-Execute credit is granted by this worker.

The identical primary/copied private report SHA256 is `3a9f6ec0294260942f66a8cedfcd19acec2bc0c96aeef863c525a65edef6bfb6`. Public metadata starts at `evidence/lanes/squirrel-exception035/ready.json`; the complete raw report remains private.
