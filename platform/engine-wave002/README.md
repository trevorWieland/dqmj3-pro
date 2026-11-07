# Portable resource and engine services

This source batch implements a bounded asynchronous scene-resource service, a native job stack, fixed-step simulation ownership, input/view routing and validated checkpoint persistence. It is an engine-component workload. Its authored scene is not DQMJ3 gameplay, and this batch grants no additional reconstructed-source credit.

The job stack actually calls the unchanged accepted fn_00157ff4 and fn_00173d40 C implementations from src/native/wave005/stack.c. recovered-inputs.json pins their immutable acceptance rows, source and header. The two functions retain their typed pointer/scalar contracts on host64; they are not instruction emulators or copied ARM bodies. Their previous acceptance remains distinct from this new portable service implementation.

## Build and run

With the existing pinned compiler, SDK, JDK and Python tools installed:

```powershell
tools/python/Scripts/python.exe toolscripts/platform_engine_wave002.py
tools/python/Scripts/python.exe -m unittest discover -s tests -p test_platform_engine_wave002.py -v
```

The Windows application is work/platform-engine-wave002/build/windows/dqm_portable_engine.exe. Normal launch opens a two-view application; arrows move the authored scene marker, and the lower view accepts mouse input. The automated --headless invocation runs real CreateThread/ReadFile resource loading, native scene validation and simulation, then writes and restores a flushed, atomically replaced checkpoint. --headless --negative-asset verifies rejection of a deliberately corrupted file through the same worker and native parser. The GUI paint/input path is compiled but is not claimed as executed by the headless checks.

The Android package is work/platform-engine-wave002/build/android/package/dqm-portable-engine-components.apk. It contains the same native resource/core/recovered-stack sources, Java AssetManager loading through an ExecutorService, JNI owner-thread completion and an authored resource. It targets API36, supports ARM64 from API29, has 16KiB-aligned ELF load segments and an uncompressed native library aligned to 16KiB inside the APK. zipalign runs before development signing, followed by independent signature/ZIP and native-symbol checks. The development key remains under ignored work/ and is not a release key.

## Contracts

Resource names are bounded relative paths. Absolute paths, empty/dot/parent segments, backslashes, drive names and unsupported characters are rejected. At most eight requests may be queued. Claims use the admitted typed VM stack operations. Completion occurs only on the owner thread; Windows synchronizes a private worker result with WaitForSingleObject, while Android posts Java byte arrays back to the UI thread. Native state is not a multi-threaded public API.

Every request receives a monotonically increasing positive handle, including after activity/core reset. Pause cancels queued/inflight requests and clears the job stack; stale or duplicate completions cannot replace current resources. Ready scene state survives pause. Scene files have an explicit tag, dimensions, bounded coordinates/speed and checksum. Checkpoints have a separate versioned, checksummed little-endian format and restore only ticks and coordinates, clearing transient input and partial timing.

Only the primary frame owner advances simulation. Elapsed time is bounded to eight fixed updates, pause and primary surface loss clear partial time, and stale surface generations cannot destroy replacements. Two logical views share one state. Android selects a valid presentation display dynamically and uses its display-specific Presentation context; removal restores the one-display fallback. Touch uses the same fitted rectangles as rendering and rejects letterbox bars/boundaries. Pause clears buttons, axes and active touch. Android axes use device-reported dead zones; secondary presentation never owns a simulation tick.

## Current platform evidence

The Windows headless application and directly loaded native DLL are executed, including resource corruption, queue overflow, path traversal, canceled/duplicate completion, activity reset, pause/resume, surface replacement/loss, extreme frame gaps/axes, touch bounds and every single-byte checkpoint corruption. The ARM64 library, Java/DEX, APK packaging/signing, recovered symbols and 16KiB alignments are built and inspected.

The available adb37.0.1 probe found no attached devices. Its isolated server uses port5042 and project-local Android home paths and is stopped after inspection. Android device execution, controller mappings on hardware, actual dual-display routing, AYN Thor firmware behavior and real game execution remain unproved. Hardware/API documentation is planning evidence and does not replace device tests.

