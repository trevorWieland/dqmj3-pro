# SDK owner registration

The public source preserves five bounded function candidates: register at
`0x4955f0`, unregister at `0x49599c`, lookup at `0x495d00`, constructor at
`0x495e28` and destructor at `0x495f88`. Their canonical bodies contain 2,128
instruction bytes. Publication grants no additional working-C or matching credit.
The immutable source packet has SHA-256
`67e3b3f4af2305c0ff5ef21f5397923630001325df26977556e87114da9e1c53`.

The five production C files and header are in `src/native/wave062-registration`.
The two C files in `toolscripts/fixtures/sdk062_registration_v1` are qualification
fixtures. All 15 inherited production, fixture and support files retain their
frozen bytes. Four public driver files select inputs and enforce transport guards.
The source map lists 19 own inputs and 30 inherited public helpers.

The registry prefix occupies 20 bytes on the original target and 40 bytes with
native pointers. Each record occupies 8 or 16 bytes and holds a key word and a
borrowed `SdkOwner062ab *`. Registration searches automatic slots from 15 down to
1, preserves explicit-slot unsigned masking and OR behavior, and publishes an
optional selected byte before unlocking. Owners are neither retained nor destroyed.
The constructor allocates 32 records. Growth, padding, stable removal and cleanup
follow the measured original behavior.

Actual callers use this prefix at `Info + 148`. This does not establish the full
Info layout. The separate owner maps with 52-byte and 56-byte nodes, complete
owner lifecycle, and SDK/global startup remain unqualified.

The driver selects unchanged public heap sources and fixtures. Only
`heap_sdk062ac.c` defines the SDK environment; the old context allocation unit is
excluded. Inherited context units bind allocation explicitly to this heap. Mutex
construction is fixture provisioning. Valid context, thread identity, platform
services, heap identity and terminal initialization failure remain prerequisites.

The tested domain requires initialized valid storage, live nonnull borrowers,
a stable default context, successful nonwrapping allocations and uncontended
recursive locks. Callback mutation, reentrancy, concurrent operations, arbitrary
vtables, malformed vectors and use after destruction are excluded. The lookup-lock
byte is an explicit input; its startup writer has not been recovered.

All register, unregister and lookup instruction positions were encountered.
The constructor has 24 unvisited positions and the destructor has three. Coverage
and static invariant records retain these addresses and hashes for review.
Encountered positions do not establish all predicate outcomes or universal
function equivalence.

Qualification compares original ARM, authored ARM, native Windows DLL execution
and a high-address AArch64 CPU model. Common diagnostic callbacks delegate to
original mutex bodies in reference execution and authored SDK bodies in source
execution. Source execution cannot construct or read the original image. Checks
cover complete initialized arenas, independent ownership models and ordered
callbacks. Windows raw addresses and hashes remain recorded per process;
cross-process comparison uses explicit validated ownership roles.

From a provisioned checkout:

```
python -I -B toolscripts/sdk062_registration_v1/driver/launch.py --root . --inputs . --manifest evidence/lanes/sdk-registration062-public-input/source-map-v1.json --out work/new-registration-proof
```

Add `--source-only` to prohibit original construction and reads. Each output must
be new and exclusive. The supervisor checks persistent rejection journals after
the child exits, including caught late violations. The manifest freezes authored
inputs, public helpers and compiler/runtime identities. Original game inputs
remain private. No physical Android execution, complete game or overall source
coverage percentage follows from these component tests.

Run the complete full/source-only/minimal-copy qualification with:

```
python -B toolscripts/public_sdk_registration062_replay.py --output work/new-complete-registration-proof
```

This command also checks the returning wrong-source controls and all 11 persistent
input-boundary regressions. It verifies a lossless archive before removing the
three large raw reports. `report-archive.json` records every exact member hash;
`native-artifacts.json` records the complete object and linked-artifact roster.
The committed independent replay plan is `config/replays/sdk-registration062.json`.
