# Bounded Squirrel source components

The measured update now has ordinary typed C components for array lifecycle, the native array builtin, native-call frames and generic callable dispatch. These are reconstruction candidates with bounded behavior evidence. They receive no exact matching-source bytes, and do not constitute a complete interpreter or game.

| Component | Recovered behavior | Explicit boundary |
| --- | --- | --- |
| `source/squirrel-wave002` | Array allocation, vector resizing, reference ownership and chain publication | Deterministic successful realloc service; factory allocation failure is tested separately |
| `source/squirrel-wave003` | The registered native `array` builtin, default/fill arguments and result publication | Supported numeric lengths and allocator contract; assertion terminals are separate from normal returns |
| `source/squirrel-wave004` | Native closure checks, frame growth, stack ownership, native returns and errors | Error/allocation services and nonreentrant callbacks are explicit; inactive frame words are not universally equivalent |
| `source/squirrel-wave005` | Generic closure/native/class dispatch and constructor cleanup | Execute and class construction remain modeled providers in this frozen packet |

The source dependency graphs execute compiled C rather than retained original helper instructions. Reference execution uses the immutable private update. Actual returns, ABI preservation, heap effects, reference counts and normally returning wrong-source controls are recorded in each lane's report. Windows fixture executables run natively; Android ARM64 objects are build evidence without device execution. The later interpreter work has its own scope and does not retroactively broaden these packets.

The vector allocator must provide aligned, nonoverlapping storage, preserve the admitted old allocation and succeed for resize cases. Fill objects must remain valid across moves and release callbacks must be nonreentrant. The frozen wave004 allocator-domain erratum narrows earlier wording without changing its predecessor receipts. Unsupported failure paths and numeric inputs do not earn behavior or source credit.

Native frames contain inactive words originating in dead stack storage. The reports distinguish each model's complete heap check from semantic equivalence across implementations. They do not claim raw whole-memory equality or permit arbitrary observers of those inactive words. Generic calls preserve the raw 32-bit raise-error argument; it is not coerced to a host Boolean.

The coordinator reran all 50 component tests without skips. Public source-only CI now covers 37 explicit units: 33 portable units on ARM32, Windows x64 and Android ARM64, plus four Windows-only fixture runners. This produces 103 reviewed unit/target compilations. Quoted dependencies are explicit, new source files cannot be silently omitted, and unknown target lists or private source scopes fail. This compilation job receives no original inputs or credentials and does not prove linking or game execution.

With the pinned public compiler installed, run `python -I -S toolscripts/compile_sources.py`. The component producers and their platform helpers provide the separate linking and execution recipes. Their frozen reports and copied-input replays live under `evidence/lanes/squirrel-source-wave002` through `wave005`. Those copied-input replays preceded a committed source snapshot; an independent replay from the published commit remains a separate coordinator gate.

The exact matching ledger remains `recovery.json`. Original shipped scripts, imported upstream reference code, modeled services, fixtures and this component publication add no reconstructed matching-source credit.
