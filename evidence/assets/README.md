# Asset and original-script survey — 2026-11-06

The fresh survey reads the owner's base and update CIAs through the parent inventory's content offsets, without full RomFS extraction. `base.json` and `update.json` pin the consumed inventory reports and CIA identities; `summary.json` pins the survey producer. The complete CIA hash is checked before surveying and its size/mtime must remain stable during the survey. Every `.nut` file and saved sample is additionally read and SHA-256 checked against the parent inventory. Game code and scripts were not executed. Original content is confined to ignored `generated/asset-samples/`.

Reproduction from repository root:

```powershell
& .\tools\python\Scripts\python.exe .\toolscripts\asset_survey.py
```

## Measured results

| Category | Base content 0 | Update content 0 |
|---|---:|---:|
| RomFS files surveyed | 13,560 | 125 |
| Original `.nut` files | 752 | 12 |
| Original `.nut` bytes | 11,501,220 | 1,071,770 |
| Clean decodable text files | 751 | 12 |
| Text candidate with embedded control bytes | 1 | 0 |
| Bounded SARC member tables accepted | 1,172 | 9 |
| Bounded XBB1 member tables accepted | 1,284 | 4 |
| XBB1 layouts left unqualified | 8 | 0 |
| Top-level CRO/CRR/CRS/ELF candidates | 0 | 0 |
| DVLB shader candidates | 4 | 0 |

The secondary base/update NCCH contents each have one RomFS file and yielded no script, archive or module candidates.

An update-first path overlay gives 753 original script paths and 11,572,304 bytes: 11 changed existing paths and one added path. This is a derived path view, not executed proof of runtime loader precedence or script reachability. It contains 752 clean text files and the one controlled-text candidate. Original embedded source is not newly reconstructed C/C++ or newly reconstructed script source.

The exceptional file is `/data/Test/ReproductionBattle.nut`, 32,373 bytes, SHA-256 `8f8c97567eb9c48a375cb87266ff481552a07af37410fd77318901228871c190`. It has no NULs, decodes with CP932, and has four occurrences each of bytes `01` and `16`. Its header is ASCII assignment syntax. The survey retains it as `text-candidate-with-controls`; it neither labels it bytecode nor claims that it compiles or runs.

SARC and XBB are detected by bytes rather than filename suffix. For example, `.pef` effect files contribute XBB containers. Archive member signatures include FBXD, BCH, COLL, SPBD, VERP, FLAN, FLYT and encounter-table ENCT/MGRT/SMOT. These signatures identify concrete downstream format work, not complete semantic specifications. The current survey validates bounded table and member extents, not archive name hashes, all metadata semantics, nested decompression, or a byte-exact repacker.

The eight unqualified base XBB layouts are `LodSize.bin` under `/data/Field/Lod/{A00_00,E00_00,G00_00,H00_00,I00_00,V00_00,W00_00,Z00_00}/`. A focused probe of A00_00 found a first extent starting at zero and sizes exceeding the local file, suggesting an external-offset/index variant. This is an inference, not a corruption finding. Its layout needs correlation with the paired LOD resources and original loader. The initial strict parser also rejected zero-name-offset tables in EventFlagTbl/SoundTbl; accepting the measured unnamed-table variant resolves those cases. First-pass receipts remain in ignored `work/assets/`.

The module search covers every top-level RomFS filename and each file's first 256 bytes for CRO0/CRR0/CRS0/ELF markers. It does not recursively scan every payload, compressed member, or loader-defined program region. Zero candidates does not establish executable inventory completeness. Four DVLB `.shbin` files are separately recorded because GPU shader code is an executable category distinct from ARM native code; embedded BCH shaders and other unknown executable formats remain unqualified.

## Concrete next capabilities

1. **Original-script dependency map.** Build a metadata-only include/import/native-binding index from original `.nut` text, retaining byte hashes and encoding. Confirm the actual VM dialect and source loader before applying Squirrel-specific tooling. Enumerate every script-to-native binding as a separate reconstruction interface. Original game script text stays private.
2. **SARC/XBB round-trip tools.** Preserve header fields, ordering, offsets, padding, aliases and unknown values. Start with a single icon SARC and an ordinary named XBB, then qualify unnamed tables and LOD indices separately. A repacked-original comparison earns packaging proof only.
3. **Small parameter-family schema.** Choose a bounded `.tp` or `.tb` family and compare a clean record decoder with original native getters under explicit fixtures. Preserve base/update origins for every effective table. This can feed the first native reconstruction packet without importing unverified game semantics.
4. **Asset visualization later.** BFLIM icons/textures, FBXD placements, BCH models, FLYT/FLAN UI and COLL collision are independent capabilities useful to a future Joker 1 vertical slice. Do not assume documented third-party decoders preserve all unknown data.
5. **Executable closure work.** Review the four DVLB programs, nested container signatures, compressed `.gz` files and native loaders before declaring any executable denominator final.

Prior Monster Fieldnotes NCCH hashes differ from these new base/update NCCH identities. Its parser code and native fixtures are useful research leads, but raw addresses, scripts, tables and behavior claims require fresh binding to this build.

## Validation and limits

The survey completed against actual base and update inputs. It saved 6,569,008 bytes of selected samples, below the enforced 20 MiB ceiling. Samples are selected once per extension/signature pair, so the set includes multiple representative parameter headers. Original game bytes do not appear in these evidence files.

`validation.json` preserves the initial seven passing private diagnostics from `work/assets/validate_assets.py`. Their supported successor is `tests/test_asset_survey.py`: seven unittest cases read the actual SARC, XBB and controlled-text fixtures directly from the owner CIA after inventory, verify each fixture's size and SHA-256, and test positive parses plus malformed header/extent rejection. No sample originals are tracked. Run `& .\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_asset_survey.py -v` from repository root, or invoke the test file by absolute path from another directory using the project Python. These checks establish bounded parser behavior only. They do not prove script semantics, game behavior, a source-only executable, a complete engine, or any new decompiled-source bytes.
