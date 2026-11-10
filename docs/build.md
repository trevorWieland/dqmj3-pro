# Building the game from your own image

You need your own decrypted update CIA of DQMJ3 Professional and a Windows x64 host. Nothing is downloaded from this repository except public tooling, and nothing derived from the original is committed.

## One-time setup

`tools.lock.json` pins Python 3.13.5 for the project environment. Install the pinned tools from their public sources:

```powershell
python setup_tools.py                             # project venv, wheels, objdiff, ctrtool
python toolscripts/bootstrap_public_compiler.py   # pinned Clang 21 and ld.lld from the public NDK r30
```

`setup_tools.py` verifies every download against `tools.lock.json`; the compiler bootstrap verifies every extracted member against the same lock and refuses anything else. Both are idempotent and offline-safe once the files exist.

## Build

```powershell
tools/python/Scripts/python.exe -I build.py --image "C:\path\to\DQMJ3P_Update.cia"
```

The build:

1. checks the CIA's SHA-256 against `project.json` and stops with a clear message if it is not the measured update image;
2. extracts `generated/update-content0/code.bin` and `exheader.bin`, checking the ExeFS hashes the image carries about itself;
3. reads `config/symbols.txt` and carves each original function out of the code image;
4. compiles `src/native` with the pinned profile;
5. links the complete image at the original addresses, taking compiled bytes wherever source implements a function and original bytes everywhere else;
6. reports per function whether the compiled bytes equal the original, and whether the whole linked image is byte-identical.

It writes `build/update-content0/report.json` (the progress report), `link.json`, `image.elf`, `image.ld` and `retained.txt` (the work queue). Everything under `build/` and `generated/` is gitignored and contains original bytes; never publish it.

## Reading the result

```
compiled:  497 functions from source (7,280 bytes), 415 byte-identical
retained:  26,076 functions, 7,044,000 text bytes, 1,313,276 data and bss bytes
image:     differs from the original in 82 functions
complete:  NO, 8,357,276 bytes are still retained from the original
```

`complete: YES` requires zero retained bytes and a byte-identical linked image. Nothing weaker counts. `--strict` turns an incomplete result into a non-zero exit status, which is what CI would use to gate a release.

## CI

`.github/workflows/build.yml` runs the same two commands: it materializes the pinned tools, checks out the owner's private input parts, and runs `build.py --private-inputs work/private-inputs`. It then verifies the report against the ExHeader, the linked image and the split with `toolscripts/check_report.py`, and uploads `build/update-content0/report.json` as the `update-content0_report` artifact for ByteMatch. There is no separate CI measurement path.
