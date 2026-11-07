# Generator factory and final-owner lifetime, stage A044

This is a new ordinary C provider for the measured 120-byte target generator and 192-byte native generator. It embeds the exact named opaque collectable base from 012, genuine 017 script owners,011 compact prototypes,013 native closures,014 weak objects and 015 byte strings. It does not reinterpret the older 008 collectable/vtable ABI. Existing 008 lifetime bytes receive no duplicate credit.

The actual factory at 0x 192b9c is 268 instruction bytes. It allocates, initializes its declared fields, temporarily retains the script closure, publishes the retained closure and links the generator into the shared chain. Eight saved-frame fields remain unwritten until later state capture. The fixtures preserve their raw A5 bytes and observe them as unsigned bytes; they never interpret those bytes as pointers. The NULL allocation path returns normally.

The 40-byte release at 0x202dcc invokes the actual typed destructor and frees the complete allocation. The 264-byte destructor at 0x202e68 unlinks ordinary list members, frees traps, releases the saved closure, destroys varargs before stack values, releases the owned closure, then invalidates an attached weak target before final allocation release. A separately detached high-bit fixture exercises the measured skip-unlink branch; it does not establish a garbage collector.

Thirty-four pre/post-cleanup sets execute the real original ARM code and authored ARM code with identical complete 458,752-byte comparison arenas, real native Windows code above 4GiB, and Android AArch64 objects in a CPU model above 4GiB. Independent native validation checks allocation sizes, actual typed vtables, high pointer topology, owners, weak targets and ordered frees. The real same-script saved/owned aliases and last-owned script/prototype disposal are included. All 10 release and 66 destructor PCs are observed. The factory has 61 of 67 PCs observed: its NULL-script panic and wrapped temporary-owner release contexts remain outside this normal-count/non-NULL domain. No complete factory qualification is claimed.

Four normally returning controls alter saved-frame initialization, vector destruction order, weak invalidation/free order and unlink/trap-free order. Three finish with the identical final ARM arena and are rejected by ordered observations.

The fixture provisions an actual named 040 shared-state allocation and the exact nested 012 common chain plus explicit 015 string-table bindings. This is a bounded provisioner, not recovered shared-state initialization. Allocation/free services are explicit, deterministic, nonrecycling and checked for exact size and duplicate frees. Callbacks do not interpret incomplete saved-frame fields. Yield, Resume, generator Execute/POSTFOREACH, debug hooks, suspension, allocator internals, GC, complete VM/game execution and physical Android execution are outside this stage. New state-transition work belongs to source/squirrel-wave046, leaving 044 immutable.

Run from the repository root with the pinned compiler, Python packages and private update image already available:

```powershell
$env:PYTHONPATH='toolscripts'
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_execution.py --output-dir work/squirrel-generator044/stage-a/primary-closed-lifetime
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_controls.py --output-dir work/squirrel-generator044/stage-a/controls-closed-lifetime
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_generator044.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_replay.py
tools/python/Scripts/python.exe toolscripts/squirrel_generator044_packet.py
```

The copied replay independently rebuilds and runs all targets and controls and checks complete report and binary identity. Its Python interpreter/packages remain explicit external dependencies. Public receipts contain hashes and generated-fixture observations; original code, private disassembly and raw arenas remain private. No inventory, source-byte or whole-function admission is made by this packet.
