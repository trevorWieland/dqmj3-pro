# Android operating-system validation

The native scene component has now executed in an isolated Android 16 / API 36 virtual device. This tests Android loading, JNI, activity lifecycle and secondary-display behavior beyond the earlier flat CPU model. It is not a physical handheld or game-completion result.

The shipping ARM64 library runs through the image's observed `libndk_translation.so` bridge. A separately labeled x86_64 diagnostic library runs directly. Both routes use the same ordinary C component and measured owner resources. The immutable ARM64 library comes from the reviewed wave006 build.

Actual OS testing found a presentation bug in the original activity. Its native RGBA frames were correct, but the default RGB565 SurfaceView quantized displayed colors. Changing the emulated LCD to 32 bits did not fix that surface format. The minimal `platform/engine-wave007` successor requests RGBA8888 before either primary or Presentation surface is created. The original activity remains frozen.

The installed successor passes 81 primary screenshot samples and 81 secondary PixelCopy samples on each execution route without an instrumentation format override. Both complete 320×240 JNI frames retain SHA-256 `e9519cf31a3c0e80eac432239931e916290c199354208df88b22ddc69e4c9188`. Those full logical-frame comparisons and the sampled OS presentation comparisons are separate checks. The baseline RGB565 results and diagnostic override are preserved.

The probe exercises real HOME pause with a stable clock, resume and Presentation recreation, secondary-display removal, rejected asynchronous cache import, and cold cache reload. Original archives, screenshots, native frame bytes, instrumentation packages, logs, keys and AVD disks stay private.

This official x86 image exposes 16,384-byte libc/Java pages while `/proc/self/smaps` reports 4 KiB kernel pages. The result qualifies Android userspace page emulation and 16 KiB ELF/ZIP loading. A physical 16 KiB kernel, ARM hardware and AYN Thor remain unverified.

All SDK views, AVD/user state and temporary files stay inside the repository's ignored directories. The hidden emulator uses ports 5580/5581 and a separate ADB server on 5046. It does not use or stop the user's default server on 5037. The packet records cleanup of its owned processes and ports. Reproduction commands and hashes are in the wave007 directory and ready receipt. No additional source bytes are credited.
