# Filesystem callable ownership

The reviewed namespace/device layer follows the particle compositor's 26,673-entry snapshot. Three separately reached ARM entries bring the discovery count to 26,676. This remains an incomplete historical census; the full initialized-text denominator stays 7,051,280 bytes.

The namespace constructor at `0x44da8c` owns 20 instruction bytes. The alias at `0x123114` owns 204 instruction bytes and excludes eight literal bytes. The stream attachment entry at `0x44df60` owns 64 instruction bytes and excludes twelve literal bytes. The old `0x117378` owner retains its first 108 bytes and a restored-frame tail to the alias, rather than owning the alias's body. No exact or working-C source had been admitted for that former combined owner.

The net instruction-ownership increase is 84 bytes: 20 were already classified as instructions and 64 were unclassified in the frozen listing. The 204 alias bytes are reassigned, not added twice. Literal data receives no instruction ownership. The frozen listing classifications are preserved separately from callable ownership, and byte accounting retains zero overlap.

The coordinator independently replayed the holes, bytes and null-argument caller profiles on ARM11MPCORE. Original code, registry and stack observations match the frozen packet. All 185 effective Python source identities match per profile. The constructor's actual incoming transfer is a Thumb register BLX; the alias has two actual restored-frame incoming tails. Static decoding independently checks all instruction extents, calls, returns, literal readers, prior ownership and whole-text classification accounting.

The stream failure path's four positions and the retained caller's eighteen non-null positions remain unvisited. Discovery does not qualify those behaviors or complete owning-class/kernel/game semantics. The public reference scripts and metadata are under `toolscripts/filesystem071072_inventory` and `evidence/lanes/native-file071072-inventory/public-inputs-v1`; original observations and fixtures remain external/private. Their reference reproduction needs the declared logical work layout. The public metadata checker validates only the proposal's metadata.

`config/native-namespace-overlays.json` pins the coordinator review, validator, original-backed proposal and dynamic witnesses. Inventory admission changes neither exact matched bytes nor the working-C registry; functional source admission requires its own committed-source review.
