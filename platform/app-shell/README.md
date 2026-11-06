# Two-view native diagnostic shell

This is a diagnostic application foundation. It does not run DQMJ3 Pro or add reconstructed-source credit. Its shared C state tracks frame ticks, input and surface readiness; it is not the recovered game engine. Both platforms call the existing `fn_003453a8` implementation from the unchanged wave 001 C source for a native-code smoke result of 1000.

## Materialize public dependencies

Use an available public Python 3.13 runtime, or the existing project-local Python. From the repository root:

```powershell
python platform/app-shell/materialize_tools.py --dry-run
python platform/app-shell/materialize_tools.py
python platform/app-shell/materialize_tools.py --verify
```

The materializer downloads only missing packages from the frozen official URLs in `tool-inputs.json`. It supports Android SDK platform 36 revision 2, Build Tools 36.0.0, Eclipse Temurin JDK 25.0.5+8 and the minimal public Clang/LLD files from Android NDK r30. It requires 4 GiB free when materialization is necessary, retains archives beneath the owned work directory, verifies archive checksums and each extracted file's SHA-256, and rejects changed existing tools without overwriting them. All targets stay within this repository. No PATH, Java registration, account, vendor key or proprietary compiler setup is used.

The small `third-party-native-includes.zip` contains unchanged public AOSP JNI and LLVM builtin headers plus their original NDK notices. Its contents and installed files are pinned. It is a tooling resource, not a game asset or executable blob. The repository's broad ZIP ignore rule requires the coordinator to include this particular public-header bundle explicitly when committing the app foundation. Other SDK/JDK binaries remain under ignored `tools/` and are reproducibly downloadable.

The materializer itself uses only Python's standard library. The application build inspector uses the project's existing Python environment with pinned pyelftools 0.33; it does not assume a system Python already contains project packages.

## Build and check

```powershell
tools/python/Scripts/python.exe toolscripts/app_shell_build.py
tools/python/Scripts/python.exe tests/test_app_shell.py
```

The build emits `work/app-shell-wave001/build/windows/dqm_diagnostic_shell.exe`, a testable native core DLL, and `work/app-shell-wave001/build/android-package/dqm-diagnostic-shell-debug.apk`. `--output` selects another directory beneath the same work root. These commands can also be invoked with absolute paths from another working directory.

The Windows executable's `--self-test` path runs 13 native checks and exits without creating a window or loading controller support. The automated suite loads the native core DLL directly for additional layout, inverse touch, lifecycle, surface-generation and controller-state checks. The interactive Win32/GDI window is compiled but has not been opened by automated validation. When launched manually, it presents both logical views and supports mouse input, keyboard controls and optional XInput. Keys Z/Space, X, A/S, Q/E, Enter/Escape and arrows correspond to the displayed button bits.

`game-input.json` pins the immutable `evidence/cohorts/bundle001/acceptance.json` and the admitted smoke function's canonical identity, source hash and original-span hash. The build requires that exact function to appear in an accepted cohort. Mutable lane reports and their absolute runtime paths are not application inputs. An isolated minimal-root replay with deliberately different, irrelevant wave 001 receipt metadata verifies that distinction without changing the retained game C.

Android compilation uses Java framework APIs and a JNI library built from the same C state/layout code. The APK targets API 36, supports ARM64 from API 29, stores its native library uncompressed, and verifies both 16 KiB ELF load alignment and 16 KiB ZIP data alignment. `zipalign` runs before `apksigner`, followed by independent signature/alignment checks. This ordering follows the [official zipalign](https://developer.android.com/tools/zipalign) and [apksigner](https://developer.android.com/tools/apksigner) guidance.

The build creates a local development signing key only when absent, at `work/app-shell-wave001/signing/diagnostic-debug.p12`. The existing `/work/` ignore rule excludes it. It is not a release/account key and is not copied into deliverables. A fresh machine creates a new development certificate unless the same private development input is explicitly restored; APK signature hashes can therefore differ across machines. Current same-project rebuilds reuse the same key.

## State, views and input

One C state and one primary callback own ticking. Drawing or touching the secondary view never creates another simulation. C rejects a tick request from a secondary owner. Android schedules only the primary activity's `Choreographer` callback while resumed and while its primary surface is ready. Windows uses its UI timer as the sole tick owner. This is a diagnostic frame counter, not a recovered game timing model.

The single-window fallback fits a 400×240 top logical view and a 320×240 bottom logical view into separate areas with preserved aspect ratio. Rendering and touch use the same C rectangles. Inverse mapping rejects letterbox bars and right/bottom boundary coordinates, then maps accepted points into the selected logical view. The diagnostic records one primary touch pointer; multi-touch gameplay and gesture semantics remain future integration work.

Android enumerates eligible presentation displays dynamically and excludes the current primary display. It never assumes a fixed physical display ID. An optional `Presentation` draws the bottom view using a display-specific context; otherwise both logical views remain on the primary surface. The presentation does not take controller focus. This uses the platform's [DisplayManager](https://developer.android.com/reference/android/hardware/display/DisplayManager), [Presentation](https://developer.android.com/reference/android/app/Presentation) and [Choreographer](https://developer.android.com/reference/android/view/Choreographer) APIs.

Surface callbacks bind generation tokens. A stale destruction callback cannot clear a replacement surface, and secondary surface loss preserves primary ticking and restores the two-view fallback. Pause clears held inputs and stops ticking. Resume, configuration changes and surface recreation recompute viewports from actual dimensions. A diagnostic tick value is retained through saved-instance state and private preferences. Android controller key events and joystick axes use explicit mappings and device-reported dead zones; native state clamps axes and rejects input while paused.

## Proven and remaining

Native Windows headless/core checks, Java/DEX compilation, native ARM64 compilation, JNI symbol presence, APK packaging, development signing and alignment verification have direct evidence. The source and tool pins, invocation logs and artifact hashes are retained in `evidence/lanes/app-shell-wave001/` and the selected work root.

Android device execution, actual presentation routing, controller behavior, rotation, lifecycle transitions and surface loss have not been exercised on hardware. AYN Thor display IDs, firmware behavior and input routing remain unvalidated. Windows GUI paint/input paths likewise still need an interactive run. These compiled paths and the tested shared core establish an application foundation; they do not satisfy the full-game source-build goal.
