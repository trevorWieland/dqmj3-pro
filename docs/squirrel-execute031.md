# Execute 031 implementation and qualification

Wave 031 is a versioned, partial reconstruction of the actual update ARM script Execute entry `0x0018d65c`. Its original inventory contains 13,184 instruction bytes in eight ranges and 628 classified data bytes. The packet exercises 37 dispatch entries and 1,006 of 3,296 original instruction locations (4,024 visited instruction bytes). These visits are observations, not recovered-byte or whole-function credit. Whole Execute/helper admission remains zero.

The implementation selects `source/squirrel-wave031/execute_core.c`, `extension.c`, `collections.c`, `numbers.c` and `call_adapter.c`, with the exact named ABI in `execute.h`. It reuses frozen 028 storage, StartCall, Return, call dispatch and integer arithmetic. The 53-line core is the explicit version boundary; the two old 028 core/adapter units are excluded when 031 is selected. Actual 011/012/013/014/015/017/019 types preserve compact prototype versus collectable identities and native pointer widths. Frozen 019/021 table bodies, 020 direct lookup, 022 native/script calls and 025 literal formatting supply the selected dependency closure. See `evidence/lanes/squirrel-execute031/providers.json` for exact source/fixture selections.

The 314-program corpus includes all 108 frozen 028 baselines plus 206 additional programs: nested script CALL/RETURN, table/array construction, append/growth, mutation and lookup, byte-string keys, native method preparation/invocation, reference-bearing results, comparisons, bitwise/unary operations and finite floating multiplication/addition/negation. The source preserves the measured integer comparison based on wrapping subtraction, low-eight-bit shift counts and same-tag raw floating identity. General floating subtraction is authored but untested; broad arithmetic/coercion, mixed numeric equality and uncovered pointer families are not qualified.

Every frozen 028 baseline's structured observation prefix and entire defined source arena is identical to a fresh build of the frozen 028 source. A normal linker placement retains the old authored callback pointer addresses; no original instruction, object, relocation or result is patched. Validation-only identifier bindings reuse the readonly 028 fixtures against 031 rather than copying their object graph. Product files exclude all fixture translation units.

All 314 sets pass original ARM, compiled source ARM, a real Windows x64 executable and compiled Android-target AArch 64 CPU models with pointers above 32 bits:1,256 comparisons. Twenty-two deliberately wrong compiled implementations return normally and fail independent models on all three compiled targets. Four controls leave the final ARM arena unchanged and are detected through callback ordering, including lookup old-owner publication and array allocation before publication. Thirteen fresh tests pass in the independent copied tree. Primary and copied reports and all three compiled artifacts are byte-identical.

The 286 non-native cases compare complete initialized original/source arenas. The 28 native cases retain the separately measured restriction on NativeCall's indeterminate instruction/literals/target/root frame fields: raw differences remain private and exact, no reads of those fields are observed in the admitted lifetime, and every other arena byte is compared. This is not universal whole-memory or machine-state equality. FP controls/callee saves are checked and ARM sticky-status observations retained separately; full cross-platform FP-status equality is unclaimed.

Nested child closures/prototypes retain explicit external owners; no new child final-owner or VM/GC teardown family is claimed. General Get/Set/NewSlot fallback, delegates/metamethods, errors/unwind/debug callbacks, generators/suspension, classes/instances, allocation failure and reentrant observers remain excluded. Physical Android execution, playable native game builds and universal source coverage are not established by this component.

Reproduce the primary packet from owner-provided immutable original inputs:

```text
tools/python/Scripts/python.exe toolscripts/squirrel_execute031.py --output work/squirrel-execute031/qualified314
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_execute031.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_execute031_replay.py --report work/squirrel-execute031/qualified314/report.json --copy-root work/squirrel-execute031/replay314-copy
```

The replay destination must be new. The private report is 32 MB; originals, disassembly and raw reports stay private. Public metadata starts at `evidence/lanes/squirrel-execute031/ready.json`, SHA256 `97e26b14a4a6d1a3ee61b04826787dcf827e3f334d7860e259972d5905082041`. The identical primary/copied report SHA256 is `60514b04ecf6bdd1750c991eec53403f56cce3bdee352a2b1c4ce2959013109d`.
