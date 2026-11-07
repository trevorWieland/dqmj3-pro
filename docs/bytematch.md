# ByteMatch progress integration

The [project page](https://bytematch.dev/trevorWieland/dqmj3-pro) tracks the measured update main ARM image, `update-content0`. The measured base title version is 0 (`00040000001acb00`); the update title version is 3136 (`0004000e001acb00`). These identify the owner's actual inputs, without asserting unmodified retail or translation provenance. Base and update addresses remain separate.

## Complete byte denominator

The code denominator is every ExHeader-declared initialized main ARM text byte. It includes instructions, literal pools, internal alignment and unclassified text. Page-alignment padding outside the initialized extent is excluded. This is an exact, conservative native-text reconstruction baseline; it does not claim an instruction-only denominator or complete historical function boundaries.

| Measured image | Initialized ARM text bytes | Accepted source bytes | Native text reconstruction |
| --- | ---: | ---: | ---: |
| Base | 7,042,136 | 0 | 0% |
| Update | 7,051,280 | 5,128 | 0.072724385% |

The frozen seeded census retains 26,573 discovered entries. The independently reviewed method-table supplement adds 44 entries and 3,172 instruction bytes of ownership, producing 26,617 discovered entries without changing the initialized-text denominator or granting source credit. Shared tails have one physical owner. See [pattern source components](pattern-source-components.md).

The base baseline is inventoried separately; only the update currently has admitted source and a supported ByteMatch report. The update's 842,252 initialized rodata bytes, 260,036 initialized data bytes and 210,988 BSS bytes give a separate 1,313,276-byte data denominator, with zero matched data. DSP firmware, PICA shader programs, original interpreted scripts, assets and system firmware do not enter the ARM text denominator. They retain their own inventories and receive no native source credit.

[Executable scope](executable-scope.md) records a fresh recursive audit of both measured CIAs and every supported archive member. It reconciles declared programs and structurally qualifying additional executable candidates. Permitted but unobserved loader services do not invent modules. [Static text accounting](../evidence/lanes/native-inventory-completion/static-text/update.json) independently partitions every initialized text byte into admitted source or unmatched original text. Missing, overlapping or reclassified ranges fail validation.

Function totals count discovered canonical entry symbols from the qualified constructor-seeded census. They support navigation and matching, not a universal historical function total. Discontiguous cold tails, pools and unknown regions still count fully in the byte denominator. No fake gap functions are created. Complete static corpus/byte accounting does not assert complete semantic classification, whole-game behavior, runtime asset precedence or a source-only playable game.

## Original and source object mapping

`objdiff.json` is generated. Edit `config/objdiff-units.json` and the generators, not their output. Each admitted C file has a hierarchical source-tree unit name, original target and genuinely compiled base object, and its actual repository-relative source path. LLD retains only accepted function sections; extra candidates never receive accidental matching credit. [Object production](objdiff-objects.md) documents this selection.

The `src/native` unit owns every remaining text byte and all rodata/data/BSS. Its base is a genuinely compiled empty translation unit, representing the absence of admitted implementation. Its source path identifies the implementation folder; it does not assert that unwritten functions exist there. Original reference sections stay private. Every unit remains `complete: false`: admission of selected functions does not complete its whole source file. No game/engine/library categories are invented.

The schema-2 configuration requires pinned scope and static byte-accounting reviews, a successfully completed seeded analysis and an object map built from that exact census. Configuration independently verifies object hashes, original bytes, complete range ownership, admitted source/header hashes and all discovered symbol identities before emitting the project file.

## CI and report normalization

The trusted `build.yml` workflow follows pokebw2's public-source/private-original pattern. Public development is in `trevorWieland/dqmj3-pro`. Original CIA inputs live only in the private `trevorWieland/dqmj3-pro-inputs` repository. Its read-only SSH deploy key is stored as `INPUTS_DEPLOY_KEY` for private input access; ByteMatch needs no token. Fork pull requests run only public source compilation.

The private repository stores ordered XZ parts. CI verifies every part, decompressed CIA hashes, TMD/ExeFS content and main-image identities. It rebuilds the admitted profiles, compares complete function sections and verifies genuine source integration into the hybrid image. It does not claim bounded behavior tests ran in that job or that the game is built entirely from source.

After object production and configuration, CI runs:

```text
objdiff-cli report generate -o build/update-content0/report.json
```

Stock objdiff sums code symbols and omits unsymbolized executable bytes. `toolscripts/finalize_objdiff_report.py` verifies the actual original/source ELF objects, preserves the CLI's exact matching identities and sizes, and replaces each unit's code denominator with its complete executable-section byte size. Overall counters and percentages are recomputed from those exhaustive units. Cold/unknown surroundings contribute unmatched bytes without becoming invented functions. Final JSON is reconstructed from a fixed safe schema so arbitrary payload fields cannot reach the public artifact.

Only `build/update-content0/report.json` and its reviewed `functional.json` companion are uploaded as `update-content0_report` after a successful push build on `main`. No original objects, hybrid images, input parts, raw private logs, signing material, build directories or caches are uploaded. The report retains objdiff schema 2; ByteMatch preserves its explicit measures. Tests exercise real Clang/LLD/objdiff objects and the actual ByteMatch parser, protobuf round-trip and source lexer.

## Source links and reproduction

Admitted report symbols use their exact C definition names, so a rename header is unnecessary. Future renames need a generated mapping or another mechanism from [ByteMatch source linking](https://bytematch.dev/docs/source-linking). Virtual addresses are independently checked against original section mapping. Unwritten functions may correctly be absent from the public source.

`config/functional-functions.json` separately approves 122 working nonmatching C functions within their declared bounded domains: 14 scalar recipes have uncertain original signatures and low confidence; 108 typed-memory, VM-helper, interval, state-compiler, material, UV/math and tokenizer/control functions have medium confidence. The earlier leaf proofs were reproduced by the isolated `eb8e1b6` replay. Lookup/traversal successor types preserve all ARM bodies and relocations and repeat Windows behavior checks; the expanded host types passed the isolated `420bcff` replay, wave012 passed the isolated `7c3c12d` replay, and all five UV/math bodies reproduced their complete qualification packets in the isolated `df0258d` replay. The complete material constructor and source-only helper graph passed the isolated `05fb713` scene replay (105 tests and 142 compilations), with two COFF timestamp-only artifact differences recorded without patching. The isolated `a9c62a1` control/tokenizer replay passed 62 tests and 176 compilations; 46 nonmatching functions are reviewed, while the eight-byte exact candidate is excluded pending separate admission. These tests grant zero matching-source credit. `functional_report.py` checks frozen packet, C/header hashes, confidence, canonical module/address/extent, exact-admission exclusion and actual report source ownership before emitting the requested name/confidence schema. Other drafts remain proposals until reviewed and their report ownership exposes the actual C. Nonmatching candidates are compiled by public source CI and remain outside the matching module's admitted source selection. The functional gate also pins the frozen census and validates ARM/Thumb mode plus the complete candidate body. Original navigation symbols use the entry-containing contiguous extent; a fragmented function requires an explicit full-range proof and report-entry size. Cold tails and pools always remain in the initialized-text byte baseline.

With private inputs and pinned report tools available:

```powershell
python toolscripts/bootstrap_report_tools.py
tools/report-python/Scripts/python.exe -I toolscripts/ci_native_build.py --private-inputs work/private-inputs
tools/report-python/Scripts/python.exe -I toolscripts/objdiff_objects.py --census evidence/lanes/native-inventory-completion/seeded/update-census.json
tools/report-python/Scripts/python.exe -I toolscripts/configure_objdiff.py
tools/objdiff-3.8.3/objdiff-cli.exe report generate -o build/update-content0/report.raw.json
tools/report-python/Scripts/python.exe -I toolscripts/finalize_objdiff_report.py
tools/report-python/Scripts/python.exe -I toolscripts/functional_report.py
```

After ingestion, run the unmodified [ByteMatch source-link checker](https://github.com/Veradictus/ByteMatch/blob/master/scripts/check-source-links.py) against `trevorWieland/dqmj3-pro`, for example with `--version update-content0 --per-unit 3`. The hosted result is checked separately from local tests. The [inventory issue](https://github.com/trevorWieland/dqmj3-pro/issues/1) retains historical boundary/classification follow-up; that uncertainty does not drop bytes from the denominator.
