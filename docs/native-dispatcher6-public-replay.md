# Complete graphics dispatcher

Independent replay of committed candidate `97197d7` passed all 112 pipeline tests and twelve producer tests. Coordinator review checked all 261 frozen input pins, the 46,206,071-byte execution envelope against both worker/source copies, all three main artifacts and 24 control artifact pairs. Five malformed scope/source proof cases were rejected. One complete canonical function is admitted to the separate medium-confidence working-C registry; exact matching and overall confirmed coverage remain unchanged. The reviewed replay was compacted into a hash-verified proof archive before its redundant build tree was removed.

This candidate preserves the full 18,296-byte canonical dispatcher at `0x73b7a4`, including its 4,574 instruction PCs. Its ten new production C files and quoted-header dependencies are byte-identical to the frozen worker inputs. Small header snapshots preserve the original relative include topology; qualification fixtures remain separate from production units. Publishing/compiling these files grants no source or exact-match credit.

The public `dispatcher6` replay stages 54 small declared inputs into a fresh `work/native-state055` namespace, refuses an existing private namespace and verifies their membership in the frozen 261-file packet. It stages only the required controller-v5 source/receipt prerequisites. Compiler, original-image and runtime provisioning belong to the existing isolated replay driver; the dispatcher bootstrap copies none of those trees or archives.

The unchanged producers run 3,086 primary cases / 12,344 observations and the same independently rebuilt source-copy corpus, eight normally returning controls / 24 executions per source copy, two final-path cases, eight actual original-wrapper cases and twelve producer tests. Verification compares complete raw runtime rows, three main linked artifacts and 24 control artifacts byte for byte. Build/control envelopes retain their distinct paths.

The original observes 4,569 instruction PCs after the final-path supplement. Five remaining PCs have individually hash-bound selector/dominance invariants; they are never relabeled as executed. These are bounded data/state contracts, including explicit unsupported aliasing/nonfinite-product/FP-status conditions. Resource/controller construction, allocator startup, actual GPU execution, physical-device behavior and a native game are separate claims.

`toolscripts/build_dispatcher6_android.py` builds the twelve production C units as an Android ARM64 shared library for API 29 and later, using the existing pinned Clang/LLD. Two builds produced the same 18,824-byte library, with 16 KiB-aligned load segments, no undefined symbols, external dependencies or text relocations. The build pins all 23 source/header inputs, including the three existing controller headers reached by quoted includes; those must be byte-identical to the frozen header snapshots. The initial missing-include-directory compilation failure remains retained. This is a source-only component build; it has not executed on Android and supplies no native-game or physical 16 KiB-kernel claim.

```text
tools/python/Scripts/python.exe toolscripts/build_dispatcher6_android.py --output work/dispatcher6-android-fresh
```

The output directory must be new and remain under `work/`.
