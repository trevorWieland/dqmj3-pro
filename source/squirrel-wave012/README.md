# Portable reference prefix successor

This separate portable component replaces generic reference operations with
representation-safe counter access. It aliases the exact named opaque object and
value types from prototype011. Counter loads and stores copy bytes at the checked
prefix offset; they never dereference a prototype as a full collectable.

The production inputs are `reference_prefix.c`, `vector_values.c` and
`reference_dispatch.c`, with `legacy_storage.c` selected for legacy object/vector
storage. These adapters copy representations and publish the actual destination
before its old-value callback. Vector fields are read again around callbacks.
Select these providers explicitly; `prefix_fixture.c` and
`native_prefix_fixture.c` are observation fixtures. All frozen providers and their
matching build inputs remain unchanged. This component has no matching-source
admission and must not be linked as a second definition of a canonical function.

`reference_types.h` is a separately frozen header contract shared with 013. Its
named collectable embeds the exact 011 prefix plus next/previous links. The
unified opaque build selects `reference_dispatch_opaque.c` instead of
`reference_dispatch.c`, and every participating vtable then uses the exact 011
callback signature. The two dispatcher providers are mutually exclusive; there
is no runtime guess about callback types. Qualification selects both callback
families and both opaque/legacy-storage bindings explicitly. This does not permit
a legacy vtable inside the uniform opaque graph.

The bounded dispatcher recognizes actual prototype tags with exact `void*`
callbacks, and a genuine legacy full-prefix callback family with exact `SqRef*`
callbacks. It performs no function-pointer or prototype-to-collectable cast.
Unknown families call an explicit unsupported provider. The native fixture uses
declared small prefix objects with surrounding canaries and separate declared
collectables; it does not turn the callback substitutes into recovered prototype
or array finalizers.

Qualification compares original assignment, value-vector resize and destruction
against the authored portable source. The ARM comparison includes the entire
owned arena, typed callback observations, service order, actual returns and
callee-saved ABI state. Native Windows runs the source with strict aliasing at
`-O3`; Android outputs are compiled objects, with no device execution claim.
Returning counter-offset, publication-order and shrink controls must fail. The
publication control has an identical final ARM arena and different observations.

The destroy fixtures also shrink live size and replace values/capacity from a
returning callback. Both opaque and legacy-storage providers must reload the
actual vector fields. Compiled cached-pointer and cached-size controls return
normally and fail. The replacement backing array remains valid and owned by the
fixture; disposal uses the current pointer and capacity.

The domain requires valid live storage and vtables, valid size/capacity bounds,
nonoverflow byte sizes, nonaliasing fill, successful reallocation and returning
nonreentrant resize callbacks. Refcounts retain unsigned 32-bit wrap and mark-bit
patterns. No null suppression, atomics, GC recovery or allocator recovery is
added. Scalar publication and object assignment keep their distinct ownership
orders.

The full transitive graph is still open. Frozen container bodies with direct
generic member accesses cannot be repaired merely by renaming a helper. CallInfo
and class-member vectors, stack adapters, native/script result adapters, generic
container cleanup, weak/string families and the production VM build selection
need reviewed portable successors. Prototype011's generic teardown currently
requires its compatible opaque vtables; legacy collectable vtables cannot be
reinterpreted as that type. A composed graph must dispatch these boundaries using
the exact callback type or migrate the objects and their vtables together. Neither
this component nor a passing native fixture establishes complete Execute or game
behavior. The immutable 957/1001 snapshots are separate predecessor evidence.

The aliasing rationale is based on WG14's C11 draft sections 6.5 paragraphs 6-7,
6.3.2.3 paragraphs 7-8 and 6.7.2.1 paragraph 15: object access, byte representation,
pointer conversion and callback compatibility are separate requirements.
[WG14 N1570](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n1570.pdf).
