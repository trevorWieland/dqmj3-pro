# Squirrel iteration 043

This version qualifies the complete measured non-generator String/Table/Class Next source bodies against their canonical ARM ranges. It preserves frozen 039 and uses distinct 043 API names. Admission, exact matching and whole Execute credit remain the coordinator's decisions; this packet grants none.

Production selection is `next.c` with `iteration.h`, immutable 011/012/014/015/019/030/034 types and the declared 030 cursor service. Do not link any `fixture*` or `native_fixture.c` as production. Do not also select frozen 039 `next.c` when replacing its three helper calls. The validation builder binds only the three calls in frozen 039 `step.c` to the 043 providers without changing that file. No other original provider is replaced in reference execution.

The valid returning domain requires live aligned objects, successful/nonoverflow storage allocation, nonnegative integer or null cursors, distinct key/value/cursor output storage, valid reference counts, and receivers remaining alive throughout callbacks. String bytes remain immutable. Table callbacks can replace existing node values but cannot free/reallocate the cached node storage or destroy the receiver. Class callbacks can replace existing payloads; private descriptor maps retain constructor/NewSlot/clone provenance and valid vector indices. Arbitrary native descriptor-map mutation and destructive cached-storage invalidation are excluded.

Class fields unwrap weak references; static/method values retain the weak object itself. Table raw mode is a full unsigned 32-bit truth value and suppresses weak unwrapping. String bytes are signed 8-bit values, with no Unicode transcoding. Publication and release order are observable: string scalar key/value release occurs before publication; table key and incoming member assignments retain/publish before releasing the previous owner. Table and class payloads are read after the key callback.

The tests preserve all 398 frozen 039 cases and add direct helper ownership, raw/dead weak, exhausted cursor and mutation cases plus real script/native-callback table/class mutation programs. Invalid Boolean cursors are stopped separately at the actual fatal-service entry and never counted as returns or as a recovered fatal service.

`native_fixture.c` is Windows-only. The other C files compile for ARM, Windows and AArch64. Synthetic case headers are generated in chunks of at most 400 rows; they contain no original game bytes. Android execution here is an actual compiled AArch64 object model at high addresses, not a physical Android or AYN Thor game build.

See `docs/squirrel-iteration043.md` for ranges, invariant limits, reproduction and failure provenance. Frozen 035 exceptions, 038/041 capture, 040 VM storage and 044 generators are not consumed.
