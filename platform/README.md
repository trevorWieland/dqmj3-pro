# Native platform builds

This directory starts the Windows and Android source-port track. Its executable is a recovered-function test runner, not a playable game. It compiles the native lane's actual `fn_*` C definitions without copying game executable bytes into the application. The Windows process returns results from those C functions and compares them with a pinned corpus captured by executing the original ARM code. Android artifacts are crosscompiled and inspected; they have not run on a device.

The project-wide source ledger remains owned by the coordinator. Portability tests add no second copy of native source credit. Exact ARM matches, nonmatching behavioral candidates, Windows execution and Android compilation remain different results.

## Build and verify

From any working directory, use the project-local Python runtime:

```powershell
& C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\tools\python\Scripts\python.exe C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\toolscripts\platform_build.py
& C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\tools\python\Scripts\python.exe C:\Users\trevo\Documents\RecProgramming\DQM\dqmj3pro-decomp\tests\test_platform_build.py
```

`native-inputs.json` freezes the native C, original-code image and native-output corpus. Hash mismatches fail before compilation. Adding a packet requires a deliberate manifest change and matching corpus, rather than silently following a mutable source tree. The current dispatcher handles explicitly typed one- or two-argument `u32`/`s32` scalar interfaces. Pointer-heavy functions need a separate bounded-memory fixture protocol before admission. Integer widths are checked in C; raw signed arguments and results use the two's-complement representations of the named Windows/Android targets.

Artifacts and complete compiler/linker commands are placed in `work/platform-wave001/build/`. The default report is also published under `evidence/lanes/platform-wave001/report.json`. `--output` can select another directory beneath the same work root for independent rebuilds. Tests use their own output root.

The runner's stdin consists of little-endian records of three unsigned 32-bit words: function index, raw x and raw y. stdout contains one unsigned 32-bit result per record. The ordered function-name table is retained in the report and generated dispatcher. Unknown function IDs and incomplete records fail with exit code 2. This intentionally small protocol is for controlled fixtures, not a game-content API.

## Windows

The Windows x64 console executable is built from `runner.c`, generated typed dispatch wrappers and the native packet's C source. Project-local Clang compiles COFF objects; LLD links them against a kernel32 import library generated from `kernel32.def`. The runner uses explicit Win32 pipe I/O and process-exit APIs, so a missing global Visual Studio/CRT installation cannot accidentally supply undeclared build inputs. LLD supports Windows linking and import libraries, including its `-flavor link` driver. [Official LLD documentation](https://lld.llvm.org/windows_support.html).

The runner is genuinely executed on this Windows host. The build compares every returned result with the frozen original ARM corpus, verifies input guards, and compiles/runs a wrong `500`-to-`501` multiply implementation as a semantic negative control. This is bounded source-port evidence for the listed functions, not complete game behavior or proof over all inputs.

## Android

The same recovered scalar C definitions and dispatcher build as an ARM64 Bionic PIE executable plus a shared library. The target is `aarch64-linux-android29`, which establishes API 29 as the minimum native API for these artifacts. It is distinct from an application's eventual compile/target SDK. The Android NDK documents direct Clang targeting for custom build systems. [Official NDK guide](https://developer.android.com/ndk/guides/other_build_systems).

Only the required API-29 startup objects and Bionic link stubs were copied read-only from the existing local NDK r30 installation. Their original paths, exact bytes and revision are retained in `tools/android-r30-minimal/provenance.json`; builds consume project-local copies. The compiler/linker and required DLLs are also project-local. No global PATH or J2 file was modified.

