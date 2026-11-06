# Original and reconstructed objdiff objects

`toolscripts/objdiff_objects.py` produces real ARM32 ELF object pairs from the measured update image and immutable acceptance ledger. It never uses a reconstructed object as its own original reference, copies original bytes into a source-built base, patches compiler output or grants credit to unaccepted candidate functions.

```powershell
python toolscripts/objdiff_objects.py --census evidence/lanes/native-inventory-completion/seeded/update-census.json
```

The default output is ignored `build/update-content0/objects/`. Original-bearing reference objects, reference assembly, reports used during generation and diagnostics remain private. Compilation and hybrid-link verification use ignored `work/objdiff-object-compile/`. Public CI artifacts must select only the final sanitized report files approved by the reporting workflow; never upload these directories.

## Genuine source selection

The existing trusted build verifies source/header hashes and compiler identities, compiles the accepted C files with their frozen profiles, checks every admitted complete function section against the original and genuinely links all 356 functions at their original addresses in the full hybrid module. This yields 4,164 admitted instruction bytes. A separate LLD relocatable link keeps only the admitted function sections in each objdiff base object and discards all other code, data and unwind sections. This is ordinary section selection rather than instruction, relocation or object patching. The tool verifies the resulting symbol set, sizes and bytes against the acceptance ledger.

The ten per-file target objects are assembled from the corresponding original instruction spans. A remainder target object contains every other initialized text byte exactly once, as executable sections, plus the complete declared rodata/data and BSS ranges. Page alignment padding outside declared initialized segment lengths is excluded. Its base is a genuinely compiled empty translation unit with zero executable/data/BSS bytes. No original byte enters a base object.

Every target section is checked against the original image. The current update has 7,051,280 declared initialized text bytes, 1,102,288 initialized rodata/data bytes and 210,988 BSS bytes. Original section address ownership and exact section names accompany the object hashes in `object-map.json`.

## Function discovery and byte accounting

The remainder target names only actual function entries present in the supplied hash-bound census. Its symbol size is the contiguous entry-owned range reported by that census, bounded by accepted source ownership. Discontiguous cold/shared regions remain present as unnamed executable bytes. The tool does not stitch unrelated ranges into fake functions or invent labels for gaps. Entries inside already accepted source spans are skipped with an explicit diagnostic. Census records remain analysis discoveries, not a proof of every true function or historical source-file boundary.

Stock objdiff 3.8.3 counts code symbols rather than all executable section bytes. A stock report can therefore omit unnamed code, literal pools and unresolved executable bytes from `total_code`, despite their presence in the target objects. This tool records that discrepancy and grants no production readiness. A separately reviewed denominator projection must use actual target executable sections to retain every declared initialized text byte, preserve exactly 356 matching functions and 4,164 matching bytes, and clearly qualify function totals as discovered entries. No unresolved gap becomes a synthetic function.

All unit completion flags remain false. A C file can contain both admitted and candidate routines; selecting its admitted sections does not make the full source file complete. Source grouping follows the ten actual C paths. Unreconstructed entries use the existing `src/native` directory as the fallback source location; their C definitions are absent until reconstructed. There is no fabricated placeholder source file.

## Sidecar contract and checks

`object-map.json` binds the measured module, inventory, supplied census, source hashes/profiles, object hashes and build commands. Each unit provides `target_path`, `base_path`, `target_sha256`, `base_sha256`, `source_path`, `original_ranges` with exact `section`/`address`/`size`/`kind`, `expected_matched_code`, `expected_matched_functions`, and admitted/discovered symbol lists. The nested target/base fields are equivalent references. It is build evidence and a normalizer input, not an independently accepted inventory.

The stock CLI report is generated locally after object construction. Generation fails if its matched code or function totals differ from the acceptance ledger. The complete target executable section sum must equal declared initialized text and source executable bytes must equal accepted bytes. rodata/data/BSS stay unmatched.

Run `python -m unittest discover -s tests -p test_objdiff_objects.py -v`. Synthetic genuine-Clang/LLD tests check that candidate functions are excluded, original code/data/BSS remain unchanged, invalid source extents and duplicate ownership fail, discontiguous bodies are not invented as contiguous functions, and stock objdiff recognizes the actual admitted source match.
