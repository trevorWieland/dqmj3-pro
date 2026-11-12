# The native text split (`config/symbols.txt`)

One line per function of the measured update main ARM image, `update-content0`.

```
<address> <mode> <size> <name>
+<address> <mode> <size> <name>
```

- `address`: eight lowercase hex digits, no `0x`. On a primary line it is the
  function's entry and the start of its contiguous symbol extent.
- `mode`: `arm` or `thumb`. ARM entries are four-byte aligned, Thumb two-byte.
- `size`: decimal bytes of the extent.
- `name`: `fn_<address>`. The address is in the name, so a symbol places itself
  and no separate name table is needed to measure it.
- `+` lines list extra original ranges the same function owns outside its
  contiguous extent (split bodies, cold tails). They record ownership; they are
  not part of the symbol's ELF size and never earn source credit.
- Lines are address-sorted and extra ranges follow their owner. Blank lines and
  lines starting with `#` are ignored.

Every primary extent lies inside the initialized text segment the ExHeader
declares, primary extents never overlap, and each size stops at the next entry so
every byte has at most one owning function. Bytes no function owns (literal
pools, alignment, unclassified text) stay in the denominator and are retained
from the original image.

The file was generated once from the seeded Ghidra census entry addresses, modes
and primary ranges, with 107 overlapping pairs resolved in favour of the later
entry. It is now source: edit it directly, and never regenerate it from a tool
whose output is not in the repository.

## Extra ranges, and the 2026-11-12 promotion

An extra range is a range the census attributed to a function that has no entry
of its own. The extras are not all the same thing, and the difference matters:

- a range that a function body branches to at its first byte, that saves the
  callee-saved registers it uses and returns to its caller is a **tail-called
  helper**. The original source had it as a separate function; the census folded
  it into the caller because a tail call is a `b`, not a `bl`, so nothing in the
  image calls it by name;
- a range that starts mid-body -- it uses the caller's frame or returns into the
  caller's code -- is the owner's own code placed elsewhere, and it is not a
  function entry;
- an interworking veneer (`add ip, pc, #n` / `bx ip`), an absolute jump slot
  (`ldr pc, [pc, #-4]`) and a bare return shared by several functions are
  compiler islands, not functions.

`toolscripts/extras_inventory.py` tests every extra against that distinction and
reports each one's category and the reason it was not promoted. On 2026-11-12,
417 of the 2,343 extra ranges were verified as function entries and promoted to
primary lines: each kept its address, mode and size, its owner lost one `+` line,
and the owned-byte total did not move. The header counts record the result:
26,990 functions, 5,127,402 primary bytes and 734,180 extra bytes, 5,861,582
owned bytes before and after. The remaining 1,926 extras are continuations,
compiler islands or unreferenced ranges and stay ownership-only; they never earn
source credit.

## The 2026-11-12 crc32_big additions

Two functions the census had left unowned are now primaries. `crc32_big` is the
static big-endian CRC body each of the image's two zlib links tail-calls; the
addresses are `0x0072ae0c` and `0x0072b3c4`, and the two 1,464-byte ranges tile
the previously unowned gap `0x0072adf4..0x0072b97c` exactly.

Adding them also corrected four extents. The census recorded `crc32` as 1,240
bytes and `crc32_big` as 1,464, each including the function's four-byte literal
pool. The measurement credits a function when the compiler's instruction size
equals the split extent, and every other credited pool is outside its primary
(adler32 is 932 code + 12 pool; inftrees is 1,548 + 8). So `fn_007305b8` and
`fn_00736734` are corrected to 1,236, the new entries record 1,460, and each
pool stays unowned text the image link retains.

The arithmetic is explicit because the additions are newly owned and the
corrections shrink existing primaries:

| | before | after |
|---|---|---|
| functions | 26,990 | 26,992 |
| primary bytes | 5,127,402 | 5,130,314 |
| extra bytes | 734,180 | 734,180 |
| owned bytes | 5,861,582 | 5,864,494 |
| uncovered text bytes | 1,923,878 | 1,920,966 |

No address changed, so nothing already placed moved.
`config/promoted-extras.json` carries the additions and corrections under
`laterAdditions`, and `tests/test_promoted_extras.py` recomputes the table.

