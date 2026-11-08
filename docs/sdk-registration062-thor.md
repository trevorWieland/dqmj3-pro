# Registration execution on AYN Thor

The unchanged public SDK registration, heap and context C runs as an ARM64 Android
executable on the connected AYN Thor. Four profiles cover lookup-lock values
0, 128, 255 and 1, with both captured and fallback allocation disposal.

The device executed 3,088 calls. The independent host model checked every byte
of each 512 KiB initialized arena at 1,972 observation points, together with
8,756 ordered mutex callbacks. All 1,972 ownership/state projections also match
the qualified native Windows baseline. Raw pointer-bearing arena hashes differ
between processes and are retained; only explicit ownership roles are compared
across processes. More than 1.08 GB was streamed and checked rather than saved
as raw arena dumps.

The build uses one SDK environment definition and excludes the old allocation
translation unit. The typed diagnostic bridge invokes the compiled functions
directly. It transfers inputs and actual arena bytes through an ADB-forwarded
abstract local socket; it does not emulate instructions or modify game code.
A strict reserved-arena adapter acknowledges the already allocated memory tail
requested by the unchanged model fixture. It provides no CPU execution methods.

The ELF is ARM64 PIE, depends only on Android libc, and has load segments aligned
to at least 16 KiB. This Thor actually runs a 4 KiB kernel. A 16 KiB kernel run,
OS contention, complete context startup, owning game-class ABI and full games
remain unqualified. Thread identity is an explicit fixture input. Constructor
and destructor support execution does not grant their pending source credit.

Reproduce from the repository root with project-local tools:

```
tools/python/Scripts/python.exe -B toolscripts/registration062_android/build.py --output work/new-registration-android-build
tools/python/Scripts/python.exe -B toolscripts/registration062_android/run.py --build work/new-registration-android-build --output work/new-registration-thor-proof
```

Add `--smoke` for one profile. Outputs must be new and exclusive. The runner pins
its code, public model helpers, interpreter and build inputs, rejects original
input construction/reads and historical helper imports, and records actual device
properties. Every owned test process and ADB forward closes after its case.
The original heap Android fixture remains unchanged.

An initial adapter attempt tried a legacy model import path. Its access guard
rejected that read before any device case; the corrected adapter preloads the
exact public dependencies. The failed attempt is retained separately.
