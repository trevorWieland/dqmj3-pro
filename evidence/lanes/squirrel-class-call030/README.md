# Class and instance construction through native Call

This packet reconstructs the complete measured bodies in `claim.json` as ordinary C. The 14 existing canonical entries total 4,624 instruction bytes. This is a bounded class/native-constructor/lifetime component; it grants no new source or inventory credit. The 44-byte weak-base tail remains part of canonical instance destructor `0x001cdcc4`. Retyping the existing 44-byte `0x001cdaec` accessor adds no duplicate credit. Frozen class009, instance023 and all other predecessor files remain unchanged.

The genuine original route is `Call 0x0017ffac → CreateInstance 0x00198418 → instance allocator 0x00190c50 → initializer 0x00192548`, followed, when present, by recursive Call/CallNative into an exact `I32(void*)` native closure. Class initialization executes the complete original `0x001a18a8`; table cloning executes `0x001a4734`, its cursor helper and actual frozen019 table providers. Class/member definitions are explicit fixture clients using recovered vector and table operations. VM CLASS `0x001996f4`, class NewSlot and script constructors are not reconstructed or qualified here.

## Declared storage

`SqClass030` embeds the exact named020 class storage first. Its target/native sizes are 92/152. The complete new `SqClassInstance030` has target/native headers 44/88, followed by at least one physical 8/16-byte object, even when the logical field count is zero. Allocation adds the class's requested extra bytes. The older partial020/023 native instance header is 80 bytes and must never receive a full030 instance through a structural cast.

The exact011 prefix,012 collectable/object/vector types,013 native closure,014 weak references,015 byte strings,017 script closures and019 tables are used with their actual callback types. Vtable callbacks are `void(void*)` bridges to actual declared class/instance types; user release hooks are `I32(void*,I32)`. Class vtables expose only their valid three-slot lifetime prefix. The new instance object has an actual declared six-slot020 meta vtable; its GC/clone slots deliberately stop as unsupported. No frozen three-slot object is read beyond its bound.

VM storage must be a genuinely provisioned full022 object whose common020 storage is first. Shared storage must be a full `SqClassSharedStorage030`, with exact shared020 first. The original constructor-name object is byte-copied at target offset60; a 16-byte native object there would overlap the chain at72. The native name therefore occupies a named tail at280, making full shared storage296 bytes. This is a borrowed binding: the caller retains the name until its final factory call and may then release its lease. It does not recover the complete original shared-state constructor/destructor. It preserves the frozen015 byte-copy string-table provisioner at20 and all020 fields.

New native pointers and object fields use their natural eight-byte alignment; the target uses four-byte alignment. The flexible value member explicitly has the actual object alignment. No packed-member pointer escapes, incompatible full-state cast, legacy SqRef cast or callback-vtable reinterpretation is used.

## Ownership and observation

Instance allocation caches the field count, extra-byte budget and shared pointer before allocation, but reloads the extra-byte value afterward when positioning the user pointer. The allocator observer independently changes the extra value or class shared pointer to qualify that read order. Class initialization publishes only the fields established by the original sequence; callbacks cannot observe or mutate under-construction class storage or local NULL fill objects before publication.

The factory retains the new instance, publishes the destination, disposes its previous owner, then drops the temporary. A real compact-prototype finalizer/deallocator observer clears the newly published destination; the temporary becomes its last owner and executes the actual instance destructor before constructor lookup returns. This is separate from the ordinary Call path. Constructor descriptors remain actual integer field/method indices; a field may hold a live or invalidated actual weak reference.

Instances retain their class and field defaults, borrow the class member table as their delegate, and enter the actual named chain. Final release temporarily retains an instance before its user hook and permits resurrection. The destructor caches the field count, releases the class before clearing values, then clears weak targets. Classes call their release hook without that guard. Finalization releases attributes, field pairs, method pairs, meta values, member table and base in the measured order. Pair cleanup releases secondary before primary. The full class destructor additionally qualifies reentrant base hooks that repopulate the dying derived class's attributes and vectors, including distinct last-owner strings.

