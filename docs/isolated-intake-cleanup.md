# Optional cleanup after a code-only fresh intake

Existing immutable replay plans keep their current behavior. A reviewed native-code component plan may opt in with:

```json
"intakeCleanup": {
  "mode": "code-exheader-only",
  "producerInputs": ["code", "exheader"]
}
```

Each producer step must also declare a nonempty `inputKinds` list containing only `code` and/or `exheader`. Missing declarations, duplicate kinds and asset/container/RomFS/CIA/save kinds are rejected before materialization. This is a reviewed plan contract; it is not static analysis of arbitrary producer code. Asset/container plans and the separate native-batch runner must retain the original inputs they need.

After the successful fresh-original-intake step, the runner independently verifies both final generated code/ExHeader pairs against the frozen inventories, including sizes. It rehashes the copied CIA identities, checks that fresh intake JSON agrees with the pinned input and code hashes, and validates every removal path beneath the specific owned clean-replay child. Linked paths and owner-primary hardlinks are rejected. Unexpected assets, auxiliary modules or additional content staging are also rejected before removal. No original owner input is removed.

The small `intake-cleanup.json` receipt is written before deletion. It records final output identities, the copied inputs, generated staging files and retained fresh inventory JSON. The runner then removes only its copied CIA files and `work/component-intake/private/generated`, retaining final `generated/` code/headers, inventory JSON and command logs. Partial failures preserve the cleanup receipt; the outer runner checkpoint identifies the intake-cleanup stage. Frozen replay plans and `ci_native_build` are unchanged.

For the measured project inputs this removes about 1.607 GB of CIA copies per opted-in replay, plus small duplicate generated staging. The inventory code streams RomFS hashing and does not create a whole RomFS extraction tree. Tools remain independently copied and verified; this policy does not share or link tool binaries.
