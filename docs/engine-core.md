# Engine core: what the most-called unreconstructed functions do

This document describes the 120 functions with the most static call sites that had no reconstructed source when it was written. The list is `work/hot-split.json` (`not_in_source`), which contains 1,333 addresses and 47,427 direct call sites. The 120 entries below account for 24,931 of those sites (52.6 %). Every claim is tied to the measured body, the arguments visible at call sites, the strings and data the body references, or an accepted reconstruction that matches the body byte for byte. Where the evidence only fixes the mechanics, the entry says so.

The purpose is understanding, not credit: no source changed, and none of these addresses earns recovered-source credit from this document.

## How to read the entries

- **Addresses** are image addresses in `update-content0` (`fn_001008c4` is `0x001008c4`).
- **Call sites** are direct `bl`/`blx` instructions inside the measured symbol extents, counted exactly as `work/hot.py` counted them; all 1,333 published counts reproduce with zero mismatches. Indirect calls, tail branches (`b`), fall-throughs and calls from unowned text are not counted, which is why some important callees look cold and why a few entries end in a fall-through into the next symbol.
- **established** means the purpose is fixed by an accepted source whose body matches the disassembly, by a documented API contract, or by an unambiguous algorithm plus callers that use it that way.
- **inferred** means the mechanics are measured but the purpose comes from the caller context, field layout or strings; an alternative reading is possible.
- **unknown** means only the mechanics are known and the entry does not guess a subsystem.
- The chip behind the image is not discussed here; the measured inventory mixes ARM and Thumb-2, and the document uses the mode recorded per symbol.

## The shape of the core

The 120 functions are called from 7,825 distinct caller functions. Their distribution is not what "game engine core" usually suggests: it is dominated by **runtime support**, not gameplay.

- **The top of the list is aliases and shims.** Seven of the 120 are not independent behaviours: `fn_001008c4` is a three-instruction call gate, `fn_002feef8` and `fn_0030233c` are four-byte branch aliases to the same free body, `fn_0015ecdc` is a four-byte fall-through entry into the SDK allocator, `fn_00146590` is a four-byte fall-through entry into the terminate path, and `fn_004edc34`/`fn_004edc70` are branch aliases to the mutex acquire/release. The call counts measure how often the *entry point* is used, not how many distinct routines exist.
- **The single most-called address is a free wrapper.** `fn_001008c4` (1,989 sites) calls the free implementation through another alias; the actual default free at `0x00143b48` has only 15 direct callers. A reader who ranked functions by body complexity would miss this completely.
- **C++ object machinery is everywhere.** Allocating entries carry an 8-byte prefix holding a dispose hook (the SDK allocator), destructors install self-referential vtables, and release paths decrement a reference count and free through a sized-deallocation shim.
- **UTF-16 text, not byte strings.** The hottest string routines are wcslen, a wide sprintf, a wide formatter, wide-string duplication and a wide string store; `strlen`/`strcmp`/`memcmp` are present but rank lower. The engine stores and formats text as 16-bit units throughout.
- **The two biggest string helpers are message-table lookups.** `fn_0022f584` and `fn_0022f750` (559 + 486 sites) are keyed on UTF-16 message-file paths that read `patch:/data/Message/MenuMessage...` and `patch:/data/Message/LayoutMessage...`, and a caller passes a literal such as `MenuMessageEquipNone`. They are localisation lookups, not generic string constructors.
- **Squirrel is a first-class subsystem.** The VM stack getters/pushers and the error raise are among the most-called functions, and the property readers on top of them are used across the game code.
- **A small SDK layer sits under everything.** Context resolution, a recursive mutex with a CP15 thread owner read, a three-word Result record, a one-time guard and a result/context dispatcher are all in the top 120 and are byte-matched by accepted sources with `sdk_`/`heap_` names.
- **Runtime support dominates the totals.** Allocator/lifetime (5,983 sites), diagnostics (1,817), strings (4,024), tables (2,473), the script VM (2,121), SDK runtime (1,937), timing (766) and maths (923) together account for 20,044 of the 24,931 sites (80.4 %). Graphics/UI text is 774 sites, inferred game-data access 2,239, the input-shaped bus 201, and unclassified 1,673.
- **File, audio and input do not appear at this call frequency.** None of the 120 entries belongs to the file or audio layers, and the one input-shaped function is marked inferred. Those subsystems call their own helpers many times per frame but are not the functions that everything else in the image calls; the cutoff at 71 sites already excludes them.

### Group summary

| Subsystem | Functions | Call sites | established | inferred | unknown |
| --- | ---: | ---: | ---: | ---: | ---: |
| Allocator and object lifetime | 13 | 5,983 | 9 | 4 | 0 |
| Diagnostics, assertions and exceptions | 3 | 1,817 | 3 | 0 | 0 |
| Strings and text | 18 | 4,024 | 9 | 9 | 0 |
| Tables, containers and bitsets | 19 | 2,473 | 5 | 14 | 0 |
| Squirrel VM interface | 9 | 2,121 | 7 | 2 | 0 |
| SDK runtime, context and synchronisation | 10 | 1,937 | 7 | 3 | 0 |
| Timing | 5 | 766 | 3 | 2 | 0 |
| Arithmetic and vector maths | 7 | 923 | 6 | 1 | 0 |
| Graphics and UI text | 8 | 774 | 0 | 8 | 0 |
| Game-data record access (inferred) | 14 | 2,239 | 0 | 13 | 1 |
| Input/state channels (inferred) | 1 | 201 | 0 | 1 | 0 |
| Unclassified | 13 | 1,673 | 0 | 6 | 7 |
| **Total** | **120** | **24,931** | **49** | **63** | **8** |

The distribution is the actual finding: allocator/lifetime, strings, tables and the script VM account for the overwhelming majority of high-frequency calls, while graphics appears only through UI text.

## Worked examples: from call sites to conclusion

### 1. `fn_001008c4`: the most-called address is a free shim, and its size argument proves a sized-release API

The body is three instructions: `push {r4,lr}; blx 0x002feef8; pop {r4,pc}`. `0x002feef8` is four bytes: `b 0x00143b48`. `0x00143b48` is the accepted `heap_default_free062ac` implementation, which checks the heap-enabled byte at `0x0089a508`, calls `heap_allocation_size062ac`, and dispatches the heap vtable dispose slot. So the entire body of the most-called function in the image is a call gate to free.

The call sites add the second half of the evidence. 1,179 of 1,180 distinct callers are ARM code entering this Thumb function with `blx`; most sites set r2 = 0 and many set r1 to a computed byte count. One caller, `fn_001588d4` (412 sites, a reference-count release), shows where that count comes from: it loads the 12-byte header before the payload, computes `[payload-8] + 8`, puts it in r1, puts 0 in r2, and calls this address with the payload in r0. The callee reads none of r1/r2. Conclusion: the original entry is a sized-deallocation interface `(block, size, 0)` that forwards to the default free; r1/r2 are part of the declared API and are dead in this implementation. That the address is the *delete* path rather than a bespoke release is established by the free body; the original identifier is not recoverable.

### 2. `fn_002ff628`: an exception raise, proved by the default handler's own strings

The body tests a global function pointer at `0x008c3dc0` (initial value `0x00103731`, the Thumb entry of `0x00103730`). For level r0 <= 3 it calls `handler(level, 0)`. For level >= 4 it allocates an 8-byte object with `0x00100380`, builds a formatted string with `0x001002f8` from r1 and the varargs, takes the character pointer through vtable slot 8, calls `handler(level, text)`, and destroys the string through slot 0. The default handler at `0x00103730` prints `Exception: %s.\n` and terminates; when the message is null it selects `unknown exception`, `exception`, `unexpected exception` or `bad_alloc: out of memory` by level and aborts. That string table is what fixes the level semantics.

A histogram of the 957 call sites' r0 immediates gives 554 x level 9, 400 x level 8, one x level 3, one x level 4 and one x level 10. The level-3 site is `fn_00100fc6`, the checked allocator, which calls level 3 exactly when `malloc` returned null, matching the handler's `bad_alloc: out of memory` branch. Conclusion: `fn_002ff628` is the engine's raise/throw entry; levels 8/9 carry formatted messages (their distinction is not decoded), levels 0-3 are the standard fatal classes. The exception classes beyond `bad_alloc` are not established.

### 3. `fn_001249d0`: the body is line-for-line the accepted SDK context source

The disassembly checks a contexts-enabled byte at `0x008b637e`, loads the manager at `0x008b63d8`, takes its recursive mutex at +0x10, calls `0x0013d1a8` for the thread id, walks the manager's tree at +0x48 by key, releases the mutex, selects the context record from a vector (trapping when the index is out of range through `0x0015ebe4`), and returns `record->slots[3]->context`. The accepted source `src/native/wave062-sdk/context/context062s.c` contains `context_resolve062s(slot)` with exactly these steps and `sdk_context062s() { return context_resolve062s(3); }`. The same file's `sdk_context_alternate062s()` is `fn_004b7748` (slot 1), which differs from `0x001249d0` only in the slot constant.

The callers corroborate the role: the named registry and operation-result functions (`registry_register062ad`, `registry_find062ad`, `sdk_operation_result062t`, `sdk_wrapper_ready062t`) call it before using the context, and 347 distinct callers do so. Conclusion: established, including argument convention (none) and returned object (the SDK context bound to slot 3 of the current thread).

## Entries

Entries are grouped by subsystem and sorted by call-site count inside each group. The one-line title is the inferred or established role; the bullets below it carry the evidence.

## Allocator and object lifetime

The heap interface, the SDK allocation prefix, reference-count release and destructors. This group is the largest single reason a function is called from everywhere: every constructor and destructor in the image reaches one of these entries.

#### `fn_001008c4` - 1,989 call sites - Sized deallocation shim (free through a Thumb call gate)
*Confidence: established.*

- **Purpose** - frees the block whose address is in r0. Its whole body is `push {r4,lr}; blx 0x002feef8; pop {r4,pc}`, and 0x002feef8 is a four-byte branch alias to `heap_default_free062ac` at 0x00143b48, so the effective callee is the default heap free. It is the most-called address in the image (1,989 sites) yet it implements no deallocation policy of its own.
- **Arguments** - r0 = block to free. r1 and r2 are also set by most callers and are not read by the callee: 0x001588d4 loads the block-size word at `[block-8]`, adds 8 and passes it in r1 together with r2 = 0, which is the shape of a sized release in which only the base pointer matters to this implementation. Callers that only have a pointer set r0 alone.
- **Touches** - 0x002feef8 -> 0x00143b48 (`heap_default_free062ac`); no globals, no literals, no stack arguments.
- **Evidence** - three instructions, 1,179 of 1,180 distinct callers are ARM code entering this Thumb function with `blx`; the 3-register argument shape is visible at hundreds of call sites (`mov r2,#0` before the call, r1 holding a byte count), and 0x001588d4 builds exactly (block, size, 0) from the allocation header before calling it. The three-argument call convention is therefore established, while the original source-level name is not recoverable from the bytes.

#### `fn_00100fc6` - 1,056 call sites - Checked allocation entry (malloc, throw on failure)
*Confidence: established.*

- **Purpose** - allocates a block and turns allocation failure into a `bad_alloc` exception. Body: `p = 0x002ff600(size)`; if `p == 0` call `0x002ff628(3)`; return p.
- **Arguments** - r0 = requested bytes (callers pass small constants such as 0xc, 0x20, 0x210, or a computed `elements << 2/3`); r1 = 0 at every inspected site. The callee 0x002ff600 reads only r0, so r1 is dead in this implementation; the original prototype may have carried an alignment/second operand.
- **Touches** - 0x002ff600 (malloc: minimum size 1, then `heap_default_bytes062ac`, then a global out-of-memory hook at 0x008f9c98), 0x002ff628 with level 3 (the `bad_alloc` code).
- **Evidence** - 0x002ff600 is a 36-byte Thumb function that calls `heap_default_bytes062ac` (the accepted default allocator, alignment 4) and invokes a global handler when it returns null; 0x002ff628's level 3 is exactly the level the default terminate handler maps to the string `bad_alloc: out of memory` at 0x007c37ac. 771 distinct callers, 1,056 sites; the return value is immediately tested for null or stored as a pointer at the call sites.

#### `fn_002feef8` - 622 call sites - Branch alias to heap_default_free062ac
*Confidence: established.*

- **Purpose** - a four-byte ARM unconditional branch to 0x00143b48, the accepted `heap_default_free062ac` body. Executing it frees the pointer in r0 exactly as the default free does; it exists as a separate callable address so callers can reach the free implementation through this symbol.
- **Arguments** - r0 = block; r1/r2 are not read.
- **Touches** - 0x00143b48 (`heap_default_free062ac`): checks the heap-enabled flag at 0x0089a508, calls `heap_allocation_size062ac` for bookkeeping, then dispatches the heap vtable's dispose slot.
- **Evidence** - one instruction, `b 0x00143b48`, 622 sites in 427 callers. 115 further sites call the same body through 0x0030233c, another four-byte branch to 0x00143b48; only 15 sites call 0x00143b48 directly. The address is therefore an alias/call gate for the accepted free implementation, not a separate routine.

#### `fn_0015ece0` - 619 call sites - SDK allocation with 8-byte dispose prefix (heap_sdk_allocate062ac)
*Confidence: established.*

- **Purpose** - allocates `(bytes+3)&~3 + 8` bytes, stores the current platform dispose hook in the first word of the prefix, and returns the prefix + 8. This is the allocation used by SDK-style objects whose destructor must call back into a platform-provided dispose function.
- **Arguments** - r0 = payload bytes; the function rounds up to 4 and adds the 8-byte prefix. Returns the payload pointer or the raw result of the platform hook.
- **Touches** - 0x008b6378 (SDK environment base): `[+0x3c]` = platform allocate hook, `[+0x40]` = dispose value stored in the prefix; 0x002fecec (`heap_default_bytes062ac`, alignment 4) when no hook is installed.
- **Evidence** - the accepted source `src/native/wave062-heap/heap_sdk062ac.c` implements exactly this shape (`rounded`, `allocate(rounded+8)`, `prefix->dispose = ...dispose`, `return memory+8`); the disassembly performs the same rounding, hook test and prefix store. 320 distinct callers and 619 sites; its twin 0x0015ecdc falls into it with a 4-byte `mov r0,r0` (a forward entry), and 0x0014f1bc is the matching dispose routine.

#### `fn_001588d4` - 412 call sites - Release a reference-counted object and free it at zero
*Confidence: inferred.*

- **Purpose** - decrements the reference count stored 12 bytes before the payload; when it reaches zero it frees the whole allocation. Two global singleton values are returned early without touching the count. The free path passes (payload-12, size_word+8, 0) to 0x001008c4, where the size word is read at payload-8 and the +8 accounts for the header, so the object carries a 12-byte header.
- **Arguments** - r0 = address of the object slot (the function loads the value pointer from [r0]); callers pass stack slots or record fields. Returns r0 unchanged.
- **Touches** - 0x001008c4 (sized free shim), header at `payload-12` (refcount) and `payload-8` (size word), two global sentinels at 0x008f9cf4/0x008f9ce8.
- **Evidence** - 129 distinct callers, 412 sites; the body is a complete refcount release: `ldr r1,[r0]`, compare to the two sentinels, `ldr r0,[r1,#-0xc]!`, skip when the count is -1, decrement, and on zero compute the size from `[payload-8]+8` before calling the free shim. The header arithmetic is established by the code; that the object is a refcounted string/VM object is inferred from the sentinels and from the Squirrel-heavy caller set (the function is also called directly by queue and effect code).

#### `fn_00170f54` - 253 call sites - Destroy a wide-name object (sdk_wide_destroy062x)
*Confidence: established.*

