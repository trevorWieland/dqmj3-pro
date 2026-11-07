# Owning-rule allocator prerequisite

This packet reconstructs the complete update ARM bodies `fn_0014e0a8` (432 instruction bytes) and `fn_0015e1b0` (104 bytes). They are the circular allocation-ring insertion and unlink/free operations called by the measured file owner. This is a separately frozen prerequisite; the seven owner initialization/apply/reset/locale bodies are still separate work. No original-function credit is requested for the source synchronization wrappers or verification providers.

The allocation record has target next/previous/data pointers at offsets 0/4/8, a physical byte count at 12 and an unknown flag byte at 16. Its target/native sizes are 20/32 bytes. The manager stores begin/end/anchor and a recursive mutex; its measured views are 24/48 bytes. All pointer fields remain real pointers. The unknown flag and every padding, payload and unrelated fixture byte remain compared and preserved.

Allocation scans the ring from the anchor's next node, chooses an available gap or the low interval, inserts the supplied record and returns its data pointer. Free adjusts the anchor, unlinks the record and clears both links, data and size. The source preserves the original empty-heap omission of margin, exact-fit behavior and original anchor choice. It does not replace these with a generic allocator.

A measured nonzero-margin edge deserves separate treatment. Subtracting margin can move the scan cursor before the next block end. Original U32 gap subtraction then wraps and can admit overlapping or logically out-of-range metadata. Source C explicitly converts a pointer difference to a 32-bit byte count, preserving that arithmetic without narrowing any pointer. These fixtures compare metadata and returned pointers only; they never consume the resulting allocations and make no allocation-safety claim. The actual owning-rule wrapper passes margin zero; its full-size target/native storage contract is a separate owner proof.

All C pointer arithmetic in this packet stays inside one initialized 8192-byte backing object, with the logical heap beginning 256 bytes inside it. Fixture construction rejects margins above 64 and conservative cumulative request bounds beyond that object. Relational comparisons and subtraction operate on pointers into that same allocation, even when the logical heap result overlaps. Payload bytes are never read or written by these routines. Requests and positive byte sums stay bounded and nonoverflowing; the observed gap underflow is intentional and explicit.

Synchronization is a live typed service interface. The original oracle executes unchanged mutex routines `0x00170704` and `0x001707b4`, including real CP15 TLS reads. Fixtures prehold the recursive mutex for the independently supplied thread identity, with depth 1..8. Source callbacks use an independently supplied full-width pointer to that same logical thread. No source execution maps original executable or data bytes. Actual kernel slow paths, contention, scheduling and operating-system thread identity are outside this packet. Provider query counters are checked against actual original MRC observations; they are telemetry expectations, not modifications of source results.

The 617 bounded cases exercise empty/full heaps, exact fits, gaps, nonzero margins, failure preservation, forward/reverse frees and reuse. Nine wrong-source controls return normally on ARM and Windows, then fail semantic/defined-memory comparison. An initially ineffective anchor control is preserved in the attempts record: its input fit an interior gap and never reached the changed branch. The corrected fixture forces the low-gap fallback. Unhit instructions remain listed without asserting they are proven excluded.

ARM execution checks owned instruction ranges, declared read/write fields, callee-save registers, SP, flags/interworking and a 1024-byte private frame. All 65536 fixture bytes are compared after typed pointer translation, with no private-pointer masks. Actual Windows execution uses addresses above 32 bits and checks every defined output and guard. The AArch64 Android API 29 DSO excludes verification providers, links without undefined symbols and uses 16 KiB load alignment. These are component checks, not a native game or Android device execution claim.

Reproduce with project-local Python:

```text
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_heap.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_heap_verify.py
tools/python/Scripts/python.exe toolscripts/native_wave013_file_owner_heap_functional_proposal.py
```

The proof remains bounded evidence pending coordinator review and independent clean replay. Shared registries, configuration, original files and frozen predecessor packets are unchanged.
