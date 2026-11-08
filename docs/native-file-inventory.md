# File task and queue callable inventory

Nine measured ARM entries extend the discovered native function inventory from 26,649 to 26,658. Their 224 instruction bytes had no previous instruction owner. This changes function discovery only: the gross initialized-text denominator stays 7,051,280 bytes, exact source-linked bytes stay 5,128, and the working-C registry stays at 467 functions. Historical function completeness remains unproved.

| Entry | Instruction bytes | Original entry evidence |
| --- | ---: | --- |
| `0x5f35bc` | 100 | Task method table installed by `0x153cc8`, invoked through the synchronous factory's actual slot 2 |
| `0x5f3324` | 44 | Provider method table installed by the same constructor, invoked through task slot dispatch |
| `0x6ec778` | 8 | Provider data getter in that table, reached by the actual task getter |
| `0x6ec780` | 16 | Provider U64 getter in the constructor-selected table |
| `0x6ec748` | 12 | Direct call from the task dispatch routine |
| `0x6ec754` | 12 | Separate direct call from that routine |
| `0x11b74c` | 16 | Descriptor copy pointer loaded and stored by `0x10c550` |
| `0x11b75c` | 12 | Descriptor invoke pointer installed by that constructor |
| `0x11b768` | 4 | Descriptor disposal pointer installed by that constructor |

The task dispatcher's physical 120-byte envelope contains a 20-byte indexed table. Only its 40-byte entry arm and 60-byte later arm are instructions. The validator decodes the unsigned selector guard, PC-relative indexed load and all five table targets. The table receives no instruction or source credit.

Constructor validation decodes each literal load and matching store, checks the exact object or stack field, and rejects pointer-register changes before publication. Method-table targets, original indirect transfers and the two direct getter calls are checked against the immutable original image. Each complete entry's ranges and hashes must match the frozen witness, remain in initialized text and have exclusive instruction ownership.

`toolscripts/native_file_inventory.py` composes the previous binding inventory without changing any frozen reader. Its registry is `config/native-file-overlays.json`; the witness, derived packet and coordinator review are under `evidence/verification/file-callable-*`. Sixteen regression cases exercise constructor fields, pointer clobbers, call targets, unsigned dispatch, instruction/data separation, missing ranges, duplicate ownership, mode and source-credit rejection.

The initial local production-object regression correctly rejected the object map from before this overlay. That map and the failed check are retained under `work/file-inventory-local-validation/stale-map-attempt001`. The unchanged checks are rerun after rebuilding objects and regenerating the stock objdiff report and functional companion.

The synchronous file-task component and asynchronous original worker investigation retain separate qualification limits. These inventory additions do not qualify a source queue, SDK startup, thread teardown, device rendering or complete native games.
