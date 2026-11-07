# Native array builtin and VM ownership closure

This lane reconstructs update ARM entry `0x001b33dc`, using the measured module SHA-256 `d4e29300297a42e248f904736675da3de958f84e918953a381dada1cce411126`. The native registration record at `0x008c3718` points to this entry under the name `array`, with minimum argument count two including the receiver and type mask `.n`. The record, name, original caller body and direct-call closure are checked against their measured hashes. Historical source identifiers and the exact complete Squirrel fork remain unknown.

The new ordinary C controller covers default null-filled arrays, an explicit fill value, integer/float length conversion, frame-relative argument lookup, GC-chain construction, stack push, incoming reference ownership, release of the overwritten stack value and cleanup of the temporary result. It retains the original defensive shrink and release branches. Source names remain canonical so progress reports can locate the code.

The original root is 340 instruction bytes followed by **eight literal-pool bytes**. Earlier private experiments compared only the instruction extent; this lane includes the complete pool. The dependency closure contains eight native functions totaling 948 original instruction bytes plus 16 literal bytes, including the wave002 array kernels and existing wave005 count/slot/push/assignment/chain sources. Borrowed dependencies retain their previous acceptance statuses and receive no duplicate credit.

## Execution and negative controls

Run the local Python on `toolscripts/squirrel_source_wave003.py --publish`, followed by `python -m unittest discover -s tests -p test_squirrel_source_wave003.py -v`. Outputs remain under ignored `work/squirrel-source-wave003/`.

The packet records 37 original returns and 37 source returns, each checked against an independent model of the complete randomized declared VM/heap arena. Cases include negative/nonzero frame bases, default/fill/extra arities, fractional floats, negative zero, reference fills, existing chains and overwriting a live reference. The release observer verifies that stack top and the new destination are already published and that incoming ownership is two at callback entry, before temporary cleanup leaves one owner.

Source execution can enter only the genuinely compiled controller/helper closure, a compiled release observer and declared allocation/assertion service boundaries. It cannot silently execute original helper instructions. The allocator overwrites caller-volatile integer registers, VFP registers and condition flags. Every normal return preserves SP, R4–R11 and D8–D15. Reads, writes and literal-pool access are bounded, and live stack guards are preserved. A real link without the assignment helper fails.

Four separately compiled wrong-source variants return and differ semantically: length plus one, an extra incoming owner, treating the three-argument case as default, and omitting temporary ownership release. Exceptions, assertions and faults do not count as these returning semantic negatives.

The default two-argument allocation-failure path reaches a matching **noreturn assertion contract** in three frame namespaces; those observations are counted separately from normal returns. In the fill-argument path the original assumes allocation succeeds and accesses the vector through a null array if it fails. That fault is retained as an excluded domain/control and receives no normal-return or universal-equivalence credit. Reallocation failure, invalid argument tags, nonfinite/out-of-range float conversions and arbitrary reentrant destructors remain outside the validated domain.

## Platforms and limits

A native Windows x64 program executes default/fill and integer/float cases with 16-byte logical objects. It verifies result publication and temporary ownership; a separate assertion program really exits through its expected terminal contract, and a compiled wrong-ownership executable fails semantically. Seven controller/helper translation units compile into Android ARM64 objects. There is no Android device or full-game execution claim.

These fixtures construct this project's partial typed VM view. Its retained unknown prefix is not a claim that the public Squirrel host64 VM class or the complete game's class has been ported. Preserving 32-bit numeric/refcount semantics while adapting pointers is distinct from reinterpreting original ARM RAM on a 64-bit host.

The controller's compiled section currently occupies 360 bytes and does not match the complete 348-byte original instruction/pool extent. **New matching-source credit remains zero.** Bounded component behavior, a successful source link and a working host fixture do not establish 95-percent coverage, a complete VM or a native Windows/Android game. Coordinator review and a committed-source replay remain acceptance gates.
