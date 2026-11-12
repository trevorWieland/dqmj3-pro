# Vendor-drop sweep: the large-function pool is not all game code

**Result this records.** The 2,341 undefined ARM functions at 512 bytes or more
(2,089,620 bytes) were scanned for structural families and for known vendor
drops. Ten functions, **8,208 instruction bytes** (8,836 original bytes
including pools and data tails), are byte-identical to **unmodified zlib
1.2.5** compiled with the measured `armcc-4.1-b1454 -O3 -Otime` profile. All
ten are registered in the configured build. The two 932-byte Adler-32 copies
are `src/native/wave084-zlib/adler32.c` and earn the
`third-party-byte-exact` label. One of the other eight, `inflateEnd` at
`0x00733bb0`, was already reproduced byte-exact by
`src/native/wave058/initialize058.c`; the remaining seven are configured build
units through the four adapters under
`src/native/third_party/zlib-1.2.5/arm/`, also labelled
`third-party-byte-exact`. Registering them needed two build capabilities that
did not exist: a reviewed public header profile for the 1.2.5 tree, and a
placement path that can carry translation-unit data. Both are described below.

That changes the plan for the remaining class: the pool contains statically
linked public libraries, and a pinned vendor drop is the cheapest credit in the
project — one compile per function, no reconstruction and no permuter.

## How the family scan works

`work/bigfun/scan_families.py` fingerprints every pool function from the
census disassembly on three levels:

* **bytes** — every instruction encoding identical: the same code at another
  address. That is a template instantiation or a second link of the same object.
* **const** — same mnemonic and operand shape after abstracting immediates and
  branch targets: the same code with different constants.
* **opcode** — same mnemonic sequence: the same control shape with different
  registers.

The pool yields 152 families. The large ones are C++ standard-library
instantiations in the `0x0076..0x007a` region: twelve byte-identical 1,628-byte
red-black-tree erases (19,536 bytes), seven 1,632-byte variants, six 1,836-byte
variants, and several two- and three-member groups, plus their game-code
instantiations at `0x0011b908` and neighbours. Quicksort instantiations appear
as 932-byte and 1,344-byte groups. These are templates, not vendor drops in the
zlib sense, and they are not converted here.

## Finding the vendor: identify by constant, then by bytes

The first pool function read as Adler-32 immediately: `0xfff1` (65521) and
`0x15af`/`0x15b0` (5,551/5,552), the one-byte fast path, the deferred `Z_NULL`
check and the sixteen-byte unrolled sum. zlib 1.2.7's `adler32.c` — already
pinned in the tree as a public reference — compiled at the measured profile is
byte-identical on the first try to `0x00730208`, and its literal pool (BASE,
the reciprocal multiplier, NMAX) matches too. The byte-identical twin at
`0x00736384` followed with the same source.

Version identification for the rest used compiled instruction sizes:

| zlib version | `deflate()` size at the measured profile |
|---|---|
| 1.1.4 | 956 |
| 1.2.1 | 1,540 |
| 1.2.2 | 1,540 |
| 1.2.3 | 2,968 |
| 1.2.4 | 3,968 |
| 1.2.5 | 3,968 |
| 1.2.6 | 3,872 |
| 1.2.7 | 3,872 |
| 1.2.8 | 3,872 |
| 1.2.11 | 3,896 |
| 1.3.1 | 3,868 |

The image's second copy is `0x00736c0c`, 3,968 bytes: 1.2.4 or 1.2.5, and its
prologue (`mov r7, r1`, `cmp r7, #5`) matches both. Its neighbours and tables
then identified `_tr_*`, `inflate_fast`, `inflateEnd` and `inflateReset` exactly
with 1.2.5, so 1.2.5 is the drop used. The image's first copy at `0x00730a94`
is 3,848 bytes with a different prologue (`mov r6, r1`); no standard zlib
release compiles to that size, so the first copy is a vendor fork patched
against an older base. Its `trees.c` functions still match stock 1.2.5 byte for
byte, which is how four of the shipped functions are the first copy's.

## The locator and the adapter (the reusable part)

`work/bigfun/locate.py` finds a compiled function in the original image without
any symbol information. armcc leaves call and data references as relocations,
so every non-relocated word of a compiled function is the exact word the
original holds if the source is the original's. The longest run of such words
is a needle; the whole function is then verified with the relocated words
wildcarded. Every located function starts at a split address, so the identity
is unambiguous.

`work/bigfun/vendor_build.py` turns that into a build unit:

