# Bounded state selector 055

The original `update-content0:main:0x007440bc` is a 3,944-byte ARM body in two canonical ranges, with 48 internal and 16 following literal-pool bytes excluded. Its three supported selectors pack descriptor scalar/float fields into a shared word cache and emit records through the unchanged writer at `0x006f95a4`. These measured operations do not establish a complete rendering API, game state system or native game build.

Its actual other direct target is the four-byte ARM veneer `0x00166b28`, branching to `0x0015fa8c`. That address-arithmetic family owns 436 instruction bytes across eleven entries, including the veneer. All 109 original helper PCs execute in 156 separate cases. The main selector has 424 cases reaching all 986 original PCs. Original reference runs execute the actual complete helpers and writer, with no SDK answer hooks or cached results supplied to authored C.

The source uses a named 108-byte descriptor, an independently provisioned context through offset `0x7f0`, and an actual 32-element U32 cache array at offset `0x770`. This is bounded declared component storage, not a claim about the original complete allocation/class. The first four selector bytes at offset `0x104` are physically backed; selectors 0 through 3 are qualified. Three selectors update records; the fourth exercises measured error/early-return branches. Higher selectors, NULL/invalid object pointers, concurrent access and source-descriptor/context overlap are unsupported.

All genuine native context, descriptor, output and region-object pointers retain their full width. The descriptor's `target_address` and helper window/offset words are explicit U32 **target protocol tokens**. They are not native virtual/physical addresses. In the fallback region binding, ARM computes the original object pointer plus 128; native providers use a separate declared `target_address` member. That member is a portable binding field, not an inferred original field. Native token values are supplied independently and never obtained by truncating host pointers. Production initialization/ownership of the original globals remains unqualified.

Input/output aliasing is supported for the actual cache U32 array and physically backed independent output word arrays. The source descriptor and declared pair do not alias those objects. The six-word final-unit record reads cache word 31 as real physical padding; that word remains nonzero and is copied. The first implementation declared only 31 words despite having physically backed memory; its header/build/report are retained under `attempts/underdeclared-cache-backing`. The corrected declared array has 32 elements. No frozen predecessor changed.

The first selector appends two words when `cursor < limit`. A fixture with thirteen logical words consequently returns `cursor == limit + 4`; actual backing beyond that logical limit is required. This packet preserves the measured check and does not infer that the limit equals the physical allocation end. Invalid descriptor formats also preserve actual partial cache updates, rather than introducing rollback. Cache reads after an aliased writer retain their true publication order.

The independent model operates on a byte array, declarative bitfield/filter tables, binary32 rounding steps and the separately qualified writer model. All initialized 64 KiB data arenas, logical pair offsets and returns match original ARM, authored ARM, real high-address Windows and high-address AArch64 CPU-model execution. ARM/AArch64 checks preserve their ABI callee-saved integer/VFP state and SP. Original and authored FP status values are retained separately; sticky exceptions/condition bits and arbitrary floating-environment observers are not claimed equivalent. Tests include signed zeros, subnormals, infinities, quiet/signalling NaNs, maximum finite values, conversion saturation and rounding boundaries.

Six selector controls and four address controls return normally on all three source paths and are rejected by independent models. They cover the two-word append condition, cache-tail prefetch, premature error return, flag publication after aliasing, reserved dimension bits, bias quantization, fixed-window endpoint, mapped-window endpoint, conversion offset and region boundary. No original or frozen code is modified.

The first early-return misreading is retained at `attempts/initial-early-return`. All current C is ordinary typed source, without instruction translation, compiler-output patches, original executable bytes or callbacks into original helpers. Windows uses the normal `_fltused` data marker; it is not recovered game code.

Reproduction from the repository root:

```powershell
$env:PYTHONPATH = 'toolscripts'
tools/python/Scripts/python.exe toolscripts/native_caller055_packet.py
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_native_caller055.py -v
```

The snapshot contains only six exact C/H files, under 20 KiB, and reproduces both components' observations and six linked artifacts. It is not a full cold repository replay. No repository/tool/CIA tree copy is created. Shared registries, schemas, historical packets and source credit remain untouched. No Android OS/device, actual native GPU address mapping, full family/engine/game or matching claim follows.

The public four C/H files are exact byte copies of frozen `work/native-state055/caller-v1`, whose ready SHA256 is `5c90ca7194821a8489941ad0f064e25918f7a5f8621284da8f7444e8628aabc3`. Public reproduction uses `native_caller055_*` tools and private scratch output under `work/native-state055-caller-public/v1`; compact reports live under `evidence/lanes/native-state055/caller-public-v1`. The separate `native_state055_*` leaf packet stays unchanged. `--verify` checks the public packet pins without executing the original program. `native_caller055_preflight.py` independently compiles each new public C for all three targets without original inputs.
