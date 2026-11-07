# Script capture component 038

This successor executes real script-closure creation through the original Execute CLOSURE opcode and the authored `sq_execute038` provider. `sq_script_create038` reconstructs the complete 1,104-byte controller at `0x00196b08`. The opcode fragment belongs to the existing Execute function; it is not a newly discovered independent function. This packet grants no source, inventory or duplicate-function credit.

The controller uses the exact compact prototype011, opaque reference012, native013, weak014, byte-string015 and script017 types. Its VM storage is the full Execute028 object containing Call022 and common020. The current frame is the actual 48-byte target / 72-byte native frame, whose closure offsets are 8 / 16. It does not use the older partial native frame binding in018. Existing providers and all 50 pins of034 remain unchanged.

Outer descriptors select a local value, rooted lookup, or parent closure outer using the low byte of their kind. Captures and defaults are copied values with retained references. A later write to the parent's local slot does not update an existing capture. Direct table lookup unwraps a stored weak reference to its target; the exercised local, parent and native `_get` paths retain the weak object itself. Actual strings retain the game's signed 8-bit storage semantics.

The 54 profiles run both before and after cleanup, giving 108 sets / 432 observations on original ARM, authored ARM, actual Windows x64 and compiled Android AArch64 objects. The parent and parent prototype are destroyed before the returned child executes. Returned arrays retain the captured value and default after the child is destroyed. The actual native `_get` callback observes a fully initialized017 object on the shared chain with zero references, a newly appended NULL capture and no defaults yet. Six further profiles fill existing inactive capture slots with NULL, forcing the next real local, lookup or parent append to grow its buffer.

The independent model checks reference ownership, construction observations, output members and actual pointer topology. It derives the compact prototype FAM offsets, target/native object extents and vector allocation sizes independently. Windows uses a real arena at `0x120000000`; AArch64 uses `0x110000000`. Original/authored ARM comparisons retain the complete raw arena hashes and mismatch offsets before comparison aliases. Aliases are written only to a Python comparison copy after execution: the declared six-slot table prefix/method and exact native callable fields. No executed object, register, code, literal or pointer text is changed.

The 1,104-byte controller has 248 / 276 original instruction PCs exercised. `evidence/lanes/squirrel-capture038/providers.json` partitions every missing PC explicitly. The qualified domain excludes failed allocation/assert handling, failed rooted lookup/index-error formatting, arbitrary callbacks mutating defaults before their reserve, and reentrant old-destination cleanup that removes the fresh published closure. Source paths for those conditions are not promoted into a complete functional qualification. Generators, GC, structured exception035 composition, complete Execute/VM/game behavior and physical Android / AYN Thor execution remain outside this packet.

Allocation, prototype provision and shared-state provision are explicit typed services. The reference allocator entries `0x002fece8` and `0x00146590` are not treated as closed returning four-byte functions. The fixture heap is bounded and does not recycle deallocated storage; reclaimed allocation metadata is observed before reuse. Existing fixture shared-state prefixes do not establish production initialization. The independently measured production initialization family is assigned to040.

The Android DSO uses normal linker flags `-z max-page-size=16384 -z common-page-size=16384`; its existing inspector checks PT_LOAD alignment and the actual GNU_RELRO containing/following segment relationship. CPU-model execution uses the separately linked `model.elf`, not an unrelocated DSO. An early attempt to pass the DSO directly to that CPU-model loader failed and is a diagnostic setup mistake, not evidence of an Android deployment failure. No device or operating-system execution is claimed here.

From the repository root, use the configured Python environment:

```powershell
$env:PYTHONPATH='toolscripts'
tools/python/Scripts/python.exe toolscripts/squirrel_capture038_measure.py
tools/python/Scripts/python.exe toolscripts/squirrel_capture038_execute.py --folder work/squirrel-capture038/primary-qualified
tools/python/Scripts/python.exe toolscripts/squirrel_capture038_controls.py --baseline work/squirrel-capture038/primary-qualified --folder work/squirrel-capture038/controls-sealed
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_capture038.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_capture038_replay.py
```

The copied replay stages the complete quoted-source, Python, pinned metadata, private reference and compiler closure into a new owned directory. It reruns the same four-target corpus, seven normally returning controls and 12 tests, and checks complete report, control and compiled-artifact identity. Private original images and raw analysis logs stay under ignored paths.
