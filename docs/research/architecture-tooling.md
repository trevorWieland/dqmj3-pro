# DQMJ3 Professional: architecture and tooling research

Research date: 2026-11-06 (America/Chicago). Online upstream documentation and repository HEADs were checked during this session. Compatibility and completeness statements below are upstream claims unless a local inspection is explicitly described. No game, key, firmware, proprietary SDK or commercial compiler was downloaded.

## Recommended technical direction

Start with a versioned binary inventory, correctly mapped ARM11 analysis and a small source-reconstruction pilot. Maintain separate metrics for raw byte-identical source replacement, independently tested behavior, and descriptive analysis. A native static recompilation can become a useful runtime experiment; it does not by itself recover maintainable game-engine source.

## Architecture and file boundaries

The application target is 32-bit little-endian ARM11 MPCore, ARMv6K with ARM/Thumb interworking and VFPv2. Do not import it as the Nintendo DS ARM9 target, ARMv7/Thumb-2, AArch64, or assume a desktop floating-point environment. The console also has an ARM9 security/IO side and DSP, but those are distinct from the main game executable. The hardware documentation distinguishes Old/New 3DS configurations. [3dbrew Hardware](https://www.3dbrew.org/wiki/Hardware), [Arm ARM11 MPCore manual](https://documentation-service.arm.com/static/5e8e1e0388295d1e18d368b2).

Use the [Arm AAPCS32 specification](https://github.com/ARM-software/abi-aa/blob/main/aapcs32/aapcs32.rst) as the ABI reference, then verify the game's actual calling convention, C++ object layouts, aggregate returns, stack alignment, VFP argument use and runtime helper conventions from disassembly. A compiler supporting floating-point instructions does not establish which floating-point argument-passing variant a title uses.

An NCCH executable contains an extended header, ExeFS and RomFS; .3ds/.cci and .cia are outer container formats, not interchangeable raw code. ExeFS .code may require BLZ decompression. The extended-header flag at 0xD records code compression; code-set records at 0x10, 0x20 and 0x30 specify text/read-only/data virtual addresses, page counts and byte sizes, with BSS length at 0x3C. Map the decompressed file from these records; preserve page padding and distinguish BSS from file-backed data. Do not guess a single base and run whole-file analysis. [NCCH](https://www.3dbrew.org/wiki/NCCH), [Extended Header](https://3dbrew.org/wiki/NCCH/Extended_Header), [ExeFS](https://www.3dbrew.org/wiki/ExeFS).

Inventory RomFS before choosing the decompilation split. CRO modules are relocatable code/data with imports, exports and relocation records; CRS can describe the static module. Preserve their symbol evidence before inventing names. Runtime-loaded modules acquire relocated addresses and may change magic to FIXD. CRR files under .crr attest modules and must be handled when experimenting with reconstructed modules. The presence of these formats in this game remains a local-inspection question. [CRO format](https://www.3dbrew.org/wiki/CRO0), [CRR format](https://www.3dbrew.org/wiki/CRR0).

Record base, update and fan-translation variants independently. A title's currently executed code can come from an update and its data can additionally be overridden by mods. DQMJ3P translation tooling documents Japanese product CTR-P-BDQJ, base title 00040000001ACB00 and update 0004000E001ACB00; treat these as identification leads to verify in local headers. Its README identifies a Ver.1.3 update and warns that active RomFS mods can override installed text. These observations make a base-only provenance label insufficient. The project's code is also a promising resource for game-specific text/layout formats, after source and license review. Do not assume the personal archive is the same patched build. [DQMJ3P translation repair project](https://github.com/Akoi89/DQMJ3P-english-fixed).

## Tool selection

| Priority | Tool | Purpose and adoption condition |
|---|---|---|
| Now | [7-Zip](https://www.7-zip.org/), existing Python and Git | Archive listing, hashes, manifests and reproducible scripts; use existing installations first. |
| Now | [CTRTool / Project_CTR](https://github.com/3DSGuy/Project_CTR) | Independent container metadata and extraction; makerom is the separate rebuilding component. |
| Now | [3dstool](https://github.com/dnasdw/3dstool) | ExeFS/RomFS extraction, BLZ and container work; compare metadata against CTRTool and preserve original inputs. |
| Now | [Ghidra](https://github.com/NationalSecurityAgency/ghidra/releases) | Headless analysis plus checked exports. Upstream releases show 12.2; coordinator found that version already installed in J2 tooling. Record exact local Java/Ghidra versions. |
| Pilot | [Raikaru CTR loader](https://github.com/Raikaru/ghidra-ctr-loader) | Its documented ExHeader-aware mappings/BSS improve on the original loader. Decrypted CIA import currently exposes the first NCCH only; verify every imported memory block and external link. |
| Pilot | [3DS Ghidra Java scripts](https://github.com/AlgebraManiacABC/3ds-Ghidra-Scripts-Java) | CROLink can connect imports/exports and demangle; LabelSVCFunctions helps system-boundary labels. MoveStatic relies on CRS and should not override verified exheader mapping. |
| Pilot | [objdiff](https://github.com/encounter/objdiff), ARM binutils, Ninja | Function diffs and repeatable builds; retain raw linked-byte comparison alongside relocation-aware scoring. |
| Pilot | [Azahar](https://github.com/azahar-emu/azahar/releases) | Stable upstream shown as 2126.2; 2127.0 RC1 is prerelease. Start with a portable pinned stable build and isolated saves/mods/config. |
| Later | [ninfs](https://github.com/ihaveamac/ninfs) | Optional mounted browsing; supports the relevant Nintendo containers. Windows filesystem-driver dependency adds complexity versus CLI extraction. |
| Later | [devkitPro/devkitARM](https://devkitpro.org/wiki/Getting_Started) | Public homebrew toolchain and ARM binutils. Modern GCC output is not a substitute for an identified original matching compiler. |

Emulator debug caution: upstream [Azahar issue 2196](https://github.com/azahar-emu/azahar/issues/2196), opened June 2026 and currently open, reports GDB freezes after keeping the CPU stopped for more than about 1–2 seconds. This is an issue report, not proof every release/config is affected. Qualify the selected build with attach, breakpoint, prolonged stop, register/memory access, resume and disconnect before relying on capture. Full boot/save/load/input/CRO-load checks must also pass. Restrict the stub to loopback.

## 3dsd matching pipeline evaluation

Locally inspected [3dsd](https://github.com/AlgebraManiacABC/3dsd) at commit `25ad957a67e401333000ce5f61d1f9233506b323`, package version 0.3.1, in `work/research/sources/3dsd`. It supports main/CRO inputs, ARMCC version validation, CSV symbol and literal-pool classification, ExHeader-aware mapping, Ninja and objdiff. Dependencies are Python 3.10+, PyYAML, Ninja, ARM binutils, original ARMCC, and optional objdiff-cli. It does not supply the commercial compiler. The current root has no LICENSE file, so evaluate locally before vendoring.

Adopt only after a small reproducible pilot. Upstream explicitly states its roundtrip relinks objects holding original bytes: success validates splitting/linking, not reconstructed source. The README also describes optional std namespace exclusions from code denominators and states no test suite exists yet. Keep an immutable gross denominator and separate library metrics. [Pinned README](https://github.com/AlgebraManiacABC/3dsd/blob/25ad957a67e401333000ce5f61d1f9233506b323/README.md).

Two source-level review findings need independent checks:

- `run_check` skips absent outputs and can return success once at least one binary was compared. Wrap it with an expected-artifact manifest so partial output cannot establish project-wide success. [check.py](https://github.com/AlgebraManiacABC/3dsd/blob/25ad957a67e401333000ce5f61d1f9233506b323/3dsd/check.py).
- Relocation recovery uses relocation classes from the candidate compiled object to infer the original target's relocations. This is useful normalization, but an additional source-linked, address-fixed byte comparison should independently establish equivalence. [reloc.py](https://github.com/AlgebraManiacABC/3dsd/blob/25ad957a67e401333000ce5f61d1f9233506b323/3dsd/reloc.py).

Compiler identity remains unproven. Gather residual version/assertion strings, C++ mangling/RTTI, EHABI tables and runtime-helper signatures, then compare several small leaf functions across candidate ARMCC versions and flags. Identify third-party libraries separately because they can originate from different compilers/options. No blanket ARMCC version should be configured solely because another 3DS project uses it.

## Modern static recompilation experiments

[3dsrecomp](https://github.com/fearkov/3dsrecomp) is a current ARM-to-C recompiler integrated with Zakuro. Its documented verify mode runs translated functions and the interpreter from identical state and compares registers, flags and memory; interpreter fallback handles untranslated instructions. It supports hand-written overrides and records runtime misses. This is an attractive later differential-testing prototype, but shared interpreter/lifter errors and incomplete peripherals remain possible. No DQMJ3P compatibility was established. Keep generated code distinct from readable recovery and record fallback frequency. [Upstream README](https://github.com/fearkov/3dsrecomp/blob/main/README.md).

[any3ds](https://github.com/mohammed-hajwani/any3ds) is another active ARMv6K/Thumb/VFP static-recompilation experiment. It documents instruction-level comparison against Unicorn, deterministic frame input, a Vulkan renderer, and missing sound output. Its stated demonstrated retail milestone concerns Pokemon X, not DQMJ3P. The target ambition is iOS, with current Linux/WSL and native Windows support. Its smaller HLE/service/GPU coverage means it should be an exploratory lane, not the initial correctness oracle. Its GPL license and generated-output separation need respect when reusing implementation. [Upstream README](https://github.com/mohammed-hajwani/any3ds/blob/main/README.md).

[NintendoWare4Ctr](https://github.com/ctrdecomp/NintendoWare4Ctr) is relevant if local evidence establishes that middleware. It is incomplete, some inferred names are guesses, and its README's build depends on proprietary compiler/SDK material. Use public reconstruction as a signature/type research lead, not a license or provenance shortcut. Its GPL-3.0 license and upstream nonmatching allowances mean copied implementations cannot silently count as exact matches. No SDK/compiler links were followed. [Project README](https://github.com/ctrdecomp/NintendoWare4Ctr/blob/legacyModule/README.md).

## Version pins observed

These are HEADs observed during the session, not claims of tested compatibility:

| Repository | Commit |
|---|---|
| AlgebraManiacABC/3dsd | `25ad957a67e401333000ce5f61d1f9233506b323` |
| Raikaru/ghidra-ctr-loader | `86866c4fe6d90f0a6ad5baa12b82252bb094451d` |
| fearkov/3dsrecomp | `df82e6e3c1231606c38e0f2786dd07f6067979ab` |
| mohammed-hajwani/any3ds | `6d22a13f241f37673af541ac0ae0bd496ab9f318` |
| ctrdecomp/NintendoWare4Ctr | `15ddb5632db5a6f0d2f46e3827fc78df468684bd` |
| Akoi89/DQMJ3P-english-fixed | `c79ba7167690219ae6b83d77e8ae012a917cb178` |

## Immediate acceptance sequence

1. Hash archive and members; identify game/base/update/translation variants from headers and executable/data hashes.
2. Extract to ignored private storage with recorded versions/commands, validate container hashes/bounds, and compare independent extraction metadata.
3. Produce a segment map from the exheader, decompress only when indicated, inventory CRO/CRS/CRR and file magics, and verify Ghidra block layout.
4. Export a small address-keyed symbol/type ledger with evidence and confidence. Keep imported names and hypotheses distinct.
5. Pilot a few pure leaf functions with raw source-to-original instruction/data comparison and executable differential tests over ABI/memory effects.
6. Qualify emulator debugging and record a deterministic original-game smoke route before accepting reconstructed gameplay behavior.
7. Only then expand parallel function ownership and consider an isolated static-recomp runtime experiment. Preserve Joker 1 remake work as a future consumer of engine/resource knowledge, without changing the preservation baseline.