1. compile the upstream `.c` with the unit's profile and split it per function;
2. locate every function it defines;
3. for each relocation in a located function, read the word the original
   encodes at the same offset and decode it (`bl` target, absolute pool word);
4. map every target to the split's name (`fn_<address>`) or, for data, to the
   project's `DAT_<address>` shape;
5. emit an adapter that includes the upstream file unmodified with those
   `#define`s in front of it.

The rename is what makes a vendor drop measurable without editing it. The
adapter is ordinary C, the function body is upstream's, and a wrong mapping can
only lose a match.

## What matched, and what the build still cannot place

Ten functions match. The boundaries were build capabilities, not source
questions:

* **Translation-unit data sections.** armcc places `configuration_table`,
  the CRC tables and the fixed-code tables in `.constdata`/`.data`, and
  `toolscripts/image_link.py` used to discard every non-function section.
  `toolscripts/translation_data.py` now proves a unit's data section address
  from the original image instead of assuming it: an `R_ARM_ABS32` relocation
  names the table, and the word the original image holds at that relocation
  minus the object's own addend and symbol value is the address the table had.
  A descriptor that points at a table is proven one level up by the same rule.
  Every observation of a section must agree; a section whose address cannot be
  proven is not placed, and a function that loads it is reported instead of
  being linked against an invented address. The placement link refuses a plan
  that did not land where it was proven, and the image link compares the
  placed table's bytes with the original at that address. The registered
  `trees.c` functions happen not to need this (armcc folds the two tree
  lookups and inlines the copy), but the same drop's `deflate`, `crc32`,
  `inflate` and `inftrees` do: that is the ~15 KB this boundary was holding,
  and `tests/test_translation_data.py` exercises the mechanism on a real
  compiled table.
* **Compiler-generated helpers.** `memset(p, 0, n)` becomes a
  `__aeabi_memclr` call after preprocessing, so a source-level rename cannot
  reach it and the split has no name for it. One `deflateReset` is blocked by
  exactly this. Defining the helper as an absolute symbol (the
  `config/script-constants.json` mechanism, extended to functions) would close
  it.
* **Near misses that were a measurement artefact.** `compress_block`
  (`fn_0072a9b0`, 1,092 bytes) and `inflate_table` (`fn_0073a470`, 1,548) were
  first read as differing from 1.2.5, by six words and by two words plus eight
  bytes. They do not differ: the "different" words are relocation words, and the
  extra bytes are the function's own literal pool. Once the relocation words are
  wildcarded and the tables they name are placed at the addresses the image
  proves, both are byte-identical and both are registered (see the second
  registration pass below). They were never a vendor fork.

## Registering the drop

Seven functions are configured units. Each adapter includes one unmodified
upstream `.c` and supplies the split names the original linker resolved:

| unit | functions | instruction bytes |
|---|---|---|
| `arm/inffast.c` | `fn_00739d08` (`inflate_fast`) | 1,304 |
| `arm/inflate-copy1.c` | `fn_00739c74` (`inflateReset`) | 148 |
| `arm/inflate-copy2.c` | `fn_00739ad4` (`inflateEnd`) | 76 |
| `arm/trees.c` | `fn_00729cd8`, `fn_00735650`, `fn_007361b0`, `fn_0073b23c` | 4,740 |

The eighth, `fn_00733bb0` (`inflateEnd` of the first link), is not a vendor
unit: `src/native/wave058/initialize058.c` already reproduces it byte-exact,
and defining the same split function twice is refused. The adapter at
`arm/inflate-copy1.c` therefore measures only this copy's `inflateReset`. The
old four-byte `fn_00739d08` placeholder in `src/native/wave056/stream056.c`
was removed: the split gives that address 1,304 bytes, and the vendor drop is
what the address actually holds.

The units declare `publicHeaderProfile: zlib-1.2.5` and
`dataProfile: original-address`; `arm/inffast.c` additionally declares
`extentProfile: owned`, because the split attributes a 500-byte extra range at
`0x0073a244` to `fn_00739d08` (a tail-called helper the census folded into its
caller) and armcc emits the function's data tail as one section that
reproduces the whole owned range. The declaration lets the placement reach a
range the function itself owns; the bytes are still compared with the original
before any credit, and no function may reach into another function's range. The header profile is described in
`toolscripts/public_zlib_headers.py`: it pins each reviewed upstream file's
size and SHA-256 and the quoted includes it may have, so the public-compile
census accepts the upstream text instead of refusing its system headers.
zlib 1.2.5 predates `Z_SOLO`, so it includes `<stddef.h>`, `<string.h>`,
`<stdlib.h>` and `<sys/types.h>` even in a freestanding build; armcc 4.1
supplies the first three, and the pinned `shim/` directory supplies
`<sys/types.h>` and, for the Clang census compile, minimal declarations of the
three C library headers. The adapters carry `#if defined(__clang__)` pragmas
that silence Clang 21's K&R-definition and negative-shift diagnostics under
the census's `-Werror`; they do not affect the armcc object.

