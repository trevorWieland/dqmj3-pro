# Semantic understanding and naming

Byte identity and understanding have separate review records. A matching function can still have unknown ownership, units, invariants or gameplay purpose. A descriptive name is not evidence of the original author's identifier. This workflow adapts the practices studied in [pokebw2](research/pokebw2-practices-2026-11-06.md); its code and symbol databases were not imported.

config/semantic-names.json keeps the measured program ID, module hash, address, instruction mode, canonical symbol and accepted C hash. Proposed aliases, parameter roles, field offsets, evidence and remaining questions live beside that identity. The initial records describe two VM stack operations and one unsigned scaling operation. They deliberately do not invent gameplay names for the scale factor or claim that the complete game VM is the public upstream release.

Run `tools/python/Scripts/python.exe toolscripts/semantic_report.py`. The tool verifies accepted receipts, source hashes, evidence, build namespaces and alias uniqueness. It checks provenance and consistency, not the truth of an interpretation. Its counts are an investigation queue, not a percentage of program understanding. These initial proposals leave accepted C names and source coverage unchanged.

## Investigation loop

Claim a bounded function family or a type and its users. Inspect all relevant callers, callees, constructors, destructors, table slots, strings and script bindings. For a field, collect reads and writes through the actual type; two unrelated structures can share an offset or placeholder name. Record width, signedness, units, lifetime, ownership, allowed states and alias assumptions. Keep alternatives and counterexamples, then identify the next experiment that could distinguish them.

Separate direct observations, source-library correspondence and gameplay hypotheses. Preserve an unknown offset name when the proposed meaning lacks support. Veneers, duplicated implementations, compiler literals and interior aliases can intentionally retain address names; renaming their count away is not semantic progress. Public library layouts are profile measurements until their correspondence to the game is demonstrated.

Apply approved source renames as small batches, updating declarations, definitions and affected call sites together. Keep a stable canonical-address mapping across revisions. Preserve embedded assertion text, file strings, serialized values and original script bytes. Verify complete source emission, layout, object and linked spans, relocations, relevant data and bounded behavior after the edit. A passing hybrid-image hash alone cannot show whether the changed C was linked.

Subsystem notes should explain data flow, state transitions, ownership, object lifetime, engine services and remaining uncertainties. The VM, asset loader, renderer, audio, input, save state and gameplay need their own documentation as their boundaries become understood. Native ports additionally need pointer-width, numeric-width, endianness, alignment, serialization and timing contracts. The public Squirrel reference already demonstrates why host64 integer/hash behavior cannot be assumed faithful.

No source rename is applied by the reporting tool. Original historical names remain unproved for these records. The next review should expand the VM caller/type evidence and trace the scaling helper's actual consumers before choosing a game-specific label.
