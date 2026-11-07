# ByteMatch progress integration

The [project page](https://bytematch.dev/trevorWieland/dqmj3-pro) tracks the measured update main ARM image, `update-content0`. The measured base title version is 0 (`00040000001acb00`); the update title version is 3136 (`0004000e001acb00`). These identify the owner's actual inputs, without asserting unmodified retail or translation provenance. Base and update addresses remain separate.

## Complete byte denominator

The code denominator is every ExHeader-declared initialized main ARM text byte. It includes instructions, literal pools, internal alignment and unclassified text. Page-alignment padding outside the initialized extent is excluded. This is an exact, conservative native-text reconstruction baseline; it does not claim an instruction-only denominator or complete historical function boundaries.

| Measured image | Initialized ARM text bytes | Accepted source bytes | Native text reconstruction |
| --- | ---: | ---: | ---: |
| Base | 7,042,136 | 0 | 0% |
| Update | 7,051,280 | 5,128 | 0.072724385% |

The frozen seeded census retains 26,573 discovered entries. The independently reviewed method-table supplement adds 44 entries and 3,172 instruction bytes of ownership, producing 26,617 discovered entries without changing the initialized-text denominator or granting source credit. Shared tails have one physical owner. See [pattern source components](pattern-source-components.md).

A separately reviewed real-array vtable destructor adds one further 96-byte instruction body (with a separate 12-byte literal pool), bringing the current discovered-entry count to 26,618. The shared base teardown fragment is retained under its existing owner. This changes neither the 7,051,280-byte denominator nor source credit.

The independently reviewed script-closure destructor adds a further 216-byte instruction body and a separate 12-byte pool, bringing reviewed discovered entries to 26,619. Its following entry is witnessed by another vtable but remains unseeded; no boundary or source credit is invented for that neighbor.

The actual small-prefix prototype destructor adds another independently reviewed 124-byte body and four-byte pool, for 26,620 reviewed entries. Its shared weak-reset tail remains owned by the frozen existing function and receives zero additional credit.

The actual native-closure destructor adds one 244-byte body; the weak-reference table adds 64-byte release and 44-byte destructor bodies. Their independent ownership reviews bring the composed view to 26,623 entries. Null vtable slots remain non-callable and grant no entries or source credit.

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

`config/functional-functions.json` approves 207 working nonmatching C functions in declared bounded domains. There are 193 medium-confidence entries and 14 low-confidence scalar recipes with uncertain original signatures. Their canonical instruction bodies total 37,782 bytes without interval overlap. This is a candidate catalog, not a confirmed whole-game source percentage; matching source remains 5,128 bytes and every unit remains incomplete.

`functional_report.py` checks frozen packet and C/header hashes, confidence, canonical module/address/mode, the complete body, exclusion of already admitted exact functions and the actual report entry. Navigation symbols cover the contiguous entry range. A fragmented function, such as CallNative, needs its full canonical range proof and an explicit report-entry extent.

Source lookup normally uses the report unit's source path. An explicitly reviewed `repository-function-index` policy also permits C outside that folder, following [ByteMatch's repository-wide lookup](https://bytematch.dev/docs/source-linking). It requires one unique canonical C definition in the reviewed source trees. The live API resolved every one of the 196 functional entries at `219d033` to its expected file; the official checker separately found all 412 admitted C functions. Later catalog additions require a new hosted check after ingestion.

| Reviewed packet | Functions | Original instruction bytes |
| --- | ---: | ---: |
| [packet](../evidence/lanes/wave009-native/packet.json) | 2 | 216 |
| [leaf-components001](../evidence/functional/leaf-components001.json) | 48 | 1,324 |
| [native010-expanded](../evidence/functional/native010-expanded.json) | 2 | 500 |
| [state-compiler012](../evidence/functional/state-compiler012.json) | 18 | 2,980 |
| [uv-math014](../evidence/functional/uv-math014.json) | 5 | 1,856 |
| [material011](../evidence/functional/material011.json) | 1 | 3,020 |
| [pattern013](../evidence/functional/pattern013.json) | 46 | 4,740 |
| [array007](../evidence/functional/array007.json) | 4 | 312 |
| [generator008](../evidence/functional/generator008.json) | 2 | 304 |
| [nfa013](../evidence/functional/nfa013.json) | 35 | 9,508 |
| [squirrel002-005](../evidence/functional/squirrel002-005.json) | 7 | 3,220 |
| [class009](../evidence/functional/class009.json) | 4 | 1,472 |
| [dfa013](../evidence/functional/dfa013.json) | 6 | 2,376 |
| [prototype011](../evidence/functional/prototype011.json) | 2 | 724 |
| [literal013](../evidence/functional/literal013.json) | 3 | 1,002 |
| [native closure013](../evidence/functional/native-closure013.json) | 2 | 284 |
| [weak014](../evidence/functional/weak014.json) | 3 | 196 |
| [outer013](../evidence/functional/outer013.json) | 4 | 664 |
| [file text013](../evidence/functional/file-text013.json) | 2 | 688 |
| [string015](../evidence/functional/string015.json) | 5 | 716 |
| [native create016](../evidence/functional/native-create016.json) | 1 | 396 |
| [file IO013](../evidence/functional/file-io013.json) | 1 | 492 |

The earlier leaf and expanded host types were reproduced in the isolated `eb8e1b6` and `420bcff` replays. State-compiler012 passed `7c3c12d`, UV/math014 reproduced all five qualification packets under `df0258d`, and the material/helper graph passed `05fb713` with 105 tests and 142 compilations. Control/tokenizer013 passed `a9c62a1` with 62 tests and 176 compilations; its eight-byte exact candidate remains excluded pending separate admission.

Array007 passed the isolated `c54ab3c` replay with 51 tests and 252 compilations. Generator008 passed `439de91` with 74 tests and 309 compilations. The seven Squirrel002-005 functions reuse the committed `420bcff` replay and all transitive headers match that snapshot. Their valid allocator/ownership domains remain explicit, including the [allocator erratum](../source/squirrel-wave004/allocator-domain-erratum.md).

NFA013 independently repeated 958 construction/range cases, 65,540 case queries, ABI checks and returning semantic/read-order controls. Five exact candidates are excluded. Its complete batch retained a failed obsolete source-count assertion, while its producer and 19 component tests passed. The separate committed `439de91` replay passed the repaired manifest guard and all NFA tests with identical source pins. The [coordinator receipt](../evidence/verification/nfa013-coordinator-ee51523.json) distinguishes these results. Seventeen untested instruction addresses remain explicit. Retired private stack pointers have a measured lifetime qualification; process-relative Windows memory digests and COFF timestamps can differ. Defined observations and ARM/Android artifacts are compared separately, without binary patching.

Class009 passed the isolated `d6a6567` replay with 108 cases on three executions, 56 guard tests and 339 public compilations. Its 48 compiler-generated null-cleanup instructions are statically excluded, not claimed executed. The component requires compatible full reference objects and successful bounded reallocation; short-prefix prototype cleanup is outside its domain.

The committed provisional VM957 snapshot passed 957 original/source returns, 76 tests and 318 compilations under `653a552`. Its ARM ELF and Windows executable match the frozen snapshot. Whole Execute remains incomplete and the [portable reference-layout work](squirrel-reference-prefix.md) remains unresolved. Closure010 is source-visible but not in the functional companion while the published legacy wrapper has the same canonical definition.

DFA013 passed the complete committed `2e4afbe` replay with 63 tests and 360 compilations. Its 916 qualified fixtures retain two unsupported partial-pointer representation cases and 33 untested instruction addresses. Literal013 passed `cb58bf4` with 62 tests and 381 compilations, including 699 fixtures and all 259 original instruction addresses; its exact 16-byte constructor remains excluded. Prototype011 passed `d70fa16` with 57 tests and 375 compilations, using actual small declared prefixes, exact opaque callback signatures and aligned native tails. These bounded proofs do not establish a complete portable VM graph.

These checks grant zero matching-source credit. Public source CI compiles the candidates; they remain outside the matching module's admitted source selection. Other drafts remain proposals until review and source-link verification. Cold tails, literal pools and unclassified text remain fully in the initialized-text denominator.

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

The text tables reproduce all 96 measured entries from pinned public Unicode17.0 data and measured selection rules. An independent public archive regenerates the exact header with no original game inputs. This establishes no historical Unicode version or additional data credit. The text replay checks every single u16 input for both helpers, 1,310 further string/capacity fixtures, all 172 original instruction addresses, and nine returning controls. Its committed-source build passes 66 tests and 457 compilations.

The string table adds two reviewed entries: a 20-byte release prefix falling into the already-owned 144-byte Remove body, and a 44-byte destructor. The composed view therefore contains 26,625 entries; the 7,051,280-byte denominator stays unchanged. String progress counts the 716-byte physical union once, rather than the 860-byte sum of overlapping logical bodies. Its registered-target precondition leaves eight missing-registration error bytes unexecuted and that escaped dependency unqualified.

Native closure creation qualifies the complete 396-byte API with actual objects, explicit measured VM field bindings and successful allocations. Its six domain-unreachable instruction addresses remain separate from the 93 executed addresses; callable invocation and the complete VM layout remain unqualified. Rule-file processing qualifies 492 bytes with all 123 original addresses, repeated arena epochs and persistent IO state, while canonical Windows scratch graphs remain outside the full caller-owned proof. These committed replays pass 59 and 70 tests with 485 and 488 compilations respectively.

Actual script-closure lifetime now uses the frozen017 provider with real compact prototypes, native closures, strings and weak references. Its 72 comparison sets visit all 64 original instruction addresses; the independent committed replay passes 64 tests and 503 compilations. The two existing canonical entries add 256 bounded functional bytes once. The legacy010 verifier retains its narrower layout domain; source-only name changes preserve all four verification binaries byte-for-byte.

`config/source-names.json` generates `include/bytematch_names.h` through `toolscripts/generate_source_names.py`. Run it with `--check` to reject a stale header. These metadata aliases follow [ByteMatch source linking](https://bytematch.dev/docs/source-linking), exposing the actual017 C definitions without adding wrappers or changing game logic. The functional gate requires a pinned alias header, a unique actual definition and no competing canonical C definition.

The allocator prerequisite adds 536 bounded functional bytes in two functions. Its clean replay passes 617 fixtures, 68 tests and 519 compilations. Fourteen original instructions remain unexecuted and unproved. The mutex claim covers independently supplied current-thread recursive fast paths only. Nonzero-margin unsigned-underflow cases compare metadata and return values; their overlapping or logically out-of-range allocations are never consumed and establish no allocation safety. The prefix-based array integration separately passes 120 sets and 58 tests, with zero duplicate physical-function credit.