- **Purpose** - destructor for an object whose +4 field points at a wide string: installs the identity vtable, and if the text pointer is non-null and not the sentinel 4, walks back 4 bytes to the payload and 8 more to the allocation prefix; if the prefix's dispose hook is non-null it calls it, otherwise it calls 0x0030233c (the default free alias) on the prefix.
- **Arguments** - r0 = object; returns r0.
- **Touches** - 0x00855a94 (identity vtable), prefix at text-12, 0x0030233c (free alias), object +4.
- **Evidence** - accepted source `src/native/wave062-runtime/construction/wide_owner062x.c` has exactly this body (`sdk_wide_destroy062x`), including the `4` sentinel and the prefix dispose branch; the disassembly matches. 158 distinct callers, 253 sites; 0x004b637c constructs objects with the same vtable.

#### `fn_0014f1bc` - 214 call sites - SDK dispose (heap_sdk_dispose062ac)
*Confidence: established.*

- **Purpose** - frees a payload allocated by 0x0015ece0: if null return; load the dispose hook from `[payload-8]`; if non-null tail-call it with r0 = payload-8, otherwise tail-branch to 0x0030233c (the default free alias) with the same argument.
- **Arguments** - r0 = payload pointer returned by 0x0015ece0.
- **Touches** - prefix at payload-8 (dispose hook), 0x0030233c (free alias).
- **Evidence** - 137 distinct callers, 214 sites. The body is the exact inverse of 0x0015ece0's prefix store and matches `heap_sdk_dispose062ac` in the accepted source `src/native/wave062-heap/heap_sdk062ac.c`; the address is not listed in `config/source-names.json`, so the correspondence rests on the measured body rather than an accepted mapping. The two `mov r0,r0`/branch ends keep the tail call out of the literal call graph.

#### `fn_0030233c` - 210 call sites - Second branch alias to heap_default_free062ac
*Confidence: established.*

- **Purpose** - four-byte ARM branch to 0x00143b48 (`heap_default_free062ac`), the same body reached through 0x002feef8. Destructors and dispose routines use this alias when the compiler could not place a direct call.
- **Arguments** - r0 = block; r1/r2 unread.
- **Touches** - 0x00143b48.
- **Evidence** - one instruction, `b 0x00143b48`; 115 distinct callers, 210 sites, including the named `sdk_wide_destroy062x` (0x00170f54), `sdk_owner_destroy062ab` and registry functions. The two aliases 0x002feef8 and 0x0030233c account for 832 of the 847 static call sites into the free body (only 15 calls reach 0x00143b48 directly).

#### `fn_004b7520` - 183 call sites - Destructor of a refcounted interface object
*Confidence: inferred.*

- **Purpose** - tears down an object whose first word is a vtable: installs the vtable at 0x00855b74 (whose slot 0 is this same destructor), and if the owned pointer at +0x34 is non-null calls its virtual slot +0x40; finally tail-calls 0x00454d0c, which atomically decrements the object's reference count at [ptr+4] and calls virtual slot +4 when it reaches zero.
- **Arguments** - r0 = object.
- **Touches** - vtable 0x00855b74, object+0x34, 0x00454d0c (refcount release).
- **Evidence** - 65 distinct callers, 183 sites; the vtable's first word 0x004b7520 is the address itself (self-referential destructor), which identifies the slot. Callers build the object on the stack (`mov r0,sp`), consistent with an interface/result wrapper. The class is not named in an accepted source.

#### `fn_0015ecdc` - 145 call sites - Forward entry into heap_sdk_allocate062ac
*Confidence: established.*

- **Purpose** - a four-byte `mov r0,r0` entry that falls through into 0x0015ece0, so calling it allocates exactly as heap_sdk_allocate does. It exists as a separate callable address (115 distinct callers, 145 sites) with no logic of its own.
- **Arguments** - identical to 0x0015ece0: r0 = payload bytes.
- **Touches** - 0x0015ece0 and through it the heap environment and `heap_default_bytes062ac`.
- **Evidence** - one instruction `mov r0,r0`; the next symbol 0x0015ece0 begins with `push {r4,lr}` and the rounding/hook/prefix sequence. The fall-through is the only execution path, and both entry points are heavily called (619 sites to 0x0015ece0, 145 to 0x0015ecdc).

#### `fn_00100414` - 127 call sites - Destroy a strided array and return its allocation prefix
*Confidence: inferred.*

- **Purpose** - walks an array backwards calling a per-element callback, then returns `base-8`, the SDK allocation prefix for the array. With count 0 it returns base-8 directly.
- **Arguments** - r0 = element base; r1 = callback (usually a destructor); r2 = stride; r3 = count.
- **Touches** - callback in r1, prefix at base-8 (same 8-byte prefix as 0x0015ece0).
- **Evidence** - 127 sites, 110 distinct callers. The shape `add r0,record,#0x2c; ldr r1,[pc]; mov r3,#1; mov r2,#8; blx` fixes stride/count/callback; the `base-8` return matches the heap_sdk prefix convention. The array class is not established.

#### `fn_00118290` - 80 call sites - Return the active heap/allocator hook
*Confidence: established.*

- **Purpose** - returns `[0x0089a50c]` when the byte at 0x0089a508 is non-zero, otherwise 0. This is the enabled flag plus pointer pair of the heap environment used by 0x00143b48/0x0015ece0.
- **Arguments** - none.
- **Touches** - 0x0089a508 (enabled), 0x0089a50c (hook/allocator pointer).
- **Evidence** - 80 sites, 65 distinct callers; the accepted heap source uses `heap_environment062ac.enabled` and `.allocator` at exactly these semantics, and the function's four instructions implement `enabled ? pointer : 0`. The heap-enabled getter is established by the matching source fields.

#### `fn_0014f480` - 73 call sites - Destructor of a vtable object (vtable 0x00855a18)
*Confidence: inferred.*

- **Purpose** - installs the vtable at 0x00855a18, releases the owned pointer at +0xc through its prefix dispose (or the default free alias 0x0030233c), then installs a second vtable and zeroes +4.
- **Arguments** - r0 = object.
- **Touches** - vtables 0x00855a18 and the 0x00855b74 family, object+0xc, 0x0030233c.
- **Evidence** - 73 sites, 35 distinct callers; the self-referential slot 0 in the vtable identifies it as the destructor. The class is not named in an accepted source.

## Diagnostics, assertions and exceptions

The exception raise path, the assertion operand formatter and the terminate entry. Together they are the only way the game reports a fatal condition; the allocator uses them for bad_alloc.

#### `fn_002ff628` - 957 call sites - Exception raise (formatted message or standard code)
*Confidence: established.*

- **Purpose** - raises an exception through the global handler pointer at 0x008c3dc0. Level 0-3 calls `handler(level, 0)`; level >= 4 builds a formatted message (allocate an 8-byte object at 0x00100380, construct it from the format and varargs at 0x001002f8, take its character pointer through vtable slot 8), calls `handler(level, text)`, then destroys the object through vtable slot 0.
- **Arguments** - r0 = level/exception code; r1 = format string (levels >= 4); r2, r3 and stack words = the format arguments. The register arguments are pushed twice at entry (`push {r0-r3}` then `push {r0-r3,r4-r6,lr}`) so the varargs are contiguous above the frame.
- **Touches** - 0x008c3dc0 (mutable exception sink, initialised to 0x00103731, i.e. Thumb entry of 0x00103730); 0x001002f8 and 0x00100380 (message-string machinery); 0x00103730 (default handler).
- **Evidence** - 0x00103730 prints `Exception: %s.\n` and then calls the terminate path; when the message is null it selects `unknown exception`, `exception`, `unexpected exception` or `bad_alloc: out of memory` from the level and aborts. Of 957 sites, 554 pass level 9, 400 pass level 8, one passes 3 (the allocation failure in 0x00100fc6), and two pass 4/10; the message strings visible at call sites are ordinary format strings. The level-to-behaviour mapping is established by the default handler's string table; the meaning of the individual 8/9 classes is not.

#### `fn_00148918` - 732 call sites - Assertion operand formatter (release-build stub)
*Confidence: established.*

- **Purpose** - returns the address of four zero bytes at 0x00148920. Callers pass the failed-operation text, source file name, native function name and source line in r0-r3; in this release build the formatter produces an empty message, so the script-visible assertion text is empty although the operands are still evaluated and passed.
- **Arguments** - r0 = operation/message string; r1 = source file name; r2 = native function name; r3 = source line number.
- **Touches** - only the literal zero block at 0x00148920; no calls, no globals.
- **Evidence** - two instructions (`adr r0, 0x00148920; bx lr`), 426 distinct callers, 732 sites. The argument order is fixed by call sites such as `add r0,pc,#0x9c; add r1,pc,#0x88; ldr r2,[line-table]; mov r3,#0xb47` and is already documented in `docs/script-api-native-reconstruction.md`, which also records that the 0x00148920 word is four zero bytes.

#### `fn_00146590` - 128 call sites - Forward entry into the terminate/abort path
*Confidence: established.*

- **Purpose** - a four-byte `mov r0,r0` entry that falls through into 0x00146594. That body calls a global cleanup handler if one is installed, resets it, and tail-branches to 0x0012d61c. The default exception handler (0x00103730) calls this after printing the exception text.
- **Arguments** - caller registers passed through; the handler does not use them itself.
- **Touches** - global handler word at 0x001465e4's literal, 0x0012d61c, 0x00103730.
- **Evidence** - 128 sites, all from Squirrel and diagnostic code (`sq_script_create041`, `sq_lookup_raise_format020`, `sq_table_new_slot019`, ...) plus the default exception handler. The fall-through and handler sequence are measured; calling it `abort` would overstate what the bytes prove.

## Strings and text

C library string primitives, the two printf families (8-bit and UTF-16), bounded formatters, the string object wrapper, wide-string duplication and the global string store. The engine text is UTF-16 throughout, which is why wcslen/memcpy16/wcscpy outrank their byte counterparts.

#### `fn_0022f584` - 559 call sites - Look up a message/text string in the current message namespace
*Confidence: inferred.*

- **Purpose** - returns the interned string object for a text key in the current message file: loads the message-file path pointer at 0x00898214, the global string store at 0x00897800 and the key/length operands, then tail-branches to the store's intern routine 0x0016ba34 with (store, namespace_key, text, text_length).
- **Arguments** - r0 = pointer to a NUL-terminated text key (callers pass `add r0,pc,#n` or a literal pool word); r1 = second operand, normally 0 (length hint/language selector).
- **Touches** - 0x00898214 (pointer to the current message-file path, e.g. the UTF-16 string at 0x008781f8 which reads `patch:/data/Message/MenuMessag...`), 0x00897800 (string store), 0x0016ba34 (intern), 0x0016752c (find namespace/list node), 0x00188184 (hash-table insert/lookup).
- **Evidence** - 361 distinct callers, 559 sites; one caller passes the literal `MenuMessageEquipNone` (pool word 0x00244794) and the namespace string at 0x008781f8 is a message-file path, which fixes the message-text role. 0x0016752c compares candidate strings by wcslen + memcmp and 0x00188184 is a 1,148-byte hash-table insert keyed by `hash*31 + char`; the routine returns the existing object when the text is already present, so the interning mechanics are established and the message-table role is inferred from the path/key evidence.

#### `fn_00190d50` - 504 call sites - Assign a UTF-16 string to a string object (wcscpy shape)
*Confidence: inferred.*

