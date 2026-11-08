# Explicit filesystem header variants

The public069 header is retained byte-for-byte. Replacing it in place would invalidate its earlier public intake's exact provider hash. This proposal instead adds `device_types072.h` and `device_pool_types072.h` under `src/native/wave072-construction/`. The new071 and072 headers select those definitions explicitly.

Two tiny binding templates under `toolscripts/file071072/bindings/` are staged at the old logical header locations only inside this isolated component build. They must not be installed over the canonical public headers. The five existing dependent C translation units are recompiled consistently against this target. Their ordinary C source bytes remain unchanged. Existing069/070 public replays keep selecting their original header providers and remain runnable.

| Field | Legacy ARM | Typed ARM | Legacy native64 | Typed native64 |
|---|---:|---:|---:|---:|
| Device bytes |304|304|392|504|
| Embedded descriptor bytes |60|60|88|96|
| First embedded offset |184|184|216|312|
| Device/stream pool bytes |64|60|88|96|
| Pool free head offset |36|36|40|56|
| Pool live count offset |44|44|52|68|
| Pool mutex offset |48|48|56|72|
| Device operations bytes |56|64|112|128|
| Device destructor slot offset |52|52|104|104|

The typed model derives cache/view fields, mode-dependent reader/owner/file-offset unions, generic pool state and full mutex ownership from genuine constructors and callers. Native pointers remain full-width. Logical workspace nodes keep32/24-byte strides while their native links occupy8 bytes; remaining payload bytes and outside guards are independently checked.

The existing dependent files are `device_destroy069.c`, `embedded069.c`, `ipc069.c`, `stream_destroy069.c` and `device_pool.c`. The ABI replay recompiles all five under both models on all three profiles and compares each object with its own frozen seed. Three units produce different objects even on ARM; preserved logical offsets do not establish byte identity. The SDK069 semantic oracle and all070 alias/NULL/warm lifecycle domains are requalified under the typed model.

Both old/new header inclusion orders are rejected by the compiler. All objects linked into this component must use one consistent model. The headers reuse historical type and function spellings, so they are component ABI variants rather than interchangeable layouts. A coordinator integrating the new target must select its explicit bindings and rebuild the complete dependent closure; a source hash alone cannot authorize mixing old and new compiled objects.

Earlier proofs remain bound to their original headers, artifacts and bounded domains. The new target receives a separate execution-profile proof. No shared header, frozen packet, schema, registry or publication is changed by this worker proposal.
