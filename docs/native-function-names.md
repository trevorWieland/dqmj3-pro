# Naming the most-called measured functions

The repository standard is that a byte-identical function named `fn_004c0388`
with unnamed parameters is half done. This pass names and documents the
most-called functions that already have source, without moving a byte of output.

## What changed

Of the 150 functions with the most call sites that already have source
(13,565 call sites in total), **27 are named and documented in place**, covering
**5,712 call sites**. Eight of the 27 were already byte-identical and stay
byte-identical; the other 19 are drafts and their measured status did not change
either. The remaining **123 are still `fn_*`** and the reason is recorded below.

The measurement is unchanged: `matched_code=135872` and `matched_functions=2904`
before and after, and the per-function credit set is identical.

## The naming contract

A function's identity is the address `config/symbols.txt` gives it, not the
spelling of its symbol. The split is the one table that binds a name to an
address: it records every function's address, mode and size, and
`toolscripts/objdiff_objects.py` resolves each compiled definition through that
table and matches it by address. A name may therefore be anything a person
chooses, so these 27 are plain renames:

```c
void *memory_copy(void *destination, const void *source, unsigned int bytes)
```

The split line carries the same name, the header declares it, the call sites call
it, and the measurement does not move: the address, the original bytes carved
there and the compiled function placed there are the same as before the rename.
No `#define` bridges a name to an address, and a comment that still calls a
renamed function by its old `fn_*` label is a stale reference.

The measurement used to make the address spelling load-bearing: `split.py`
refused a split line whose name disagreed with its address and
`objdiff_objects.py` accepted a definition only when its name matched
`fn_[0-9a-f]{8}`. A rename then removed the function from the measured set and
turned its bytes back into retained original bytes. The naming lane first shipped
these 27 through preprocessor aliases for that reason; the measurement now keys
on the split address, and the aliases became plain renames with the measurement
unchanged.

## How each purpose was established

The body alone is rarely enough, and a guess is worse than an address. Each name
rests on at least two independent observations, and the block above each
definition records which. The three worked examples below are representative.

### `engine_allocate` — 0x00145b00, 8 bytes, 1,710 call sites

The body is one instruction pair: `mov r1,#4; b 0x001287dc`. The callee tests the
heap-enabled byte at `0x0089a508` and tail-calls `heap->vtable->allocate(heap,
size, 4)` through the interface object at `0x0089a688`, returning zero when no
heap is bound. That alone says "allocate with alignment 4", but not that callers
treat it as an allocation.

The call sites settle it. All 1,710 follow one shape, here from `0x0010803c`:

```
mov r0,#0x2c
ldr r1,[pool]        ; 0x00812c8c, a data blob
bl  0x00145b00
cmp r0,#0
blne 0x0010a3a4      ; constructor, receives the block in r0
str r0,[r4,#0]       ; store the block into the manager field
```

"Allocate, construct if non-null, store" is exactly that instruction sequence,
and it repeats for every subsystem the 1,108-byte bootstrap constructs. The same
block also shows the puzzle: every call loads `0x00812c8c` into r1 and
`engine_allocate` overwrites r1 with 4, so the original signature carried a second
argument that this build drops. The definition declares only `size` and the block
above it records the dropped tag rather than inventing a meaning for it.

### `memory_copy` / `memory_copy_unaligned` — 0x0017821c and 0x00301a9c

`0x0017821c` copies in 32-byte blocks (`ldmia`/`stmia` with a `pld` preload), then
8/4/2/1-byte steps, and returns the destination. `0x00301a9c` has the same loop
preceded by a byte-by-byte prologue that aligns the destination. Call-site
arguments separate them: `0x0017821c` receives stack buffers and aligned data
(`puVar3`, `auStack_134`, counts 0x18 .. 0x118), while `0x00301a9c` receives
deliberately unaligned pointers such as `source + 3` and `source + 0xe`. The
prologue is the contract difference, so the two names say which callers may use
which. The image carrying two copies of the same primitive is a fact about the
original link, not a naming choice, and the block above each definition says so.

### `script_native_register` — 0x00143de8, 28 bytes, 131 call sites

`config/script-natives.json` records `0x00143de8` as the registrar called by every
registration block. The body alone looks like a predicate: it loads
`context->[4]->[4]`, calls `0x00154184` and returns whether the result is nonzero.
It names only r0, which is why the Ghidra decompilation shows one argument.

The registration block at `0x0011d1bc` shows the rest:

```
0011d1c8: adr r1,0x11d498      ; "Wait_"
0011d1cc: bl  0x00143de8
0011d1d0: ldr r2,[0x11d4a0]    ; fn_0012e46c
0011d1d4: adr r1,0x11d4a4      ; "IsWaitEnd_"
0011d1d8: cpy r0,r4
0011d1dc: bl  0x00143de8
```

