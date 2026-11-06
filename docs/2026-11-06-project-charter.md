# DQMJ3 Professional project charter

The first objective is a reproducible, readable reconstruction of the owner's measured game, with independently inspectable evidence for each accepted native or interpreted source unit. Private originals are reference inputs. The future Joker 1 remake provides a direction for engine research without changing the meaning of source reconstruction or altering J3 mechanics to satisfy a remake experiment.

## Target identity and scope

Pin the archive, both CIAs, all active NCCH contents, decompressed code, ExHeaders and each relevant RomFS file. The working native target starts with update content 0, retaining base content 0 as a separate build. Record per-path asset origin. Raw TMD version 3136 is a packaging value and does not establish a marketing version string. Translation/patch status and pristine retail identity remain unresolved.

Native process code is mixed ARM/Thumb on ARM11. ExHeader code-set pages define physical offsets and virtual addresses; initialized sizes and mapped pages are different. BSS and stack are runtime state, not initialized executable bytes. RomFS may contain scripts, embedded loaders, shaders or additional executable content. No filename-only scan finalizes the inventory.

The current corpus includes original text scripts, SARC/XBB containers, BCH graphics, FBXD structured records, COLL collision candidates, parameter tables and DVLB shader candidates. Each category needs its own format, provenance and validation status. A parser recognizing a magic is not a semantic decoder. Shipped script text is original source provenance, not newly reconstructed source.

## Source acceptance

Ordinary logic belongs in readable C/C++. Freeze full program/build/module/address/mode identities and complete function/pool extents. Record types, widths, signedness, ABI, globals, callees and translation-unit assumptions. Match all bytes and relocations with an identified compiler configuration, then prove the actually linked source bytes at their target addresses. Original gaps and original-byte roundtrips remain explicit scaffolding and earn no source credit.

Behavior tests compare original machine execution with compiled candidates under frozen fixtures. Observe actual returns, registers, memory writes, stack/callee-save invariants and relevant service calls. Use edge cases and deterministic random cases, instruction/time bounds and compiled wrong-source controls. State tested domains and unsupported paths. Passing bounded cases does not prove universal equivalence or a complete game.

Accepted publication requires a sealed source/tool/input dependency closure, all affected integration comparisons, regression checks and a replay receipt from an immutable source tree. Source-only executable proof, container reconstruction and platform execution remain separate outcomes. Retain rejected compiler profiles and failures. A resumed run cannot reinterpret a historical failed receipt as a pass.

## Parallel work

One coordinator owns registries, shared schemas, status, integration outputs and accepted publication. Research workers can run independently. Reconstruction workers own disjoint source and evidence paths plus explicit canonical byte intervals. Shared interfaces have one owner. Coupled routines and strongly connected components remain together unless a measured boundary closes them.

Every packet freezes its base revision, source/tool/input hashes, permitted paths, ABI, complete extents, dependencies, reproduction argv, behavior fixtures, negative attempts and requested credit. Workers produce proposals; they never self-accept into the global ledger. Independent outputs or copied-root replays must live under work/. Do not run parallel scripts over shared mutable outputs.

Optimize for reproducible accepted work and useful engine understanding. Track packet rejection causes, dependency blockers, test time and accepted initialized bytes per effort only after the native denominator is reviewed. Similarity scores, token usage, function-name counts, original scripts and rebuilt original objects do not measure completion.

## Privacy and neighboring projects

No remote, public uploads, paid external agents, credentials or proprietary SDK downloads are part of this setup. Public source references are read-only research. Do not upload game assembly to public scratch services. Neighboring DQMJ2 Pro and Monster Fieldnotes remain unchanged. Their conclusions require fresh hash binding before reuse. Emulator work uses silent disposable profiles and copied saves.

## Research basis

Use local compiler feedback, independent oracles and explicit ownership to constrain agent work. The [parallel compiler experiment](https://www.anthropic.com/research/building-c-compiler) illustrates how test oracles and divided work can help large agent efforts; it does not establish decompilation equivalence or a completion forecast for this project. [objdiff](https://github.com/encounter/objdiff) supplies structural comparison feedback. [3dsd](https://github.com/AlgebraManiacABC/3dsd) is a promising matching pipeline candidate, with roundtrip and artifact-completeness limitations documented in the research report.
