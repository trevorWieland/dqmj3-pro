# Building the game from your own image

You need your own decrypted update CIA of DQMJ3 Professional and a Windows x64 host. Nothing is downloaded from this repository except public tooling, and nothing derived from the original is committed.

## One-time setup

`tools.lock.json` pins Python 3.13.5 for the project environment. Install the pinned tools from their public sources:

```powershell
python setup_tools.py                             # project venv, wheels, objdiff, ctrtool
python toolscripts/bootstrap_public_compiler.py   # pinned Clang 21 and ld.lld from the public NDK r30
python toolscripts/armcc_bootstrap.py             # pinned original compiler (proprietary; not committed)
```

`setup_tools.py` verifies every download against `tools.lock.json`; each compiler bootstrap verifies every extracted member against the same lock and refuses anything else. All are idempotent and offline-safe once the files exist. The armcc step is optional: `build.py` never touches armcc under `--compiler-profile clang-21`, and `--no-download` makes a missing compiler an error instead of a fetch.

## Build

```powershell
tools/python/Scripts/python.exe -I build.py --image "C:\path\to\DQMJ3P_Update.cia"
```

The build:

1. checks the CIA's SHA-256 against `project.json` and stops with a clear message if it is not the measured update image;
2. extracts `generated/update-content0/code.bin` and `exheader.bin`, checking the ExeFS hashes the image carries about itself;
3. reads `config/symbols.txt` and carves each original function out of the code image;
4. compiles `src/native` with the compiler profile each unit names, defaulting to the best-evidenced original compiler (ARM Compiler 4.1 build 1454); `--compiler-profile clang-21` forces the former Clang profile;
5. links the complete image at the original addresses, taking compiled bytes wherever source implements a function and original bytes everywhere else;
6. reports per function whether the compiled bytes equal the original, and whether the whole linked image is byte-identical.

It writes `build/update-content0/report.json` (the progress report), `link.json`, `image.elf`, `image.ld` and `retained.txt` (the work queue). Everything under `build/` and `generated/` is gitignored and contains original bytes; never publish it. The report records the compiler identity (profile id, executable SHA-256, declared identity and version banner) next to the measurement.

## Reading the result

```
compiled:  559 functions from source (9,036 bytes), 514 byte-identical
retained:  26,014 functions, 7,042,244 text bytes, 1,313,276 data and bss bytes
image:     differs from the original in 45 functions
complete:  NO, 8,355,520 bytes are still retained from the original
```

`complete: YES` requires zero retained bytes and a byte-identical linked image. Nothing weaker counts. `--strict` turns an incomplete result into a non-zero exit status, which is what CI would use to gate a release.

## CI

`.github/workflows/build.yml` runs the same commands: it materializes the pinned tools (including armcc from its pinned public archive), checks out the owner's private input parts, and runs `build.py --private-inputs work/private-inputs`. It then verifies the report against the ExHeader, the linked image, the split and the recorded compiler identity with `toolscripts/check_report.py`, and uploads `build/update-content0/report.json` as the `update-content0_report` artifact for ByteMatch. There is no separate CI measurement path. The public `compile.yml` and `pr-gate.yml` jobs do not fetch or run armcc.