## Official platform references checked on 2026-11-06

- [AYN Thor specifications](https://www.ayntec.com/products/ayn-thor): the vendor lists two AMOLED touch displays, Android13 and Snapdragon865/8Gen2 model choices. Physical display IDs and application behavior are not specified there.
- [Android Presentation](https://developer.android.com/reference/android/app/Presentation) and [DisplayManager](https://developer.android.com/reference/android/hardware/display/DisplayManager): display discovery, display-specific presentation context and removal handling guide the two-view adapter.
- [Activity lifecycle](https://developer.android.com/guide/components/activities/activity-lifecycle): pause/resume and instance restoration guide transient input/timing and checkpoint handling.
- [Controller input](https://developer.android.com/games/sdk/game-controller/controller-input) and [Android ABIs](https://developer.android.com/ndk/guides/abis): controller events and native ARM64 ABI contracts remain separate from emulating ARM32 game code.
- [16KiB page sizes](https://developer.android.com/guide/practices/page-sizes), [zipalign](https://developer.android.com/tools/zipalign) and [apksigner](https://developer.android.com/tools/apksigner): both library loading and APK alignment/signing are checked. This source does not assume a runtime 4KiB memory page.

## Measured game layout path

Run toolscripts/platform_engine_asset_wave002.py after the component build. It verifies the owner base CIA hash, its actual NCCH/RomFS mapping, the pinned /data/Layout/NaviMap/A00_00.arc file hash, the complete SARC table/member bounds, and member-zero's measured FLYT hash. Only private copies under work/platform-engine-wave002/private/ are materialized. The standard Windows build directory and public APK remain free of original game assets.

The native loader consumes the actual 6,552-byte FLYT7.2.1 layout through the same resource job/worker/completion path. It reads all 64 section extents and 35 pane geometry prefixes, checks the pane hierarchy, finite numeric bounds, centered origins and planar transforms, and composes inherited position/scale/Z rotation/visibility. Unsupported origins, nonplanar transforms, bad counts/extents, nonfinite coordinates and malformed nesting are rejected. Unknown section payloads are bounded but are not claimed as semantically decoded. Textures, text contents, material behavior, parts expansion and animation payloads are not rendered.

An independent Python evaluator uses double-precision trigonometry and matrix arithmetic to compare every one of the 280 native corner scalars. The measured maximum difference is below 0.001 pixel. A malformed original file-size header is rejected without replacing the valid geometry. Public evidence records identities, counts, maximum error and a geometry hash; it contains no original pane names, coordinates, strings, layout bytes or images.

The private Windows application runs the real file worker and GDI pane-wireframe drawing into a 320x240 DIB; CPU inspection after GdiFlush confirms rendered pixels. Launch work/platform-engine-wave002/private/windows/dqm_portable_engine.exe --measured-layout to open the private layout viewer. No interactive GUI launch is claimed by the automated result. [Microsoft's DIB guidance](https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createdibsection) supplies the drawing/CPU synchronization contract.

The Android package contains the same parser and Canvas wireframe path but no original asset. An owner can supply the measured-layout.bflyt file under that debug app's private files directory; the adapter then uses FileInputStream for that exact input instead of AssetManager's authored fixture. For an authorized debug device, use adb push to /data/local/tmp/, then adb shell run-as org.dqm.engine cp the file into files/measured-layout.bflyt, and launch org.dqm.engine/.EngineActivity. Device installation, file transfer and execution have not been performed because no device is attached.

The layout interpretation follows the [3DSkit BFLYT format research](https://github.com/Tyulis/3DSkit/blob/master/doc/BFLYT.md), qualified against the measured resource rather than assumed to describe every version or game. This is a genuine native rendering step driven by an original map UI asset. It is a wireframe subset, not the original UI renderer or game execution. The next milestone is texture/material decoding and real UI resource dependencies, then binding reconstructed engine/game-script services to those resources.