`0x00143de8` never writes r1 or r2, so `0x00154184` receives
`(table, name, function)` — the registration call — and the function returns
success. The other two arguments travel implicitly, which the definition's block
states instead of pretending the definition declares them.

## Mapping table

Addresses are the identity. "Bytes" is the split extent and "sites" the counted
`bl`/`b` call sites. "Exact" means the function was byte-identical before and
after this pass.

| Address | Name | Bytes | Mode | Sites | Exact | Basis |
|---|---|---:|---|---:|---|---|
| `0x001010c8` | `memory_compare` | 116 | Thumb | 60 | no | word-then-byte compare; returns first difference |
| `0x00100b58` | `wide_string_length` | 18 | Thumb | 244 | no | 16-bit unit scan to NUL; u16 prototype in `pattern_outer.h` |
| `0x00101a1c` | `material_construct_elements` | 34 | Thumb | 266 | no | `construct(element)` over `count` elements of `stride` |
| `0x00143de8` | `script_native_register` | 28 | ARM | 131 | yes | 131 registration blocks; forwards `(table, name, fn)` to `0x00154184` |
| `0x00145b00` | `engine_allocate` | 8 | ARM | 1,710 | yes | heap allocate at alignment 4; all sites construct and store the result |
| `0x00157ff4` | `vm_stack_count` | 16 | ARM | 46 | yes | `top - base` on the VM stack view |
| `0x00158f6c` | `memory_zero_unaligned` | 64 | ARM | 150 | no | byte prologue then `memory_zero_aligned` |
| `0x00166824` | `material_word_pair_assign` | 20 | ARM | 145 | no | two-word (8-byte) copy |
| `0x00173d1c` | `vm_stack_push` | 36 | ARM | 59 | no | append at `top`, then `vm_object_assign` |
| `0x00173d40` | `vm_stack_at` | 12 | ARM | 60 | yes | stack slot at index |
| `0x0017821c` | `memory_copy` | 116 | ARM | 1,176 | no | 32-byte block copy with preload, no alignment prologue |
| `0x00194ee4` | `material_allocate` | 32 | ARM | 30 | no | material heap allocate operation |
| `0x0019e864` | `vm_object_assign` | 96 | ARM | 214 | yes | refcounted VM value assign; tag bit `0x08000000` |
| `0x0019fb94` | `material_release` | 24 | ARM | 32 | no | material heap release operation |
| `0x001ad06c` | `matrix_multiply` | 228 | ARM | 29 | no | 3x4 affine multiply |
| `0x00246e74` | `pattern_game_filter_owner_destroy` | 64 | ARM | 22 | no | filter teardown then owner destroy |
| `0x00301a9c` | `memory_copy_unaligned` | 136 | ARM | 496 | no | alignment prologue then 32-byte block copy |
| `0x00301f50` | `memory_zero_aligned` | 84 | ARM | 435 | no | 32/16/8/4-byte zero stores |
| `0x004c3994` | `fixed_arena_release` | 52 | ARM | 50 | no | clears occupancy bytes of a block run |
| `0x004c39c8` | `fixed_arena_allocate` | 320 | ARM | 47 | no | first-fit run search with wrap |
| `0x004ed504` | `store_big_endian_16` | 16 | ARM | 49 | yes | 16-bit store, most significant byte first |
| `0x004ed514` | `store_big_endian_32` | 32 | ARM | 117 | yes | 32-bit store, most significant byte first |
| `0x0052534c` | `sine_cosine` | 136 | ARM | 20 | no | 256-entry table sine/cosine with interpolation |
| `0x005f5d3c` | `archive_view_destroy` | 32 | ARM | 19 | no | releases the archive image; installed in `archive_operations` |
| `0x0063b148` | `flag_record_clear` | 28 | ARM | 32 | no | clears bit `value - base_bit` in the +4 flag word |
| `0x006d3ef4` | `flag_mask_includes` | 20 | ARM | 50 | yes | all bits of `flags` set in the mask at +0x2c |
| `0x006fa358` | `floor_float` | 140 | ARM | 23 | no | round toward negative infinity |

## What the pass revealed about the engine

**The hottest function in the image is an allocator wrapper, not gameplay.** The
top of the call-site list is `engine_allocate` (1,710 sites, 8 bytes), followed by
the two memory copies and the two zero fills. This is what a runtime looks like:
the most-called code is the code every other function cannot avoid. It also means
the original was compiled with the runtime's allocation and memory primitives
inlined as thin, non-inlined entry points rather than inlined at each site.

**The image carries two copies of each runtime primitive.** `memcpy` has a
word-block form and an alignment-prologue form, `memset` the same, and they do not
share a body. That matches the two zlib links already documented for this image
(`docs/native-archive032.md`): the original link was assembled from at least two
translation units that each brought their own memory primitives, and the linker
kept both because they have different symbols.

