# Three-entry filesystem inventory proposal

This exclusive original-backed packet proposes three new callable entries against the frozen `native_particle_inventory.compose` snapshot of 26,673. It performs no shared edit, canonical/functional admission or source recovery. The coordinator owns integration. All original executable bytes, reference fixture binaries and raw runtime arenas remain private external inputs or private observations.

| Entry | Instruction bytes | Excluded pool bytes | Original classification |
| --- | ---: | ---: | --- |
| ARM `0x44da8c` | 20 | 0 | 20 defined instruction bytes |
| ARM `0x123114` | 204 | 8 | 204 defined instruction bytes; 8 defined data bytes |
| ARM `0x44df60` | 64 | 12 | 64 instruction and 12 literal bytes originally unclassified |

The historical `0x117378` owner has two ranges totaling 312 instruction bytes. The proposal retains its original 108-byte range `[0x117378,0x1173e4)` and reparents the 204-byte alias range to its own entry. The additional 20-byte constructor and 64-byte stream constructor have no prior owner overlap. The measured proposal therefore adds three discoveries, changes the callable union from 5,942,845 to 5,942,929 bytes, has zero overlap and gains exactly 84 owned instruction bytes. It excludes all 20 literal bytes. The gross initialized-text denominator remains 7,051,280 bytes.

`inventory-proposal-v1.json` records complete static CFGs, original instruction hashes, all five candidate literal readers, the retained caller's separate external literal reader, actual calls/tails, old/new rows and the full original classification/ownership cross table. The seeded instruction/data/unclassified classification is preserved rather than silently rewritten. In particular the proposed stream entry retains `entryInstructionDefined=false` to document its original seeded state despite independent decoding and execution evidence.

The three original ARM11MPCORE reference profiles reuse the frozen namespace071 and filesystem setup routes. The holes and signed-byte profiles cover all five constructor and all 51 alias instruction positions. They also execute twelve of sixteen stream-constructor positions through the genuine original factory caller at `0x13b214`. The original namespace-array caller uses Thumb `BLX r6` at `0x101a2e` to enter the ARM constructor, returning through odd LR `0x101a31`. These per-instruction state observations avoid treating every byte as the canonical owner's entry mode.

The separate null-argument profile calls unchanged original `0x117378` after genuine filesystem bootstrap. Original `0x1173d8` restores r4/lr, `0x1173dc` forms r0, and `0x1173e0` branches directly to the alias with restored SP/LR and r4-r11. The alias receives the original PC-relative arguments and returns its actual observed status unchanged. An additional genuine alias tail occurs at original `0x10c4e4` during filesystem initialization. The higher caller of `0x117378` is not qualified by this fixture invocation.

Four stream failure positions remain unvisited: `0x44df90`, `0x44df94` (SVC23), `0x44df98`, `0x44df9c`. The old caller has nine of 27 positions observed; its eighteen non-null allocation/setup positions remain unvisited. Static CFG closure does not change either limitation. No pool-allocation failure, kernel close behavior, physical filesystem or complete game ABI is invented. The reference environment retains its modeled kernel/IPC contracts and explicit caller fixtures.

All complete captured registry/stack arenas remain under the private `original-*-v1` folders. `dynamic-proof-v1.json` publishes only bounded evidence and private observation identities. `returning-controls-v1.json` rejects nine normally returning metadata variants, including retaining the old alias overlap, counting pools as code, dropping unvisited positions, changing Thumb state and claiming admission/source credit. The initial verifier's incorrect numeric CPU-enum assumption is preserved under `failures`; all actual observations used the named ARM11MPCORE constant, value 6 in the pinned runtime. No observation was altered to repair the verifier.

Reference reproduction in an isolated logical lane with the declared external closure:

```powershell
& .\tools\python\Scripts\python.exe work/filesystem071072-inventory-v1/freeze_fs_inventory.py
& .\tools\python\Scripts\python.exe work/filesystem071072-inventory-v1/replay_fs_inventory.py holes
& .\tools\python\Scripts\python.exe work/filesystem071072-inventory-v1/replay_fs_inventory.py normal-caller
& .\tools\python\Scripts\python.exe work/filesystem071072-inventory-v1/replay_fs_bytes_inventory.py bytes
& .\tools\python\Scripts\python.exe work/filesystem071072-inventory-v1/static_fs_inventory.py
& .\tools\python\Scripts\python.exe work/filesystem071072-inventory-v1/verify_fs_inventory.py
```

Do not overwrite this sealed packet. `proposed/` contains a small public metadata/reference-script placement. Full reference scripts require restoration at their recorded logical work paths and the pinned original/fixture/helper closure. The public metadata-only checker is a direct entry point and needs no original input, CPU package or original provider. It validates this proposal, not the underlying original executions or whole inventory completeness. No production C/H, compiled artifact, original payload or tool/repository tree is added.