- **Purpose** - assigns a wide string into a string object: measures the source with 0x00100b58 (counts UTF-16 code units until a 0 halfword), then sets up r0 = destination object, r1 = source, r2 = length+1 and falls through into 0x00190d78, the object's assign/copy implementation, which performs capacity (vtable +0x58) and data (vtable +0x68) calls and updates the length fields.
- **Arguments** - r0 = destination string object (its first word is a vtable); r1 = NUL-terminated UTF-16 source.
- **Touches** - 0x00100b58 (wide strlen), 0x00190d78 (assign implementation, and the string object's vtable slots +0x58/+0x68/+0x10).
- **Evidence** - 199 distinct callers, 504 sites; callers repeatedly do `ldr r0,[record,#field]; add r1,pc,#literal; bl 0x00190d50`, i.e. copy a literal into a field, which is the wcscpy shape. The function's primary extent ends at the `pop {r4,r5,r6,lr}; mov r0,r0` pair without a `bx lr`, so the real tail is the fall-through into 0x00190d78; the census records the two halves as separate symbols and the call graph has no edge for the tail. Purpose is inferred from that fall-through, not from a symbol name.

#### `fn_0022f750` - 486 call sites - Look up a text key in the LayoutMessage namespace
*Confidence: inferred.*

- **Purpose** - one-argument sibling of 0x0022f584, but keyed on a different message-file namespace: loads the path pointer at 0x0089877c (the UTF-16 string at 0x008782c4 reads `patch:/data/Message/LayoutMess...`), the global string store at 0x00897800, and tail-branches to the interning routine with r3 = 0.
- **Arguments** - r0 = NUL-terminated text key; the function supplies r1 = [0x00897800], r2 = key, r3 = 0 to the intern routine.
- **Touches** - 0x0089877c and 0x00897800 (namespace/store globals), 0x0016ba34 (intern).
- **Evidence** - 281 distinct callers, 486 sites; call sites such as `ldr r0,[pc,#0x10]; bl 0x0022f750; mov r1,r0` pass a key and use the result as the string object. The two namespace strings differ (`MenuMessage...` at 0x008781f8 versus `LayoutMessage...` at 0x008782c4), which is why two near-identical lookups exist; the mechanism is established and the namespace names come from the measured text.

#### `fn_00147974` - 326 call sites - Assign a C string into a string object
*Confidence: inferred.*

- **Purpose** - implements `object = c_string`: measures the source with the wide strlen, then calls the assignment helper 0x00177c88 with (object, source, length, 0) and returns the object. When the source length is 0 it takes the empty-string path.
- **Arguments** - r0 = destination string object; r1 = NUL-terminated character string; returns the destination.
- **Touches** - 0x00100b58 (length), 0x00177c88 (700-byte assign/grow helper, which itself uses 0x001008c4, 0x002ff628 and 0x00301a9c), empty-string singleton at 0x00168b1c.
- **Evidence** - 121 distinct callers, 326 sites; the call shape is `add r0,record,#field; mov r1,src; bl 0x00147974`, i.e. field assignment, and callers include many record constructors. The helper 0x00177c88 contains string-bound checks that raise exception level 9 with a message when the length exceeds the allocation, which fixes it as string storage management.

#### `fn_0015ef4c` - 301 call sites - Append to a growable wide buffer (position = end)
*Confidence: inferred.*

- **Purpose** - loads the buffer object from `owner+8`, sets the insertion position r3 = -1 ("at end") and falls through into 0x0015ef58, which appends a run of UTF-16 code units, growing the buffer first when needed.
- **Arguments** - r0 = owner object (buffer pointer at +8); r1 = source; r2 = number of code units.
- **Touches** - 0x0015ef58 (append), which grows via 0x0015efdc (allocation hook and thread index 0x001775e8) and copies via 0x0015f0f4.
- **Evidence** - 12 bytes: `ldr r0,[r0,#8]; mvn r3,#0; mov r0,r0` and then the next symbol 0x0015ef58 begins the append body; the `mov r0,r0` is the compiler's 4-byte fall-through placeholder, so the extent has no branch and the call graph has no edge. 72 distinct callers, 301 sites. The append semantics are established by 0x0015ef58's growth and copy logic; the buffer's owner type is not.

#### `fn_00101a50` - 219 call sites - Wide (UTF-16) sprintf
*Confidence: established.*

- **Purpose** - formats a varargs list into a UTF-16 buffer: builds a va_list on the stack, calls 0x0030091a (the wide vsnprintf core), then writes a terminating 0 halfword through 0x00300940 and returns the produced length.
- **Arguments** - r0 = UTF-16 destination buffer; r1 = capacity in code units; r2 = format string (UTF-16); r3..stack = format arguments.
- **Touches** - 0x0030091a (wide format core), 0x00300940 (append halfword).
- **Evidence** - 155 distinct callers, 219 sites; call sites pass `add r0,sp,#8; mov r1,#0x80; add r2,pc,#0x30` and then read the buffer as text. The format core stores r0 as the buffer, builds a `va_list`-like structure and calls 0x00301bd8, the same printf engine used by the narrow formatter, so the sprintf classification is established by the callee chain; the `%d` style format literals are visible at call sites.

#### `fn_001028d4` - 192 call sites - Narrow sprintf (unbounded)
*Confidence: established.*

- **Purpose** - formats a varargs list into an 8-bit buffer and terminates it: sets up the argument list on the stack, calls 0x002fecb6 (the narrow vsnprintf core, which builds a printf context and calls 0x00301bd8), then appends a NUL through 0x002fecdc and returns the length.
- **Arguments** - r0 = destination buffer; r1 = format string; r2, r3, stack = arguments.
- **Touches** - 0x002fecb6, 0x002fecdc, 0x00301bd8 (printf engine).
- **Evidence** - 99 distinct callers, 192 sites; call sites pass format literals such as `playerframe_sub_%02d` and `tb_name_%02d` as r1 and read the buffer afterwards. 0x0017d96c and 0x0018a618 are the bounded variants that take an explicit cap; this one has no size operand.

#### `fn_002febd8` - 181 call sites - strlen (byte string length)
*Confidence: established.*

- **Purpose** - returns the length of a NUL-terminated byte string: scans byte-wise until alignment, then word-wise using `uqsub8` to detect a zero byte and adjusts for the matched lane.
- **Arguments** - r0 = string; returns length in bytes.
- **Touches** - no calls, no globals; 0x01010101 constant.
- **Evidence** - 127 distinct callers, 181 sites; the body is the standard ARM word-at-a-time strlen. It is chained from 0x002ff628's message formatter, 0x0016b5f0's hash and the Squirrel string code, which fixes it as strlen rather than a bespoke scanner.

#### `fn_0016ba34` - 173 call sites - Intern a string in the global string store, keyed by namespace
*Confidence: established.*

- **Purpose** - returns the canonical object for a string in one namespace of the global store: calls 0x0016752c to find the namespace/list node for the key in r1, then 0x00188184 to insert/look up the text (r2, r3) under it; falls back to the global empty string at `[[0x00898200]]` when the insert returns null.
- **Arguments** - r0 = store; r1 = namespace key; r2 = text; r3 = length/hint.
- **Touches** - store+8, 0x0016752c, 0x00188184 (1,148-byte hash table), 0x00898200.
- **Evidence** - 125 distinct callers, 173 sites; the hash loop (`hash*31 + char`, bucket `(hash*2+1) & (n-1)`) is fully visible in 0x00188184, and 0x0016752c compares candidate strings by wcslen + memcmp. 0x0022f584/0x0022f750 are the public wrappers that supply the message-file namespace; 0x0015b0dc uses a different arena path, so the two store mechanisms are not conflated here.

#### `fn_003035b0` - 160 call sites - strcmp (byte string compare)
*Confidence: established.*

- **Purpose** - compares two NUL-terminated byte strings: byte-wise until alignment, then four bytes at a time using `uqsub8` to detect both a zero byte and a mismatch, with a byte-wise fallback.
- **Arguments** - r0 = left, r1 = right; returns the difference.
- **Touches** - 0x01010101 constant; no calls, no globals.
- **Evidence** - 160 sites, 70 distinct callers; the canonical ARM strcmp with the `cmp r2,#1; cmpcs r2,r3` terminator guard. Callers branch on the result. 0x00147e6c is the memcmp sibling over explicit lengths.

#### `fn_0015b0dc` - 150 call sites - Copy a wide string into the global string arena
*Confidence: inferred.*

- **Purpose** - loads the global string store at 0x00897800 and tail-calls 0x0016ba84 with (store, text): 0x0016ba84 writes up to 31 UTF-16 code units into the next 64-byte slot of the arena at `store+0x18`, terminates it and increments the slot count at `store+0x14`.
- **Arguments** - r0 = source wide string.
- **Touches** - 0x00897800, store+0x14, store+0x18+n*0x40, 0x0016ba84.
- **Evidence** - 150 sites, 90 distinct callers; the arena write is fully visible in 0x0016ba84 (64-byte stride, 31-unit limit). 0x0015b0f8 is a sibling that formats a value into the arena via 0x0016bad4.

#### `fn_0017d96c` - 137 call sites - Bounded narrow formatter with explicit cap
*Confidence: established.*

- **Purpose** - formats varargs into a buffer with an explicit maximum character count: `n = min(size, cap+1)`, then calls 0x00100394 with (buffer, n, format, va_list) and returns the length.
- **Arguments** - r0 = buffer; r1 = buffer size; r2 = cap; r3 = format; stack = arguments.
- **Touches** - 0x00100394, 0x002fecb6, 0x002fecdc.
- **Evidence** - 137 sites, 96 distinct callers; call sites consistently pass (buffer, 0x20, 0x1f, format) or (buffer, 0x100, 0xff, format). The min() and NUL append are visible, so this is a snprintf-style bounded formatter; the reason for a separate cap parameter is not established.

#### `fn_00147e6c` - 129 call sites - memcmp (byte compare over an explicit length)
*Confidence: established.*

- **Purpose** - compares two memory ranges of length r2: word-wise while both pointers are aligned and at least 4 bytes remain, using `uqsub8` to detect zero bytes, then byte-wise for the tail.
- **Arguments** - r0 = left, r1 = right, r2 = byte count.
- **Touches** - 0x01010101 constant.
- **Evidence** - 129 sites, 109 distinct callers; the canonical ARM memcmp (alignment check, `cmp r2,#4; bcc tail`, `uqsub8`, per-lane difference). 0x0016752c uses it to compare interned strings after comparing lengths.

#### `fn_00168a24` - 128 call sites - Construct a heap string object from a C string (SSO boundary at 32)
*Confidence: inferred.*

- **Purpose** - builds a string object from a C string: measures the source, chooses an inline buffer when the length is <= 0x20 and a heap allocation otherwise, checks the requested capacity against the chosen size (raising exception level 9 with a message when it does not fit), allocates with 0x00100fc6 and copies the text.
- **Arguments** - r0 = destination string object; r1 = source C string; r2 = explicit length/limit at some sites.
- **Touches** - 0x00100b58, 0x00100fc6, 0x002ff628 (level-9 exception), 0x00301a9c, error string at 0x008c7611.
- **Evidence** - 128 sites, 71 distinct callers; the 0x20 threshold and the inline-vs-heap branches are visible, as is the level-9 exception on overflow. The SSO/string classification is inferred from that structure.

#### `fn_0018a618` - 123 call sites - Bounded wide formatter (second variant)
*Confidence: established.*

- **Purpose** - same bounded-format shape as 0x0017d96c but calls 0x0010288c (the wide vsnprintf core used by 0x00101a50) and caps the size to `cap+1` before formatting.
- **Arguments** - r0 = buffer; r1 = size; r2 = cap; r3 = format; stack = arguments.
- **Touches** - 0x0010288c, 0x0030091a, 0x00300940.
- **Evidence** - 123 sites, 89 distinct callers; the structure (push arguments, `add r4,r2,#1`, `cmp r1,r4`, `movhi r1,r4`, call) is identical to 0x0017d96c. The two functions differ only in which printf core they call.

#### `fn_0015ef58` - 94 call sites - Append/grow a wide buffer
*Confidence: inferred.*

- **Purpose** - appends `len` UTF-16 code units from r1 to the buffer object in r0 at position r3 (or at the end when r3 = -1): returns 1 for an empty append, grows the buffer through 0x0015efdc when the requested end exceeds the current size, copies with 0x0015f0f4, and updates the size at +0x10.
- **Arguments** - r0 = buffer object; r1 = source; r2 = length; r3 = position (-1 = end).
- **Touches** - 0x0015efdc (grow), 0x0015f0f4 (copy), 0x00301a9c, buffer +0x10/+0x14/+0x18.
- **Evidence** - 94 sites, 41 distinct callers; the capacity comparison, growth call and size store are visible, and 0x0015ef4c is the public append wrapper that supplies position -1.

#### `fn_00177c88` - 81 call sites - String buffer assign/reallocate core (700 bytes)
*Confidence: inferred.*

- **Purpose** - the implementation behind 0x00147974's string assignment: compares the requested length with the current allocation, raises exception level 9 with a message when the source is longer than the target, allocates through 0x001008c4/0x00100fc6 and copies the text, updating the string object's length fields.
- **Arguments** - r0 = string object; r1 = source; r2 = source length; r3 = additional capacity; stack = extra args.
- **Touches** - 0x001008c4, 0x00100fc6, 0x00168984, 0x002ff628, 0x00301a9c, message at 0x008c7610.
- **Evidence** - 81 sites, 53 distinct callers; the function contains the only size-overflow exception message used by string assignment, and 0x00147974 calls it directly. Reallocation/copy semantics established; the original class name is not.

#### `fn_0015e6f0` - 81 call sites - Duplicate a wide string (sdk_wide_create062x)
*Confidence: established.*

- **Purpose** - copies a wide string into a new allocation: if the source is null stores null and returns 0; otherwise measures the source, allocates `4 + (count+1)*2` through heap_sdk_allocate, stores the count in the first word and copies the text after it.
- **Arguments** - r0 = output slot; r1 = source wide string; returns the new text pointer.
- **Touches** - 0x00100b58 (wcslen), 0x0015ece0 (heap_sdk_allocate), 0x001003d8 (copy).
- **Evidence** - accepted source `src/native/wave062-runtime/construction/wide_owner062x.c` contains `sdk_wide_create062x` with exactly this body; the disassembly matches. 81 sites, 49 distinct callers, including the named `sdk_binding_initialize062x`.

## Tables, containers and bitsets

Hash maps, tree maps, intrusive lists, fixed-slot tables, a global registry and bit vectors. These are the data structures callers use to find records; the VM table and the game tables share the same node shape.

#### `fn_0068897c` - 228 call sites - Find an element by type tag in a polymorphic container
*Confidence: inferred.*

- **Purpose** - asks a container for its first element (`vtable+0x2c(container, 1)`), then walks the chain through vtable slot +8 comparing each element's type tag with the fixed global object 0x0089a930; the first match is returned, otherwise 0.
- **Arguments** - r0 = container/iterator owner; r1 = the argument forwarded to the container's begin call; returns the matching element or 0.
- **Touches** - virtual slots +0x2c (begin) and +8 (type/next) of the elements, 0x0089a930 (global type singleton).
- **Evidence** - 77 distinct callers, 228 sites; the body is two virtual calls and a constant comparison. 0x001827b0 is the same routine taking the container from `[r0+0x10]`, and both compare to the same 0x0089a930, which fixes the "same type" semantics; that the container is a scene/component list is inferred from the caller set.

#### `fn_0028aad0` - 219 call sites - Keyed lookup in a 500-entry table, with a default entry
*Confidence: inferred.*

- **Purpose** - looks up a key in a 500-entry table of 256-byte records: if the key equals 0xee6b2800 (4,000,000,000) it returns the default record from `[0x008977e4]+0xf4`; otherwise it binary-searches the table at `[owner+4]+0x2c` with 0x0077f008 (recursive midpoint compare on the first word) and returns the record's first pointer word, or 0 on a miss/null entry.
- **Arguments** - r0 = owner object (table pointer at +4); r1 = 32-bit key; returns a pointer or 0.
- **Touches** - 0x008977e4 (default owner), 0x001c2350 (default record at +0xf4), 0x0077f008 (binary search).
- **Evidence** - 162 distinct callers, 219 sites; call sites load the key from `[object+0xc]` (a field) and the default path is exactly the 4e9 sentinel compare. Table geometry (500 entries, 0x100 stride) is established by the search routine; what the records describe is not.

#### `fn_0068ab44` - 191 call sites - Map a numeric id to a small code through a static table
*Confidence: established.*

- **Purpose** - returns 0 when the id is 0, otherwise calls 0x0069e8c8 with (`[object+0x40]`, id). 0x0069e8c8 scans a static array of (u32 id, u8 code) pairs, two per 8-byte slot, and returns the matching byte or the sentinel 0x15 when the id is absent.
- **Arguments** - r0 = owner object (table base at +0x40); r1 = id; returns a byte-sized code.
- **Touches** - owner+0x40, 0x0069e8c8 (static id/code table).
- **Evidence** - 135 distinct callers, 191 sites; the lookup body is fully decoded (compare the first word of each 8-byte entry, return the byte at +4 or +0xc; default 0x15). The meaning of the ids is data, not established here.

#### `fn_0048a058` - 173 call sites - Look up a key in a sorted tree/map
*Confidence: established.*

- **Purpose** - searches a binary tree whose root is at `[object+0x30]`: walks left/right comparing the key at node+0x10 with r1, checks the predecessor candidate, and returns the value word at node+0x14, or 0 when absent.
- **Arguments** - r0 = owner (root at +0x30); r1 = key; returns the stored value.
- **Touches** - owner+0x30, node +8/+0xc/+0x10/+0x14.
- **Evidence** - 154 distinct callers, 173 sites; a complete balanced-tree search with the candidate/predecessor pattern. The element layout (key +0x10, value +0x14) is established by the loads; the key type is established by the comparisons.

#### `fn_001828f0` - 159 call sites - Get the first element of a container (begin)
*Confidence: inferred.*

- **Purpose** - calls virtual slot +0x2c on `[object+0x10]` with (1) and returns the result: the container's begin/first-element operation. 0x001827b0 then walks the returned element chain and selects by type tag.
- **Arguments** - r0 = owner (container at +0x10); r2 = 1 supplied by the function.
- **Touches** - object+0x10, virtual slot +0x2c.
- **Evidence** - five instructions, 159 sites, 64 distinct callers; 0x00689210 is the same call on `[r0]`. The begin interpretation is established by the pairing with 0x001827b0/0x0068897c, which walk slot +8 of the returned element and compare its type.

#### `fn_00159f34` - 147 call sites - Erase a key from a hash map
*Confidence: established.*

- **Purpose** - removes the entry whose key is r1 from the map at `object+0x40`: returns 0 when the key is -1; walks the bucket list at +0x44 comparing `[node-0x18]` with the key; on a hit unlinks the node with 0x00150c1c, releases its payload with 0x00147ff0, frees the node through 0x002feef8 and returns 1.
- **Arguments** - r0 = map owner; r1 = key; returns 1 removed, 0 not found.
- **Touches** - owner+0x40/+0x44, 0x00150c1c, 0x00147ff0, 0x002feef8.
- **Evidence** - 147 sites, 105 distinct callers; the bucket walk, the -1 sentinel and the unlink/release sequence are visible. The map pair 0x0019b414 (sq_table_set) / 0x0019b728 (new slot) shows the same node layout, so the table classification is established; the caller set makes it a general map, not only the VM table.

#### `fn_001827b0` - 146 call sites - Find the first element of a given type in a container
*Confidence: inferred.*

- **Purpose** - gets the container at `[object+0x10]`, calls its begin slot +0x2c, then walks elements via slot +8 and returns the first whose type tag equals the global 0x0089a930; 0 when none matches.
- **Arguments** - r0 = owner; r1 = forwarded to the container's begin call.
- **Touches** - owner+0x10, virtual slots +0x2c and +8, 0x0089a930.
- **Evidence** - 146 sites, 38 distinct callers; identical type comparison to 0x0068897c (which uses the container directly). The type-filtered search is established by the constant compare; the element family is inferred from callers in the UI/scene range.

#### `fn_00656b7c` - 130 call sites - Look up an object in the global registry and dispatch slot +0x1c
*Confidence: inferred.*

- **Purpose** - searches the global registry at 0x008c06d0 for an object matching r0 via 0x006f5438; if found, loads its vtable and tail-calls slot +0x1c with the original object.
- **Arguments** - r0 = key/object; r1 = forwarded.
- **Touches** - 0x008c06d0, 0x006f5438 (search two global arrays), 0x006f5418, virtual slot +0x1c.
- **Evidence** - 130 sites, 51 distinct callers; 0x006f5438 scans two arrays of pointers comparing each entry's key via 0x00656f68. 0x00656e14 is the same lookup with slot +0x18, which fixes the registry-dispatch classification. The registry's object family is inferred.

#### `fn_00689210` - 117 call sites - Begin/iterate call on a container
*Confidence: inferred.*

- **Purpose** - calls virtual slot +0x2c on the object in r0 with (1) and returns the result. Same operation as 0x001828f0, but the container is the object itself rather than `[object+0x10]`.
- **Arguments** - r0 = container; r1 = forwarded; r2 = 1 supplied by the function.
- **Touches** - virtual slot +0x2c.
- **Evidence** - 117 sites, 54 distinct callers; four instructions. The begin interpretation is fixed by the companion walkers 0x001827b0/0x0068897c.

#### `fn_0074a528` - 114 call sites - Read a 32-bit field from a length-delimited stream
*Confidence: inferred.*

- **Purpose** - reads the next 4-byte value from a stream descriptor: checks that at least 4 bytes remain, assembles the word from the stream data pointer, advances the position by 4, writes the value through r1 and returns 1; at end of stream writes 0 to the state byte and returns 0.
- **Arguments** - r0 = stream: `[r0+8]` is a descriptor whose +0x10 is the end pointer, +0xc the base and +0x18 the data offset, while `[r0+0xc]` is the current position; r1 = output word.
- **Touches** - stream +8/+0xc, descriptor +0xc/+0x10/+0x18.
- **Evidence** - 114 sites, 43 distinct callers; the bounds test, byte assembly (`bic`/`orr` combining three bytes plus a fourth byte) and position advance are visible. Callers are SDK/asset code reading decoded payloads, so the stream-reader classification is inferred.

#### `fn_006b6bc4` - 113 call sites - Count non-null entries in a fixed four-slot table
*Confidence: inferred.*

- **Purpose** - iterates four entries at `[object+0x18]..[object+0x1c]`, counts the non-null ones, and raises exception level 9 with a bounds message when the loop index exceeds `(end-start)/4`.
- **Arguments** - r0 = object; returns the count 0..4.
- **Touches** - 0x002ff628 (level-9 exception), message at 0x008c760c.
- **Evidence** - 113 sites, 50 distinct callers; the four-iteration bound and count are explicit. The bounds check converts an out-of-range table into an exception, which is why the entry is grouped with containers.

#### `fn_00656e14` - 106 call sites - Registry lookup and dispatch through slot +0x18
*Confidence: inferred.*

- **Purpose** - the sibling of 0x00656b7c: searches the registry at 0x008c06d0 via 0x006f5418, then tail-calls the found object's virtual slot +0x18 with (original object, 4).
- **Arguments** - r0 = key/object; r1 = forwarded; r2 = 4 supplied by the function.
- **Touches** - 0x008c06d0, 0x006f5418, virtual slot +0x18.
- **Evidence** - 106 sites, 49 distinct callers; same registry pointer and search family as 0x00656b7c, differing in search helper and vtable slot. Registry-dispatch role inferred from the shared structure.

#### `fn_0016a43c` - 106 call sites - Find an element by key in an intrusive list
*Confidence: established.*

- **Purpose** - searches the circular list whose head is at `object+0x38` for the node whose key word at `node-0x1c` equals r1, using 0x00183970; returns the node base (`node-0x1c`) or 0.
- **Arguments** - r0 = owner (list head at +0x38); r1 = key.
- **Touches** - owner+0x38, 0x00183970.
- **Evidence** - 106 sites, 98 distinct callers; 0x00183970 is a 44-byte list walk (head test, `ldr r0,[r1,-0x1c]`, next at `[r1]`) returning the key-bearing node. List layout established; element type inferred.

#### `fn_00689efc` - 104 call sites - Resolve an object field and dispatch a method
*Confidence: inferred.*

- **Purpose** - takes `[owner+4]->+0x18`, calls 0x0028eac0 (extracts +0x14); if the result is null it calls 0x001f7438 (virtual slot +0x24 on `[result]`), otherwise returns.
- **Arguments** - r0 = owner; r1..r3 forwarded.
- **Touches** - owner+4/+0x18; 0x0028eac0, 0x001f7438.
- **Evidence** - 104 sites, 94 distinct callers; the two-call chain is visible. Dispatch established, target family not.

#### `fn_00172c98` - 97 call sites - Find an element by name in an intrusive list
*Confidence: established.*

- **Purpose** - walks the list at `object+0x2c`, comparing up to 24 characters of the name at `node-0x24` with r1; returns `node-0xa4` on a match, 0 otherwise.
- **Arguments** - r0 = owner; r1 = name; returns the element or 0.
- **Touches** - owner+0x2c.
- **Evidence** - 97 sites, 69 distinct callers; the comparison loop (`ldrsb r3,[r1,r0]; ldrsb ip,[r2,r0]; cmp; add r0,#1; cmp r0,#0x18`) and the list walk are visible, as is the `node-0xa4` payload offset. Name lookup established by the string compare.

#### `fn_006b71a8` - 95 call sites - Checked element access in a four-slot table
*Confidence: inferred.*

- **Purpose** - bounds-checks r1 against a table's element count (`(end-start)/4`), raises exception level 9 on overflow, then returns the element from `[table+0x18][r1]` after a second range check against another array at +4.
- **Arguments** - r0 = object; r1 = index.
- **Touches** - 0x002ff628 (level-9 exception), message 0x008c760c, object +4, +0x18, +0x1c.
- **Evidence** - 95 sites, 55 distinct callers; the two bounds checks and the error call are explicit. Container access is established; the element family is inferred.

#### `fn_00656b0c` - 82 call sites - Recover a type descriptor from an object header
*Confidence: inferred.*

- **Purpose** - reads the word before the object; if its low bit is set the descriptor base is `word-1`, otherwise `object-0x10`; returns the descriptor word at +8.
- **Arguments** - r0 = object (header before it).
- **Touches** - object-4, object-0x10.
- **Evidence** - 82 sites, 34 distinct callers; the bit test and two base computations are explicit. The shape (tagged header vs inline header) is a standard RTTI/interface lookup; the descriptor's meaning is inferred.

#### `fn_006b83e4` - 74 call sites - Count valid slots resolved through a global table
*Confidence: inferred.*

- **Purpose** - iterates four words at `[object+4]+4`, compares each with a constant tag, and for matching entries resolves the global at 0x008977e4 through 0x001c2350 and 0x0077f008; counts entries whose resolution is non-null.
- **Arguments** - r0 = owner; returns a count 0..4.
- **Touches** - 0x008977e4, 0x001c2350, 0x0077f008.
- **Evidence** - 74 sites, 59 distinct callers; the four-slot loop and tag compare are visible. Count-of-valid-slots role established; the table's meaning inferred.

#### `fn_001482f4` - 72 call sites - Insert a node into two intrusive lists
*Confidence: inferred.*

- **Purpose** - creates/attaches an element: calls 0x00167500 to obtain a node for the key at `owner+8`, sets a field at +0x28, initialises a cursor with 0x0017d90c, and links the node into the list at owner+0x10/+0x14 with 0x0017d948.
- **Arguments** - r0 = owner; r1 = key; returns 1.
- **Touches** - owner+8/+0x10/+0x14, 0x00167500, 0x0017d90c, 0x0017d948.
- **Evidence** - 72 sites, 72 distinct callers; the list-link stores in 0x0017d948 (`node->prev->next = node`, ...) and the count increment are visible. Insert semantics established; element type inferred.

## Squirrel VM interface

The stack accessors, pushers and type-checked getters that every script binding calls, plus the error raise and the property readers built on top of them. The VM is the second-largest source of high-frequency calls.

#### `fn_001581d0` - 785 call sites - Squirrel error raise: sq_throwerror(vm, message)
*Confidence: established.*

- **Purpose** - sets the VM's pending error object to the supplied message string and returns -1, so native bindings can `return fn_001581d0(vm, "...")` on a failed argument read. The body looks up/creates the string object in `vm->0x8c` (0x0019ba68 table get), increments its reference count at +4, assigns it into the VM error slot at `vm+0x40` with refcount fix-up (0x0019e864), releases the previous value, and returns 0xffffffff.
- **Arguments** - r0 = VM pointer; r1 = message string object. r2 = -1 (the table-get miss value) is set by the function itself.
- **Touches** - VM offsets +0x8c (string/table object) and +0x40 (error slot); 0x0019ba68, 0x0019e864 (Squirrel object assignment), 0x00146590 (fatal path when the string cannot be produced).
- **Evidence** - the accepted Squirrel reconstruction `src/native/squirrel-wave017/closure_api.c` calls this address as `fn_001581d0(vm, "native closure expected")` and returns the result directly; 474 distinct callers, 785 sites, overwhelmingly native-binding wrappers of the form `return fn_001581d0(vm, msg)`. The documented assertion sequence in `docs/script-api-native-reconstruction.md` names it as the throw helper next to the 0x00148918 formatter.

#### `fn_00157f58` - 503 call sites - Squirrel integer getter: sq_getinteger(vm, index, out)
*Confidence: established.*

- **Purpose** - reads a number from a stack index as a 32-bit integer. Positive indices are relative to the current top (`vm->0x34` holds the top pointer): `slot = top + index - 1`; negative indices go through 0x00173d4c. It checks the numeric-family bit 0x04000000, loads the slot word, and if the tag is the float tag 0x05000004 converts the value to integer with `vcvt.s32.f32`; integer-tagged values pass through unchanged. Returns 0 on success, -1 on a non-numeric slot.
- **Arguments** - r0 = VM; r1 = index (callers pass -1, -2, ..., or a positive index); r2 = out pointer for the int.
- **Touches** - VM +0x34 (stack top), 0x00173d40 / 0x00173d4c (slot address helpers), numeric mask 0x04000000, float tag 0x05000004.
- **Evidence** - named and described in `docs/script-api-native-reconstruction.md` as the integer reader at 0x00157f58; 372 distinct callers, 503 sites; the observed call shape is `mov r2,sp; mvn r1,#0; bl 0x00157f58; cmp r0,#0; bge ...`, i.e. read slot -1 into a stack temporary and branch on the SQ_OK result. The unconditional `vstr` after the conditional conversion is what makes this the integer reader (the float reader 0x00157f00 has the mirrored test on tag 0x05000002).

#### `fn_001580cc` - 203 call sites - Push an integer onto the VM stack (sq_pushinteger)
*Confidence: established.*

- **Purpose** - pushes an integer value: builds an 8-byte tagged value {tag = 0x05000002, value = r1} on the stack and calls 0x00173d1c, which stores it at the VM stack top and increments the top pointer; then releases any refcounted old value (the tag has no refcount bit, so the release path is skipped for integers).
- **Arguments** - r0 = VM; r1 = integer value.
- **Touches** - VM +0x18 (stack base) and +0x30 (top), 0x00173d1c (push object).
- **Evidence** - 201 distinct callers, 203 sites; the integer tag 0x05000002 is a literal in the function's pool and the same tag is what 0x00157f58's `sq_getinteger` accepts. Callers are binding wrappers that return 1 after pushing.

#### `fn_005f6de0` - 148 call sites - Read a two-level float parameter from the Squirrel root table, default 0
*Confidence: inferred.*

- **Purpose** - looks up `RootTable[key1][key2]` in the VM and returns it as a float, or 0.0 when any step fails: stores 0.0 on the stack as the default, then calls 0x005f6aa4 (push root table with 0x00173d14, sq_get the first key, sq_get the second key, type-check, sq_getfloat).
- **Arguments** - r0 = owner whose +4 field points at a structure whose first word is the VM; r1 = first key; r2 = second key; returns a float in s0.
- **Touches** - 0x005f6aa4, 0x00173d14 (`sq_pushroottable`), 0x00158128, 0x00157df4, 0x00157f00 (`sq_getfloat`).
- **Evidence** - 148 sites, only 15 distinct callers, all UI/game code that reads a tunable by name (`add r1,pc,#...; add r2,pc,#...`). The default is the pool word 0x00000000. The root-table push and the two get calls fix the parameter-read role; the naming convention is not.

#### `fn_00157fb0` - 136 call sites - Squirrel string getter: sq_getstring(vm, index, out)
*Confidence: established.*

- **Purpose** - reads a string from a stack index and returns a pointer to its character data: resolves the slot, checks the tag against 0x08000010 with 0x00159164, and on success writes `string->+4 + 0x1c` through r2.
- **Arguments** - r0 = VM; r1 = index; r2 = out pointer for the character pointer.
- **Touches** - VM stack, 0x00159164, 0x00173d40/0x00173d4c, tag 0x08000010.
- **Evidence** - 136 sites, 118 distinct callers; documented in `docs/script-api-native-reconstruction.md` as the string reader at 0x00157fb0. Call shape: `mov r2,sp; mvn r1,#0; bl 0x00157fb0; cmp r0,#0; bge use`.

#### `fn_00158004` - 101 call sites - Push a boolean onto the VM stack (sq_pushbool)
*Confidence: established.*

- **Purpose** - pushes a boolean value: builds {tag = 0x01000008, value = (r1 != 0)} and calls 0x00173d1c to store it on the VM stack.
- **Arguments** - r0 = VM; r1 = truth value.
- **Touches** - VM +0x18/+0x30, 0x00173d1c, bool tag 0x01000008.
- **Evidence** - 101 sites, 100 distinct callers; the `cmp r1,#0; movne r3,#1; moveq r3,#0` normalisation and tag literal are visible, and 0x00157eb4 (`sq_getbool`, 79 sites) is the matching getter. 0x001580cc is the integer variant.

#### `fn_00157f00` - 86 call sites - Squirrel float getter: sq_getfloat(vm, index, out)
*Confidence: established.*

- **Purpose** - reads a number from a stack index as a float: resolves the slot, checks the numeric-family bit 0x04000000, loads the slot word, and if the tag is the integer tag 0x05000002 converts it to float with `vcvt.f32.s32`; float-tagged values pass through unchanged and are stored through r2.
- **Arguments** - r0 = VM; r1 = index; r2 = out pointer for the float.
- **Touches** - VM stack, 0x00173d40/0x00173d4c, numeric mask 0x04000000, integer tag 0x05000002.
- **Evidence** - 86 sites, 62 distinct callers; documented in `docs/script-api-native-reconstruction.md` as the float reader at 0x00157f00. The mirrored condition (`sub r2,r1,#2; subs r2,#0x5000000`) tests tag 0x05000002 and converts to float, the inverse of 0x00157f58's float-to-int test.

#### `fn_005f6d10` - 80 call sites - Read a two-level integer parameter from the Squirrel root table, default 0
*Confidence: inferred.*

- **Purpose** - integer sibling of 0x005f6de0: stores 0 as the default, calls 0x005f679c (push root table, sq_get key1, sq_get key2, type check, sq_getinteger) and returns the value.
- **Arguments** - r0 = owner whose +4 field is the VM; r1 = first key; r2 = second key.
- **Touches** - 0x005f679c, which uses the same root-table/get/type helpers as 0x005f6aa4.
- **Evidence** - 80 sites, 14 distinct callers; the default is written to the stack word before the call and the result is returned in r0. Parameter-read role inferred from the Squirrel callee chain and the same caller family as 0x005f6de0.

#### `fn_00157eb4` - 79 call sites - Squirrel boolean getter: sq_getbool(vm, index, out)
*Confidence: established.*

- **Purpose** - reads a boolean from a stack index: resolves the slot, checks the boolean tag (0x01000008) and writes the value through r2; returns -1 on a type mismatch.
- **Arguments** - r0 = VM; r1 = index; r2 = out pointer.
- **Touches** - VM stack, 0x00173d40/0x00173d4c, tag 0x01000008.
- **Evidence** - 79 sites, 75 distinct callers; documented in `docs/script-api-native-reconstruction.md` as the bool reader at 0x00157eb4, and the tag matches the one pushed by 0x00158004.

## SDK runtime, context and synchronisation

The context resolver, result record, recursive mutex, operation dispatcher and registry dispatch. This layer looks like a small platform/runtime library (the accepted source names use an `sdk_` prefix).

#### `fn_001249d0` - 472 call sites - SDK context resolver, default slot (sdk_context062s)
*Confidence: established.*

- **Purpose** - returns the context bound to slot 3 of the current thread's SDK context record. It checks the contexts-enabled flag, locks the context manager's recursive mutex, resolves the per-thread index through a tree map keyed by thread id (creating a default entry when absent), releases the mutex, selects the context record from a vector (trapping when the index is out of range), then returns `record->slots[3]->context` or null.
- **Arguments** - no arguments; returns the context pointer or 0.
- **Touches** - 0x008b637e (contexts-enabled byte), 0x008b63d8 (manager pointer), manager mutex at +0x10 and map at +0x48, 0x0013d1a8 (thread id), 0x00147a40 (map value), 0x0015ebe4 (trap), root record/vector through the manager.
- **Evidence** - the accepted source `src/native/wave062-sdk/context/context062s.c` contains `context_resolve062s(slot)` and `sdk_context062s() { return context_resolve062s(3); }`; the decompiled body matches the source line for line, including the tree walk and the `__builtin_trap` range check. 347 distinct callers, 472 sites; 0x004b7748 is the same resolver specialised to slot 1 (alternate/query context).

#### `fn_001707b4` - 313 call sites - Recursive mutex release (sdk_recursive_release062s)
*Confidence: established.*

- **Purpose** - releases one level of a recursive mutex: decrements the depth at +8; when it reaches zero clears the owner at +4 and calls the fast release 0x0013c48c on the underlying count word.
- **Arguments** - r0 = mutex object.
- **Touches** - mutex +4 (owner), +8 (depth); 0x0013c48c (`sdk_fast_release062s`, atomic negate + arbiter signal).
- **Evidence** - accepted source `src/native/wave062-sdk/context/mutex062s.c` implements `sdk_recursive_release062s` with exactly this sequence; the disassembly is a direct match. 141 distinct callers include `effect_queue_worker_run067`, `heap_proxy_allocate062ac` and `effect_file_device_allocate072`. 0x004edc70 is a four-byte branch alias to this address.

#### `fn_004b8d4c` - 285 call sites - Build an SDK result record (sdk_result_make062t)
*Confidence: established.*

- **Purpose** - fills a three-word result record: `code = *code_pointer`, `origin = 0x007dba44`, `line = 0x71`. It does not allocate and does not inspect the code.
- **Arguments** - r0 = destination result record; r1 = pointer to the 32-bit code.
- **Touches** - fixed origin pointer 0x007dba44, which is a UTF-16 build-path string in the image (`D:/home/jenkins/workspace/Manual-Pack/...`), constant line 0x71.
- **Evidence** - the accepted source `src/native/wave062-sdk/object/result062t.c` contains this function with the fields `code`, `origin`, `line`; the disassembly matches the stores and the 0x71 constant. 157 distinct callers, 285 sites; callers commonly build the result on the stack (`mov r0,sp; add r1,sp,#0xc; bl 0x004b8d4c`) and 0x006d1828 (`sdk_operation_result062t`) is one of the named callers. The origin word is a build-machine path, so the record carries a source-location tag, not a zero sentinel.

#### `fn_00170704` - 246 call sites - Recursive mutex acquire (sdk_recursive_acquire062s)
*Confidence: established.*

- **Purpose** - acquires a recursive mutex: reads the current thread owner from CP15 TPIDRURO (`mrc p15,0,r0,c13,c0,3`); if it already owns the mutex it skips the slow path; otherwise takes the fast mutex at +0, re-reads the owner, stores it at +4, and increments the depth at +8.
- **Arguments** - r0 = mutex object.
- **Touches** - mutex +0 (count), +4 (owner), +8 (depth); 0x0014ddec (`sdk_fast_acquire062s`, atomic compare-exchange and arbiter wait).
- **Evidence** - accepted source `src/native/wave062-sdk/context/mutex062s.c` defines `sdk_recursive_acquire062s` with this exact sequence, including the thread-owner call; the disassembly matches. 178 distinct callers, 246 sites; 0x004edc34 is a four-byte branch alias to this address. The caller list (heap proxy, effect file device, queue worker) shows the mutex is the engine's general lock.

#### `fn_0012d73c` - 128 call sites - Release a scheduler/handle object through the global manager
*Confidence: inferred.*

- **Purpose** - loads the global manager at 0x00898154 and tail-calls 0x00142b64 with (manager, r0). That body takes the manager mutex, compares the handle with the manager's current slot, optionally issues SVC 0x0a, calls the object's virtual destructor, unlinks it from a list and releases the mutex.
- **Arguments** - r0 = handle/object to release.
- **Touches** - 0x00898154, 0x00142b64, manager mutex at +0x100c, SVC 0x0a.
- **Evidence** - 128 sites, 98 distinct callers; the manager pointer is a BSS global filled at startup. The mutex + wait + virtual-destructor sequence is measured, but the object family (thread, task, file handle) is not named in an accepted source.

#### `fn_004b7748` - 125 call sites - SDK context resolver, alternate slot (sdk_context_alternate062s)
*Confidence: established.*

- **Purpose** - the same context resolver as 0x001249d0, specialised to slot 1 instead of slot 3; returns the query/alternate context bound to the current thread.
- **Arguments** - none.
- **Touches** - 0x008b637e, 0x008b63d8, manager mutex/map, 0x0013d1a8, 0x00147a40, 0x0015ebe4.
- **Evidence** - accepted source `src/native/wave062-sdk/context/context062s.c` defines `sdk_context_alternate062s() { return context_resolve062s(1); }`; the two symbols differ only in the slot constant and are otherwise byte-identical. 125 sites, 57 distinct callers.

#### `fn_0046e0a4` - 116 call sites - SDK operation dispatcher (context + result state machine)
*Confidence: inferred.*

- **Purpose** - runs an SDK operation: fetches the context, acquires its mutex, inspects the request's state fields, calls one of several operation handlers (0x00455e8c, 0x00456044, 0x00456160, 0x006d0c60, 0x006d3b54), builds a result with 0x004b8d4c, tests success with 0x006d3b8c and returns a status.
- **Arguments** - r0 = operation object; r1 = request; r2 = output/state pointer; returns a 32-bit status.
- **Touches** - 0x001249d0, 0x004b8d4c, 0x006d3b8c, 0x004b7520, 0x0074a4c8.
- **Evidence** - 116 sites, 58 distinct callers; 480 bytes with the SDK result/context callee set, and the call shape `mov r2,sp; mov r1,request; mov r0,object; bl 0x0046e0a4` repeated across file/effect code. The operation-dispatch role is inferred from that callee set.

#### `fn_004edc70` - 101 call sites - Branch alias to recursive mutex release
*Confidence: established.*

- **Purpose** - four-byte branch to 0x001707b4 (`sdk_recursive_release062s`).
- **Arguments** - r0 = mutex.
- **Touches** - 0x001707b4.
- **Evidence** - one instruction `b 0x001707b4`; 101 sites, 53 distinct callers. Together with 0x004edc34 (acquire alias) these show how hot entry points are duplicated for different translation units.

#### `fn_004edc34` - 77 call sites - Branch alias to recursive mutex acquire
*Confidence: established.*

- **Purpose** - four-byte branch to 0x00170704 (`sdk_recursive_acquire062s`).
- **Arguments** - r0 = mutex.
- **Touches** - 0x00170704.
- **Evidence** - one instruction, 77 sites, 70 distinct callers; the acquire twin of 0x004edc70. The pair shows the compiler/linker duplicating hot entry points so each translation unit can use its own symbol address.

#### `fn_0011c184` - 74 call sites - Wrapper into the global manager at 0x00898154
*Confidence: inferred.*

- **Purpose** - loads the global manager at 0x00898154 and tail-calls 0x00127e6c with (manager, r0, r2, r3, stack argument).
- **Arguments** - r0..r3 and one stack argument forwarded.
- **Touches** - 0x00898154, 0x00127e6c.
- **Evidence** - 74 sites, 66 distinct callers; the argument shuffle is visible (r1 saved, r0 loaded from the global, r3 from r1). The manager is the same global used by 0x0012d73c; the callee's purpose is not resolved here.

## Timing

The raw SVC 0x28 tick read, the clock layer, the one-time clock guard, the time base and timestamped records.

#### `fn_00303afc` - 274 call sites - One-time initialisation guard (sdk_clock_guard062u)
*Confidence: established.*

- **Purpose** - a one-time guard: if the word at *guard is non-zero return 0, otherwise store 1 and return 1. The load/test/store is not atomic. Callers use the 1 result as "I performed the initialisation" and skip work otherwise.
- **Arguments** - r0 = pointer to the guard word; returns 1 on first call, 0 afterwards.
- **Touches** - the guard word only.
- **Evidence** - the accepted source `src/native/wave062-sdk/startup/clock_math062u.c` defines exactly `sdk_clock_guard062u`; 195 distinct callers, 274 sites; call sites are `tst r0,#1; bne skip; bl guard; cmp r0,#0; beq skip` around clock/epoch setup and other lazy initialisers. Despite the accepted name it is a generic guard, used for more than the clock.

#### `fn_004f01f4` - 135 call sites - Read the system tick counter (SVC 0x28)
*Confidence: established.*

- **Purpose** - performs supervisor call 0x28 and stores the 64-bit result through r0. On the measured platform SVC 0x28 is the system-tick read, so this is the raw monotonic time source used by the clock layer.
- **Arguments** - r0 = pointer to a 64-bit output.
- **Touches** - SVC 0x28 only.
- **Evidence** - 135 sites, 88 distinct callers; five instructions (`push {r4,lr}; mov r4,r0; svc #0x28; strd r0,r1,[r4]; pop`). 0x0013d0fc's accepted `sdk_clock_raw062u` source computes milliseconds from a tick source and 0x00479c98 consumes the value as a timestamp, which fixes the timing role.

#### `fn_0013d0fc` - 125 call sites - Current SDK clock value (sdk_clock_current062u)
*Confidence: established.*

- **Purpose** - reads the current clock pair: if monotonic mode is enabled uses 0x0014ed0c; otherwise, when initialised, reads the raw clock with 0x0015eb44 and adds the stored offset; on first use stores the offset so the first observed value is 1. Records the value in the clock state.
- **Arguments** - r0 = 64-bit output pair.
- **Touches** - 0x008b6378 (clock state: +9 initialised, +0xa monotonic, +0x1a0 offset), 0x0014ed0c, 0x0015eb44.
- **Evidence** - accepted source `src/native/wave062-sdk/startup/clock_read062u.c` has exactly this function; the disassembly matches branch for branch. 125 sites, 90 distinct callers including `sdk_timer_update062aa` and `sdk_timer_initialize062aa`.

#### `fn_004f0ce8` - 120 call sites - Initialise the SDK time base
*Confidence: inferred.*

- **Purpose** - lazily initialises a global 64-bit time base: tests bit 0 of the base word, runs the one-time guard 0x00303afc on the same address, then stores a constant and 0 into the base+8 pair and returns the base pointer.
- **Arguments** - none; returns a pointer to the global base.
- **Touches** - 0x008c0650 (guard/base), 0x008c0658 (returned pointer), 0x00303afc.
- **Evidence** - 120 sites, 89 distinct callers; callers immediately read a 64-bit value from the returned pointer (`ldrd r2,r3,[r0]`) and use it as a timestamp. The init-once pattern and 64-bit base are established; the absolute epoch is not.

#### `fn_00479c98` - 112 call sites - Snapshot the clock and a parameter block into a record
*Confidence: inferred.*

- **Purpose** - reads the current clock into a stack pair, stores it at record+0x40, then copies three words from r1 (+4, +8, +0xc) into record+0x50/+0x54/+0x58. This is a timestamped parameter snapshot.
- **Arguments** - r0 = destination record; r1 = source parameter block.
- **Touches** - 0x0013d0fc, record +0x40/+0x50/+0x54/+0x58.
- **Evidence** - 112 sites, 96 distinct callers; `bl 0x0013d0fc` on a stack pair followed by `strd` into the record is unambiguous. Callers are SDK task/timer code; the record's exact class is not established.

## Arithmetic and vector maths

The compiler runtime division routines and the 3x4 matrix/VFP helpers. Only a handful of arithmetic routines are hot, but each replaces a compiler helper emitted at every use site.

#### `fn_00300f74` - 213 call sites - Unsigned 32-bit divide/modulo core
*Confidence: established.*

- **Purpose** - computes an unsigned 32-bit quotient and remainder by binary long division (normalise/shift/subtract loop with `rsbs`/`adcs`), with a high-bit path for operands that need the full 32-bit normalisation.
- **Arguments** - r0 = dividend, r1 = divisor; returns quotient in r0 and remainder in r1.
- **Touches** - 0x00147f5c (called for the division-by-zero/slow path); no globals.
- **Evidence** - 213 sites, 135 distinct callers. The 556-byte body is the canonical ARM `__aeabi_uidivmod` algorithm; callers divide by constants (e.g. 1000) and use both quotient and remainder. 0x00169f1c (159 sites) loads r2 = 0 and branches into the same body, which is the quotient-only `__aeabi_uidiv` entry.

#### `fn_00169f1c` - 159 call sites - Unsigned 32-bit divide (quotient entry)
*Confidence: established.*

- **Purpose** - quotient-only entry into 0x00300f74: sets r2 = 0 and branches into the shared division core at 0x00300fa8, returning the quotient in r0.
- **Arguments** - r0 = dividend, r1 = divisor.
- **Touches** - 0x00300f74.
- **Evidence** - 159 sites, 120 distinct callers; a 48-byte dispatch into the normalisation stages of the division core, identical to `__aeabi_uidiv`. Callers divide timer/size values by constants (e.g. 1,000).

#### `fn_0017fe34` - 156 call sites - Degrees-to-radians conversion (multiply by pi/180)
*Confidence: established.*

- **Purpose** - returns `s0 * 0.0174532924`, i.e. converts degrees to radians. The multiplier is the float literal at 0x0017fe40 (word 0x3c8efa35, the IEEE-754 single-precision value of pi/180).
- **Arguments** - s0 = input angle in degrees; returns s0 scaled.
- **Touches** - 4-byte float literal 0x3c8efa35 at 0x0017fe40.
- **Evidence** - 156 sites, 89 distinct callers; three instructions (`vldr s1,[pc,#4]; vmul.f32 s0,s0,s1; bx lr`). The constant decodes exactly to 0.0174532924, which fixes the unit conversion; no caller passes a unit tag, so the input is degrees by construction.

#### `fn_0011c134` - 147 call sites - Signed 64-bit divide/modulo
*Confidence: established.*

- **Purpose** - signed 64-bit division: takes the signs of dividend and divisor, negates to unsigned, calls 0x00169c20 (unsigned 64-bit divide), then applies the signs to quotient and remainder.
- **Arguments** - r0:r1 = dividend (low:high), r2:r3 = divisor; returns quotient in r0:r1, remainder in r2:r3.
- **Touches** - 0x00169c20.
- **Evidence** - 147 sites, 120 distinct callers; the sign-fixup pattern (`asrs/eor/bpl/rsbs/rsc`) around a call to the unsigned core is the standard `__aeabi_ldivmod`. Callers pass 64-bit timer values and 64-bit constants.

#### `fn_00176dc0` - 96 call sites - Clamp a sum of two halfword fields
*Confidence: inferred.*

- **Purpose** - adds two signed halfword fields of the object (+0x2c and +0x38) and clamps the sum into [1, constant] using a three-value stack selection, returning the clamped short.
- **Arguments** - r0 = object; returns a signed short.
- **Touches** - object+0x2c, +0x38; stack temporaries.
- **Evidence** - 96 sites, 74 distinct callers; the three-candidate selection (`ldrsh` from one of three stack slots) and the two field loads make the clamp visible. What the clamped quantity is (a resource, a count) is inferred, not established.

#### `fn_001781f0` - 78 call sites - Copy a 3x4 matrix (12 floats)
*Confidence: established.*

- **Purpose** - copies 12 consecutive floats from r1 to r0 using two six-register VFP load/store pairs; returns immediately when source and destination are the same.
- **Arguments** - r0 = destination, r1 = source.
- **Touches** - none.
- **Evidence** - 78 sites, 53 distinct callers; the two `vldmia`/`vstmia` pairs and the self-copy test are exact. Matrix-copy role established by the 12-float stride and by 0x0016947c's 12-float matrix multiply.

#### `fn_0016947c` - 74 call sites - Affine transform: 3x4 matrix times a 3-vector (VFP)
*Confidence: established.*

- **Purpose** - computes `out[0..2] = M * v`: loads the 12 floats of a 3x4 matrix from r1 and 3 floats from r2 into s12-s14, accumulates with `vmla.f32` and stores 3 floats to r0. The translation column participates (s3/s7/s11 start from the matrix's fourth column), so points are transformed affinely.
- **Arguments** - r0 = out (3 floats), r1 = 12-float matrix, r2 = 3-float vector.
- **Touches** - the supplied buffers only.
- **Evidence** - 74 sites, 57 distinct callers; the 12+3 loads and 9 multiply-accumulates are explicit, and 0x001781f0 copies the same 12-float matrix. Affine interpretation follows from including the translation column.

## Graphics and UI text

Text object construction, font-backed text, screen elements and the message record builder. The graphics engine appears here only through its text/UI entry points; draw-call level functions are below the cutoff.

#### `fn_00688c04` - 130 call sites - Build a formatted message record (0x48-byte frame)
*Confidence: inferred.*

- **Purpose** - fills a 0x48-byte stack structure with the caller's arguments, then formats a wide string into it with 0x0018a618 after measuring the key with 0x00100b58. The result is a text/message record used by the caller.
- **Arguments** - r0 = destination record (or 0 to return immediately); r1 = source/key string; r2 = message id/selector.
- **Touches** - 0x00100b58 (wcslen), 0x0018a618 (bounded wide formatter), literal table at 0x007ce734.
- **Evidence** - 130 sites, 40 distinct callers; the body zeroes 18 words of the frame, stores r1 and a table pointer, then formats with size 0x20 and cap 0x1f. Formatting is established; the record's consumer is inferred.

#### `fn_0068974c` - 113 call sites - Create/initialise a UI text element
*Confidence: inferred.*

- **Purpose** - initialises a 0x60-byte text/effect descriptor with 0x0036c5f4 (message id, style, flags, rect/extra), then dispatches the object's method slot through `[object+4]->+0x18` with (0x48, 0) and tail-calls 0x001f749c.
- **Arguments** - r0 = owner/UI context; r1 = text id; r2 = style/selector; r3 = flag; stack = extra data.
- **Touches** - 0x0036c5f4, 0x001f749c (slot +0x24), owner+0x5c and +4.
- **Evidence** - 113 sites, 72 distinct callers; all callers are in UI/scene address ranges and pass a text id in r1 with 0 in r2/r3. The UI text classification is inferred from 0x0036c5f4 and the caller set.

#### `fn_001481c8` - 110 call sites - Create a formatted UI text object (font-backed)
*Confidence: inferred.*

- **Purpose** - formats a string into a 0x100-byte buffer with 0x0017d96c, allocates a 0x34-byte object with 0x00145b00 (a two-instruction wrapper that calls `heap_default_allocate062ac` at 0x001287dc with alignment 4), initialises it with the text and id (0x0011c200), links it into the owner's list (0x0017d948), resolves the font objects for `break_font.bffnt` and `break_font_L.bffnt` (0x0011dd90) and lays the text out (0x0012d750).
- **Arguments** - r0 = owner/UI context; r1 = text id; r2 = format string; r3 = format argument; stack = float parameter.
- **Touches** - 0x0017d96c, 0x00145b00, 0x0011c200, 0x0017d948, strings `%d`, `break_font.bffnt`, `break_font_L.bffnt`, 0x0011dd90, 0x0012d750.
- **Evidence** - 110 sites, 101 distinct callers; the font path strings are direct references from the function's pool and the formatting/allocation/layout callees are identified elsewhere in this document. The UI-text classification is established by those strings.

#### `fn_0036c5f4` - 103 call sites - Initialise a formatted text descriptor
*Confidence: inferred.*

- **Purpose** - initialises a 0x60-byte text/UI descriptor: copies five stack words into fields, formats the source string with 0x0036c140, and sets state bytes at +8/+9/+0xa, +0x30, +0x48..+0x51, +0x54, +0x5c/+0x5d. It is the initialiser used by 0x0068974c.
- **Arguments** - r0 = descriptor; r1 = source string; r2/r3 and five stack words = style/position fields.
- **Touches** - 0x0036c140 (format/copy), descriptor +8..+0x5d.
- **Evidence** - 103 sites, 93 distinct callers; 0x0036c140 calls wcslen and raises a level-8 exception on long text, then copies. The text role is inferred from the formatting callee and the UI caller set.

#### `fn_001480d0` - 89 call sites - Create a formatted UI text object (variant)
*Confidence: inferred.*

- **Purpose** - sibling of 0x001481c8: allocates a 0x3c-byte object through the size/alignment-4 wrapper 0x00145b00, formats the text, fills layout fields from the definition record, initialises it through 0x00167500/0x0016a318/0x00172cfc and returns it.
- **Arguments** - r0 = owner; r1 = id; r2 = definition; r3 = format argument; stack = floats.
- **Touches** - 0x00145b00, 0x00167500, 0x0016a318, 0x00172be0, 0x00172cfc, 0x00145b00.
- **Evidence** - 89 sites, 82 distinct callers; the callee set is the same text/layout machinery as 0x001481c8, with a different object size (0x3c). Text-object classification inferred from that shared machinery.

#### `fn_00121838` - 80 call sites - Create a UI text object for an id
*Confidence: inferred.*

- **Purpose** - combines a heap/string lookup (0x00118290), an id-to-record resolution (0x0012e958) and the string-table node creation (0x0016752c) to build a UI text/record object, then links it into a list (0x0017d948).
- **Arguments** - r0 = owner; r1 = id/text key; r2 = selector; returns the new object.
- **Touches** - 0x00118290, 0x0012174c, 0x0012e958, 0x00145b00 (allocation wrapper), 0x0016752c, 0x0017d948, 0x00812c8c.
- **Evidence** - 80 sites, 47 distinct callers; the callee set is string-table + allocation + list insertion, and the callers are UI code. UI text classification inferred.

#### `fn_0068ab5c` - 77 call sites - Construct a large game/UI object (472 bytes)
*Confidence: inferred.*

- **Purpose** - constructs an object with the vtable at 0x00851024 and many zeroed fields: calls 0x006896e0 for the base, installs two vtable-like constants, initialises the fields at +0x10..+0x30, allocates sub-objects through 0x00100fc6 and calls 0x006896e0/0x00245590/0x0028fb58/0x001f751c for child state.
- **Arguments** - r0 = storage; r1 = owner/context.
- **Touches** - vtable 0x00851024, 0x008593f0, 0x00812c8c, 0x008942dc, 0x008942d0; 0x00100fc6, 0x006896e0, 0x00245590, 0x0028fb58, 0x001f751c.
- **Evidence** - 77 sites, 77 distinct callers; the vtable references and field initialisation are explicit. The object's class is not named; it is grouped with UI because its constructor callees include the text/layout family.

#### `fn_002c29a0` - 72 call sites - Construct a UI screen element (icons, bar, scrollbar)
*Confidence: inferred.*

- **Purpose** - builds a complex UI element: reads layout bytes/floats from the definition, creates text/icon children via 0x001481c8 and 0x001480d0 with names such as `Null_RootNewIcon`, `Null_RootCursor`, `BarBase` and `Scrollbar`, sizes and positions them, and initialises the object's vtable and fields.
- **Arguments** - r0 = destination UI object; r1 = definition record.
- **Touches** - 0x001481c8, 0x001480d0, 0x00145b00, 0x001008c4/0x00100fc6, 0x00178f9c, strings `Null_RootNewIcon`, `Null_RootCursor`, `BarBase`, `Scrollbar`.
- **Evidence** - 72 sites, 72 distinct callers; the named string literals are embedded in the function's own data and the callee set is the UI text/icon machinery. The screen-element classification is established by those strings; the exact widget type is inferred.

## Game-data record access (inferred)

Fixed-stride record lookups, category predicates, flag bits and small decoders. The arithmetic and field offsets are measured; the record families are inferred because no accepted source or string names them.

#### `fn_006f14a4` - 329 call sites - Indexed record lookup in a fixed-stride table (stride 1,048)
*Confidence: inferred.*

- **Purpose** - returns a pointer to record `index` of a large table: `record = base + index*1048 - 0x4080`, where base is `[object+8]`. It returns 0 unless the record's first signed halfword is positive and at least one of the byte flags at +0x67, +0x76 or +0x68 is non-zero (checked in that order, short-circuiting).
- **Arguments** - r0 = table owner (record base at +8); r1 = index. Returns record pointer or 0.
- **Touches** - owner+8 (table base), record fields +0, +0x67, +0x68, +0x76; no calls, no strings, no globals.
- **Evidence** - 299 distinct callers, 329 sites. The 1,048-byte stride is arithmetic in the body (`index*3 + index*128`, then `<<3`); the sibling 0x006f14ec uses the same stride with a smaller flag set (+0x76/+0x68). The purpose is inferred as a record lookup: callers pass a small index and the returned pointer is then used as an object; the identity of the record family (actor/monster/parameter) cannot be established from these bytes alone.

#### `fn_00154ac8` - 283 call sites - Test one bit in a global bit vector
*Confidence: unknown.*

- **Purpose** - returns bit `index` of a global bit vector: `vector = [0x00897804]`, bitmap = `[vector+8]`, and 0x001560b4 reads bit `index` at `0x550` bytes into the bitmap. The mechanics are unambiguous; what the bits mean is not established.
- **Arguments** - r0 = bit index (callers pass small constants 0x19, 0x2e, 0x3e, 0x3f, ...); returns 0/1.
- **Touches** - 0x00897804 (global object pointer, zero in the file and filled at startup), bitset at object+8, 0x001560b4 (bit test), 0x00144834 uses the same global with a different offset.
- **Evidence** - 184 distinct callers, 283 sites; call sites compare the result with 0 or invert it (`eor r7,r0,#1`), i.e. treat it as a boolean. The bit-test arithmetic is established inside 0x001560b4 (`[bitmap + 0x550 + (index>>5)*4] >> (index&31) & 1`); the subsystem the bit vector belongs to (input? flags? object state?) cannot be determined from the bytes, so the entry is marked unknown rather than guessed.

#### `fn_006f0a30` - 267 call sites - Upper index bound for a record category
*Confidence: inferred.*

- **Purpose** - returns the upper bound (0x18 or 0x14) of the index range for the category code in `[object+4]`. It calls the category predicate 0x0061be08 and selects one of two constants.
- **Arguments** - r0 = record/object; returns a small index bound.
- **Touches** - 0x0061be08 (category predicate); object byte +4.
- **Evidence** - 228 distinct callers, 267 sites. Call site 0x0061e004 calls 0x006f0ae4 and then 0x006f0a30 and uses the two results as loop bounds (`cmp r4,r6; blt loop` with `r4` stepping and 0x006f14a4 fetching records), which establishes the bound role for this pair; the choice of 0x18/0x14 is a table-layout fact, the category semantics are inferred.

#### `fn_006f0ae4` - 237 call sites - Lower index bound for a record category
*Confidence: inferred.*

- **Purpose** - returns the lower bound (0x14 or 0x10) of the index range for the category code in `[object+4]`, using the same predicate as 0x006f0a30.
- **Arguments** - r0 = record/object; returns 0x14 or 0x10.
- **Touches** - 0x0061be08 (category predicate); object byte +4.
- **Evidence** - 228 distinct callers, 237 sites; paired with 0x006f0a30 at the same call sites to form `for (i = lower; i < upper; i++) record = lookup(object, i)`. Bound role established by that use, category semantics inferred.

#### `fn_006f44fc` - 158 call sites - Read a bit from a per-record flag array
*Confidence: inferred.*

- **Purpose** - returns bit `index` of the byte array at `record+0x31c`: `byte = record[0x284 + 0x98 + (index>>3)]`, `bit = (byte >> (index&7)) & 1`.
- **Arguments** - r0 = record; r1 = bit index (callers pass 0x28, 0x4f, 0x96, 0x1e0, ...).
- **Touches** - record+0x31c.
- **Evidence** - 158 sites, 60 distinct callers; the bit arithmetic is unambiguous. Callers use the result as a boolean; the meaning of the flags is not established.

#### `fn_006f2df8` - 150 call sites - Record category bound selector (0x14/0x18)
*Confidence: inferred.*

- **Purpose** - predicate-driven selector: returns 0x14 when the category matches and 0x18 otherwise.
- **Arguments** - r0 = record/object.
- **Touches** - 0x0061be08 (predicate), object byte +4.
- **Evidence** - 150 sites, 131 distinct callers; used as a range endpoint together with 0x006f0aa4 in 0x0061975c, which passes the pair to a range/selection helper. Bound/category roles inferred from those call sites.

#### `fn_0061be08` - 149 call sites - Record-category predicate over a small code range
*Confidence: inferred.*

- **Purpose** - returns 1 for category codes in 0x10..0x13, 0x18..0x1b, 0x20 or 0x22, and 0 otherwise: `(x-0x10) < 4 || (x-0x18) < 4 || x == 0x20 || x == 0x22`.
- **Arguments** - r0 = category code (callers load it as a signed byte from `object+4`).
- **Touches** - no globals or calls.
- **Evidence** - 149 sites, 73 distinct callers; all four bound selectors (0x006f0a30/0x006f0ae4/0x006f0aa4/0x006f2df8) call it on `[object+4]` and branch on the result, which makes it a category predicate. The meaning of the ranges is not established.

#### `fn_006f0aa4` - 132 call sites - Record category bound selector (0x10/0x14)
*Confidence: inferred.*

- **Purpose** - returns 0x10 when the category predicate is true and 0x14 otherwise.
- **Arguments** - r0 = record/object.
- **Touches** - 0x0061be08.
- **Evidence** - 132 sites, 131 distinct callers; paired with 0x006f2df8 in 0x0061975c, which passes both to a range helper, and with 0x006f0ae4/0x006f0a30 in other callers. Bound role inferred from those loop/range uses.

#### `fn_006bfe90` - 111 call sites - Decode a record state code from nine halfwords
*Confidence: inferred.*

- **Purpose** - scans nine signed halfwords at `[*record]+0x44+2*i`; when one falls in 0x46..0x4a it returns a small code (0..3) through a jump table, otherwise it reads `[*record]+0x1c` and tail-calls 0x0066173c.
- **Arguments** - r0 = record (whose first word points at the halfword table); returns a code.
- **Touches** - 0x0066173c, `[*record]`+0x1c, +0x44..+0x56.
- **Evidence** - 111 sites, 78 distinct callers; the scan and five-entry jump table (`sub r3,r2,#0x46; cmp r3,#4; ldrlo pc,[pc,r3,lsl#2]`) are explicit. The meaning of the codes is not established.

#### `fn_0062a40c` - 98 call sites - Decode a small tagged value from a record
*Confidence: inferred.*

- **Purpose** - switches on the byte at `[record+4]` (0..5); depending on the case returns a signed halfword from +0xc, optionally converted through 0x001746c0, or 0.
- **Arguments** - r0 = record; returns a sign-extended code.
- **Touches** - 0x001746c0, record+4, record+0xc.
- **Evidence** - 98 sites, 43 distinct callers; the jump table (`cmp r2,#6; ldrlo pc,[pc,r2,lsl#2]`) and case bodies are explicit. Decoding established; code meaning not.

#### `fn_001a46f4` - 85 call sites - Validity query for an id in a fixed-stride table
*Confidence: inferred.*

- **Purpose** - checks `0 < id < count` in the table at 0x008927fc, computes `record = base + id*120`, and returns whether the signed halfword at record+0x32 is non-zero.
- **Arguments** - r0 = id; returns 0/1.
- **Touches** - 0x008927fc (table header: +8 base, +0xc count), record+0x32.
- **Evidence** - 85 sites, 65 distinct callers; the bounds checks and the `(id*15)<<3` (=120) stride are explicit. The table's family is inferred from the stride and callers.

#### `fn_006f14ec` - 80 call sites - Indexed record lookup (reduced flag set)
*Confidence: inferred.*

- **Purpose** - same table arithmetic as 0x006f14a4 (`base + index*1048 - 0x4080`) but validates only +0x76 and +0x68.
- **Arguments** - r0 = table owner (base at +8); r1 = index.
- **Touches** - owner+8, record+0x76, +0x68.
- **Evidence** - 80 sites, 68 distinct callers; the arithmetic is identical to 0x006f14a4 and the two flag checks differ. Purpose inferred as a record lookup in the same family.

#### `fn_00692568` - 80 call sites - Read a signed halfword from a fixed-stride record
*Confidence: inferred.*

- **Purpose** - reads `[0x008994a0+4] + index*0x60 + 0x4a` as a signed halfword and returns it.
- **Arguments** - r0 = index.
- **Touches** - 0x008994a0 (base pointer at +4).
- **Evidence** - 80 sites, only 6 distinct callers; the stride (0x60) and field offset (0x4a) are exact. The record family is not established.

#### `fn_00271e64` - 80 call sites - Resolve an object by id and set its +0x44 flag bit
*Confidence: inferred.*

- **Purpose** - resolves an object through 0x00178f9c (`[owner+0xc]`, id), dispatches its type slot with (id, 1), then updates byte +0x44: clears bit 0 and ORs in r2.
- **Arguments** - r0 = owner; r1 = id; r2 = flag bit.
- **Touches** - owner+0xc, 0x00178f9c, virtual slot +0x2c, object+0x44.
- **Evidence** - 80 sites, 25 distinct callers; the resolve + dispatch + flag update sequence is visible. The flag's meaning is inferred.

## Input/state channels (inferred)

The 16-channel mask bus and its per-slot flag propagation. Grouped separately because its shape is unlike the table code, but the evidence only fixes the mechanics, not whether it is input, state or something else.

#### `fn_0031b78c` - 201 call sites - Update one channel of a 16-bit mask and propagate per-slot flags
*Confidence: inferred.*

- **Purpose** - applies a bit mask for channel `index` to the object's 16-bit mask word at +0x48, then for each of the 16 slots at `[object+0x78][i]` sets the low bit of the byte at +0x44 according to whether that slot's mask bit is now set, and finally falls through into 0x0031b7c4, a 16-way jump table indexed by the channel, with (slot, index, value).
- **Arguments** - r0 = owner; r1 = channel index 0..15; r2 = value; r3 = mode/enable passed through.
- **Touches** - owner+0x78 (array of 16 sub-objects), +0x24 (their mask table), +0x48 (current mask); 0x0031b6ec (mask application), 0x0031b7c4 (per-channel jump table).
- **Evidence** - 130 distinct callers, 201 sites; 0x0031b6ec has a hard 16-iteration loop over `[owner+0x24]` and loads masks from a constant table. The mask/flag plumbing is established; the "input channel" interpretation is inferred from the 16-way shape and the callers (game-code range). It could equally be a 16-slot state bus.

## Unclassified

Functions whose body is fully decoded but whose purpose is not fixed by the evidence available: dynamic dispatch slots, initialisers for unnamed records, and wrappers into unsymbolised code.

#### `fn_0020bbc4` - 248 call sites - Construct a two-word tagged value {static tag, payload}
*Confidence: inferred.*

- **Purpose** - initialises a two-word value: `[r0] = 0x0081c498` (a shared static tag/descriptor object) and `[r0+4] = r1`. Callers build it on the stack and pass it to a service that reads both words.
- **Arguments** - r0 = storage (usually `sp`); r1 = payload value.
- **Touches** - 0x0081c498: a static structure whose +0x10 word is code pointer 0x002106dc; it is also read by 0x001f4b20 and used by 0x00289ce8/0x00289f30 when adding bits.
- **Evidence** - 195 distinct callers, 248 sites; 62 call sites are the exact shape `mov r0,sp; mov r1,r0; bl 0x0020bbc4` and the object is then passed on. That it is a typed value wrapper is inferred from the constant tag word; the meaning of the tag object is not established (its first words are zero in the image and are written by a startup initialiser).

#### `fn_001f74ec` - 226 call sites - Three-level getter ending in a shared tail
*Confidence: inferred.*

- **Purpose** - fetches `[[[object+4]+0x18]+0x10]` and tail-calls 0x0028e658 on it; 0x0028e658 calls 0x0028e3b4 and returns field +4 of the result. The function's extent ends after the second load with a 4-byte `mov r0,r0`, and execution continues into the next symbol 0x001f74f8, a second entry that skips the first two loads. The two entry points share the tail.
- **Arguments** - r0 = object; the ignored r1 at call sites is an id/selector (callers set 0x2d, 0x3c, 0xb4, 0xe7, ...).
- **Touches** - object +4, +0x18, +0x10; 0x0028e658, 0x0028e3b4.
- **Evidence** - 180 distinct callers, 226 sites; the identical body appears again at 0x001f74d8 but loads +0x14 instead of +0x10. The fall-through into 0x001f74f8 is measured (no return instruction in the 12-byte extent); what the returned handle represents is not established, so the entry stays inferred/unknown rather than being named.

#### `fn_001f74d8` - 207 call sites - Three-level getter variant (field +0x14)
*Confidence: inferred.*

- **Purpose** - same shape as 0x001f74ec but loads `[object+0x14]` at the end: `[[[object+4]+0x18]+0x14]`, then falls through into the shared tail at 0x001f74e4 and calls 0x0028e658. The two entries are 20 bytes apart and share the tail code.
- **Arguments** - r0 = object; r1 = ignored selector (callers pass 0x2d, 0x36, 0x5e, 0xe7, ...).
- **Touches** - object +4, +0x18, +0x14; 0x0028e658.
- **Evidence** - 182 distinct callers, 207 sites; the body hash is identical to 0x001f74ec except for the field offset. Fall-through measured (extent ends in `mov r0,r0`, no return). The returned value's meaning is not established.

#### `fn_00145ac0` - 171 call sites - Virtual dispatch through the object at +0x38 (slot +0x10)
*Confidence: unknown.*

- **Purpose** - calls virtual slot +0x10 on `[object+0x38]` and returns its result. The function contains no logic beyond loading the interface pointer and its vtable slot.
- **Arguments** - r0 = object; remaining registers forwarded to the slot (callers pass 0x80, 4 or a pointer in r2).
- **Touches** - object+0x38, interface vtable+0x10.
- **Evidence** - four instructions, 171 sites, 115 distinct callers. Because the slot target is dynamic, the purpose depends on the object type and cannot be recovered from this body; marked unknown rather than guessed.

#### `fn_00163988` - 119 call sites - Initialise a 32-byte cursor/request record
*Confidence: inferred.*

- **Purpose** - fills a record from two sources: copies `[object+0x18]` to +8, stores r2 at +0xc, stores `[r1]` at +0x10, zeroes +4, +0x14 and byte +0x1d. The result is a request/cursor descriptor.
- **Arguments** - r0 = destination record; r1 = pointer to a value; r2 = selector/value.
- **Touches** - object+0x18, r1's first word, destination +4/+8/+0xc/+0x10/+0x14/+0x1d.
- **Evidence** - 119 sites, 66 distinct callers; the stores are fully visible but the record's consumer varies, so the purpose is inferred. The byte at +0x1d being zeroed suggests a flag/state field.

#### `fn_004ed2e8` - 118 call sites - Indirect global lookup through a byte selector
*Confidence: unknown.*

- **Purpose** - loads a byte selector from 0x008c062c+1, indexes the pointer array at 0x008c0630 with it, and returns the selected pointer. The mechanics are exact; what the table contains is not established.
- **Arguments** - none.
- **Touches** - 0x008c062c (selector byte), 0x008c0630 (pointer array base).
- **Evidence** - 118 sites, 55 distinct callers; five instructions. Both globals are BSS-filled at startup, so their runtime contents are not in the image. Marked unknown because no caller context fixes the table's meaning.

#### `fn_0019bc50` - 107 call sites - Copy a 6-byte value (u32 + u16)
*Confidence: unknown.*

- **Purpose** - copies a 4-byte word and a 2-byte halfword from r1 to r0. Mechanically a small structure copy; nothing identifies the structure.
- **Arguments** - r0 = destination, r1 = source.
- **Touches** - no calls, no globals.
- **Evidence** - 107 sites, 43 distinct callers; five instructions (`ldr`, `str`, `ldrh`, `strh`, `bx`). The copied value is an unknown record prefix, so the entry stays unknown.

#### `fn_00192114` - 87 call sites - Static-structure field getter
*Confidence: unknown.*

- **Purpose** - loads the word at `0x008bf5f4 + 0x10` and returns it. The base is a fixed data address, not a pointer argument, so this is a getter for a field of a global structure.
- **Arguments** - none.
- **Touches** - 0x008bf604 (fixed).
- **Evidence** - 87 sites, 32 distinct callers; three instructions. The structure at 0x008bf5f4 is zero/near-zero in the image and is filled at startup, so its meaning cannot be established from the static bytes.

#### `fn_00164a34` - 87 call sites - Character/code range predicate
*Confidence: unknown.*

- **Purpose** - returns 1 for codes 0x10..0x17, 0x20..0x21 and 0x22..0x23 (i.e. `(x-0x10)<8 || (x-0x20)<2 || (x-0x22)<2`), 0 otherwise.
- **Arguments** - r1 = code (the function sign-extends it into r0 with `sxtb`); the incoming r0 is ignored.
- **Touches** - none.
- **Evidence** - 87 sites, 55 distinct callers; the range arithmetic is explicit but the code space is not named by any caller context, so the purpose stays unknown.

#### `fn_00144834` - 85 call sites - Wrapper into an unsymbolised routine at 0x00121708
*Confidence: unknown.*

- **Purpose** - loads the global pointer at 0x00897804, takes its +8 field, and tail-branches to 0x00121708 with (that pointer, r0, r1).
- **Arguments** - r0/r1 forwarded.
- **Touches** - 0x00897804, 0x00121708.
- **Evidence** - 85 sites, 45 distinct callers; the argument shuffle and tail branch are exact, but 0x00121708 is neither a symbol nor an owned extra range, so the callee cannot be named. The entry is marked unknown because its behaviour is not closed within the documented inventory.

#### `fn_001cab7c` - 74 call sites - Map a code 0..5 to a small enum
*Confidence: unknown.*

- **Purpose** - maps a small code through a six-entry jump table: inputs 0..3 return 1..4, input 4 returns 0, and every other input falls to the default return 0.
- **Arguments** - r0 = code.
- **Touches** - none.
- **Evidence** - 74 sites, 45 distinct callers; the table and the default branch are visible, but the caller context does not name the code space, so this stays an unknown mapping despite being mechanically clear.

#### `fn_002c330c` - 73 call sites - Default-initialise a 0x34-byte state record
*Confidence: inferred.*

- **Purpose** - zeroes the first 0x18 bytes and bytes +0x2c..+0x32, sets the four words at +0x1c..+0x28 to the global sentinel 0x008f9cf4 (the value also skipped by 0x001588d4's refcount release), writes a zero float at +0x18 and sets +0x33 = 0xff.
- **Arguments** - r0 = record to initialise.
- **Touches** - record 0..0x33; sentinel 0x008f9cf4; zero float.
- **Evidence** - 73 sites, 73 distinct callers; the store pattern and the sentinel literal are fully visible. The record's class is unknown, so the entry states the initialisation without naming the type.

#### `fn_0028e264` - 71 call sites - Construct a two-word vtable object
*Confidence: inferred.*

- **Purpose** - writes the vtable at 0x0081e204 into [r0] and r1 into [r0+4].
- **Arguments** - r0 = storage; r1 = payload/owner pointer.
- **Touches** - vtable 0x0081e204 (slots 0x006b893c, 0x0028e280, 0x0028e278, 0x0028edb4).
- **Evidence** - 71 sites, 71 distinct callers; the two stores are exact. The class behind the vtable is not identified, so the entry records only that this is a constructor for a vtable-bearing object.

## Appendix: the other 1,213 hot functions

The published list continues down to 8 call sites. The remaining 1213 functions account for 22,496 direct call sites. Their call counts fall off quickly: 106 have 40 or more sites, 852 have fewer than 20. The same subsystem mix continues in that band (more record getters, more virtual dispatch slots, more small state transitions), but the functions are increasingly specific to one caller family, which is why documenting them requires the caller context rather than a global ranking.

The full ranking with counts is in `work/hot-split.json`; the call-site counting script is `work/hot.py`. This document covers the first 120 because that is the band where a single entry explains hundreds of call sites.

## Method and limitations

- Bodies: `work/corpus/functions/<address>.json` (Ghidra disassembly, decompiled signature, references) and `work/corpus/c/<address>.c`; disassembly was re-decoded with Capstone 5.0.7 in the recorded mode so the instruction stream used for argument analysis is the same one the published call counts use.
- Call sites: every `bl`/`blx` immediate inside each primary symbol extent, grouped by caller. The counts reproduce all 1,333 published entries exactly (0 mismatches).
- Arguments: the last write to r0-r3 within 14 instructions before the call, resolved through literal pools when the write loads a constant; this is a heuristic view of the register state, not a dataflow proof, and the entries say so where it matters.
- Data and strings: every reference recorded by the corpus exporter was resolved to a string, a pointer table, a vtable or raw words before being used as evidence; global addresses that are zero in the image are marked as startup-filled.
- Accepted sources: `config/source-names.json` and the `src/native/...` bodies were used only where the disassembly matches them; the entry says when a source body matches but the address is not in the accepted mapping (for example `fn_0014f1bc`).
- Extent caveat: a symbol extent can end without a return instruction. The last `mov r0,r0` in such a function is a four-byte placeholder before the next symbol, and execution continues there. The entries name the fall-through target instead of pretending the function returns; the call graph in `work/corpus` has no edge for these tails.
- Not claimed: original source identifiers, exception class names, record family names, game meaning of flag bits, and any behaviour not exercised by the static call-site evidence. Those stay unknown rather than being named.

## Appendix: index of the 120 entries

| Rank | Address | Sites | Subsystem | Confidence | Role |
| ---: | --- | ---: | --- | --- | --- |
| 1 | `fn_001008c4` | 1,989 | Allocator and object lifetime | established | Sized deallocation shim (free through a Thumb call gate) |
| 2 | `fn_00100fc6` | 1,056 | Allocator and object lifetime | established | Checked allocation entry (malloc, throw on failure) |
| 3 | `fn_002ff628` | 957 | Diagnostics, assertions and exceptions | established | Exception raise (formatted message or standard code) |
| 4 | `fn_001581d0` | 785 | Squirrel VM interface | established | Squirrel error raise: sq_throwerror(vm, message) |
| 5 | `fn_00148918` | 732 | Diagnostics, assertions and exceptions | established | Assertion operand formatter (release-build stub) |
| 6 | `fn_002feef8` | 622 | Allocator and object lifetime | established | Branch alias to heap_default_free062ac |
| 7 | `fn_0015ece0` | 619 | Allocator and object lifetime | established | SDK allocation with 8-byte dispose prefix (heap_sdk_allocate062ac) |
| 8 | `fn_0022f584` | 559 | Strings and text | inferred | Look up a message/text string in the current message namespace |
| 9 | `fn_00190d50` | 504 | Strings and text | inferred | Assign a UTF-16 string to a string object (wcscpy shape) |
| 10 | `fn_00157f58` | 503 | Squirrel VM interface | established | Squirrel integer getter: sq_getinteger(vm, index, out) |
| 11 | `fn_0022f750` | 486 | Strings and text | inferred | Look up a text key in the LayoutMessage namespace |
| 12 | `fn_001249d0` | 472 | SDK runtime, context and synchronisation | established | SDK context resolver, default slot (sdk_context062s) |
| 13 | `fn_001588d4` | 412 | Allocator and object lifetime | inferred | Release a reference-counted object and free it at zero |
| 14 | `fn_006f14a4` | 329 | Game-data record access (inferred) | inferred | Indexed record lookup in a fixed-stride table (stride 1,048) |
| 15 | `fn_00147974` | 326 | Strings and text | inferred | Assign a C string into a string object |
| 16 | `fn_001707b4` | 313 | SDK runtime, context and synchronisation | established | Recursive mutex release (sdk_recursive_release062s) |
| 17 | `fn_0015ef4c` | 301 | Strings and text | inferred | Append to a growable wide buffer (position = end) |
| 18 | `fn_004b8d4c` | 285 | SDK runtime, context and synchronisation | established | Build an SDK result record (sdk_result_make062t) |
| 19 | `fn_00154ac8` | 283 | Game-data record access (inferred) | unknown | Test one bit in a global bit vector |
| 20 | `fn_00303afc` | 274 | Timing | established | One-time initialisation guard (sdk_clock_guard062u) |
| 21 | `fn_006f0a30` | 267 | Game-data record access (inferred) | inferred | Upper index bound for a record category |
| 22 | `fn_00170f54` | 253 | Allocator and object lifetime | established | Destroy a wide-name object (sdk_wide_destroy062x) |
| 23 | `fn_0020bbc4` | 248 | Unclassified | inferred | Construct a two-word tagged value {static tag, payload} |
| 24 | `fn_00170704` | 246 | SDK runtime, context and synchronisation | established | Recursive mutex acquire (sdk_recursive_acquire062s) |
| 25 | `fn_006f0ae4` | 237 | Game-data record access (inferred) | inferred | Lower index bound for a record category |
| 26 | `fn_0068897c` | 228 | Tables, containers and bitsets | inferred | Find an element by type tag in a polymorphic container |
| 27 | `fn_001f74ec` | 226 | Unclassified | inferred | Three-level getter ending in a shared tail |
| 28 | `fn_0028aad0` | 219 | Tables, containers and bitsets | inferred | Keyed lookup in a 500-entry table, with a default entry |
| 29 | `fn_00101a50` | 219 | Strings and text | established | Wide (UTF-16) sprintf |
| 30 | `fn_0014f1bc` | 214 | Allocator and object lifetime | established | SDK dispose (heap_sdk_dispose062ac) |
| 31 | `fn_00300f74` | 213 | Arithmetic and vector maths | established | Unsigned 32-bit divide/modulo core |
| 32 | `fn_0030233c` | 210 | Allocator and object lifetime | established | Second branch alias to heap_default_free062ac |
| 33 | `fn_001f74d8` | 207 | Unclassified | inferred | Three-level getter variant (field +0x14) |
| 34 | `fn_001580cc` | 203 | Squirrel VM interface | established | Push an integer onto the VM stack (sq_pushinteger) |
| 35 | `fn_0031b78c` | 201 | Input/state channels (inferred) | inferred | Update one channel of a 16-bit mask and propagate per-slot flags |
| 36 | `fn_001028d4` | 192 | Strings and text | established | Narrow sprintf (unbounded) |
| 37 | `fn_0068ab44` | 191 | Tables, containers and bitsets | established | Map a numeric id to a small code through a static table |
| 38 | `fn_004b7520` | 183 | Allocator and object lifetime | inferred | Destructor of a refcounted interface object |
| 39 | `fn_002febd8` | 181 | Strings and text | established | strlen (byte string length) |
| 40 | `fn_0048a058` | 173 | Tables, containers and bitsets | established | Look up a key in a sorted tree/map |
| 41 | `fn_0016ba34` | 173 | Strings and text | established | Intern a string in the global string store, keyed by namespace |
| 42 | `fn_00145ac0` | 171 | Unclassified | unknown | Virtual dispatch through the object at +0x38 (slot +0x10) |
| 43 | `fn_003035b0` | 160 | Strings and text | established | strcmp (byte string compare) |
| 44 | `fn_001828f0` | 159 | Tables, containers and bitsets | inferred | Get the first element of a container (begin) |
| 45 | `fn_00169f1c` | 159 | Arithmetic and vector maths | established | Unsigned 32-bit divide (quotient entry) |
| 46 | `fn_006f44fc` | 158 | Game-data record access (inferred) | inferred | Read a bit from a per-record flag array |
| 47 | `fn_0017fe34` | 156 | Arithmetic and vector maths | established | Degrees-to-radians conversion (multiply by pi/180) |
| 48 | `fn_006f2df8` | 150 | Game-data record access (inferred) | inferred | Record category bound selector (0x14/0x18) |
| 49 | `fn_0015b0dc` | 150 | Strings and text | inferred | Copy a wide string into the global string arena |
| 50 | `fn_0061be08` | 149 | Game-data record access (inferred) | inferred | Record-category predicate over a small code range |
| 51 | `fn_005f6de0` | 148 | Squirrel VM interface | inferred | Read a two-level float parameter from the Squirrel root table, default 0 |
| 52 | `fn_00159f34` | 147 | Tables, containers and bitsets | established | Erase a key from a hash map |
| 53 | `fn_0011c134` | 147 | Arithmetic and vector maths | established | Signed 64-bit divide/modulo |
| 54 | `fn_001827b0` | 146 | Tables, containers and bitsets | inferred | Find the first element of a given type in a container |
| 55 | `fn_0015ecdc` | 145 | Allocator and object lifetime | established | Forward entry into heap_sdk_allocate062ac |
| 56 | `fn_0017d96c` | 137 | Strings and text | established | Bounded narrow formatter with explicit cap |
| 57 | `fn_00157fb0` | 136 | Squirrel VM interface | established | Squirrel string getter: sq_getstring(vm, index, out) |
| 58 | `fn_004f01f4` | 135 | Timing | established | Read the system tick counter (SVC 0x28) |
| 59 | `fn_006f0aa4` | 132 | Game-data record access (inferred) | inferred | Record category bound selector (0x10/0x14) |
| 60 | `fn_00688c04` | 130 | Graphics and UI text | inferred | Build a formatted message record (0x48-byte frame) |
| 61 | `fn_00656b7c` | 130 | Tables, containers and bitsets | inferred | Look up an object in the global registry and dispatch slot +0x1c |
| 62 | `fn_00147e6c` | 129 | Strings and text | established | memcmp (byte compare over an explicit length) |
| 63 | `fn_00168a24` | 128 | Strings and text | inferred | Construct a heap string object from a C string (SSO boundary at 32) |
| 64 | `fn_00146590` | 128 | Diagnostics, assertions and exceptions | established | Forward entry into the terminate/abort path |
| 65 | `fn_0012d73c` | 128 | SDK runtime, context and synchronisation | inferred | Release a scheduler/handle object through the global manager |
| 66 | `fn_00100414` | 127 | Allocator and object lifetime | inferred | Destroy a strided array and return its allocation prefix |
| 67 | `fn_004b7748` | 125 | SDK runtime, context and synchronisation | established | SDK context resolver, alternate slot (sdk_context_alternate062s) |
| 68 | `fn_0013d0fc` | 125 | Timing | established | Current SDK clock value (sdk_clock_current062u) |
| 69 | `fn_0018a618` | 123 | Strings and text | established | Bounded wide formatter (second variant) |
| 70 | `fn_004f0ce8` | 120 | Timing | inferred | Initialise the SDK time base |
| 71 | `fn_00163988` | 119 | Unclassified | inferred | Initialise a 32-byte cursor/request record |
| 72 | `fn_004ed2e8` | 118 | Unclassified | unknown | Indirect global lookup through a byte selector |
| 73 | `fn_00689210` | 117 | Tables, containers and bitsets | inferred | Begin/iterate call on a container |
| 74 | `fn_0046e0a4` | 116 | SDK runtime, context and synchronisation | inferred | SDK operation dispatcher (context + result state machine) |
| 75 | `fn_0074a528` | 114 | Tables, containers and bitsets | inferred | Read a 32-bit field from a length-delimited stream |
| 76 | `fn_006b6bc4` | 113 | Tables, containers and bitsets | inferred | Count non-null entries in a fixed four-slot table |
| 77 | `fn_0068974c` | 113 | Graphics and UI text | inferred | Create/initialise a UI text element |
| 78 | `fn_00479c98` | 112 | Timing | inferred | Snapshot the clock and a parameter block into a record |
| 79 | `fn_006bfe90` | 111 | Game-data record access (inferred) | inferred | Decode a record state code from nine halfwords |
| 80 | `fn_001481c8` | 110 | Graphics and UI text | inferred | Create a formatted UI text object (font-backed) |
| 81 | `fn_0019bc50` | 107 | Unclassified | unknown | Copy a 6-byte value (u32 + u16) |
| 82 | `fn_00656e14` | 106 | Tables, containers and bitsets | inferred | Registry lookup and dispatch through slot +0x18 |
| 83 | `fn_0016a43c` | 106 | Tables, containers and bitsets | established | Find an element by key in an intrusive list |
| 84 | `fn_00689efc` | 104 | Tables, containers and bitsets | inferred | Resolve an object field and dispatch a method |
| 85 | `fn_0036c5f4` | 103 | Graphics and UI text | inferred | Initialise a formatted text descriptor |
| 86 | `fn_004edc70` | 101 | SDK runtime, context and synchronisation | established | Branch alias to recursive mutex release |
| 87 | `fn_00158004` | 101 | Squirrel VM interface | established | Push a boolean onto the VM stack (sq_pushbool) |
| 88 | `fn_0062a40c` | 98 | Game-data record access (inferred) | inferred | Decode a small tagged value from a record |
| 89 | `fn_00172c98` | 97 | Tables, containers and bitsets | established | Find an element by name in an intrusive list |
| 90 | `fn_00176dc0` | 96 | Arithmetic and vector maths | inferred | Clamp a sum of two halfword fields |
| 91 | `fn_006b71a8` | 95 | Tables, containers and bitsets | inferred | Checked element access in a four-slot table |
| 92 | `fn_0015ef58` | 94 | Strings and text | inferred | Append/grow a wide buffer |
| 93 | `fn_001480d0` | 89 | Graphics and UI text | inferred | Create a formatted UI text object (variant) |
| 94 | `fn_00192114` | 87 | Unclassified | unknown | Static-structure field getter |
| 95 | `fn_00164a34` | 87 | Unclassified | unknown | Character/code range predicate |
| 96 | `fn_00157f00` | 86 | Squirrel VM interface | established | Squirrel float getter: sq_getfloat(vm, index, out) |
| 97 | `fn_001a46f4` | 85 | Game-data record access (inferred) | inferred | Validity query for an id in a fixed-stride table |
| 98 | `fn_00144834` | 85 | Unclassified | unknown | Wrapper into an unsymbolised routine at 0x00121708 |
| 99 | `fn_00656b0c` | 82 | Tables, containers and bitsets | inferred | Recover a type descriptor from an object header |
| 100 | `fn_00177c88` | 81 | Strings and text | inferred | String buffer assign/reallocate core (700 bytes) |
| 101 | `fn_0015e6f0` | 81 | Strings and text | established | Duplicate a wide string (sdk_wide_create062x) |
| 102 | `fn_006f14ec` | 80 | Game-data record access (inferred) | inferred | Indexed record lookup (reduced flag set) |
| 103 | `fn_00692568` | 80 | Game-data record access (inferred) | inferred | Read a signed halfword from a fixed-stride record |
| 104 | `fn_005f6d10` | 80 | Squirrel VM interface | inferred | Read a two-level integer parameter from the Squirrel root table, default 0 |
| 105 | `fn_00271e64` | 80 | Game-data record access (inferred) | inferred | Resolve an object by id and set its +0x44 flag bit |
| 106 | `fn_00121838` | 80 | Graphics and UI text | inferred | Create a UI text object for an id |
| 107 | `fn_00118290` | 80 | Allocator and object lifetime | established | Return the active heap/allocator hook |
| 108 | `fn_00157eb4` | 79 | Squirrel VM interface | established | Squirrel boolean getter: sq_getbool(vm, index, out) |
| 109 | `fn_001781f0` | 78 | Arithmetic and vector maths | established | Copy a 3x4 matrix (12 floats) |
| 110 | `fn_0068ab5c` | 77 | Graphics and UI text | inferred | Construct a large game/UI object (472 bytes) |
| 111 | `fn_004edc34` | 77 | SDK runtime, context and synchronisation | established | Branch alias to recursive mutex acquire |
| 112 | `fn_006b83e4` | 74 | Tables, containers and bitsets | inferred | Count valid slots resolved through a global table |
| 113 | `fn_001cab7c` | 74 | Unclassified | unknown | Map a code 0..5 to a small enum |
| 114 | `fn_0016947c` | 74 | Arithmetic and vector maths | established | Affine transform: 3x4 matrix times a 3-vector (VFP) |
| 115 | `fn_0011c184` | 74 | SDK runtime, context and synchronisation | inferred | Wrapper into the global manager at 0x00898154 |
| 116 | `fn_002c330c` | 73 | Unclassified | inferred | Default-initialise a 0x34-byte state record |
| 117 | `fn_0014f480` | 73 | Allocator and object lifetime | inferred | Destructor of a vtable object (vtable 0x00855a18) |
| 118 | `fn_002c29a0` | 72 | Graphics and UI text | inferred | Construct a UI screen element (icons, bar, scrollbar) |
| 119 | `fn_001482f4` | 72 | Tables, containers and bitsets | inferred | Insert a node into two intrusive lists |
| 120 | `fn_0028e264` | 71 | Unclassified | inferred | Construct a two-word vtable object |