## Second registration pass: the rest of the drop

The first pass credited the functions that needed no translation-unit data. The
second pass registers the rest of what the same unmodified 1.2.5 sources
reproduce. Fourteen more functions credit, **11,436 instruction bytes**, and
**21,518 bytes** of the drop's tables are now placed from the compiled unit
instead of retained from the original.

### The missing split entries, and the extent correction

`crc32` tail-branches to its static big-endian body, which the census had left
unowned. The image holds two byte-identical copies, each `0x5B8` (1,464) bytes
back to back in the gap `0x0072ADF4..0x0072B97C`:

| entry | address | decoded entry | raw extent |
|---|---|---|---|
| `fn_0072ae0c` | `0x0072ae0c` | `push {r4,r5,r6,r7,r8,sb}` | 1,460 instructions + 4-byte pool |
| `fn_0072b3c4` | `0x0072b3c4` | same body | 1,460 instructions + 4-byte pool |

Both are functions, not continuations: each starts at a four-byte-aligned ARM
entry after a zero-filled alignment pad, saves its callee-saved registers,
ends in `bx lr`, and its last word is the literal pool that names the unit's
CRC table. The two copies tile the gap exactly -- `0x0072AE0C..0x0072B3C4`,
then `0x0072B3C4..0x0072B97C`, where the next split entry begins.

Adding them exposed a second bookkeeping error. The census gave `crc32`
1,240 bytes and crc32_big 1,464, each including its four-byte literal pool;
the build credits a function only when the compiler's *instruction* size equals
the split extent, so all four entries were unplaceable as recorded. Every other
credited function of the drop records instructions in the primary and leaves the
pool in the gap (adler32 is 932 + 12, inftrees 1,548 + 8). The four extents are
corrected the same way: the two existing entries shrink by four bytes and the
two new entries record 1,460.

**The byte invariant.** The two additions are newly owned; the two corrections
move four pool bytes per function from `primary` to unowned. Nothing else moves:

| | before | after |
|---|---|---|
| functions | 26,990 | 26,992 |
| primary bytes | 5,127,402 | 5,130,314 |
| extra bytes | 734,180 | 734,180 |
| owned bytes | 5,861,582 | 5,864,494 |
| uncovered text bytes | 1,923,878 | 1,920,966 |

`5,127,402 + 2,920 (additions) - 8 (corrections) = 5,130,314`. No split address
changed, so no placed function moved; the two corrected entries were never
placed before this pass. `config/promoted-extras.json` records the additions and
corrections under `laterAdditions` with this arithmetic, and
`tests/test_promoted_extras.py` recomputes it from the split.

### The adapters

