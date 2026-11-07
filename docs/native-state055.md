# Bounded state writer 055

The complete ARM body at `update-content0:main:0x006f95a4` writes a bounded word sequence through a global cursor/limit pair. The implementation deliberately uses a mechanical name: the original callers' broader rendering or gameplay roles have not been established by this packet.

The body contains 224 instruction bytes. Its following four-byte literal pool supplies the original global address `0x008bf790`; the next canonical entry is `0x006f9688`. The public `state055.c` and `state055.h` are byte-for-byte relocations of the first private frozen source packet. `relocation.json` records their identities without changing the private predecessor.

`state_write055(base, count, input)` takes two U32 words and an actual U32 pointer, preserves the first word as its return observation, and uses the declared `StatePair055` global. The pair occupies eight bytes on ARM and sixteen bytes on Windows x64/AArch64. Native pointers retain their full width. This independent storage binding does not establish the original containing context, global initializer or ownership/concurrency protocol.

The admitted count domain is 0 through 4096, with aligned, physically backed word storage and no count/address reservation overflow. The reservation is `(count & ~1) + 2*(count >> 7) + 2` words. Equality with the upper bound rejects the write and saturates the cursor to the limit; even a zero count performs that check. A NULL cursor/limit pair is a rejecting fixture and does not dereference the input.

Successful writes use blocks of at most 128 logical words. Each block publishes its first input word and a header, then copies `2*(block/2)` further words. Even blocks therefore read an additional physically backed word. That word is not replaced with zero. Input/output word arrays may overlap with the measured sequential effects, including the header overwriting a future input word. The declared pair itself must not overlap either array. No asynchronous observer, concurrent pair mutation or invalid backing is qualified.

The corpus has 83 sets on original ARM, authored ARM, real Windows x64 and a high-address AArch64 CPU model. Each checks the entire 64 KiB initialized data arena, cursor/limit and return observation; machine models also check callee-saved integer/VFP registers and SP. This is not whole CPU-stack or universal machine-state equivalence. The native arenas are above 4 GiB. Source execution loads only the newly compiled component, with no original executable bytes or original-helper execution.

Forty-nine of 56 original instructions execute. The remaining seven lie behind a copy-loop branch ruled out in the declared domain: the clamped block shifted right once is at most 64; adding `0x80000001` cannot set carry or produce zero, so the measured BLS always skips those PCs. The separate finite-invariant receipt pins the actual controlling instructions. It is not an overflow-domain claim.

Five compiled controls return normally and are rejected: accepting equal capacity, omitting full-block reservation overhead, zeroing physical padding, failing to saturate the cursor, and publishing the header after its payload. The last control requires genuine input/output aliasing. The original private AArch64 harness mistake, which incorrectly assumed register enum values were contiguous through X29, is preserved separately; the corrected guard names each actual register explicitly.

Run from the repository root with the pinned local Python/toolchain and private original inputs available:

```powershell
$env:PYTHONPATH = 'toolscripts'
tools/python/Scripts/python.exe toolscripts/native_state055_packet.py
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_native_state055.py -v
```

The packet rebuilds from the public paths, executes the 83-set corpus and controls, then repeats the corpus using a tiny source-only snapshot of the exact C/H. It compares the full case observations and deterministic linked artifacts, validates all input pins and exports compact metadata to `evidence/lanes/native-state055/leaf-v1`. It creates no repository, tool or original-image copy. The compact public observations retain full-arena hashes and the selected padding-read witness; larger synthetic read/write traces remain in `work/`.

The AArch64 artifact is a component CPU-model input, not an Android application or device test. The larger 37,064-byte candidate family, original global setup, SDK/address conversion, complete engine/game execution, exact matching and source admission remain outside this leaf packet. This packet grants zero source credit; independent coordinator review owns admission.
