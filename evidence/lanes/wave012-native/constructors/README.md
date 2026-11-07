# Native wave012 constructor and state-storage batch

Six ordinary C routines cover 392 original instruction bytes: singleton label construction at 0x007555b4 (24), default label construction at 0x007555cc (36) and 0x00755798 (36), owned interval destruction at 0x007557bc (92), compiled-state payload construction at 0x004bff74 (52), and raw membership storage initialization at 0x004bfedc (152). Each has canonical update content0 identity and hash-bound incoming-call witnesses in packet.json. All spans have been decoded and their branch, pool and dependency extents checked. Every one of their 98 original ARM instructions executes in the bounded fixtures.

The source uses real intrusive previous/next pointers, typed interval values, typed owner pointers and the expanded compiled-state layout. It preserves the original nontransactional behavior. Default construction resets destination, kind, list and owner while retaining untouched payload and padding, and can discard old ownership without freeing nodes. Destruction frees owned nodes with the original one-block logical request and returns the input set pointer; an absent owner leaves the borrowed list unchanged. The payload initializer stores the arena, count and allocation result before checking failure, and updates pending/transition owners only on success. Its clear flag controls exactly N raw membership bytes. Count-zero allocation still fails in the original allocator. No cleanup, rollback or guessed semantics are added.

The six new functions genuinely call the previously qualified source arena implementation. The executable graph contains eight compiled source functions and no retained original helper. Target blocks remain 16 bytes; true-pointer host blocks occupy 32 bytes. Node, transition and compiled-state budgets remain one, two and three logical blocks. Static size assertions prove their target and host representations fit. Raw membership counts and clear operations remain byte counts and are not widened.

The packet records actual compiler/linker argv, tool hashes, full object and linked spans, section mapping symbols, genuine named call relocations, headers, producers, fixture specifications and dependency roles. No candidate body is an exact linked original-byte match. This proposes bounded functional validation only and grants zero exact matching credit or automatic admission.

The replay passed 253 original ARM, compiled-source ARM and actual native Windows cases, including owned/borrowed lists of up to 16 nodes, every constructor tag boundary, zero and boundary membership lengths through 128 bytes, full and fragmented 2624-slot bitmaps, cursor wrap and allocation failure, clear/nonclear, and preserved initial owner states. Both ARM/Thumb return modes across all 16 incoming condition-flag combinations add 128 ABI checks. Complete defined memory, immutable fields, buffers, payload/padding preservation, read/write footprints, callee-saved registers and stack pointer are checked. Execution outside declared source/dependency bodies is rejected. Only a private 512-byte stack frame is excluded from byte identity.

Five genuine source semantic mutations were compiled and executed on ARM and native Windows. All ten controls returned normally and preserved immutable memory, then failed on a defined result or state difference. The mutations alter singleton character, default tag, list-destruction ownership, initial state result or membership clearing. Crashes or missing returns do not count as semantic controls.

A genuine Android AArch64 API29 shared component built with at least 16KiB PT_LOAD alignment. It was not run on an Android device. The Windows artifact is a bounded native component, not a game executable. These finite typed graphs exclude malformed pointers, concurrency, MMIO, arbitrary overlap and universal equivalence. They do not establish whole-game behavior or historical compiler identity.

Reproduce from the repository root with the local Python environment:

```
tools/python/Scripts/python.exe toolscripts/native_wave012_constructors.py --work work/wave012-native/constructors-release
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_native_wave012_constructors.py -v
```

Original game bytes, private disassembly, temporary objects, DLLs, source-linked ELF and negative binaries remain under ignored work/ or generated private input paths. Public evidence contains hashes, addresses, fixture specifications and outcomes only. Independent clean replay and coordinator admission are separate follow-up gates.
