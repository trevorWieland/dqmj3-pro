This lane imports the public Squirrel 2.2.5 release and measures a VM/compiler reference component. The exact game fork remains unknown. Imported source, ARM byte comparisons, bounded method behavior and host interpreter execution are separate results. This lane grants zero recovered-source credit and does not build the game.

The 420,352-byte archive downloaded over verified TLS from [Fedora lookaside](https://src.fedoraproject.org/repo/pkgs/squirrel/squirrel_2.2.5_stable.tar.gz/35f97d933d46e2b5d54e0c0f2eccfa4a/squirrel_2.2.5_stable.tar.gz) matches the complete SHA256 published by the [original SourceForge release download page](https://sourceforge.net/projects/squirrel/files/squirrel2/squirrel%202.2.5%20stable/squirrel_2.2.5_stable.tar.gz/download): `8667e181ac2e0428d60d74a4fae6b5c15b8ed0f0933253cc7cf1aaa847d0ee25`. The MD5 in Fedora's source manifest was only a cache locator. Direct SourceForge, CDN and SVN TLS failures remain recorded in acquisition.json; TLS verification was never disabled.

`upstream/` contains all 80 original files, byte unchanged, including the zlib-style [COPYRIGHT](upstream/COPYRIGHT) and notices in squirrel.h. This historical notice must not be replaced with modern Squirrel's MIT license. squirrel.h defines version 225 / Squirrel 2.2.5 stable; the release's COMPILE file still says 2.2.4 and its copyright string still says 2003-2010. Those stale strings are preserved. The earliest public maintainer GitHub header commit inspected contains Squirrel 3.1, so current GitHub source was not substituted for this release. `upstream-manifest.json` pins every imported byte; `.gitattributes` protects imported CRLF and binary documentation through checkout.

These are measured Clang21 layouts. Full public type sizes are not automatically game type sizes.

| Public profile | Pointer | Integer | Float | Refcount | Raw value | Object | VM stack offset | Array size |
| --- | ---: | ---: | ---: | ---: | ---: | ---: | ---: | ---: |
| ARM32, float, narrow, GC |4|4|4|4|4|8|24|36|
| ARM32, double, narrow, GC |4|4|8|4|8|16|24|36|
| ARM32, float, narrow, no GC |4|4|4|4|4|8|12|24|
| Windows64, ordinary _SQ64 |8|8|4|8|8|16|48|72|
| Windows64, forced SQ32 diagnostic |8|4|4|4|4|16|48|64|

The ARM32 float/GC profile agrees with measured object payload offset 4, refcount offset 4, weakref offset 8, VM stack pointer 0x18, top 0x30 and base 0x34. Public reference Release dispatch uses virtual slot +8, as observed in the method fixtures. Double and no-GC configurations fail those particular width/layout constraints. The wide-character profile still has 8-byte objects and matching VM offsets, so these methods do not establish game character encoding. The wide profile uses an explicit MSVC-compatible wchar declaration configuration solely for layout measurement.

Public ARM32 SQVM is 168 bytes, SQString 32, SQClass 92, SQInstance 52 and SQInstruction 8. SQArray's vector begins at 0x18; its chain/shared-state fields agree with the unaccepted array-factory/controller lead, but that lead has no acceptance here. The opcode catalog records all 61 public opcodes and the instruction field offsets. Game bytecode compatibility, class/member flag identity and a game string-hash binding remain unqualified.

The public string hash uses unsigned word arithmetic, a length-derived step and forward character reads. Its width matters: native execution of three authored byte vectors agrees with independent 32/64-bit recurrences, but longer vectors produce different low 32 bits under host _SQ64. Truncating the final 64-bit hash is insufficient. The host build explicitly uses unsigned plain char for these byte tests; this does not establish the game's encoding or compiler char setting.

| Original entry | Public method | Original bytes | Public linked bytes | Byte exact |
| --- | --- | ---: | ---: | --- |
|0x157ff4|sq_gettop|16|16|yes, overlaps pending wave005 proposal|
|0x173d40|SQVM::GetAt|12|12|yes, overlaps pending wave005 proposal|
|0x173d1c|SQVM::Push|36|104|no|
|0x19e864|SQObjectPtr::operator=|96|96|no|
|0x19e8c4|SQCollectable::AddToChain|36|32|no|

These five methods make 55 paired original/public ARM returns under projected field, memory and callback contracts. Negative slot indices and two inconsistent incoming-reference ownership cases are excluded from this public-method subset. Five separately compiled wrong-source methods actually return and are rejected for semantic differences. The caller-provided Release callback is not a game destructor proof. Whole data memory, permitted accesses, callee-save registers and SP are checked; 128 dead stack bytes are excluded. No universal C++ object-lifetime, heap-graph or VM-language equivalence follows from these fixtures.

All 12 unchanged core C++ translation units compile to ARM objects and a native Windows executable. The host executable constructs real public VMs, compiles and executes 14 authored programs covering arrays, tables, classes/static members, explicit outer captures, generators, exceptions, loops and arithmetic, then checks compiler error recovery. Its integer boundary returns 2147483648, exposing host widening; SQFloat still exhibits 32-bit precision. Three additional public hash vectors execute. This is a source-only public interpreter oracle candidate, not a game-compatible VM or full game build.

The owned compatibility headers provide public C/runtime declarations and placement new; prelude.h supplies earlier allocator declarations required by modern C++ template lookup without editing imported source. The Windows non-SEH setjmp declaration geometry follows the public-domain [mingw-w64 header at 9b934989](https://github.com/mingw-w64/mingw-w64/blob/9b934989ac5941f877621c6aac9271fe30116c11/mingw-w64-headers/crt/setjmp.h). Actual invalid-input recovery runs on Windows. The ARM jump-buffer declaration is object-build-only, not a qualified target C runtime. Individual ARM method links deliberately discard unrelated global initializers; they are not full ARM interpreter links. Windows startup executes the complete imported initializer list. Unused undefined symbol metadata is distinguished from live dependencies: links require no unresolved references and no remaining relocations, and a deliberately missing live function must fail.

The initial authored one-line brace/semicolon fixtures exposed the old parser's end-of-statement handling; those failed outputs are retained. The final explicit-capture/newline fixtures pass. A host 64-bit compatibility port must still resolve numeric/refcount widths, raw pointer-value representation, hash width, overflow/shift domains, floating conversions, serialization and native bindings. Simply forcing SQ32 leaves a 32-bit raw value inside an 8-byte pointer union and is diagnostic only.

From any working directory, invoke the repository-local Python with the absolute toolscripts/squirrel_source_wave001.py path. `--publish` writes this lane's report; `--output work/squirrel-source-wave001/NEW_NAME` writes a separate build/report. Then run source/squirrel-wave001/test_probe.py with the same Python. `SQUIRREL_PUBLIC_REPORT` may select a separate report for tests. The tests reject changed imported bytes and a genuinely compiled missing live dependency, and check ABI-width and credit/identity distinctions. No download is needed for replay because the complete public source is retained.

For an independent copied-input replay, run source/squirrel-wave001/replay.py after publishing the canonical report. It copies only the declared public source, original method input and frozen oracle helpers, materializes the pinned local compiler files, builds from an unrelated current directory, runs the eight tests and requires all native artifacts to match. It writes this lane's verification.json.

Strict copied-input replay initially caught COFF wall-clock timestamps in otherwise identical Windows objects. The final compiler profile requests -mno-incremental-linker-compatible, and the linker sets its own timestamp to zero. No object bytes are rewritten. The failed replay and its exact metadata differences remain in replay-attempts.json.