Each unit includes one unmodified upstream `.c` and supplies only names. A unit
whose compiled section reproduces the extra ranges the split attributes to the
same function declares `extentProfile: owned` (`inflate` does: its 156-byte
instruction extent is followed by the 6,408-byte switch table the split records
as the function's own extra ranges).

| unit | split functions | instruction bytes | tables placed |
|---|---|---|---|
| `arm/crc32-copy1.c` | `fn_007305b8`, `fn_0072ae0c` | 2,696 | `.constdata` 8,192 at `0x007f0b58` |
| `arm/crc32-copy2.c` | `fn_00736734`, `fn_0072b3c4` | 2,696 | `.constdata` 8,192 at `0x0080a878` |
| `arm/deflate-copy1.c` | `fn_00731cf0`, `fn_0072e014` | 360 | none |
| `arm/deflate-copy2.c` | `fn_00737c8c` | 224 | none |
| `arm/inflate.c` | `fn_00738130`, `fn_00739ad4`, `fn_00739c74`, `fn_007457cc` | 676 | `.constdata` 2,214 at `0x007eac74` |
| `arm/inftrees.c` | `fn_0073a470` | 1,548 | `.constdata.1` 252 at `0x0080c878` |
| `arm/trees.c` (extended) | `fn_00729cd8`, `fn_0072a9b0`, `fn_00735650`, `fn_00735950`, `fn_00736060`, `fn_007361b0`, `fn_0073abac`, `fn_0073b23c` | 8,200 | `.constdata` 2,532, `.constdata.1` 76, `.data` 60 |

`arm/inflate.c` replaces the first pass's `inflate-copy1.c` and
`inflate-copy2.c`: `inflate` tail-calls `inflateReset`, and a unit that includes
the file must map that definition to place the call, so one unit now measures
both copies' functions together. `src/native/wave054/crc.c`, a bitwise CRC draft
that measured 0 percent, is excluded from active linking and kept as evidence;
its `crc.h` declarations stay in use.

`crc32.c` also includes `<limits.h>` to pick its four-byte integer type. armcc
4.1 supplies that header and its include directory comes first in the measured
build, so the object is unchanged; the freestanding Clang census has no libc, so
a reviewed `shim/limits.h` with the ARM32 EABI constants is pinned alongside the
other shims.

Two build capabilities were corrected while registering, each proved by this
drop:

* `translation_data` now takes the section address modulo 2^32. `inftrees`'
  pools hold `lbase - 514` as a two's-complement addend, so the plain difference
  is negative even though both observations agree on `0x0080c878`.
* A data section is placed only when a function that survives the screen needs
  it. The plan is computed before functions are screened, and a section that
  only a dropped function named would otherwise be linked with its relocations
  to discarded code resolved to zero.
* `image_link` no longer treats a switch table's local case labels as
  references the split must name. The labels are defined in the function's own
  section and the placement link resolves them there; cross-section references
  are still refused.

### What the second pass measured

```
report:    matched_code=135,872  matched_functions=2,904  units=339
compiled:  2,945 functions from source (138,544 instruction bytes,
           26,856 data bytes), 2,904 byte-identical
retained:  24,047 functions, 6,885,880 text bytes, 1,291,758 data and bss bytes
image:     differs from the original in 41 functions
```

Against the first pass's 124,436 bytes and 2,890 functions, that is **+11,436
instruction bytes and +14 functions**, and 21,518 fewer retained data bytes.
Every placed table was compared with the original after the link: no data
section differs.

### What still cannot be registered, and why

* **`__aeabi_memclr`.** `memset(p, 0, n)` is lowered to this two-argument AEABI
  helper after preprocessing; the name is not visible to the preprocessor and
  the split has no symbol for it. `deflate` (3,968 + 256), `deflateReset` (308)
  and `fill_window` (824) cannot be placed for this reason, and with them
  `deflate_fast` (1,520, whose call to `fill_window` then has no target) and
  `deflateInit2_` (624, which tail-calls `deflateReset`). A source-level
  rename cannot reach the generated call, and rewriting the call in the vendor
  text would be adapting the source to the compiler, not measuring it. The
  clean fix is the recorded one: define the helper as an absolute symbol, the
  `config/script-constants.json` mechanism extended to functions.
* **No split entry.** `deflate_slow` (1,856 at `0x0072cd88`) and
  `deflate_stored` (404 at `0x0072d6b8`) are real and byte-exact, but the split
  names neither, so there is no address to place them at and no name to map.
* **A duplicate copy with no second unit.** The second `scan_tree` copy at
  `0x0073aa9c` (272) does have an entry, but one unit can map the upstream
  `scan_tree` to one address only; the copy at `0x0073abac` is the one
  `_tr_flush_block` calls. A second adapter would credit the other 272 bytes and
  is left for a later pass rather than adding a unit for one small function.
* **Wrong split boundary.** `deflateBound` (252 at `0x00731bf0`) starts four
  bytes after `fn_00731bec`; `inflateInit_` (16) and `inflateInit2_` (312) are
  merged into the single `fn_00739b20` entry, and the first link's
  `inflateInit_` at `0x00733d68` starts four bytes into `fn_00733d64`. Each is
  a re-partition of an existing primary and needs its own extent proof; they are
  reported here rather than silently re-cut.

## Cost

| step | wall time |
|---|---|
| family scan of the 2,341-function pool | 2 min |
| adler32 identification and first match | 4 min |
| locator + adapter harness (one-time) | 25 min |
| version sweep, 11 zlib releases compiled | 6 min |
| six adapters, 850-unit compile check | 4 min |
| **per additional vendor function once the adapter exists** | **~2 s** |
| from a new library to its first match | 10–20 min |

The throughput this implies is not the reconstruction throughput: a pinned
vendor drop converts at one compile per function. The remaining 1.5 MB of the
large-function class contains at most a few tens of KB of this kind — the two
zlib links are the bulk of it — so vendor work is a one-off ~20 KB, not a path
to the class. The class itself is still the 152 structural families, and the
largest of those are the C++ template instantiations that need the
large-function method, not an adapter.
