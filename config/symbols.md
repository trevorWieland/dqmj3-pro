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
