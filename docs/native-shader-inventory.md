# Shader array callback inventory

The reviewed inventory adds ARM entry `0x17199c`, observed as the actual callback
argument to Thumb array constructor `0x101a1c` from constructor `0x1604d0`.
The measured element stride is `0x28c` and count is one. The count comes from the
caller record field at offset `0x18`; it is not a static constant for every caller.

The body contains 28 ARM instruction positions and 112 bytes, including its
internal `0x171a00` to `0x1719e0` loop backedge and final `BX LR`. The successful
original constructor run observed every instruction position. The adjacent
eight-byte VFP literal pool ends at the next canonical function, `0x171a14`, and
is excluded from instruction accounting. The validator checks the original
module, instruction/pool hashes, complete execution-position witnesses, caller
ownership, selected callback literal and ARM/Thumb transfer identities.

`toolscripts/native_shader_inventory.py` extends the unchanged file inventory
reader. Its reviewed configuration and compact witnesses are public metadata;
the original executable and full private constructor capture remain private.
The initial validator incorrectly assumed a straight-line body. Its rejected
attempt is retained under `work/shader-inventory-attempt001`; the successor checks
the actual internal branch rather than omitting it.

The discovered function count increases from 26,658 to 26,659. The initialized
native-text denominator remains 7,051,280 bytes, exact source-linked bytes remain
5,128, and the new entry receives zero source credit. This discovery does not
establish historical function completeness or shader, GPU or whole-game source
coverage. The working-C registry remains separate.
