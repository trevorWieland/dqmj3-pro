# Public source compilation

`Compile public native sources` compiles every active recovered/candidate C file in native waves 001–008 without an original game image. It checks compilation and object architecture. It does not link a game, execute game code, compare original bytes, prove behavior, or grant recovered-source credit. Private-original verification remains a separate owner-controlled job.

The job follows [pokebw2's source-only compile workflow](https://github.com/fuddlesworth/pokebw2/blob/2bff75ab167ce9654b36d09cd1eae14f6bdf05d6/.github/workflows/compile.yml) in separating public compilation from original-input matching. The inspected file has Git blob ID `b22c73235d68eddf980cbbef33e4b984089c9b19`.

## Run locally

Use a Windows x64 host and standard Python 3.11 or newer. No Python packages, owner-specific runtime profile, original inputs, Ghidra, Nintendo SDK, emulator or global compiler configuration are needed. Python's isolated mode and disabled site initialization also work:

```powershell
python -I -S toolscripts/bootstrap_public_compiler.py
python -I -S -m unittest discover -s tests -p test_compile_sources.py -v
python -I -S toolscripts/compile_sources.py
```

The scripts locate the repository from their own paths and accept arbitrary working directories when invoked by absolute script path. `bootstrap_public_compiler.py --verify` checks existing tools without downloading anything. `compile_sources.py --target windows-x64` selects one target; repeat `--target` to select several. Outputs stay under `work/source-compile-ci/`; `--output` can select another directory inside `work/`.

## Public compiler and targets

The bootstrap reads only the NDK r30 compiler package and its four existing member pins from `platform/app-shell/tool-inputs.json`. It extracts `clang.exe`, `ld.lld.exe`, `libwinpthread-1.dll` and `libxml2.dll`. It neither installs nor configures the remaining app-shell tools. Existing changed binaries are preserved and cause failure.

Cold setup downloads the [official Windows NDK r30 archive](https://dl.google.com/android/repository/android-ndk-r30-windows.zip), verifies its 727,980,788-byte size and frozen official SHA1, then verifies SHA256 and length for every extracted member. All member data is checked before any member is installed. The archive stays private to the disposable work cache; only the four required files enter the ignored `tools/clang-21/` directory. When those four files already match, their SHA256 pins are verified without reading or downloading the full archive; the manifest says whether archive verification occurred in that run. The effective compiler is Android Clang 21.0.0 r574158c. This identifies the public compiler used here; historical compiler identity remains separate.

The same job also materializes the pinned ARM Compiler 4.1 build 1454 archive from the decomp.me compilers release, using the same `armcc_bootstrap.py` as the trusted report job: it verifies the 73,315,488-byte archive SHA-256 before extracting, then verifies the extracted executable and the full header tree against `tools.lock.json`. A mismatch fails the job; there is no fallback compiler. The archive is restored from a cache keyed on its SHA-256, so only a cache miss downloads it. `toolscripts/compile_measured_units.py` then compiles every configured native unit through the build's own profile stage, which is what makes the checked-in compile check exercise the compiler the measurement uses. `--compiler-profile clang-21` remains the route that needs no proprietary tool.

One Windows hosted runner can cross-compile all three targets with these same frozen executable pins:

| Target | Compiler configuration | Checked object |
| --- | --- | --- |
| ARM32 MPCore | `--target=arm-none-eabi -mcpu=mpcore -marm -mfloat-abi=soft` | ELF32, little endian, machine 40, relocatable |
| Windows x64 | `--target=x86_64-pc-windows-msvc` | AMD64 COFF, machine 0x8664 |
| Android ARM64 API 29 | `--target=aarch64-linux-android29 -fPIC` | ELF64, little endian, machine 183, relocatable |

All builds use freestanding C11, `-O2`, function/data sections and `-Wall -Wextra -Werror`. Current sources use explicit project-local headers and require no target C library or sysroot. API 29 specifies the compilation target; relocatable objects do not validate Android runtime API availability or packaging. LLD is hash-pinned and its version recorded, but this compile-only job does not link.

## Explicit source and warning policy

`config/build-units.json` is the authoritative source census. The current configuration lists 413 translation units and 1169 target compilations, including explicitly limited fixture targets. It records every quoted header dependency and every selected native wave and Squirrel component root. Missing, duplicated, unlisted or conflicting C entries fail validation. A changed transitive header list, external header, system header or macro-based include requires an explicit build-tool update.

`src/native/wave003/setters.c` is the historical void-return setter packet. It stays excluded from the active source list and active linking; `src/native/wave003/abi-qualified/setters.c` provides the current interface. This classification does not grant acceptance to every candidate in any active file.

Strict initial compilation failed only on four unused `x` parameters in `wave001/leaves.c`: `fn_006f25cc`, `fn_0028b3a0`, `fn_001648cc` and `fn_001649dc`. Their observed incoming ABI slot is retained in the frozen source. Only that unit receives `-Wno-error=unused-parameter`; Python then checks every emitted warning against the exact listed function/parameter declaration. A new warning, duplicate warning, wrong source location or stale exception list fails the job. Other files receive no warning exception. Frozen C was not changed.

## Fork safety and artifacts

The workflow runs on `pull_request`, pushes to `main` and manual dispatch using a public Windows 2025 runner. It uses read-only `contents` permission, no secrets, no private inputs, no stored checkout credentials, no caches and no privileged PR trigger. First-time fork contributions may still need a maintainer's normal GitHub Actions approval. See [GitHub's fork workflow rules](https://docs.github.com/en/actions/reference/workflows-and-actions/events-that-trigger-workflows#workflows-in-forked-repositories).

Checkout 7.0.1, setup-python 7.1.0 and upload-artifact 7.0.2 are pinned by immutable 40-digit commit IDs verified through their official GitHub repositories on 2026-11-06. Python 3.12 is selected through setup-python; no project Python runtime profile is loaded.

Only `diagnostics/*.txt` and `manifests/*.json` directly under the source-compile work directory are uploaded, including failure diagnostics when available. Objects, download archives, original payloads, hybrid images, source archives, executable outputs and arbitrary work directories are excluded. Manifests contain source/header hashes, target flags, compiler pins/versions, warning dispositions, object hashes/architecture and process outcomes. They contain no original instruction bytes. Objects remain local disposable build products.

The local evidence lane records the initial warning failures, successful target compilation and source-only clean-room replay. Remote GitHub execution is a separate result and must be observed after the coordinator publishes the actual repository.

The explicit `zlib-solo` header profile adds `-DZ_SOLO` and accepts only four byte-identical upstream zlib headers from the separately locked 1.2.7 and 1.4 releases. The checked header graph contains only each release's `zlib.h` and `zconf.h`; other paths and changed bytes receive no exception. This permits wrapper compilation without a target C library. Codec linking and runtime behavior remain separate component qualifications.