Every Android ELF must be AArch64, little endian and have load-segment alignment of at least 16 KiB; the PIE must use `/system/bin/linker64`. The build supplies `-z,max-page-size=16384` and validates actual ELF headers. Current Android guidance also requires correct APK/AAB library packaging, compatible dependencies and runtime testing on 16 KiB systems. A correctly aligned standalone ELF does not establish those later obligations. [Android page-size guidance](https://developer.android.com/guide/practices/page-sizes).

These outputs are not APKs. No activity, manifest, installer, signing flow, graphics surface or Java/JNI lifecycle is claimed. The command-line executable can eventually be run within an explicitly isolated device test directory, and the shared library can be integrated with a real application shell after its API is defined. Android device execution must remain false until actual output is captured.

Google platform-tools **37.0.1** was selected from the stable channel of Google's repository manifest. The archive's declared SHA-1 and measured SHA-256 were retained, along with extracted-file hashes. Only adb and its required DLLs/metadata were installed locally. A read-only `adb devices -l` query found no connected devices on 2026-11-06. No device installation, configuration change or application launch occurred. [Google SDK repository manifest](https://dl.google.com/android/repository/repository2-1.xml).

## AYN Thor and display architecture

The current manufacturer's page describes a 6-inch full-HD AMOLED primary touchscreen, a 3.92-inch bottom touchscreen and Android 13. It lists Snapdragon 865 for Lite and Snapdragon 8 Gen 2 for the other listed models. Exact firmware, display IDs, orientation, refresh rates and input routing must be measured on the user's device rather than inferred from a model label. [AYN product page, checked 2026-11-06](https://www.ayntec.com/products/ayn-thor).

The eventual application should keep a single simulation state with two logical rendering targets. Each target has a viewport, scale/letterbox transform, input transform and lifecycle state. Presentation surfaces must never run independent copies of game logic. Maintain a single-window layout showing both logical screens as the fallback for ordinary phones and disconnected/unsupported secondary displays.

For real physical displays, enumerate using `DisplayManager`; register display-change listeners; choose an eligible presentation display by capability and user selection. Do not hardcode display ID 1 or persist an ID across boots as identity. `Presentation` provides a display-specific context/window for a secondary view. Its availability does not guarantee the Thor firmware exposes both panels in that category; discover this on-device. [DisplayManager](https://developer.android.com/reference/android/hardware/display/DisplayManager), [Presentation](https://developer.android.com/reference/android/app/Presentation).

An alternative is a dedicated second activity launched with `ActivityOptions.setLaunchDisplayId`, subject to display permission/launch eligibility and activity configuration. This introduces two activity lifecycles and must still share one engine state. Moving/disconnecting displays can change configuration, density and window size, or recreate an activity. Use the window's current context and metrics, preserve state, and rebuild surface-dependent resources. [Connected-display guidance](https://developer.android.com/develop/adaptive-apps/guides/support-connected-displays), [ActivityOptions](https://developer.android.com/reference/android/app/ActivityOptions).

Map touch positions from each physical surface into its logical screen through the inverse viewport transform, rejecting letterbox bars. Keep controller focus and touch routing explicit per surface. Android controller buttons are key events; sticks/triggers are motion events. Calibrate dead zones and prevent duplicate input when more than one surface or activity has focus. [Android controller input](https://developer.android.com/games/sdk/game-controller/controller-input).

The device corpus must test close/reopen, primary and secondary surface loss, rotation, suspend/resume, activity recreation, focus changes, hotplug, audio pause/resume and save restoration after process death. Persist durable progress independently of graphics objects. Android lifecycle documentation describes the callback/state-loss obligations; those tests cannot be replaced by ELF compilation. [Activity lifecycle](https://developer.android.com/guide/components/activities/activity-lifecycle).

## Graphics/application tooling choice

SDL3 is a reasonable cross-platform window/input/audio candidate once engine-facing interfaces are recovered. The official release list currently identifies **3.4.20**, released 2026-11-03. Pin that release or another measured release when adopting it. Its current Android instructions require SDK 36 or later and NDK r28c or later and use a Java activity/JNI integration. [SDL releases](https://github.com/libsdl-org/SDL/releases/tag/release-3.4.20), [SDL Android instructions](https://wiki.libsdl.org/SDL3/README-android).

SDL's Windows multi-window support is useful for desktop dual-screen layouts. Android physical dual-display support needs a separately qualified native/Java surface adapter; do not assume creating two SDL windows provides the correct firmware behavior. Window dimensions and pixel drawable sizes must be queried dynamically. [SDL window documentation](https://wiki.libsdl.org/SDL3/SDL_CreateWindow).

The next implementation milestone is a real application shell rendering two diagnostic surfaces, routing input and surviving lifecycle changes, with a packaged Android build and native Windows counterpart. Only then should recovered rendering/resource interfaces replace diagnostics. Full-game ports still require all engine services, assets/scripts, rendering, audio, input, save and gameplay integration plus the coordinator's independent source-coverage gates.
