# Asset decoder candidate and callback inventory

The public candidate preserves the frozen worker's C, headers, producers and declared inputs byte for byte. It contains the asset decoder at `0x44c578` (192 instruction bytes), no-op disposer at `0x44c728` (4), bump allocator at `0x44c72c` (32), and status mapper at `0x44c74c` (48). Its 276 bytes are a candidate scope until the coordinator completes a clean replay and a separate functional admission. Publishing or compiling these files grants no source or matching credit.

The two callback entries were absent from the previous function inventory. Their original reader loads the two literal addresses, stores them in the allocator and disposer fields of a stack stream, and passes that stream to the measured initializer. The inventory validator checks the original instructions, literal contents, field offsets, initializer call and stream size. It rejects intervening control transfers, stack changes and callback-slot overwrites. The leaf bodies have independent original-byte hashes and returning boundaries. This is a stored-callback witness, separate from the existing member-pointer and vtable witnesses. The historical validator remains unchanged.

These additions bring discovered entries from 26,626 to 26,628 and assign 36 previously unowned instruction bytes. They do not change the 7,051,280 initialized text bytes, grant source credit or establish historical function completeness.

`config/replays/stream061.json` runs the public replay. Its preparation phase copies only 62 small declared source and metadata inputs, plus the frozen prerequisite receipt, into the two required work namespaces. It refuses existing namespaces, preserving private frozen lanes. Repository contents, tools and original game inputs are not duplicated by this bootstrap. The isolated replay runner handles its separately declared original-input intake.

The proof phase invokes the unchanged worker producer, including both fresh and copied-source executions. It requires 380 case sets, 1,520 original/source observations, 18 returning mutation-control checks, 10 fresh and 10 copied tests, byte-identical semantic reports and 371 byte-identical object/linked artifact pairs. Public and staged inputs are checked again afterwards.

The candidate retains its bounded domain: valid caller storage, the observed allocator contract, explicitly qualified multiplication wrap, and the measured initialized stream behavior. Four original instruction paths remain unexecuted under that domain. Null-storage allocator-trace differences and arbitrary pointer-address wrap remain excluded. Android compilation and execution of the prerequisite inflater on a physical Thor do not qualify this new wrapper on hardware or establish a native game build.

## Later caller annotation correction

The immutable worker packet includes an earlier annotation describing a later caller's post-decode free as freeing the input. Subsequent caller analysis corrects that annotation: `0x251d7c` reloads the workspace allocation, `0x251d84` frees it, and `0x251d88` clears its stored pointer. The embedded input packet is a separate resource region. This correction does not change the frozen candidate, its tests or the wrapper's five-argument ABI, and does not qualify the complete caller.
