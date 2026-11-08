# Filesystem teardown inventory repair

The original seeded census attributed both the 48-byte application shutdown wrapper at `0x10555c` and the separate 80-byte filesystem shutdown routine at `0x10c4f4` to one entry. The wrapper restores its saved registers and caller frame before branching to the latter address. The repair retains the wrapper and gives the callee its own entry; their combined 128 instruction bytes stay unchanged.

Two SDK routines were absent from the discovered function list: the 80-byte device-pool release at `0x44dfac` and the 124-byte device destructor at `0x44e000`. The original virtual table at `0x852560` points to them in slots 12 and 13. The coordinator checks those exact table words, decoded entry and return instructions, direct and tail calls, all known owned ARM incoming branches, and every original PC-relative literal reader. The 28 literal-pool bytes associated with these routines and the wrapper remain excluded from instruction coverage.

Four actual-original observations from the independently materialized `e5e8853` coupled replay visit all 71 instruction positions in the three proposed entries. Running the reference producer against the ordinary workspace and against that checkout yields byte-identical proposals. The full committed replay also verifies selected-source imports, terminal journals, returning wrong-source controls, all compilation profiles, report generation and its mandatory proof packets.

The repair adds three discovered entries, bringing the composed count from 26,660 to 26,663. It classifies 204 additional bytes as instructions belonging to functions. Every initialized text byte was already in the gross progress denominator; that denominator remains 7,051,280 bytes. This is an inventory repair with zero source or exact-match credit. It does not prove the historical function inventory complete or establish full-game execution.

With the pinned tools and private original inputs available, first reproduce `config/replays/coupled070.json` with `toolscripts/isolated_component_replay.py`. Copy the producer unchanged into `work/teardown-inventory-reference-v1/propose.py` within the resulting checkout for the coordinator's identity check. Then run it against that checkout's original observations:

```powershell
work/clean-replay/coupled070-e5e8853/tools/python/Scripts/python.exe -B work/clean-replay/coupled070-e5e8853/work/teardown-inventory-reference-v1/propose.py --root work/clean-replay/coupled070-e5e8853 --observations work/clean-replay/coupled070-e5e8853/work/coupled070-public-replay-v1 --output work/clean-replay/coupled070-e5e8853/work/teardown-inventory-reference-output-v1
```

Use a fresh output directory. `toolscripts/review_teardown_inventory.py` is the coordinator review producer; it checks the complete committed replay and reference identities before writing the approval registry. `tests/test_native_teardown_inventory.py` rejects changed extents, code promoted from pools, overlapping or preexisting entries, wrong instruction state, missing execution positions, changed literal readers, wrong tail/virtual calls, incomplete observations and progress credit.
