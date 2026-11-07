# Native stream 058, initializer stage

This public stage reconstructs the complete first-copy initializer, reset, end, default-init wrapper and default allocation/disposal wrappers around frozen fast-inflate056. Source is under `src/native/wave058`, tools use the unique `native_stream058_` prefix, and frozen metadata is in `evidence/lanes/native-stream058/stage-v1`. Original inputs, reports, binaries and replay artifacts remain private under `work/native-stream058/public-stage-v1`. Every public C/header file is byte-identical to its frozen private predecessor. It grants no source or exact credit. Root owns admission, publication and independent replay. All private058, 054/056 files and shared metadata remain unchanged.

The six canonical ARM bodies total 636 instruction bytes: init `0x733c00` (340 bytes), reset `0x733d78` (176 bytes), end `0x733bb0` (76 bytes), default-init `0x733d64` (20 bytes), allocation `0x734b34` (8 bytes), disposal `0x734b3c` (16 bytes). The separately identified four-byte NOP entries733bfc/733bac fall into the next bodies and receive no duplicate credit. `claim.json` predates C, with full ranges/pools/callers/ABI. The outer inflater7321e4 remains unrecovered and receives zero caller/body credit.

## Real state and type boundaries

Original init requests 7116 bytes. Reset publishes embedded code-buffer pointers at offset 1328, writes sane@7104 and signed back@7108; the last unclassified word starts 7112. `State058` provides a real typed `StreamCode056 codes[1444]` member, keeping unmeasured work/count/tail storage explicitly unnamed. Its measured target size is 7116 and native size 7144; native codes start 1352. The target/native sizes and49 field/heap/event offsets are compiled-probed against independent ABI declarations.

Frozen `StreamState056` is only a kernel view: target7108/native7128. Its native window-size offset40 also differs from the actual058 state's44. No058 object is cast to that view or to an upstream zlib state. `stream_fast058` copies only measured fields into caller-owned typed056 scratch, passes real typed table/window pointers, and copies back the kernel's actual outputs. The workspace is separately provisioned, aligned and nonaliasing. A discarded automatic7KiB view exposed Windows `__chkstk`; the qualified API uses explicit workspace and no fake platform stack service.

Source `Stream058` has true typed allocator/disposer pointers. Target stream size 56 and native size 88 are distinct API arguments. Source initialization checks its real `sizeof(Stream058)` and requests its real `sizeof(State058)`. Native return pointers remain64 bits; target code addresses are only reference-side tokens. Default-source callbacks are genuine linked function pointers, never numeric target addresses cast into host pointers.

Production selection is `initialize058.c` plus real implementations of `stream_heap_allocate058`/`stream_heap_dispose058`. The typed kernel adapter additionally uses `kernel_bridge058.c` and frozen056 production source; the bounded gzip operation adds `fixed_gzip058.c` and frozen054 CRC source. `fixture058.c`/`fixture058.h` and their probe/global heap are qualification-only and must not become a production memory manager. No game-wide startup or complete resource pipeline is claimed.

## Original execution and external services

Original reference runs authentic733bfc→733c00,733d78 and733bac→733bb0. Default allocation really continues734b34→2fecec→1287dc→124ffc into a configured external heap operation. Default disposal really continues734b3c→30233c→143b48, including14e774's prefix read, then the configured external release operation. Original text is read/execute protected; the observer rejects authored non-service endpoints. The external compiled fixture callbacks are placed outside original code and reached through actual callback/vtable calls. No original initializer, reset, end, decoder, CRC or allocator continuation is overwritten or replaced with authored results.

`stream_heap_allocate058` and `stream_heap_dispose058` remain explicit platform services, not recovered game allocator implementations. Their fixture returns distinct, initialized, suitably aligned storage with initialized prefix backing and models default-free(NULL) as a no-op. Original heap globals/TLS assumptions follow the frozen036 handoff and are independently corroborated by executed continuations. Arbitrary allocator corruption, invalid callbacks, overlapping stream/state allocations and concurrent mutation are outside the domain.

