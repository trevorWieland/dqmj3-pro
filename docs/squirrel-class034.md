# Typed class members and script constructors

Wave034 reconstructs complete class member definition (`0x001804b4`, 1,060 bytes), VM class creation (`0x001996f4`, 660), meta-name lookup (`0x001880d0`, 176), VM new-slot dispatch (`0x00173d60`, 868 across two ranges), and the uniquely named instance factory (`0x00198418`, 344). These are existing canonical entries totaling 3,108 instruction bytes plus 280 classified pool/string bytes. Source candidates and bounded equivalence do not grant inventory, matching or source credit.

The new factory has a literal production definition, `sq_vm_create_instance034`, in `source/squirrel-wave034/instance_factory.c`. A separate ordinary adapter supplies Call022's existing contract. A normal include/macro binding preserves frozen030 creator/initializer/lock helpers while renaming its older unused factory definition. Nothing patches compiled instructions, registers or frozen sources. The unique definition resolves the global source-name ambiguity of older fixture providers.

## Storage and source closure

The component consumes exact030 classes and full instances, exact011/012 opaque values, actual013 native closures,014 weak references,015 byte strings,017 script closures and019 tables. Full Execute storage028 contains exact022/common020 first and is genuinely provisioned for script calls; frozen031 remains a partial Execute provider. No partial020 instance, short VM/shared storage, legacy SqRef or incompatible callback table is reinterpreted.

`SqClassSharedStorage034` embeds the complete030 shared provisioner first. Original name-vector and meta-index-table accesses use target offsets0 and8; the latter is the payload of an original table object starting at4. Target bindings copy the pointer bytes. Native storage uses an explicit table-pointer suffix at296, making full storage304 bytes. It preserves the030 constructor-name tail at280 and015 string-table binding at20. Names and the index table have explicit external owners; the shared bindings borrow them. Recovering the complete original shared-state constructor/destructor remains separate.

Read-only constructor evidence at `0x0014a6a0` establishes the actual18 meta names, append order, name→integer-index publication and constructor-name object at60. The spelling at index5 is `_modulo`. The fixture provisions those measured names using actual015 interning and019 construction/mutation, then exercises the real original and authored meta-name helper. It substitutes no cached original answers. The shared constructor itself receives no source claim.

Class NewSlot checks the lock before lookup or mutation. Existing fields retain their descriptor when replaced with closures or static values. Otherwise closure/static values use the method vector, ordinary values use fields, and recognized closure-valued meta names update the proper meta slot. The integer descriptor is published before vector allocation. A new member increments size and constructs/copies its owned primary/secondary values in the measured order; full capacity doubles, starting at4. Allocation observers read the published descriptor, old size and ownership state to qualify that ordering.

VM CLASS validates the base, captures optional attributes, allocates/initializes the actual class and publishes it before releasing its old destination and temporary owner. Inherited meta17 receives class plus attributes through genuine Call022. The original ignores that callback's Boolean result, pops both arguments, disposes its returned owner, then reloads the current result class before assigning attributes. Cases include callback failure, actual array-result disposal, callback replacement of the published class, replacement during an old compact prototype's cleanup, and attributes/result aliasing the same stack slot.

VM NewSlot implements the actual table/class/instance dispatch. A table with meta dispatch has an actual declared six-slot020 vtable object containing its named lifetime prefix; an unchanged019 three-slot object is never indexed past its bound. Table direct hits update directly, successful meta calls suppress fallback, and failed/missing meta calls use the original fallback. Full030 instances use their real meta13 provider and preserve the original failure/error behavior. Callback results cover both last-owner arrays and externally retained actual strings.

## Executed qualification

The102 sets run original ARM, authored ARM, a real Windows DLL and compiled A64 objects. They cover definitions/replacements/growth, lock errors, inheritance/attributes, real native constructors, live/dead weak field constructors, ordinary script constructors, inherited script callbacks and script CALL into native receiver/field mutation. The scripts are explicit fixture clients interpreted by the actual original VM and ordinary authored031 source. They are not claims to reconstruct a game script corpus or the whole Execute body. Compact prototypes and script closures retain declared external owners.

Windows uses actual arena0x120000000 and the A64 model uses0x110000000. Independent native models predict class/instance/vector/string allocation sizes, full-width user pointers, logical topology, ownership and ordered observations. They do not truncate real pointers to32 bits. Android PT_LOAD and GNU_RELRO checks follow [official16KiB guidance](https://developer.android.com/guide/practices/page-sizes); executing A64 instructions in a CPU model proves neither Android OS nor physical-device/game execution.

ARM compares the full initialized256KiB arena, retaining every pre-alias hash and mismatch offset. Verified callback-address aliases change only a post-execution Python comparison copy. They change no executed object, register, code, literal or text. Real native entries/returns identify the actual022 frame locations. Only the measured inactive words0/4/32/40 can differ there; script frames retain their defined fields and are compared. Actual native consumers read none of the excluded words. A normally returning read-only observer control must fail even when its final arena and semantic observations agree.

The bounded domain excludes allocation/assert/overflow failures, malformed member descriptors or meta-index tables, GC, arbitrary construction-time observers, asynchronous/debug inspection, unstable clone sources, generators, structured throws/unwind, the complete shared-state lifetime, full Execute, full VM and a game build. Constant NULL/integer cleanup and impossible unlocked-failure paths are classified separately from observed instruction coverage. No unobserved path becomes a universal equivalence claim.

## Reproduction

Use the pinned private owner module/ExHeader and local compiler/runtime. The source and test inputs are disjoint from frozen030/031. Original payloads and disassembly remain private; reference exchange files contain mode/width/address/hash witnesses only.

```powershell
$env:PYTHONPATH='toolscripts'
tools/python/Scripts/python.exe toolscripts/squirrel_class034_measure.py
tools/python/Scripts/python.exe toolscripts/squirrel_class034_factory_measure.py
tools/python/Scripts/python.exe toolscripts/squirrel_class034_names.py
tools/python/Scripts/python.exe toolscripts/squirrel_class034_execute.py --folder work/squirrel-class034/primary-qualified
tools/python/Scripts/python.exe toolscripts/squirrel_class034_controls.py --baseline work/squirrel-class034/primary-qualified --folder work/squirrel-class034/controls-sealed
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_squirrel_class034.py -v
tools/python/Scripts/python.exe toolscripts/squirrel_class034_replay.py
```

The isolated replay requires a new owned directory and copies the actual quoted C/header closure, Python import closure, frozen metadata, compiler binaries and private reference inputs. Python/package runtimes shared outside the copy are explicitly fingerprinted. Complete execution/control receipts and all three artifact hashes must reproduce before readiness. Failed linking/guard attempts, a crashing rejected control and superseded fixture diagnostics remain private and receive no validation credit.
