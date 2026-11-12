# zlib 1.2.5 — unmodified upstream drop

**Version.** zlib 1.2.5.

**Origin.** `https://zlib.net/fossils/zlib-1.2.5.tar.gz`
tarball SHA-256 `6064e52e513facb0fbb7998c6413406cf253cfb986063d68f4771c2bf7a3f958`.

**Status of these files.** The `.c` and `.h` files in this directory are the
tarball's files, byte for byte. They are third-party code, not reconstructed
Nintendo source: their byte-identity with the original image is a property of
the vendor drop and of the measured compiler. The two Adler-32 functions
(`0x00730208`, `0x00736384`) are registered in the configured build through
`src/native/wave084-zlib/adler32.c`, labelled `third-party-byte-exact`. Seven
of the other eight (`inflate_fast`, `inflateReset`, the second `inflateEnd` and
the four `trees.c` functions) are configured units through the `arm/` adapters
below; the eighth, `inflateEnd` at `0x00733bb0`, is already reproduced
byte-exact by `src/native/wave058/initialize058.c`. The only addition to the
tarball is the `shim/` directory: reviewed build-environment headers that spell
the C library types and declarations zlib 1.2.5 uses. They contain no code and
are not part of zlib.

**How the image uses it.** The update image contains two statically linked zlib
builds. Ten of their functions are byte-identical to this source compiled with
the measured `armcc-4.1-b1454 -O3 -Otime` profile. The `arm/` adapters are the
only authored files: each includes one upstream `.c` unmodified and supplies
the split names (`fn_<address>`) and the `DAT_<address>` data names the
original linker resolved the references to. They contain no function body.

| adapter | functions | instruction bytes | configured unit |
|---|---|---|---|
| `arm/adler32-copy1.c` | `fn_00730208` | 932 | no, `wave084-zlib` reproduces it |
| `arm/adler32-copy2.c` | `fn_00736384` | 932 | no, `wave084-zlib` reproduces it |
| `arm/inffast.c` | `fn_00739d08` | 1,304 | yes |
| `arm/inflate-copy1.c` | `fn_00739c74` | 148 | yes |
| `arm/inflate-copy2.c` | `fn_00739ad4` | 76 | yes |
| `arm/trees.c` | `fn_00729cd8`, `fn_00735650`, `fn_007361b0`, `fn_0073b23c` | 4,740 | yes |

Ten functions, 8,208 instruction bytes; 8,836 original bytes including the
literal pools and the data tail each compiled section brings. `fn_00733bb0`
(76 bytes) is the eighth of the non-Adler set and is not duplicated here: it
is already a byte-exact reconstruction in `wave058`.

**How the drop is built.** The units declare
`publicHeaderProfile: zlib-1.2.5`, a reviewed public header profile in
`toolscripts/public_zlib_headers.py` that pins each upstream file's size and
SHA-256 and the quoted includes it may have. That is what lets the
public-compile census (`toolscripts/compile_sources.py`) accept the upstream
text instead of rejecting its system headers. zlib 1.2.5 predates `Z_SOLO`, so
its headers include `<stddef.h>`, `<string.h>`, `<stdlib.h>` and
`<sys/types.h>` even in a freestanding build; armcc 4.1 supplies the first
three, and `shim/` supplies the fourth plus minimal declarations for the
Census's Clang compile, which ships no C library headers. The adapters also
declare `dataProfile: original-address`, which lets the placement carry a
unit's translation-unit sections to the addresses the original image proves
(`toolscripts/translation_data.py`); `arm/inffast.c` also declares
`extentProfile: owned`, because the split attributes an extra range inside
`fn_00739d08` to that function and the compiled section reproduces the whole
owned range. These four units need no such section
because armcc folds the tree lookups and inlines the copy, but the same drop's
`deflate`, `inflate`, `crc32` and `inftrees` do, and that path now exists.

**What the drop still cannot place.** A compiler-generated `__aeabi_memclr`
reference has no source spelling and the split has no name for it, so one
`deflateReset` remains blocked. `compress_block` (`fn_0072a9b0`) and
`inflate_table` (`fn_0073a470`) are near misses of the stock 1.2.5 source, not
placement problems.

**License.** zlib license, reproduced in `LICENSE`; the upstream copyright
notice stays in every file that carries it.
