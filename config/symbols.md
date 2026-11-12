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