273 canonical cases cover major-version and stream-size precedence, null streams/state/callbacks, allocation failure with preserved old state, window_bits−20..64 plus signed extremes, raw checksum preservation, reset with retained windows, all three finalizer callback reloads, unsigned 32-bit allocation multiplication including wraparound and zero, and NULL default disposal. Every original/source ARM, native Windows and high-address AArch64 result is checked against an independent full initialized 1 MiB-arena model. This includes code-buffer/padding preservation, exact callback snapshots, actual pointer identities and all untouched bytes. Source models check compiled-instruction closure, initialized stack reads, SP, integer/FP callee saves and FP control/status preservation.

All 155 reachable canonical PCs are exercised. Four init PCs at733d0c..733d1c are unreachable under the valid distinct-allocation contract: init publishes the fresh state, explicitly zeros window, and performs no intervening callback/store before the window test. `proof058.py` checks the actual store/load/conditional branch, lack of other entries and exact module identity. No branch or flags are forced.

## Bounded real-input composition

`stream_gzip_fixed058` is a new source-only operation, not a claim to recovered7321e4. It initializes a real058 state, reads a genuine gzip header/first DEFLATE byte, algorithmically constructs fixed Huffman tables in caller-owned typed storage, calls the field-copy056 adapter, checks the trailer using frozen054 CRC, and ends the real state. It supports one final fixed-Huffman block, flags0 and adequate output capacity (the corpus supplies output size+512). Dynamic/stored/multiple blocks, optional gzip fields, general streaming, broad error equivalence and insufficient-output compatibility remain excluded.

The actual original full inflater executes independently on the same thirteen real gzip inputs. No manufactured code table or arbitrary mode is supplied to original execution. At its genuine first056 call, the 5,600-byte example has mode 20, hold9/bits5, input 66 / output 6,112 and table widths9/5. The source parses the same input into that measured entry state. Source ARM/AArch64 entry traces match original; Windows runs actual native C with real pointers and matching public observations, without an instruction-hook claim.

All thirteen original/source four-profile routes agree on output, totals, remaining input/output, checksum, normal status and allocation/release counts. Input, output canaries and undeclared caller storage stay unchanged. Source fixed tables match an independent prefix-tree construction. Internal full-outer state equality is not claimed: source tables/workspace and the bounded caller differ from the original outer algorithm. The generic outer inflater, production resource pipeline, optional formats and actual Android OS execution remain open.

Ten compiled wrong-source controls normally return and are rejected on source ARM, Windows and AArch64: wrong major-version check, missed window reset, wrong raw checksum, wrong back field, overwritten mode padding, stale final-state/disposer reads, wrong unsigned multiplication, retained disposed state and wrong gzip CRC. Eight tests build fresh isolated fixtures and a fresh wrong-source binary; no historical artifact cache is required. Copied replay must preserve reports and every produced object/link artifact exactly, with effective tool/library hashes pinned.

## Reproduce

From the repository, using project-local Python:

```
.\tools\python\Scripts\python.exe toolscripts/native_stream058_measure.py
.\tools\python\Scripts\python.exe toolscripts/native_stream058_proof.py
.\tools\python\Scripts\python.exe toolscripts/native_stream058_verify.py --output work/native-stream058/public-stage-v1/new-proof
.\tools\python\Scripts\python.exe toolscripts/native_stream058_controls.py --output work/native-stream058/public-stage-v1/new-controls
.\tools\python\Scripts\python.exe tests/test_native_stream058.py
```

Primary references are [zlib1.2.7 inflate.c](https://github.com/madler/zlib/blob/v1.2.7/inflate.c), [RFC1951](https://www.rfc-editor.org/rfc/rfc1951) and [RFC1952](https://www.rfc-editor.org/rfc/rfc1952). They supply API/format context, not newly recovered source or proof of historical SDK/compiler identity. Host zlib only generates test inputs and independent CRC expectations; it is never the authored implementation. Source ownership rests on measured complete canonical extents and authentic original execution. Retained development failures and explicit limitations are in the adjacent metadata.
