# zlib 1.2.5 — unmodified upstream drop

**Version.** zlib 1.2.5.

**Origin.** `https://zlib.net/fossils/zlib-1.2.5.tar.gz`
tarball SHA-256 `6064e52e513facb0fbb7998c6413406cf253cfb986063d68f4771c2bf7a3f958`.

**Status of these files.** The `.c` and `.h` files in this directory are the
tarball's files, byte for byte. They are third-party code, not reconstructed
Nintendo source: their byte-identity with the original image is a property of
the vendor drop and of the measured compiler. Two of the functions
(`0x00730208`, `0x00736384`) are registered in the configured build through
`src/native/wave084-zlib/adler32.c`, labelled `third-party-byte-exact`; the
other eight are measured byte-exact by the `arm/` adapters but are not build
units yet (see the boundary at the end of this file). The only
addition is `shim/sys/types.h`, a two-line build-environment header that spells
`off_t` as the ARM32 `long` the upstream `zconf.h` expects; it contains no code
and is not part of zlib.

**How the image uses it.** The update image contains two statically linked zlib
builds. Ten of their functions are byte-identical to this source compiled with
the measured `armcc-4.1-b1454 -O3 -Otime` profile. The `arm/` adapters are the
only authored files: each includes one upstream `.c` unmodified and supplies
the split names (`fn_<address>`) and the `DAT_<address>` data names the
original linker resolved the references to. They contain no function body.

| adapter | functions | instruction bytes |
|---|---|---|
| `arm/adler32-copy1.c` | `fn_00730208` | 932 |
| `arm/adler32-copy2.c` | `fn_00736384` | 932 |
| `arm/inffast.c` | `fn_00739d08` | 1,304 |
| `arm/inflate-copy1.c` | `fn_00733bb0`, `fn_00739c74` | 224 |
| `arm/inflate-copy2.c` | `fn_00739ad4` | 76 |
| `arm/trees.c` | `fn_00729cd8`, `fn_00735650`, `fn_007361b0`, `fn_0073b23c` | 4,740 |

Ten functions, 8,208 instruction bytes; 8,836 original bytes including the
literal pools and the data tail each compiled section brings.

**What the drop cannot place.** The eight adapter-measured functions are not
registered because the public-compile census (`toolscripts/compile_sources.py`)
scans every unit textually for system headers and requires a reviewed header
profile; an unmodified upstream `.c` included by an adapter does not have one
for zlib 1.2.5. The adapters themselves are kept here as the measured packet,
and `docs/2026-11-12-vendor-drop-sweep.md` records the addresses and bytes.
Other functions of the same files (for example
`deflate`, `inflate`, `crc32`, `inftrees`) compile to the original's code but
the build cannot place them yet: armcc puts the shared `configuration_table`,
the CRC tables and the fixed-code tables in translation-unit `.constdata`
sections, and `toolscripts/image_link.py` discards `*(.data*) *(.rodata*)`
because it only places function sections. A second boundary is a
compiler-generated `__aeabi_memclr` reference, which source cannot rename and
the split has no name for. Both are build-capability gaps, not source gaps.

**License.** zlib license, reproduced in `LICENSE`; the upstream copyright
notice stays in every file that carries it.
