# Portable CallInfo and class member records

These live successors are separate from the frozen 404-case core. Select
`record_storage.c` and the ordinary compiler support in `record_runtime.c` together
with that core's explicit callback provider. `native_record_fixture.c` is only a
qualification fixture. No frozen provider or canonical symbol is redefined.

Record fields are copied through their object representations. CallInfo growth
copies the complete record and retains its closure; shrink releases each closure.
Member growth first initializes both fields to null, then assigns primary and
secondary. Shrink releases secondary before primary. The current member pointer
is retained across those callbacks, while the primary object is read again;
the next member uses the current vector storage. Vector metadata is published at
the measured points. Typed legacy record storage never requires a prototype to
be dereferenced as a collectable.

Qualification compares complete original bodies at 0x0019d408 and 0x001a51e0,
whole owned ARM arenas, callback observations and returning ABI. Native Windows
executes the source using real declared records and the exact frozen opaque
prefix types. Returning missing-retain controls fail. Reversing member release
order has identical final arena bytes and different callback observations.
Android objects are compile results, without a device claim.

The admitted domain requires valid sizes/capacities, nonalias fill, no byte-size
overflow and successful returning allocation. Broader record-storage mutation,
inline generic operations, actual mixed object lifetimes and VM build wiring are
still open. These successors grant no duplicate original-function credit and no
complete-VM or whole-game claim.
