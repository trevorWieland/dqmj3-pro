# Explicit RGBA presentation

This Java/manifest successor requests `PixelFormat.RGBA_8888` in the shared MapSurface constructor, before callbacks or attachment create either primary or Presentation surfaces. The frozen006 native C, material/resource services, recovered math and complete native library are reused unchanged. Version metadata is seven. No original-source bytes or game completion are credited.

Actual Android OS testing exposed the need for this change: unchanged006 JNI logical frames matched the source reference, but its default RGB565 surfaces quantized colors. AOSP deliberately retains that default for compatibility; see [SurfaceView implementation](https://android.googlesource.com/platform/frameworks/base/+/master/core/java/android/view/SurfaceView.java). The first profile also used a16-bit emulated LCD, but changing the LCD to32-bit alone did not fix the SurfaceView buffer format.

The successor passes as installed, with instrumentation format overrides forbidden: all81 primary screenshot RGB samples and all81 secondary Presentation PixelCopy RGB samples match the native logical frame. Both complete320 by240 JNI frames hash to `e9519cf31a3c0e80eac432239931e916290c199354208df88b22ddc69e4c9188`. The OS probe exercises real HOME pause/stable clock, resume/Presentation recreation, secondary removal, rejected asynchronous private-cache import, and cold private-cache reload.

Two execution routes are separate: a clearly labeled x86_64 diagnostic package compiled from frozen006 ordinary C, and the real ARM64 package through the image's observed `libndk_translation.so` bridge. The ARM64 successor APK reuses the byte-identical frozen006 native library. Bridge execution is not native ARM hardware or an AYN Thor test.

The official API36 image reports libc/Java page size16,384 while this x86 kernel's process smaps report4kB pages. These results qualify Android userspace16KiB page emulation and16KiB ELF/ZIP loading; they do not establish physical16KiB-kernel/device behavior. Original GPU execution and a complete native game remain outside this packet.

All emulator, SDK-view, AVD, keys, caches, private assets, screenshots and raw logs stay under `work/android-os-validation`. The emulator uses hidden/no-window processes, console/ADB5580/5581 and a separate ADB server5046. No default5037 server or global SDK/profile is used. Only owned processes are stopped afterward.

Reproduce after the verified official emulator/image tools and frozen006 private owner resource are present:

    tools/python/Scripts/python.exe toolscripts/platform_android_os_runtime.py start
    tools/python/Scripts/python.exe toolscripts/platform_android_os_build.py
    tools/python/Scripts/python.exe toolscripts/platform_android_os_instrument.py
    tools/python/Scripts/python.exe toolscripts/platform_android_os_instrument.py --shipping-arm64
    tools/python/Scripts/python.exe toolscripts/platform_android_os_validate.py baseline-x86
    tools/python/Scripts/python.exe toolscripts/platform_android_os_validate.py baseline-arm64
    tools/python/Scripts/python.exe toolscripts/platform_android_os_successor.py
    tools/python/Scripts/python.exe toolscripts/platform_android_os_build.py --successor007
    tools/python/Scripts/python.exe toolscripts/platform_android_os_validate.py successor-x86
    tools/python/Scripts/python.exe toolscripts/platform_android_os_validate.py successor-arm64
    tools/python/Scripts/python.exe toolscripts/platform_android_os_runtime.py stop
    tools/python/Scripts/python.exe toolscripts/platform_android_os_seal.py

Wait for `platform_android_os_runtime.py status` to report boot completion before installing. The source-only component still renders all19 material records and17 pictures from the measured static owner map. Fonts, parts, animation, gameplay, original camera/draw/GPU paths and physical-device validation remain future work.
