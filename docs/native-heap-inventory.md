# Heap initializer inventory split

The seeded Ghidra candidate at ARM entry `0x105408` included a remote 160-byte
initializer at `0x10b980`. This inventory correction retains the other 204 bytes
under the original entry and assigns the complete 160-byte body to its true
entry. Its following 16-byte literal pool remains data. Discovered entries become
26,660; historical function completeness remains unproved.

The actual caller restores r4/LR at `0x106bc0`, then takes the unconditional
non-linking branch at `0x106bc4`. The initializer computes an argument before
creating its own frame, calls its two helpers and returns through the saved
caller LR. The owned-ARM branch scan finds that one incoming direct branch.
Caller/callee attribution moves the two initializer helpers to the new entry
and records the original entry's explicit tail dependency.

The unchanged reference producer is in
`evidence/lanes/native-sdk-heap062/inventory-v1/propose.py`. It writes its proposal
and ready receipt beside itself. Run a copied producer in an exclusive directory
under `work/` when reproducing the proof. The coordinator reproduced its complete
proposal bytes: sixteen direct-entry versus actual-tail-instruction comparisons
matched all 131,072 caller-arena bytes and 471,024 global bytes, with return,
callee-saved register, stack and FPSCR checks. Valid storage, enabled global flag
and nonzero supplied TLS identity are explicit prerequisites. The full startup
caller was not executed by this probe.

The historical census and prior inventory modules remain unchanged. The new
successor validates exact original hashes, all 40 observed instruction positions,
literal readers, call/return boundaries and byte-balanced exclusive ownership.
It changes neither the 7,051,280-byte initialized-text denominator nor the
5,128 exact source-linked bytes, and grants zero source credit.
