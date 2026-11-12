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
* **Near misses.** `compress_block` (`fn_0072a9b0`, 1,092 bytes) differs in six
  words from 1.2.5 and has a 24-byte larger extent; `inflate_table`
  (`fn_0073a470`, 1,548) differs in two words and eight bytes. Both are
  consistent with a patched vendor fork rather than a source-shape problem, and
  neither was searched because the permuter operates on a function definition,
  and these live inside an unmodified upstream file.

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
