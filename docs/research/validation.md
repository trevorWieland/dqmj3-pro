# DQMJ3 Pro validation and iterative behavior evidence

Research date: 2026-11-06, America/Chicago. Recommendations below are a proposed J3 protocol; none claims a recovered function or successful game execution. Online capabilities were checked against primary project sources on this date. Local J2 evidence was read without modifying its repository.

## Recommendation

Carry over J2's separation of source reconstruction, exact linking, bounded behavior, whole-container reproduction and platform execution. Start J3 with an executable-input manifest and one complete leaf-function packet. Do not build a large automated source queue before the input identity, compiler hypothesis and validation harness have passed deliberate wrong-source controls.

Use a project-local Python environment with Unicorn, Capstone and pyelftools for the first function oracle, objdiff for structural mismatch feedback, and a separately isolated stable Azahar profile for later full-game tracing. Tool installation is not qualification: every tool needs a small known-positive and known-negative probe. Record actual imported native-library hashes alongside package versions.

## Five distinct results

| Result | Evidence required | What it establishes |
|---|---|---|
| Exact object match | Whole function, literal pools, owned data, section extents and relocation records compared after pinned compilation | A complete candidate object matches its declared target under the adopted reconstruction context |
| Exact linked match | Actual linker invocation, target addresses, symbol sizes, complete bytes and unaffected-neighbor comparisons | Placement and binding are correct in the measured executable/module |
| Bounded differential behavior | Original and newly compiled/linked implementations execute the same explicit supported fixtures in fresh machines and satisfy observation and return contracts | Agreement for those inputs and the supplied environment; never universal equivalence |
| Emulator/hardware integration | Named game revision/update, fixed runtime profile, copied save, reproducible input sequence, memory/state observations and expected transitions | Specific scenes and systems work under that platform setup |
| Whole-engine/remake readiness | Source-only closure, understood data contracts, working platform/services, world/script/asset integration and independently tested authoring pipeline | Engine modification is practical for a defined vertical slice |

Exact executable bytes imply the same CPU instruction sequence in the same environment. Separate behavioral checks are still useful for catching wrong function identities, fixture/harness errors, incorrect interfaces, unsupported environments and later nonmatching portable implementations. They must not be described as proving all paths or the original hardware.

## Input and address identity

Freeze the archive SHA-256, member identity, decrypted/decompressed executable hashes, container/title identity, region, revision, base-versus-update status and extraction-tool hashes/arguments. Translation patches and updates are distinct builds, even when their display names match. Keep base and patched builds in separate namespaces. Never infer identity solely from a filename.

The canonical executable key should include title/revision hash, program/module, image hash, virtual address, ARM/Thumb mode and measured extent. A loaded CRO or relocated module needs its image identity and load/relocation context. Same virtual address does not establish the same function. Preserve compressed and decompressed hashes separately. Native bytes, literals, padding and regenerated linker contributions need separate ownership states.

Before any coverage denominator is published, classify loaded code images, executable sections, literal/data regions, aliases and unknown boundaries. Keep a denominator provisional until this inventory is audited; zero known functions is not zero remaining work.

## First function oracle

Choose a coherent leaf routine with a measured complete boundary, no ambiguous interior entries and little external state. Useful candidates include an accessor, bounded table lookup, scalar arithmetic or a small record transform. Do not select by game-name inference from a decompiler alone.

Each fixture must declare:

- Original module/span hashes and newly compiled object/link hashes.
- CPU model/mode, endianness, stack alignment, arguments, initial registers, CPSR and relevant floating-point state.
- Mapped memory, initialized bytes, permitted accesses and writable observation regions; poison untouched areas deterministically.
- Allowed native callees or explicit supplied platform services and their checked argument/effect contracts.
- Actual return sentinel, instruction budget, wall-clock budget and allowed fault outcomes.
- Output registers, callee-saved registers/SP, full relevant memory, ordered writes/calls where observable, and preserved-state assertions.

Run original and rebuilt implementations in separate fresh machines from equivalent deterministic state. Install the actual freshly linked candidate bytes, never a prior matching cache. Reject undeclared execution, unexpected unmapped access, literal-pool execution, writes outside allowed regions and budget exhaustion. A timeout or prefix checkpoint is not a normal function return. Keep top-level, helper and setup returns separate rather than summing them as proof counts.

For ARM11-facing functions, qualify the actual CPU/instruction subset rather than reusing J2 ARM9/ARM7 machine setup. Handle floating point, TLS, exclusives, SVC/IPC and concurrency only after their environment is understood. Fail closed on these features initially; a generic stub returning zero can create convincing but meaningless positives.

