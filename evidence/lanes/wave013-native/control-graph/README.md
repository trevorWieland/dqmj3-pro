# Native wave013 control-transition phase

The two complete original ARM functions at0x004c281c (484 instruction bytes) and0x00755584 (24) are reconstructed as readable typed C. They add508 bounded functional original bytes and zero exact matches. The complete outer caller0x004c3c20 and remaining parser/range/compiler driver are still under reconstruction; this packet does not grant partial credit to them.

The control phase starts from each current state's existing raw membership vector, adds all destinations sharing the same control byte, applies epsilon closure, and interns an expanded vector when it differs. It creates a runtime CONTROL transition only for changed membership. It removes and frees consumed pending groups even when no runtime edge is needed. The tag constructor stores the destination, CONTROL tag and low value byte, leaving the high payload byte, ownership and existing list untouched. All256 byte values are preserved without inventing a narrower compile-time domain. The actual driver precondition is that the preceding singleton/range phases have left only control labels in pending lists.

Original partial mutation is preserved. Duplicate pending edges are removed before later interning failures. Temporary membership storage remains allocated if interning or runtime-edge allocation fails. In particular, this control phase frees its temporary after successful runtime-edge construction; the frozen singleton phase has a different order. No cleanup or rollback is invented. Raw vectors retain existing nonzero bytes except when the original explicitly writes1 at a destination, which can turn an existing7 into1 and make the bytewise vector differ.

The linked source graph contains22 functions: these two new routines and20 frozen source dependencies from wave009/wave012. There are no retained original helpers. All prior sources, headers and producers remain unchanged and hash-bound. Range nodes, transitions and compiled states retain their original one/two/three logical-block requests; target physical blocks occupy16 bytes and native pointer blocks32. Membership storage remains a raw N-byte vector, not a widened pointer array.

The sealed replay passed984 original ARM, genuine compiled-source ARM and actual native Windows x64 cases with pointers above4GiB. These include all256 constructor values, all256 grouped controls, duplicate/distinct groups, unchanged and expanded masks, epsilon cycles, existing state identity, odd/even counts through32, allocation pressure, eager removals, temporary retention and state creation failures. All127 new original instructions executed. Both return modes across all16 incoming condition-flag combinations add160 ABI cross-product cases. Complete defined memory, immutable metadata, untouched payload/padding, declared read/write fields, outer guards, callee-saved registers and stack pointer are checked. Only a private512-byte stack frame is excluded from byte identity.

Five real semantic source mutations were compiled and executed on ARM and Windows. All10 controls returned normally and preserved immutable memory before failing a defined result/state comparison. They change constructor value, destination membership value, preservation of the current vector, transition creation or temporary release. Crashes and missing returns cannot count as semantic controls.

Full object sections and genuine LLD output, relocation names/types/offsets, compiler flags, tools, producers, input packets and commands are hash-bound. The dependency's genuine compiler switch pool is retained without patching; source execution into data pools or outside owned source/dependency code is rejected. An Android AArch64 API29 source shared component built with at least16KiB PT_LOAD alignment; it was not run on an Android device. The native Windows graph is a component, not a complete game.

Finite fixtures require valid typed source and compiled-state graphs, current membership storage, source-table IDs matching indices, valid destinations, finite owned lists, and control-only remaining pending labels. They exclude malformed pointers, concurrency, MMIO, arbitrary aliasing and universal equivalence. Complete original outer-caller, tokenizer/NFA callback closure and whole-game execution remain unclaimed.

Reproduce with:

```
tools/python/Scripts/python.exe toolscripts/native_wave013_control.py --work work/wave013-native/control-release
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_native_wave013_control.py -v
```

Original game bytes, private decompilation, objects and executable outputs remain under ignored paths. Public evidence contains only hashes, addresses, fixture specifications and outcomes. Independent clean replay, exact source acceptance and coordinator admission remain separate gates.