**The allocator API had a tag argument that release builds drop.** Every one of
the 1,710 call sites loads the same pointer (`0x00812c8c`) into r1 before calling
the 8-byte wrapper, and the wrapper overwrites r1 with the alignment 4. The
original source therefore had a two-argument allocation entry point whose second
argument was used only in a build variant that is not this one — most likely a
debug/tracking heap. The tag is dead code in the measured image and no call site
reads it, so its meaning cannot be recovered from the image alone.

**The script registry is a single forwarding entry with an implicit ABI.**
`script_native_register` takes its context in r0 and passes the caller's name and
function pointer straight through in r1/r2, so the same 28-byte function serves
all 131 registration blocks and each block supplies its own pair. This is the
mechanism `config/script-natives.json` describes as form A, and it explains why
the decompiler saw one parameter: the body never touches the other two registers,
but the callee reads them.

**Engine services are reached through one bound interface, not direct calls.**
The material helpers (`material_allocate`, `material_release`) call through a
single `material_heap` vtable, the engine allocator calls through the interface at
`0x0089a688`, and the archive view calls through `ArchiveOperations`. The engine
this game embeds is small and interface-driven; the names now make that visible at
the call sites that matter.

**The heat is accessors over a handful of engine singletons.** The median size of
the top 150 is 20 bytes, and 95 of the 123 left unnamed are single-expression
field reads or one-bit predicates. Naming them is not a matter of reading the
body — their bodies are one load — but of identifying the object they read. That
is the next section.

## What was left unnamed, and why

123 of the 150 remain `fn_*`. 18 of them have 100 or more call sites and 3,687
sites between them, so this is a real gap rather than a rounding error:

| Address | Sites | Bytes | Shape |
|---|---:|---:|---|
| `0x00182994` | 529 | 12 | `*(u32 *)(*p + 0x3c)` |
| `0x0014481c` | 341 | 12 | `*(u32 *)(*p + 0x2c)` |
| `0x00178f9c` | 317 | 28 | lookup through `0x00183970`, then `+0x10` |
| `0x0017fde4` | 312 | 12 | `**(u32 **)(p + 4)` |
| `0x00174828` | 240 | 12 | `*(u32 *)(*p + 4)` |
| `0x006f7a84` | 236 | 24 | array slot `p->[4]->[4][p->[0x60]]` |
| `0x001638a0` | 236 | 12 | `return DAT_008931a8` |
| `0x006899f4` | 224 | 12 | virtual call to slot `0x24` of `p->[4]->[0x18]` |
| `0x006f7a9c` | 163 | 28 | array slot by `p->[0x5c]`, minus 0x1c |
| `0x006ba284` | 151 | 12 | `*(u32 *)(*(u32 *)(p + 0x9c) + 0xcc)` |
| `0x00176d68` | 145 | 12 | `**(u32 **)(p + 4)` |
| `0x00182988` | 126 | 12 | `*(u32 *)(*p + 0x60)` |
| `0x00163868` | 122 | 36 | writes a global, calls `0x00300f74` |
| `0x006f7a0c` | 116 | 20 | array slot by `p->[0x70]` |
| `0x006f7a5c` | 112 | 20 | array slot by `p->[0x78]` |
| `0x0017484c` | 110 | 12 | `*(u32 *)(*p + 0x30)` |
| `0x006ba274` | 106 | 16 | `(p[0x7f] - p[0x78]) >> 2` |
| `0x00689bd0` | 101 | 12 | virtual call to slot `0x24` of `p->[4]->[0x18]` |

The blocker is the same for almost all of them: the argument is one of three
singleton pointers stored at `0x008977e0`, `0x008977e4` and `0x008977e8`, all
constructed by the same 1,108-byte bootstrap at `0x0010803c`. The accessors read
fields of those objects or slots of their first-word tables, and nothing in the
accessor says what the object is. Naming them would require identifying the three
singletons — reading the bootstrap's ~50 constructor calls and the vtables they
install (for example `0x0081fe38` for the object stored at `0x008977e4`). That is
a separate investigation and is deliberately not guessed at here: a wrong name is
worse than an address.

Two smaller groups were left for the same reason:

* six 12-byte functions in `draft001` are virtual dispatchers to fixed slots
  (`p->[4]->vtable[0x24]`, `[0x30]`, `[0x34]`) of objects whose class is not
  identified; the slot number is not a name;
* the remaining drafts are record-zeroing runs and one-line getters produced by
  the pattern synthesiser, whose shape is already documented in their unit header
  and whose purpose is not recoverable from the instruction.

## Reproducing

```
tools/python/Scripts/python.exe -I build.py --image <your update CIA>
tools/python/Scripts/python.exe -I run_checks.py --quick --only references compile tests
```

The build must print `matched_code=135872` and `matched_functions=2904`, the same
figures it prints on `main` at the commit this pass started from. The naming pass
changes no measured byte; if either figure moves, the measurement is wrong, not
the name.
