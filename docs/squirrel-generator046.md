# Generator Yield and Resume on the complete VM

The 046 component operates directly on the frozen 040 SqVm040 allocation: 168 bytes on the target and 264 bytes on native 64-bit hosts. It uses the exact opaque 044 generator (120/192 bytes), 022 CallInfo (48/72 bytes) and 028 Trap (16/24 bytes). It never treats an old 020/022/028 fixture VM as the full VM. Frozen 044 and 040 files remain unchanged.

The measured Yield entry 0x19289c owns 668 instruction bytes plus 100 bytes of inline strings/pools before the generator factory. It copies the active frame with real closure ownership, resizes saved stack storage, transfers VM stack values, retains varargs in reverse order, moves traps, removes the saved generator backlink and publishes suspended state 1. Repeated Yield in state 1 follows the real original literal-error path; state 2 has its distinct original message, including the game's differing wording.

Resume 0x19e378 owns 1200 instruction bytes in two ranges, separated by 60 bytes of strings/pools. It grows or contracts typed call-frame storage, assigns the saved closure with correct prior-owner disposal, installs the target and generator, restores traps and stack values, transfers reverse varargs and publishes running state 0. The original repeatedly clears saved stack slot 0 rather than the copied index. Values in later saved slots therefore retain their owners. The C preserves that behavior.

The fixture explicitly provisions the complete declared 040 VM/shared objects. Normal state tests cover empty/scalar/reference stacks, actual 011 prototypes, 013 native closures, 015 strings and 017 script owners, frame-pool growth and contraction, preprovisioned inactive last-owner frames, trap restoration and constrained resumer capacities. A suspended-failure case first executes real Yield, then attempts Yield again. Active/dead Resume and dead Yield short-circuit error states are separately labeled fixtures. Preparation across caller-activation boundaries is a typed provisioner, not recovered Execute or LeaveFrame code.

Errors execute actual original 19813c and hash-guarded SDK formatting on the reference side. Authored literal handling uses real source scratch allocation, 015 interning and publish-before-old-owner-release behavior on the actual 040 error field. Only literal strings are admitted; general printf is not substituted or claimed. Checked nonrecycling allocation services preserve exact requested sizes and record allocation edges. An independent graph model derives value/frame/trap/byte allocation roles from actual roots and reallocation edges, checks native budgets and validates raw high-address VM/frame/generator/object topology.

The positive corpus compares original ARM and authored ARM complete comparison arenas, real Windows C execution above 4 GiB, and Android AArch64 objects in a CPU model above 4 GiB. Raw ARM arena hashes are preserved and compared without callback aliases or normalization. Native models account for genuine pointer and structure widths. Ordered free observers also read the then-current error and frame ownership/scalars, so equal final heaps cannot hide early publication or lifetime differences.

Qualification conditions distinguish actual missing providers from constant/invariant paths. Yield's eleven unobserved PCs test reference ownership of the fixed NULL temporary. Resume has eleven analogous NULL construction/cleanup PCs and five last-owner varargs-pop PCs excluded by positive nonoverflowing stored ownership. Four debug-invocation PCs lead to the unrecovered 1a0d30 provider; NULL and same-closure suppression are measured. Debug invocation is a real remaining boundary. OOM/assert exits, GC, variable formatting, zero/overflowing stored owners, whole Execute, whole-game behavior and physical Android execution remain outside this packet.

The linked Android library uses normal max/common 16 KiB linker flags and checks PT_LOAD alignment plus the measured GNU_RELRO containing/following segment relationship. This remains an Android-object packaging/model result, not an Android OS or physical-device claim.

Run with the pinned tools and private update image already available:

```powershell
$env:PYTHONPATH='toolscripts'
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_state_execution.py --output-dir work/squirrel-generator046/primary-actual-suspended
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_state_controls.py --output-dir work/squirrel-generator046/controls-actual-suspended
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_generator046.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_state_replay.py
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_state_packet.py
```

The copied replay rebuilds all targets and controls and checks complete report/artifact identity. Its external Python interpreter/packages are explicit. Original images, private disassembly and raw arenas remain under ignored work/generated paths. The packet grants no source/inventory admission or duplicate 044/008/provider credit. Root independently reviews and integrates qualified interfaces; 047's actual full-VM execution engine is a separate component.
