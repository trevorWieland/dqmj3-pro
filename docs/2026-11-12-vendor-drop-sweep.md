# Vendor-drop sweep: the large-function pool is not all game code

**Result this records.** The 2,341 undefined ARM functions at 512 bytes or more
(2,089,620 bytes) were scanned for structural families and for known vendor
drops. Ten functions, **8,208 instruction bytes** (8,836 original bytes
including pools and data tails), are byte-identical to **unmodified zlib
1.2.5** compiled with the measured `armcc-4.1-b1454 -O3 -Otime` profile. Two of them, the same 932-byte Adler-32 function linked twice, are registered
in the configured build through `src/native/wave084-zlib/adler32.c` and earn
the `third-party-byte-exact` label. The other eight -- `inflate_fast`,
`inflateEnd` and `inflateReset` (both copies) and four `trees.c` functions up
to 2,124 bytes -- are measured byte-exact by the six adapters under
`src/native/third_party/zlib-1.2.5/arm/`. They are not build units yet: the
public-compile census scans unit text for system headers and rejects an
unmodified upstream `.c` included by an adapter, because zlib 1.2.5 has no
reviewed public header profile. The measured bytes are reported here, and the
adapter packet is retained for the registration change rather than claimed as
configured-build credit.

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

## What matched, and what the build cannot place yet

Ten functions match. The boundaries are build capabilities, not source
questions:

* **Translation-unit data sections.** armcc places `configuration_table`,
  the CRC tables and the fixed-code tables in `.constdata` sections, and
  `toolscripts/image_link.py` discards `*(.data*) *(.rodata*)` because it only
  places function sections. `deflate`, `crc32`, `inflate` and `inftrees`
  compile to code the locator finds byte-for-byte, but a function that loads a
  discarded table cannot be linked at its original address. Placing a unit's
  non-text sections at the addresses the original pool words name would convert
  another ~15 KB immediately; that is the next tooling change, not a
  reconstruction project.
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