Exercise zero, extrema, signedness boundaries, wraparound, pointer aliases, relevant alignments, repeated calls and state sequences. Arbitrary random pointers mostly test the mapper; generate valid pointer graphs for pointer-manipulating routines. Keep unsupported malformed cases distinct from supported semantic cases.

Instruction/address coverage helps reveal unvisited branches but is not path coverage. Exclude pools from instruction coverage and report which original instructions, branches and supported input classes were actually exercised. Preserve the smallest failing fixture, seed and all relevant state.

## Independent models and negative controls

For small routines, write an independent semantic model from measured loads/stores and explicit game data, rather than mechanically translating the candidate source. A native-versus-native calibration is useful for the harness but contributes no source proof.

At least one wrong but genuinely compiling C implementation must fail a semantic fixture. Prefer several same-extent wrong variants where practical: signedness, boundary predicate, field offset, width or call argument. Verify negative variants actually reach the intended entry and return; a compiler failure or unrelated mapping crash does not qualify the semantic check. Also reject incorrect module hash, ARM/Thumb mode, source hash, relocation binding, missing private input and unexpected callee.

Mutating original executable instructions may diagnose a harness, but those mutations are not reconstructed source and earn no source credit. Never change the target, normalize away mismatches or patch generated object instructions to turn a nonmatch into an exact result.