The 54 sets include empty and three-level inherited classes, no/method/field constructors, live/dead weak constructors, real native array returns, failed native/arity paths, old prototype error disposal, both weak destruction orders, resurrection, vector grow/shrink, clone delegation, scalar/actual string/prototype/native members and constructor publication reentrancy. Native constructor bodies are ordinary fixture clients, not claims to recover every game-specific native method.

Original/source ARM compare the complete 256 KiB initialized arena after verified callback-address data aliases. Raw pre-alias hashes, all byte offsets and actual callback values are retained. Aliasing only changes a post-execution Python comparison copy; it changes no executed object, register, code, literal or text. The verified fields are the existing extended table prefix/method and native callable plus each allocated030 class/instance release-hook field. A dedicated typed audit checks the latter before recording their alias tokens.

Twelve sets have equal post-alias whole arenas. The other42 preserve the frozen022 four inactive native-frame word differences at offsets0,4,32,40 within frame arena0x2b400. No executed fixture/provider reads those words; all actual read sites are recorded. The component excludes raw dead-frame/debug/asynchronous observers and does not turn defined-memory equality into arbitrary whole-memory equality. Every pre-alias arena remains unequal because original/source callback data addresses differ. Windows uses real arena0x120000000 and A64 uses0x110000000; their actual full-width pointers, independently predicted allocation sizes, own-address topology, logical ownership and ordered events are checked without target-pointer truncation.

Thirteen compiled controls normally return with saved ARM/VFP state and are rejected. Five preserve the final comparison arena: omitted instance guard, invented class guard, delayed class release, reversed pair release and omitted clone delegate. The ordered client/resource observations catch these errors. The controls also detect stale shared/extra reads, omitted ancestor lock, late field-count reads, missing inherited/default/temporary ownership and missing weak invalidation.

## Coverage and limits

`coverage.json` classifies every missing instruction. Eight entries have every instruction observed, including all143 class-destructor instructions, all54 initializer instructions, all74 member-resize instructions and all25 instance-release instructions. Remaining conditions include explicit allocator/assert failures; reference-bearing paths for constant NULL fill objects or the constant integer clone cursor; resizing a freshly initialized18-slot meta vector from a fully live18-slot base; and last-owner temporary releases while the source table and new clone both retain the value. Constructor descriptor cleanup cannot take a reference-bearing old-descriptor path for valid integer descriptors. These are bounded invariants, not a universal equivalence theorem. Allocation overflow/failure, invalid descriptors/cursors, mutation of stable clone sources, arbitrary construction-time observers, GC marking/finalization, instance clone, script constructors, full Execute and a complete game remain unsupported.

The Android shared object is checked against both PT_LOAD16KiB alignment/congruence and the containing/following PT_LOAD relationship of GNU_RELRO. Its actual A64 instructions execute in the CPU model. This is not Android OS, physical-device, AYN Thor or game execution. Guidance: https://developer.android.com/guide/practices/page-sizes .

## Reproduction

Use the pinned private owner module/ExHeader and project-local compiler/runtime. The reference SDK exchange publishes only addresses, mode/width and hashes, never original instruction or asset payloads.

```powershell
$env:PYTHONPATH='toolscripts'
tools/python/Scripts/python.exe toolscripts/squirrel_class_call030_measure.py
tools/python/Scripts/python.exe toolscripts/squirrel_class_call030_execute.py --folder work/squirrel-class-call030/primary-qualified
tools/python/Scripts/python.exe toolscripts/squirrel_class_call030_controls.py --baseline work/squirrel-class-call030/primary-qualified --folder work/squirrel-class-call030/controls-final
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_class_call030.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_class_call030_replay.py
```

The replay requires a new owned directory, copies the actual transitive quoted C headers, Python imports, frozen metadata, compiler binaries and private reference inputs, and rebuilds all three artifacts. Python/package runtimes outside that copy are explicitly shared. It requires identical complete execution and returning-control receipts and artifact hashes, then reruns the11 tests. Failed heap-overlap diagnostics, unobservable delegate-control attempts and earlier build/guard failures remain private and are not accepted qualification inputs.
