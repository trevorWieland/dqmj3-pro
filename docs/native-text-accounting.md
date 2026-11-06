# Static native text accounting

The progress denominator is the complete initialized executable text region of each measured main ARM image. This finite loader-defined region is independent of function discovery. It includes instructions, literal pools, alignment and any bytes whose semantic role remains unclassified. Every such byte stays in the denominator; only coordinator-accepted exact source spans count as matched.

This is deliberately a conservative share of initialized text bytes. It is not an instruction-only percentage or a claim about every executable that might ever be loaded by the game. Separate read-only/data segments, BSS, executable-page padding outside the initialized extent, DSP firmware and PICA shader code are excluded. Existing loader and recursive-container evidence defines the main-image scope independently.

`toolscripts/native_text_accounting.py` freshly verifies both complete code and ExHeader hashes and independently decodes their addresses, initialized sizes, mapped pages and file offsets. It then emits a disjoint, gap-free source/unmatched partition. Every source span is bound to its historical accepted cohort, exact C source hash and original byte hash; duplicate, overlapping or changed spans fail the check. Unknown bytes never become zero totals, omitted code or invented functions.

| Scope | Initialized text bytes | Accepted source bytes | Unmatched text bytes |
| --- | ---: | ---: | ---: |
| Base content 0 | 7,042,136 | 0 | 7,042,136 |
| Update content 0 | 7,051,280 | 4,164 | 7,047,116 |

The generated contracts are `evidence/lanes/native-inventory-completion/static-text/base.json` and `update.json`. Their `staticExecutableByteAccountingComplete` field means exactly that the declared main-image initialized text has been fully and uniquely accounted for. Each contract also validates the independently reviewed [finite executable scope](executable-scope.md) and pins its `scope.json`, whose corpus audit was freshly repeated from both verified CIA inputs. `historicalFunctionBoundariesComplete` and `wholeGameInventoryComplete` are different claims and remain false.

The report exporter may compare original function objects with genuine compiled source objects using stock objdiff. Objdiff's own function-symbol sizes omit unnamed text regions, so those counters alone cannot establish this denominator. An audited reporting adapter must bind the exported report to this exact static partition, preserve genuine source-matched bytes, account for every remaining byte as unmatched and keep unit and aggregate totals consistent. It must not invent function symbols for padding or unknown regions. Function totals describe the recorded discovered entry set, whose completeness and alias/fragment interpretation remain explicit.

The separate `toolscripts/native_inventory_seeded.py` discovers each build's startup constructor table from that build's own code. It checks the Thumb reader's PC-relative table-bound loads, signed slot-relative dispatch loop and target alignment, then merges those entries with that build's existing seed set. The base table is at `[0x8842a4, 0x8857b4)`; the update table is at `[0x8864fc, 0x887a0c)`. Both have 1,348 entries. No update addresses are transplanted into the base. The resulting frozen manifests have 1,414 base seeds and 1,826 update seeds.

`toolscripts/ghidra/NativeInventoryDetail.java` retains the qualified fresh-import/context preparation and exports instruction, defined-data and unclassified address ranges, in addition to function bodies and their individual discontiguous ranges. These observations form another exact disjoint byte partition. Instruction discovery and function ownership are different: an instruction outside a recognized function still occupies a real static text byte. Literal pools or alignment inside a compiler's function extent are not additional functions. Accepted source functions retain their proven exact extents, even where an entry-to-next-entry convention would otherwise enlarge them.

Both constructor-seeded analyses completed without an analyzer or process timeout: 439 analyzer seconds for base and 438 for update. All 1,414 base seeds and 1,826 update seeds remain present with their expected modes. The resulting observed partitions are:

| Build | Discovered entries | Defined instruction bytes | Defined-data bytes | Unclassified bytes |
| --- | ---: | ---: | ---: | ---: |
| Base | 26,535 | 6,253,982 | 382,883 | 405,271 |
| Update | 26,573 | 6,253,782 | 382,573 | 414,925 |

Each row's final three columns sum exactly to its initialized text denominator. All 356 accepted update functions retain their proven complete ranges, modes and original/source hashes. Candidate function bodies still include 1,961 discontiguous base bodies and 1,951 update bodies, which remain explicitly represented without filling their holes or inventing additional function symbols.

The first seeded-run validator expected the wrong literal phrase `ANALYSIS SUCCESSFUL`. Actual Ghidra logs say `REPORT: Analysis succeeded for file:`. The initial guard-failure receipts remain preserved as `seeded/*-initial-qualification.json`; the exact original launch producer is retained as a text snapshot. `toolscripts/native_inventory_qualification.py` separately requalifies the unchanged completed analyses against frozen logs, code/ExHeader hashes, complete seed preparation, exporter/tool identities, explicit analysis/post-analysis success and matching export counters. Its negative controls reject actual timeouts, missing phases, wrong seed counts and the invented success marker. The canonical `seeded/*-run.json` receipts bind that validator and preserve the correction. This does not upgrade the genuinely timed-out earlier base attempt.

`seeded/tool-provenance.json` retains effective Capstone module/native version 5.0.7 alongside distribution metadata 5.0.9, with their actual file hashes. The package/runtime discrepancy is preserved rather than silently renamed.

Reproduce the finite byte accounting and its synthetic negative controls:

```powershell
& .\tools\python\Scripts\python.exe toolscripts/native_text_accounting.py
& .\tools\python\Scripts\python.exe -m unittest discover -s tests -p test_native_text_accounting.py -v
```

Run the independently seeded analyses, with isolated project/settings/home/cache directories and larger bounded budgets:

```powershell
& .\tools\python\Scripts\python.exe toolscripts/native_inventory_seeded.py
& .\tools\python\Scripts\python.exe toolscripts/native_text_accounting.py --require-seeded
```

The default analyzer budget is 1,200 seconds per build and the process budget is 1,500 seconds. Both analyses use two CPU cores and separate projects. Original inputs, raw databases and logs remain private. Published outputs contain metadata, addresses, sizes and hashes, with no original executable payload. The original 480-second base timeout remains preserved as a failed attempt and is not upgraded by a later run.