Property-based generators can expand edge cases and shrink failures. They supplement the independent oracle: a property such as no out-of-bounds access is weaker than agreement with the original. Keep deterministic frozen regression fixtures, including generated failures, alongside exploratory random runs. [Hypothesis documentation](https://hypothesis.readthedocs.io/en/latest/) describes generation over declared input domains and its replay/stateful facilities.

## Exact rebuild and clean replay gates

objdiff supports ARM, including 3DS, and compares relocatable objects across functions/data with relocations and symbol context. Adopt it for mismatch diagnosis after the project can generate trustworthy target objects; a raw stripped code.bin may need a verified splitting/object-generation step first. Similarity percentages must not become accepted-source percentages. [Official objdiff README](https://github.com/encounter/objdiff/blob/main/README.md).

Compiler identification is an experimental hypothesis. Preserve banner/hash, ABI, flags, include context, translation-unit boundaries and linker configuration per unit. The existing Ocarina of Time 3D project demonstrates that code.bin matching can be a separate milestone from RomFS/container rebuilding and uses an RVCT4.0 configuration. That is evidence for a 3DS workflow, not evidence that J3 uses that compiler or exact profile. [Oot3D project README](https://github.com/zeldaret/oot3d/blob/main/README.md).

Before accepting a packet: freshly compile, genuinely link, compare complete owned ranges and bindings, run applicable oracle/controls, then rerun affected-module regression. Independent replay must start from an immutable committed tree plus explicit private inputs in another output root, without cached candidate objects or undeclared research-directory dependencies. Hash all consumed source/tool/configuration/fixture inputs and record reproduction arguments and outputs. A captured historical report is not a current runtime replay.

Only the coordinator publishes shared ledgers, symbols, manifests and accepted-byte totals after these gates pass. Workers use disjoint source/evidence/output paths and declare dependency closure. Frozen packets remain immutable; amendments supersede them without rewriting history. Deduplicate aliases, shared literals and helper bodies before counting source bytes.

## Full-game validation and current emulator choice

Azahar is a practical current debugging candidate. Its official releases page lists stable **2126.2**, dated 2026-10-08, and **2127.0-rc1**, dated 2026-11-06. Pin stable 2126.2 for the first baseline unless a demonstrated blocker needs the release candidate. The stable notes explicitly describe GDB/RPC improvements and warn that RPC clients need updating. Record the binary hash and configuration; do not silently upgrade a validation baseline. [Official releases](https://github.com/azahar-emu/azahar/releases/tag/2126.2), [current release list](https://github.com/azahar-emu/azahar/releases).

Relevant October 2026 debugger changes are documented in primary PRs:

- [PR 2631](https://github.com/azahar-emu/azahar/pull/2631) synchronizes RPC/GDB work with emulation and adds screenshot/performance RPC commands.
- [PR 2633](https://github.com/azahar-emu/azahar/pull/2633) implements vCont instruction stepping and fixes protocol deviations.
- [PR 2640](https://github.com/azahar-emu/azahar/pull/2640) adds pause-on-next-process-start for connecting GDB early.

These are advertised upstream capabilities, not a claim they have been installed or validated against the user's J3 archive. Qualify pause, breakpoint, register/memory read, one-instruction step and clean restart first, using disposable local profile/save copies. Bind debugging services locally. Keep emulation muted and avoid existing user profiles/saves. Record emulator executable and firmware/service inputs, game/update, graphics backend, timing settings, save, RNG state, frame/input trace and checkpoints. Reset from clean boot for durable reproducers; emulator save states are useful accelerators but can be tied to emulator versions.

The first integration corpus should cover boot/title/menu, new-game or copied-save load, field movement, map transition, menu inventory, one deterministic battle, scouting/synthesis when reachable, save/write/reload and one script-controlled event. Assert meaningful state changes as well as screenshots: screenshots alone cannot show hidden state corruption. Run each relevant source substitution against the original baseline under the same profile. Extend the corpus when a new subsystem is reconstructed or a new failure is discovered.

Unicorn is a CPU-emulation framework with ARM support, Windows support and instrumentation; its API allows explicit code/memory/register setup and bounded execution. It does not supply the 3DS OS/GPU/services or hardware timing. Use it for isolated contracts; use Azahar and eventually hardware for platform obligations. [Unicorn project](https://github.com/unicorn-engine/unicorn), [official tutorial](https://www.unicorn-engine.org/docs/tutorial.html).

QEMU is not a drop-in 3DS emulator: ARM system emulation requires a supported board model, and its user-mode emulation targets Linux/BSD OS contracts. It can be useful for a separately built target harness, but configuring generic ARM emulation is not evidence of 3DS execution. Defer it unless a specific gap remains after Unicorn/Azahar qualification. [QEMU ARM system documentation](https://www.qemu.org/docs/master/system/target-arm.html), [user-mode documentation](https://www.qemu.org/docs/master/user/main.html).

decomp.me is useful as an optional local compiler-experiment frontend; its upstream project documents local deployment and compiler additions. Adopt it only if it reduces a measured matching bottleneck. Do not upload private game slices or fixtures as a side effect of using a public scratch. [Official project](https://github.com/decompme/decomp.me).

## Practical first acceptance gates

1. **Input gate:** locate archive; hash it; list members safely; select the exact base/update/translation variant; hash extracted code/data and extraction tools. Produce a deterministic manifest twice. No source credit.
2. **Analysis gate:** import mapped executable regions; verify memory bytes against extracted inputs; qualify ARM/Thumb mode and data boundaries; produce an entrypoint/section/module inventory. Record ambiguous boundaries explicitly. No source credit.
3. **Tool gate:** locally pinned compiler/disassembler/object parser/objdiff/Unicorn invocations pass known positives and meaningful negatives. Compiler smoke success does not identify the historical compiler. No source credit.
4. **First packet:** one complete readable C/C++ function, frozen interface and extent, exact object and actual linked comparison, genuinely compiled wrong-source control, bounded original/rebuilt differential cases, explicit unsupported paths and independent replay.
5. **Integration gate:** the packet participates in a real affected-module rebuild with prior matches retained. Publish source credit only after committed input/source/evidence closure. Keep initial executable inventory denominator provisional until audited.
6. **Platform gate:** isolated stable Azahar boot and copied-save baseline, debugger smoke qualification and one repeatable scene checkpoint. This is tracked independently of packet credit.

## Joker 1 in the Joker 3 Pro engine

Treat this as a separate engine-modification track after a small vertical slice is understood. Retain an exact-reconstruction branch as the regression oracle. Useful early engine interfaces are asset/resource loading, field/map layout, actor definitions, animation, camera, encounters/battle, scripts/events, progression and save schemas. A playable prototype requires coherent asset conversion, collision/navigation, script authoring and state persistence, not only recovered battle arithmetic.

Use a small original/test map and placeholder assets to establish these contracts before attempting a broad content transplant. Keep Joker 1's source/content inputs and schemas separately identified. Remake progress should be measured by tested vertical-slice capabilities; it must not be folded into exact J3 matching percentages.

## Local practices consulted

Read-only sources in `C:/Users/trevo/Documents/RecProgramming/DQM/dqmj2pro-decomp/`:

- `AGENTS.md` and `docs/2026-11-02-parallel-execution-plan.md`: disjoint claims, frozen input packets, serialized shared publication, independent clean replay and separate evidence levels.
- `docs/2026-10-27-toolchain.md`: actual native-library hashes versus distribution metadata, bounded Ghidra imports, separate compiler/object/module checks and negative experiments preserved without credit.
- `docs/2026-10-29-card-common-initializer.md`: actual-return guards, full memory/call observations, independent model and explicit synthetic platform service limits.
- `docs/2026-10-29-arm7-pointer-routines.md`: structured pointer/alias fixtures and meaningful fresh machine executions rather than invalid random-pointer noise.

These J2 records supply workflow precedent. Their DS compilers, CPU modes, addresses, overlays, accepted source counts and platform assumptions must not be copied into the 3DS project as facts.
